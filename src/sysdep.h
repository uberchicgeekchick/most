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



#ifndef __MOST_SYSDEP_H__
# define __MOST_SYSDEP_H__

# include <stdio.h>

# if defined(sequent) || defined(apollo)
#  define HAS_TERMIOS 0
# else
#  define HAS_TERMIOS 1
# endif

# ifdef VMS
extern int most_do_emacs_command(void);

extern int most_do_shell_command();
extern int most_expand_file_name(char *,char *);
extern char *most_unix2vms(char *);

# endif /* VMS */

extern int most_reinit_terminal (void);
extern void most_init_tty(void);
extern void most_reset_tty(void);
extern int most_getkey(void);
extern void most_get_term_dimensions(int *, int *);
extern int most_delete_file(char *);
extern void most_set_width(int, int);
extern char *most_get_time(void);

extern void most_resize_display (void);
#endif /* __MOST_SYSDEP_H__ */

