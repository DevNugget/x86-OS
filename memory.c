#include "include/memory.h"

unsigned char * memset(unsigned char * ptr, unsigned char value, unsigned int size) {
    for (unsigned int i=0; i < size; i++) {
        ptr[i] = value;
    }

    return ptr;
}
