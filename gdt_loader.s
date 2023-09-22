CODE_SEG_OFFSET equ 0x08
DATA_SEG_OFFSET equ 0x10

[bits 32]

global gdt_load                      ; Allows C code to link
extern gdt_ptr                       ; gdt_ptr located in our C function

gdt_load:
    lgdt [gdt_ptr]                   ; Load the gdt with our gdt_ptr

    mov ax, DATA_SEG_OFFSET
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    mov ss, ax

    jmp CODE_SEG_OFFSET:flush_toilet ; Far jump to code segment and flush toilet

flush_toilet:                        ; lol toilet
    ret                              ; Return to C code after flushing toilet
