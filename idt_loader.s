global idt_load     ; Allow the use of this assembly function in C
extern idt_ptr      ; Pointer to IDT declared in C [include/idt.h]

idt_load:
    lidt [idt_ptr]  ; Load the IDT stored at idt_ptr
    ret
