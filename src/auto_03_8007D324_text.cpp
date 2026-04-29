// auto_03_8007D324_text
#include <dolphin/types.h>

extern u8  lbl_80275488[];
extern u32 lbl_80375750;

extern "C" u8* fn_8007D324(void) {
    return (u8*)lbl_80275488 + 0x1b4;
}

extern "C" s32 fn_8007D334(void) {
    void* r3 = (void*)*(u32*)((u8*)lbl_80375750 + 0x54);
    if (r3) *(s16*)((u8*)r3 + 0x36) = 5;
    return 0;
}