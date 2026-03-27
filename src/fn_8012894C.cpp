#include <dolphin/types.h>

extern u32 lbl_8028E4B4;
extern u32 lbl_802905A8;
extern u32 lbl_8028E500;
extern u32 lbl_80339E48;
extern u32 lbl_802905FC;
extern u32 lbl_8028FF14;
extern u32 lbl_8029A998;
extern u32 lbl_80290240;
extern u32 lbl_8029A944;
extern u32 lbl_8029A8F0;
extern u32 lbl_8029A89C;
extern u32 lbl_8029A5D4;
extern u32 lbl_80290010;
extern u32 lbl_80290324;
extern u32 lbl_8029A810;
extern u32 lbl_80375D20;
extern u32 lbl_80375D28;
extern u32 lbl_80375D30;

void fn_8012894C(void) {
    u32* r10 = (u32*)&lbl_80339E48;
    u32 r6  = (u32)&lbl_8028E4B4;
    u32 r0  = (u32)&lbl_8028E500;
    u32 r28 = (u32)&lbl_80290240;
    lbl_80375D20 = r6;
    lbl_80375D28 = r6;
    lbl_80375D30 = r6;
    r10[1] = r0;
    lbl_80375D20 = (u32)&lbl_802905A8;
    lbl_80375D28 = (u32)&lbl_802905A8;
    lbl_80375D30 = (u32)&lbl_802905A8;
    lbl_80375D20 = r28;
    lbl_80375D28 = r28;
    lbl_80375D30 = r28;
    r10[1] = (u32)&lbl_802905FC;
    lbl_80375D20 = (u32)&lbl_8028FF14;
    lbl_80375D28 = (u32)&lbl_8028FF14;
    lbl_80375D30 = (u32)&lbl_8028FF14;
    r10[1] = (u32)&lbl_80290324;
    lbl_80375D20 = (u32)&lbl_8029A998;
    lbl_80375D28 = (u32)&lbl_8029A998;
    lbl_80375D30 = (u32)&lbl_8029A998;
    r10[1] = (u32)&lbl_80290010;
    lbl_80375D20 = (u32)&lbl_8029A944;
    lbl_80375D28 = (u32)&lbl_8029A8F0;
    lbl_80375D30 = (u32)&lbl_8029A89C;
    r10[0] = (u32)&lbl_8029A5D4;
    *(u16*)((u8*)r10 + 0xe) = 0;
    *(u16*)((u8*)r10 + 0x10) = 0x46;
    r10[1] = (u32)&lbl_8029A810;
}

#pragma init (fn_8012894C)