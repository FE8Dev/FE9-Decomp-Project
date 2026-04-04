#include <dolphin/types.h>

extern "C" int OSGetResetCode();
extern float lbl_80376E68;
extern float lbl_80376E6C;
extern float lbl_80376E70;
extern float lbl_80376E74;
extern u32 lbl_80376554;
extern u32 lbl_803753B0;
extern u8 lbl_8028D214[];

void fn_8000625C() {
    lbl_803753B0 = 0;
    int reset = OSGetResetCode();
    if (reset >> 31) {
        reset = OSGetResetCode();
        if (!(reset & 0x10000)) {
            lbl_803753B0 = lbl_803753B0 | 0x10000000;
        }
    }
    u32 r6 = lbl_80376554;
    u32 r7 = r6 & 0x60000;
    int r3 = 0;
    if (r7 != 0) {
        if (!(r6 & 0x40000))
            r3 = 1;
    }
    float f2 = r3 ? lbl_80376E68 : lbl_80376E6C;
    float f0 = lbl_80376E70;
    float f1 = lbl_80376E74;
    u8* r4 = lbl_8028D214;
    f0 = f0 / f2;
    int conv0 = (int)f0;
    *(u32*)(r4 + 0x26c) = ((u32)conv0 << 16) + 0x100a;

    r3 = 0;
    if (r7 != 0) {
        if (!(r6 & 0x40000))
            r3 = 1;
    }
    f0 = r3 ? lbl_80376E68 : lbl_80376E6C;
    f0 = f1 / f0;
    int conv1 = (int)f0;
    *(u32*)(r4 + 0x28c) = ((u32)conv1 << 16) + 0x100a;

    r3 = 0;
    if (r7 != 0) {
        if (!(r6 & 0x40000))
            r3 = 1;
    }
    f0 = r3 ? lbl_80376E68 : lbl_80376E6C;
    f0 = f1 / f0;
    int conv2 = (int)f0;
    *(u32*)(r4 + 0x2e0) = ((u32)conv2 << 16) + 0x100a;
}

__declspec(section ".ctors") static void (*_ctor_fn_8000625C)() = fn_8000625C;