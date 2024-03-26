#ifndef INCLUDE_FRAME_BUFFER_H
#define INCLUDE_FRAME_BUFFER_H

/** fb_write_cell:
 *  Writes a character with the given foreground and background to position i
 *  in the framebuffer
 *
 *  @param i  The location in the framebuffer
 *  @param c  The character
 *  @param fg The foreground color
 *  @param bg The background color
 *
 *  fb_move_cursor:
 *  Moves the cursor of the framebuffer to the given position
 *
 *  @param pos The new position of the cursor
 */

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg);
void fb_move_cursor(unsigned short pos);

#endif /* INCLUDE_FRAME_BUFFER_H */

