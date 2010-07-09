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


#ifndef _MOST_FILE_H_
#define _MOST_FILE_H_

#include "config.h"
#define MOST_MAX_FILES 4096
#define MOST_MAX_FILES 4096
#define MOST_GUNZIP_POPEN_FORMAT "gzip -dc \"%s\""
#define MOST_BZIP2_POPEN_FORMAT "bzip2 -dc \"%s\""

extern void most_reread_file (void);
extern void most_read_to_line (int);
extern Most_Window_Type *most_file_visible (char *);
extern void most_user_get_file(void);
extern int most_read_file_dsc(int);
extern void most_get_cdir(char *);
extern int most_get_dir(char *);
extern void most_do_next_file(int *);
extern int most_find_file(char *);
extern int most_head(char *, char *);

extern char *Most_File_Ring[MOST_MAX_FILES];
extern int Most_Num_Files;
extern char Most_C_Dir[MAX_PATHLEN];
extern int Most_Tail_Mode;
extern int most_close_buffer_file (Most_Buffer_Type *);

#endif /* _MOST_FILE_H_ */

