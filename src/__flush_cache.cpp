#include <dolphin/types.h>

void __flush_cache(void* base, u32 size) {
    register u8* p = (u8*)((u32)base & 0xFFFFFFF8);
    size += (u8*)base - p;
    do {
        asm { dcbst r0, p }
        asm { sync }
        asm { icbi r0, p }
        size -= 8;
        p += 8;
    } while ((s32)size >= 0);
    asm { isync }
}