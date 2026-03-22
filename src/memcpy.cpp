#include <dolphin/types.h>

void* memcpy(void* dst, const void* src, u32 size) {
    if ((u8*)src >= (u8*)dst) {
        const u8* s = (const u8*)src - 1;
        u8* d = (u8*)dst - 1;
        u32 n = size + 1;
        while (--n != 0) {
            *++d = *++s;
        }
    } else {
        const u8* s = (const u8*)src + size;
        u8* d = (u8*)dst + size;
        u32 n = size + 1;
        while (--n != 0) {
            *--d = *--s;
        }
    }
    return dst;
}