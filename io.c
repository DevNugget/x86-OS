#include "include/io.h"

void frame_buf_cls(unsigned char color, unsigned short *gl_pos) {
    frame_buf_mc(0, gl_pos);

    for (unsigned int i = 0; i < 2000; i++) {
        frame_buf_ww(" ", 1, color, color, gl_pos);
    }

    frame_buf_mc(0, gl_pos);
}

void frame_buf_wc(unsigned int i, char c, unsigned char fg, unsigned char bg) {
    char *fb = (char *) 0x000B8000;
    fb[i] = c;
    fb[i + 1] = ((bg & 0x0F) << 4) | (fg & 0x0F);
}

void frame_buf_mc(unsigned short pos, unsigned short * gl_pos) {
    outb(FB_COMMAND_PORT, FB_HIGH_BYTE_COMMAND);
    outb(FB_DATA_PORT, ((pos >> 8) & 0x00FF));
    outb(FB_COMMAND_PORT, FB_LOW_BYTE_COMMAND);
    outb(FB_DATA_PORT, pos & 0x00FF);

    *gl_pos = pos;
}

void frame_buf_ww(char *text, unsigned int len, unsigned char fg, unsigned char bg, unsigned short * gl_pos) {
    unsigned int i = 0;

    while (i < len) {
        frame_buf_wc(*gl_pos*2, text[i], fg, bg);
        frame_buf_mc(*gl_pos+1, gl_pos);
        i += 1;
    }
}
