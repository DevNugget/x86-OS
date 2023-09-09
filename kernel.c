#include "include/io.h"

void kmain() {
    unsigned short gl_cursor_pos = 0;
    frame_buf_mc(gl_cursor_pos, &gl_cursor_pos);
    
    // test
    const char* string = "Hello";

    for (unsigned int i =0; i < 10; i++) {
        frame_buf_mc(gl_cursor_pos+1, &gl_cursor_pos);
        frame_buf_wc(gl_cursor_pos*2, string[0], 15, 0);
    }
}
