#ifndef GDT_H
#define GDT_H

// NOTE: __attribute__((packed)) removes padding,
//       and this will only work when compiling with gcc
// Define structure for GDT entry
typedef struct {
    unsigned short limit_low;
    unsigned short base_low;
    unsigned char  base_middle;
    unsigned char  access;
    unsigned char  granularity;
    unsigned char  base_high;
} __attribute__((packed)) gdt_entry_t;

// Define structure for GDT pointer
typedef struct {
    unsigned short limit;
    unsigned int base;
} __attribute__((packed)) gdt_ptr_t;

gdt_entry_t mk_null_dscptr();
gdt_entry_t mk_code_seg_dscptr();
gdt_entry_t mk_data_seg_dscptr();

void init_gdt();
extern void gdt_load();

#endif
