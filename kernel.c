#include "include/io.h"

void kmain() {
    unsigned short gl_cursor_pos = 0;

    frame_buf_cls(FB_BLACK, &gl_cursor_pos);

    frame_buf_ww("Hello World!", 12, FB_WHITE, FB_BLACK, &gl_cursor_pos);
}
