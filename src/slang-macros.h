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


#ifndef _SLANG_MACROS_H_
# define _SLANG_MACROS_H_

/* This file defines some macros that I use with programs that link to
 * the slang library.
 */

# ifdef HAVE_MALLOC_H
#  include <malloc.h>
# endif

# ifdef HAVE_MEMORY_H
#  include <memory.h>
# endif

# ifndef SLMEMSET
#  ifdef HAVE_MEMSET
#   define SLMEMSET memset
#  else
#   define SLMEMSET SLmemset
#  endif
# endif

# ifndef SLMEMCHR
#  ifdef HAVE_MEMCHR
#   define SLMEMCHR memchr
#  else
#   define SLMEMCHR SLmemchr
#  endif
# endif

# ifndef SLMEMCPY
#  ifdef HAVE_MEMCPY
#   define SLMEMCPY memcpy
#  else
#   define SLMEMCPY SLmemcpy
#  endif
# endif

/* Note:  HAVE_MEMCMP requires an unsigned memory comparison!!!  */
# ifndef SLMEMCMP
#  ifdef HAVE_MEMCMP
#   define SLMEMCMP memcmp
#  else
#   define SLMEMCMP SLmemcmp
#  endif
# endif

# ifndef SLFREE
#  define SLFREE free
# endif

# ifndef SLMALLOC
#  define SLMALLOC malloc
# endif

# ifndef SLCALLOC
#  define SLCALLOC calloc
# endif

# ifndef SLREALLOC
#  define SLREALLOC realloc
# endif

#endif				       /* _SLANG_MACROS_H_ */
