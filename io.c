#include "include/io.h"
#include "include/memory.h"

unsigned short csr_x = 0;
unsigned short csr_y = 0;

void frame_buf_cls(unsigned char color) {
    // Set cursor to first character of screen
    frame_buf_mc(0, 0);

    // Fill screen with given color
    for (unsigned int y = 0; y < FB_HEIGHT; y++) {
        for (unsigned int x = 0; x < FB_WIDTH; x++) {
            frame_buf_ww(" ", FB_WHITE, color);
        }
    }

    // Set cursor back to start of screen
    frame_buf_mc(0, 0);
}

void frame_buf_wc(unsigned int i, char c, unsigned char fg, unsigned char bg) {
    // Check for new line characters
    if (c == '\n') {
        frame_buf_mc(0, csr_y + 1);

    } else {
        // Write to video memory
        char *fb = (char *) 0x000B8000;
        fb[i] = c;
        fb[i + 1] = ((bg & 0x0F) << 4) | (fg & 0x0F);
        frame_buf_mc(csr_x + 1, csr_y);
    }

    // Move to next line if cursor moves beyond line length
    if (csr_x >= 80) {
        frame_buf_mc(0, csr_y + 1);
    }

    if (csr_y >= FB_HEIGHT) {
        frame_buf_scrl();
    }
}

void frame_buf_mc(unsigned short pos_x, unsigned short pos_y) {
    // Get position of cursor in linear frame buffer
    unsigned short pos = (pos_y * FB_WIDTH) + pos_x;

    // Set hardware cursor position
    outb(FB_COMMAND_PORT, FB_HIGH_BYTE_COMMAND);
    outb(FB_DATA_PORT, ((pos >> 8) & 0x00FF));
    outb(FB_COMMAND_PORT, FB_LOW_BYTE_COMMAND);
    outb(FB_DATA_PORT, pos & 0x00FF);

    // Update cursor position
    csr_x = pos_x;
    csr_y = pos_y;
}

void frame_buf_ww(char *text, unsigned char fg, unsigned char bg) {
    unsigned int i = 0;

    while (text[i] != 0) {
        frame_buf_wc(((csr_y * FB_WIDTH) + csr_x)*2, text[i], fg, bg);
        i++;
    }
}

void frame_buf_scrl() {
    char *fb = (char *) 0x000B8000;

    int j = 0;
    for (int i = 160; i < 4000; i++) {
        fb[j] = fb[i]; 
        j++;
    }

    unsigned short orig_x = csr_x;

    frame_buf_mc(0, 24);

    for (int i = 0; i < 79; i++) {
        frame_buf_ww(" ", FB_LIGHT_GREY, FB_BLACK);
    }

    frame_buf_mc(orig_x, 24);
}
