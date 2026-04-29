#include <dolphin/types.h>
extern "C" void fn_800056CC(const char*, ...);
extern "C" u32 GKI_get_tick_count_800EBFC0(void);
extern "C" void fn_801E4120(void*, s32, void*);
extern "C" void fn_801E5694(void*);
extern u8 lbl_80276938[];
extern u8 lbl_8033A708[];
extern u32 lbl_803765A0;



s32 nlVirtualTotalFree_800A0780(void) {
    return 0;
}


void fn_800A07A4(void* r3) {
    void* r31 = r3;
    u32 tick = GKI_get_tick_count_800EBFC0();
    if (!tick) {
        fn_800056CC((const char*)((u8*)lbl_80276938 + 0x191));
        return;
    }
    float f0 = *(float*)((u8*)lbl_8033A708 + 0x524);
    s32 x = (s32)f0;
    s32 xmod = x % 5;
    fn_801E4120((void*)&lbl_803765A0, xmod, r31);
}