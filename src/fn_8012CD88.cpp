#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_802905FC;
extern u32 lbl_8029AE34;
extern u32 lbl_8029ADE0;
extern u32 lbl_8029AD8C;
extern u32 lbl_8029AD38;
extern u32 lbl_8029AC28;
extern u32 lbl_8029ACAC;
extern u32 lbl_80375D3C;
extern u32 lbl_80375D40;
extern u32 lbl_80375D44;
extern u32 lbl_80375D48;
extern u32 lbl_80375D4C;

void fn_8012CD88(void) {
    u32* r9 = (u32*)&lbl_80375D4C;
    r9[1] = (u32)&lbl_8028E500;
    r9[1] = (u32)&lbl_802905FC;
    u32 r0 = (u32)&lbl_8029ACAC;
    lbl_80375D3C = (u32)&lbl_8029AE34;
    lbl_80375D40 = (u32)&lbl_8029ADE0;
    lbl_80375D44 = (u32)&lbl_8029AD8C;
    lbl_80375D48 = (u32)&lbl_8029AD38;
    lbl_80375D4C = (u32)&lbl_8029AC28;
    r9[1] = r0;
}

#pragma init (fn_8012CD88)