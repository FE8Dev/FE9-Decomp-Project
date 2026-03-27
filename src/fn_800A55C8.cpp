#include <dolphin/types.h>

extern u32 lbl_802965BC;
extern u32 lbl_8028E500;
extern u32 lbl_80296568;
extern u32 lbl_803750C8;
extern u32 lbl_80375A68;
extern u32 lbl_80375A6C;
extern u32 lbl_80375A74;

void fn_800A55C8(void) {
    lbl_80375A68 = (u32)&lbl_802965BC;
    lbl_80375A6C = (u32)&lbl_8028E500;  // stored at offset 0x4
    lbl_80375A6C = (u32)&lbl_803750C8;
    lbl_80375A74 = (u32)&lbl_80296568;
}

#pragma init (fn_800A55C8)