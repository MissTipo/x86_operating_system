#include "framebuffer.h"
#include "colours.h"

int write()
{
	fb_write_cell(0, 'H', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(2);
	fb_write_cell(2, 'E', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(2);
	fb_write_cell(4, 'L', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(2);
	fb_write_cell(6, 'L', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(2);
	fb_write_cell(8, 'O', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(2);

	return 0;
}
