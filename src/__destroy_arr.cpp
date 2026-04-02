#include <dolphin/types.h>

void fn_80234F38(u8* array_end, void (*dtor)(void*, s32), u32 count, u32 element_size) {
    u8* ptr = array_end + count * element_size;
    while (count > 0) {
        ptr -= element_size;
        dtor((void*)ptr, -1);
        count--;
    }
}