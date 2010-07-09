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


#ifndef _MOST_DISPLAY_H_
# define _MOST_DISPLAY_H_

/* These numbers match ANSI escape sequences of form ESC [ x m */
#define MOST_BOLD_COLOR		1
#define MOST_ULINE_COLOR	4
#define MOST_STATUS_COLOR	7

#define MOST_EMBEDDED_COLOR_OFFSET 32

extern void most_tt_set_color (int color);
extern void most_tt_reverse_video(void);
extern void most_tt_bold_video(void);
extern void most_tt_underline_video(void);
extern void most_tt_normal_video(void);
extern void most_wide_width(void);
extern void most_narrow_width(void);
extern void most_enable_cursor_keys(void);

extern void most_goto_rc (int, int);
extern void most_setup_colors (void);


#endif /* _MOST_DISPLAY_H_ */
