#include <dolphin/types.h>

extern u32 lbl_80376554;
extern u32 lbl_8029773C;
extern f32 lbl_80378140;
extern f32 lbl_80378144;
extern f32 lbl_80378148;
extern f32 lbl_8037814C;

void fn_800C8208(void) {
    u32 r6 = lbl_80376554;
    u32 r7 = r6 & 0x6000;
    s32 r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    u32* hw = (u32*)&lbl_8029773C;
    f32 scale = (r3 & 0xff) ? lbl_80378140 : lbl_80378144;
    s32 vi = (s32)(lbl_80378148 / scale);
    hw[0x84/4] = (u32)((vi << 16) | 0x100a);
    r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    s32 vi2 = (s32)(lbl_8037814C / ((r3 & 0xff) ? lbl_80378140 : lbl_80378144));
    hw[0xc0/4] = (u32)((vi2 << 16) | 0x100a);
    r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    s32 vi3 = (s32)(lbl_8037814C / ((r3 & 0xff) ? lbl_80378140 : lbl_80378144));
    hw[0xf4/4] = (u32)((vi3 << 16) | 0x100a);
    r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    s32 vi4 = (s32)(lbl_8037814C / ((r3 & 0xff) ? lbl_80378140 : lbl_80378144));
    hw[0x128/4] = (u32)((vi4 << 16) | 0x100a);
}

#pragma init (fn_800C8208)