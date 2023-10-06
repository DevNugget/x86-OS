#include "include/memory.h"

void * memset(void * ptr, char value, unsigned int count) {
    char *temp = (char *)ptr;
    for( ; count != 0; count--) *temp++ = value;
    return ptr;

    /*for (unsigned int i=0; i < size; i++) {
        ptr[i] = value;
    }

    return ptr;*/
}
