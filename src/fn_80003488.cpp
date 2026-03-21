#include <dolphin/types.h>

void fn_80003488(u8* dst, const u8* src, s32 count) {
    u8* d = dst - 1;
    const u8* s = src - 1;
    count += 1;
    while (--count != 0) {
        *++d = *++s;
    }
}