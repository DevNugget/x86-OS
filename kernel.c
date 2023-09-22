#include "include/io.h"
#include "include/gdt.h"
#include "include/memory.h"

void kmain() {
    init_gdt();

    //unsigned short gl_cursor_pos = 0;

    frame_buf_cls(FB_BLACK);

    //frame_buf_mc(0,0);

    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_LIGHT_GREY, FB_BLACK);
    frame_buf_ww("Hello World!\n", FB_DARK_GREY, FB_BLACK);
}
