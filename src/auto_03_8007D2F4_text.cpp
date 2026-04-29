// auto_03_8007D2F4_text
#include <dolphin/types.h>

extern u8  lbl_80275488[];
extern u32 lbl_80375750;

extern "C" u8* fn_8007D2F4(void) {
    return (u8*)lbl_80275488 + 0x1a3;
}

extern "C" s32 fn_8007D304(void) {
    void* r3 = (void*)*(u32*)((u8*)lbl_80375750 + 0x54);
    if (r3) *(s16*)((u8*)r3 + 0x36) = 4;
    return 0;
}