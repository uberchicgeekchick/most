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


#ifndef _MOST_H_
#define _MOST_H_
#include "config.h"
extern int Most_S_Opt;
extern int Most_A_Opt;             /* automatically choose -b if necessary */
extern int Most_V_Opt;             /* display control chars */
extern int Most_B_Opt;             /* display Binary File */
extern int Most_T_Opt;             /* display tab as ^I-- valid only with V option */
extern int Most_D_Opt;             /* delete file mode  (see ':D')  */
extern int Most_L_Opt;             /* use ^L (formfeed) to clear screen */
extern int Most_W_Opt;             /* Wrap mode */
extern int Most_K_Opt;             /* Kanji mode */
extern int Most_Z_Opt;             /* gunzip-on-the-fly */

#if MOST_HAS_MMAP
extern int Most_Disable_MMap;
#endif

extern int Most_UTF8_Mode;

extern int Most_Secure_Mode;
extern int Most_Captive_Mode;
extern char *Most_Program;

extern int most(int, char **);
extern char *Most_Global_Msg;
extern int Most_Want_Exit;
extern void most_initialize_most(void);
extern void most_exit_most (void);
extern void most_exit_error (char *, ...);

extern void most_usage (void);
#define MOSTMALLOC most_malloc
#define MOSTREALLOC most_realloc
extern unsigned char *most_malloc(unsigned int);
extern unsigned char *most_realloc(unsigned char *, unsigned int);
extern int Most_Tab_Width;

#ifdef VMS
# ifndef isdigit
#  define isdigit(x) \
      (((x >= '0') && (x <= '9')) ? 1 : 0)
# endif
#endif

/* 2010-05-21: slang v2.x support for exported SLsnprintf added *
 *         Kaity G. B. <uberChick@uberChicGeekChick.com>        */
#ifdef HAVE_SNPRINTF
# define _pSLsnprintf snprintf
#else
# if SLANG_VERSION > 20100 
#  define _pSLsnprintf SLsnprintf
# else
#    if SLANG_VERSION < 20000
#      define _pSLsnprintf _SLsnprintf
#    endif
extern int _pSLsnprintf (char *, unsigned int, char *, ...);
# endif
#endif

#if SLANG_VERSION <= 10409
extern int SLang_get_error (void);
extern int SLang_set_error (int);
#endif

#define SLANG_REGEX 1
#endif /* _MOST_H_ */
