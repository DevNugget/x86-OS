#include "include/idt.h"
#include "include/memory.h"

void idt_set_gate(unsigned char idx, unsigned long base, unsigned short sel, unsigned char flags) {
    idt[idx].base_lo = base & 0b1111111111111111;
    idt[idx].base_hi = (base >> 16) & 0b1111111111111111;
    
    idt[idx].sel = sel;
    idt[idx].always0 = 0;
    idt[idx].flags = flags;
}

void init_idt() {
    // Sets up pointer to IDT
    idt_ptr.limit = (sizeof(idt_entry_t) * IDT_SIZE) - 1;
    idt_ptr.base = &idt;

    // Clear out IDT, initialize to 0
    memset(&idt, 0, sizeof(idt_entry_t) * IDT_SIZE); 

    // Add new stuff to IDT here
    
    // Set internal register to new IDT created
    idt_load();
}
