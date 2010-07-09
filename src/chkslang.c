/*
 This file is part of MOST.

 most 5.0.0b and beyond are also:
 Copyright (c) 2010 Kaity G. B. <uberChick@uberChicGeekChick.com>
 Released under the terms of the RPL 1.5 or above.

 most up to and including versions 5.0.0a are:
 Copyright (c) 1991, 1999, 2002, 2005, 2006, 2007 John E. Davis <ftp://space.mit.edu/pub/davis/most/>
 Relesed under the terms of the GPL 2 or above.

Unless explicitly acquired and licensed from Licensor under another
license, the contents of this file are subject to the Reciprocal Public
License ("RPL") Version 1.5, or subsequent versions as allowed by the RPL,
and You may not copy or use this file in either source code or executable
form, except in compliance with the terms and conditions of the RPL.

All software distributed under the RPL is provided strictly on an "AS
IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, AND
LICENSOR HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT
LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE, QUIET ENJOYMENT, OR NON-INFRINGEMENT. See the RPL for specific
language governing rights and limitations under the RPL.
*/


/* It is too bad that this cannot be done at the preprocessor level.
 * Unfortunately, C is not completely portable yet.  Basically the #error
 * directive is the problem.
 */
#include "config.h"

#include <stdio.h>
#ifdef VMS
# include <ssdef.h>
#endif
#include <slang.h>
#include "slang-macros.h"

static char *make_version (unsigned int v)
{
   static char v_string[16];
   unsigned int a, b, c;

   a = v/10000;
   b = (v - a * 10000) / 100;
   c = v - (a * 10000) - (b * 100);
   sprintf (v_string, "%u.%u.%u", a, b, c);
   return v_string;
}

int main (int argc, char **argv)
{
   unsigned int min_version, sl_version;
   unsigned int sug_version;
   int ret;

   if ((argc < 3) || (argc > 4))
     {
	fprintf (stderr, "Usage: %s <PGM> <SLANG-VERSION> <SUGG VERSION>\n", argv[0]);
	return 1;
     }
#ifndef SLANG_VERSION
   sl_version = 0;
#else
   sl_version = SLANG_VERSION;
#endif

   sscanf (argv[2], "%u", &min_version);
   if (argc == 4) sscanf (argv[3], "%u", &sug_version);
   else sug_version = sl_version;

   ret = 0;
   if (sl_version < min_version)
     {
	fprintf (stderr, "This version of %s requires slang version %s.\n",
		 argv[1], make_version(min_version));
#ifdef VMS
	ret = SS$_ABORT;
#else
	ret = 1;
#endif
     }

   if (sl_version < sug_version)
     {
	fprintf (stderr, "Your slang version is %s.\n", make_version(sl_version));
	fprintf (stderr, "To fully utilize this program, you should upgrade the slang library to\n");
	fprintf (stderr, "  version %s\n", make_version(sug_version));
	fprintf (stderr, "This library is available via anonymous ftp from\n\
space.mit.edu in pub/davis/slang.\n");
     }

   return ret;
}

