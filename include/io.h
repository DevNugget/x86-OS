#ifndef IO_H
#define IO_H

#define FB_COMMAND_PORT 0x3D4
#define FB_DATA_PORT    0x3D5

#define FB_HIGH_BYTE_COMMAND 14
#define FB_LOW_BYTE_COMMAND  15

void outb(unsigned short port, unsigned char data);

void frame_buf_mc(unsigned short pos, unsigned short * gl_pos);
void frame_buf_wc(unsigned int i, char c, unsigned char fg, unsigned char bg);
void frame_buf_ww(char *text, unsigned int len, unsigned short * gl_pos);

#endif
