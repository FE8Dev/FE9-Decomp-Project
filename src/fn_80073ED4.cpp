#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_802905FC;
extern u32 lbl_8029116C;
extern u32 lbl_80291118;
extern u32 lbl_802910C4;
extern u32 lbl_80291070;
extern u32 lbl_8029101C;
extern u32 lbl_80290FC8;
extern u32 lbl_80290F74;
extern u32 lbl_80290EF0;
extern u32 lbl_8029051C;
extern u32 lbl_80290F20;
extern u32 lbl_80290F08;
extern u32 lbl_80375628;
extern u32 lbl_8037562C;
extern u32 lbl_80375630;
extern u32 lbl_80375634;
extern u32 lbl_80375638;
extern u32 lbl_8037563C;
extern u32 lbl_80375640;
extern u32 lbl_80375644;
extern u32 lbl_8037564C;
extern u32 lbl_80375650;
extern u32 lbl_80375658;
extern u32 lbl_80375090;

void fn_80073ED4(void) {
    u32* r29 = (u32*)&lbl_80375644;
    u32* r28 = (u32*)&lbl_80375650;
    u32* r27 = (u32*)&lbl_80375658;
    u32 r6 = (u32)&lbl_802905FC;
    r29[1] = (u32)&lbl_8028E500;
    r28[1] = (u32)&lbl_8028E500;
    r27[1] = (u32)&lbl_8028E500;
    u32 r0 = (u32)&lbl_80290F08;
    lbl_80375628 = (u32)&lbl_8029116C;
    lbl_8037562C = (u32)&lbl_80291118;
    lbl_80375630 = (u32)&lbl_802910C4;
    lbl_80375634 = (u32)&lbl_80291070;
    lbl_80375638 = (u32)&lbl_8029101C;
    lbl_8037563C = (u32)&lbl_80290FC8;
    lbl_80375640 = (u32)&lbl_80290F74;
    lbl_80375644 = (u32)&lbl_80290EF0;
    r29[1] = (u32)&lbl_8029051C;
    lbl_8037564C = (u32)&lbl_80290F20;
    lbl_80375650 = (u32)&lbl_80375090;
    r28[1] = (u32)&lbl_8029051C;
    lbl_80375658 = r0;
    r27[1] = r6;
}

#pragma init (fn_80073ED4)