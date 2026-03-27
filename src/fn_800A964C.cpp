#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_8031CA78;
extern u32 lbl_8028E4B4;
extern u32 lbl_802905FC;
extern u32 lbl_80296CA0;
extern u32 lbl_80296D38;
extern u32 lbl_80296C54;
extern u32 lbl_80296C08;
extern u32 lbl_80296BBC;
extern u32 lbl_80296B70;
extern u32 lbl_80296B24;
extern u32 lbl_80296AD8;
extern u32 lbl_802967E0;
extern u32 lbl_802969FC;
extern u32 lbl_802969A8;
extern u32 lbl_80290324;
extern u32 lbl_80296CEC;
extern u32 lbl_8029691C;
extern u32 lbl_80296A50;
extern u32 lbl_80375A78;
extern u32 lbl_80375A80;
extern u32 lbl_80375A84;
extern u32 lbl_80375A88;
extern u32 lbl_80375A8C;
extern u32 lbl_80375A90;
extern u32 lbl_80375A94;
extern u32 lbl_80375A98;
extern u32 lbl_80375A9C;
extern u32 lbl_80375AA4;
extern u32 lbl_80375AA8;
extern u32 lbl_803750D0;

void fn_800A964C(void) {
    u32* r30 = (u32*)&lbl_8031CA78;
    u32* r9  = (u32*)&lbl_80375A9C;
    r30[1] = (u32)&lbl_8028E500;
    r30[1] = (u32)&lbl_802905FC;
    u32 r0 = (u32)&lbl_80296BBC;
    lbl_80375A78 = (u32)&lbl_8028E4B4;
    lbl_80375A78 = (u32)&lbl_80296D38;
    r30[1] = (u32)&lbl_80290324;
    lbl_80375A78 = (u32)&lbl_80296CEC;
    lbl_80375A80 = (u32)&lbl_80296CA0;
    lbl_80375A84 = (u32)&lbl_80296C54;
    lbl_80375A88 = (u32)&lbl_80296C08;
    lbl_80375A8C = r0;
    lbl_80375A90 = (u32)&lbl_80296B70;
    lbl_80375A94 = (u32)&lbl_80296B24;
    lbl_80375A98 = (u32)&lbl_80296AD8;
    lbl_80375A9C = (u32)&lbl_802967E0;
    r9[1] = (u32)&lbl_80296A50;
    lbl_80375AA4 = (u32)&lbl_802969FC;
    lbl_80375AA8 = (u32)&lbl_802969A8;
    r30[0] = (u32)&lbl_803750D0;
    r30[1] = (u32)&lbl_8029691C;
}

#pragma init (fn_800A964C)