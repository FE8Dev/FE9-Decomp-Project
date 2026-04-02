#include <dolphin/types.h>

void* fn_80235164(void* array, void (*ctor)(void*, s32), void* placement,
                  u32 element_size, u32 count, void* dtor, u32 partial_count) {
    if (!array) return array;
    array = (u8*)array + 0x10;
    if (!ctor) return array;
    u32 i = 0;
    u8* ptr = (u8*)array;
    while (i < count) {
        ctor((void*)ptr, 1);
        ptr += element_size;
        i++;
    }
    return array;
}