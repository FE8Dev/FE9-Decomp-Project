#include <dolphin/types.h>

void __fill_mem(void* dst, int val, u32 size) {
    u8 byte = (u8)val;
    u8* p = (u8*)dst - 1;
    if (size >= 0x20) {
        u32 align = -(u32)dst & 3;
        if (align != 0) {
            size -= align;
            do {
                *++p = byte;
            } while (--align != 0);
        }
        u32 word = byte | (byte << 8) | (byte << 16) | (byte << 24);
        u32* wp = (u32*)(p - 3);
        u32 chunks = size >> 5;
        if (chunks != 0) {
            do {
                wp[1] = word; wp[2] = word; wp[3] = word; wp[4] = word;
                wp[5] = word; wp[6] = word; wp[7] = word;
                wp = (u32*)((u8*)wp + 0x20);
                wp[0] = word;
            } while (--chunks != 0);
        }
        p = (u8*)wp + 3;
        u32 leftover = (size >> 2) & 7;
        if (leftover != 0) {
            do {
                wp = (u32*)((u8*)wp + 4);
                wp[0] = word;
            } while (--leftover != 0);
        }
        p = (u8*)wp + 3;
        size &= 3;
    }
    if (size != 0) {
        do {
            *++p = byte;
        } while (--size != 0);
    }
}