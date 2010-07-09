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


#ifndef _MOST_KEYM_H_
#define _MOST_KEYM_H_
extern void most_init_keymaps (void);
extern void most_execute_key (void);
extern int *Most_Digit_Arg;
extern void most_do_help_command (void);

/* These are in  cmd.c */
extern void most_extended_key_cmd(void);
extern void most_next_file (void);
extern void most_toggle_case (void);
extern void most_delete_file_cmd (void);
extern void most_toggle_options (void);

#if 0
extern void ctrl_x_map_cmd(void);
extern void ctrl_k_map_cmd(void);
extern void ctrl_w_map_cmd(void);
extern void pf1_map_cmd(void);
extern void pf1_esc_map_cmd(void);
extern void dec_extended_map_cmd(void);
extern void esc_map_cmd(void);
extern void page_down_cmd(void);
extern void search_cmd(void);
extern void next_line_cmd(void);
extern void previous_line_cmd(void);
extern void extended_cmd_cmd(void);
extern void redraw_cmd(void);
extern void goto_line_cmd(void);
extern void time_cmd(void);
extern void page_up_cmd(void);
extern void page_up_cmd(void);
extern void column_left_cmd(void);
extern void column_right_cmd(void);
extern void page_right_cmd(void);
extern void sys_spawn_cmd(void);
extern void set_mark_cmd(void);
extern void top_of_buffer_cmd(void);
extern void goto_mark_cmd(void);
extern void search_back_cmd(void);
extern void find_next_cmd(void);
extern void end_of_buffer_cmd(void);
extern void exit_cmd(void);
extern void one_window_cmd(void);
extern void two_window_cmd(void);
extern void del_window_cmd(void);
extern void other_window_cmd(void);
extern void O_map_cmd(void);
extern void find_file_cmd(void);
extern void digit_arg_cmd(void);
extern void edit_cmd(void);
extern void toggle_width_cmd(void);
extern void goto_percent_cmd(void);
extern void edt_page_cmd(void);
extern void edt_forward_cmd(void);
extern void edt_back_cmd(void);
extern void edt_line_cmd(void);
extern void edt_find_cmd(void);
extern void edt_find_next_cmd(void);

extern int do_extended_key(void);
extern int do_extended_cmd(void);
extern void do_help_command(void);
extern void execute_key(void);

#endif
#endif /* _MOST_KEYM_H_ */
