global loader                   ; Entry symbol for ELF

MAGIC_NUMBER equ 0x1BADB002     ; Magic number
FLAGS        equ 0x0            ; Multiboot flags
CHECKSUM     equ -MAGIC_NUMBER  ; Checksum calculation
                                ; (magic number + checksum + flags should equal 0)
KERNEL_STACK_SIZE equ 4096      ; Size of stack in bytes

section .text                   ; Start of the text (code) section
align 4                         ; Code must be 4 byte aligned
    dd MAGIC_NUMBER             ; Write the magic number,
    dd FLAGS                    ; the flags,
    dd CHECKSUM                 ; and the checksum to machine code

loader:                         ; Loader label (defined as entry point in linker script)
    ; Point esp to start of stack (end of memory area)
    mov esp, kernel_stack + KERNEL_STACK_SIZE

    extern kmain
    call kmain

.loop:
    jmp .loop                   ; Loop forever

section .bss                   ; Section for uninitialized data
align 4                         ; Align by 4 bytes
kernel_stack:                   ; Label points to beginning of memory
    resb KERNEL_STACK_SIZE      ; Reserve memory for stack

