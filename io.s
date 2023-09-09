global outb             ; Make label outb visible outside this file

outb:
    mov al, [esp + 8]   ; Move data to be sent into al
    mov dx, [esp + 4]   ; Move the adress of io port into dx
    out dx, al          ; Send data to io port
    ret
