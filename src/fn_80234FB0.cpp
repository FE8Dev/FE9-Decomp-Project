#include <dolphin/types.h>

void fn_80234FB0(void* array, void (*ctor)(void*, s32), void* dtor,
                 u32 element_size, u32 count, void* partial_dtor, u32 partial_count) {
    u32 i = 0;
    u8* ptr = (u8*)array;
    while (i < count) {
        ctor((void*)ptr, 1);
        ptr += element_size;
        i++;
    }
}