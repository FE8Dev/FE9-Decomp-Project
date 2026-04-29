#include <dolphin/types.h>
extern "C" void fn_800056CC(const char*, ...);
extern "C" u32 GKI_get_tick_count_800EBFC0(void);
extern "C" void fn_801E3C50(void*, s8, s8);
extern u8 lbl_80276938[];
extern u8 lbl_8033A708[];
extern "C" void fn_801E4120(void*, ...);
extern "C" void fn_801E5694(void*);

extern u32 lbl_803765A0;


void nlVirtualTotalFree_800A0694(void) {
    fn_801E5694((void*)&lbl_803765A0);
}

void fn_800A06B8(void* r3) {
    u32 tick = GKI_get_tick_count_800EBFC0();
    if (!tick) {
        fn_800056CC((const char*)((u8*)lbl_80276938 + 0x191));
        return;
    }
    float f1 = *(float*)((u8*)lbl_8033A708 + 0x524);
    float f0 = *(float*)((u8*)lbl_8033A708 + 0x528);
    s32 x = (s32)f1;
    s32 y = (s32)f0;
    s32 xmod = x % 5;
    s32 ymod = y % 5;
    fn_801E3C50((void*)&lbl_803765A0, (s8)xmod, (s8)ymod);
}