#ifndef IDT_H
#define IDT_H

#define IDT_SIZE 256

typedef struct {
    unsigned short base_lo;
    unsigned short sel;    // Kernel segment
    unsigned char always0; // Will always be 0
    unsigned char flags;
    unsigned short base_hi;  
} __attribute__((packed)) idt_entry_t;

typedef struct {
    unsigned short limit;
    unsigned int base;
} __attribute__((packed)) idt_ptr_t;

idt_entry_t idt[IDT_SIZE];
idt_ptr_t idt_ptr;

void init_idt();
extern void idt_load();

#endif
