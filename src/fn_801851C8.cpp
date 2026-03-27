#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_802905FC;
extern u32 lbl_8029FACC;
extern u32 lbl_8029FA74;
extern u32 lbl_8029FA1C;
extern u32 lbl_8029F9C4;
extern u32 lbl_8029F96C;
extern u32 lbl_8029F888;
extern u32 lbl_8029F8E0;
extern u32 lbl_803764A4;
extern u32 lbl_803764A8;
extern u32 lbl_803764AC;
extern u32 lbl_803764B0;
extern u32 lbl_803764B4;
extern u32 lbl_803764B8;

void fn_801851C8(void) {
    u32* r10 = (u32*)&lbl_803764B8;
    r10[1] = (u32)&lbl_8028E500;
    r10[1] = (u32)&lbl_802905FC;
    u32 r0 = (u32)&lbl_8029F8E0;
    lbl_803764A4 = (u32)&lbl_8029FACC;
    lbl_803764A8 = (u32)&lbl_8029FA74;
    lbl_803764AC = (u32)&lbl_8029FA1C;
    lbl_803764B0 = (u32)&lbl_8029F9C4;
    lbl_803764B4 = (u32)&lbl_8029F96C;
    lbl_803764B8 = (u32)&lbl_8029F888;
    r10[1] = r0;
}

#pragma init (fn_801851C8)