#ifndef IO_H
#define IO_H

#define FB_COMMAND_PORT 0x3D4
#define FB_DATA_PORT    0x3D5

#define FB_HIGH_BYTE_COMMAND 14
#define FB_LOW_BYTE_COMMAND  15

#define FB_BLACK          0
#define FB_BLUE           1
#define FB_GREEN          2
#define FB_CYAN           3
#define FB_RED            4
#define FB_MAGENTA        5
#define FB_BROWN          6
#define FB_LIGHT_GREY     7
#define FB_DARK_GRAY      8
#define FB_LIGHT_BLUE     9
#define FB_LIGHT_GREEN   10
#define FB_LIGHT_CYAN    11
#define FB_LIGHT_RED     12
#define FB_LIGHT_MAGENTA 13
#define FB_LIGHT_BROWN   14
#define FB_WHITE         15

// Wrapper function for (assembly) outb in io.s
void outb(unsigned short port, unsigned char data);

// Clear frame buffer
void frame_buf_cls(unsigned char color, unsigned short *gl_pos);

// Move frame buffer cursor
void frame_buf_mc(unsigned short pos, unsigned short * gl_pos);

// Write character to frame buffer
void frame_buf_wc(unsigned int i, char c, unsigned char fg, unsigned char bg);

// Write word to frame buffer
void frame_buf_ww(char *text, unsigned int len, unsigned char fg, unsigned char bg, unsigned short * gl_pos);

#endif
