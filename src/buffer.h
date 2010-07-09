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


#ifndef _MOST_BUFFER_H_
# define _MOST_BUFFER_H_

typedef struct
{
   char file[MAX_PATHLEN];            /* filename */
   unsigned char *beg;       /* beginning of buffer */
   unsigned char *end;       /* end of buffer */
   int mark;                 /* marked line in buffer */
   unsigned int flags;
   int fd;			       /* file descriptor--- -1 if closed */
   FILE *fp;			       /* use pclose when EOF is reached */
   int size;
# ifdef VMS
   int rec;			       /* record size for reads */
# endif
# if MOST_HAS_MMAP
   int is_mmaped;
   unsigned int mmap_size;
# endif
}
Most_Buffer_Type;

extern Most_Buffer_Type *Most_Buf;
extern unsigned char *Most_Beg, *Most_Eob;
extern MOST_INT Most_Num_Lines;

/* Offset of current position from beginning of buffer */
extern MOST_UINT Most_C_Offset;

extern MOST_INT Most_C_Line;
/*
 *  Current line number.  If at the beginning of the buffer, it is 1.  If
 *  we are at the last point of the buffer it is the number of lines.
 */

/* This routine does not move the point */
extern unsigned char *most_beg_of_line(void);

extern MOST_INT most_forward_line(MOST_INT);
/* This routine moves the point forward n lines. n can be negative.
   It returns the number moved. */

extern void most_goto_line (MOST_INT);
/* Move the point somewhere on the nth line of the buffer returning
   C_POS */

extern MOST_INT most_what_line (unsigned char *);
/* return the line number of position 'argument'. Does not move point */

/* count the number of lines in the region delimited by beg and end.
   Counts lines from beg up to end but does not count end.
   Does not move point. */
extern MOST_INT most_count_lines(unsigned char *, unsigned char *);
extern int most_extract_line(unsigned char **, unsigned char **);

extern Most_Buffer_Type *most_switch_to_buffer(Most_Buffer_Type *);
extern Most_Buffer_Type *most_create_buffer(char *);
extern void most_find_row_column(unsigned char *, MOST_INT *, MOST_INT *);

#endif /* _MOST_BUFFER_H_ */

