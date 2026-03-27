#include <dolphin/types.h>

extern "C" u32 OSGetResetCode(void);

extern u32 lbl_803753B0;
extern u32 lbl_80376554;
extern u32 lbl_8028D214;
extern f32 lbl_80376E68;
extern f32 lbl_80376E6C;
extern f32 lbl_80376E70;
extern f32 lbl_80376E74;

void fn_8000625C(void) {
    lbl_803753B0 = 0;
    if (OSGetResetCode() >> 31) {
        if (!(OSGetResetCode() & 0x10000)) {
            lbl_803753B0 |= 0x10000000;
        }
    }
    u32 r6 = lbl_80376554;
    u32 r7 = r6 & 0x6000;
    s32 r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    u32* hw = (u32*)&lbl_8028D214;
    f32 scale = (r3 & 0xff) ? lbl_80376E68 : lbl_80376E6C;
    s32 vi = (s32)(lbl_80376E70 / scale);
    hw[0x26c/4] = (u32)((vi << 16) | 0x100a);
    r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    s32 vi2 = (s32)(lbl_80376E74 / ((r3 & 0xff) ? lbl_80376E68 : lbl_80376E6C));
    hw[0x28c/4] = (u32)((vi2 << 16) | 0x100a);
    r3 = 0;
    if (r7 && !(r6 & 0x4000)) r3 = 1;
    s32 vi3 = (s32)(lbl_80376E74 / ((r3 & 0xff) ? lbl_80376E68 : lbl_80376E6C));
    hw[0x2e0/4] = (u32)((vi3 << 16) | 0x100a);
}

#pragma init (fn_8000625C)