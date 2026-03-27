#include <dolphin/types.h>

extern u32 lbl_8028E4B4;
extern u32 lbl_8028E500;
extern u32 lbl_8031CA78;
extern u32 lbl_80299188;
extern u32 lbl_80298C74;
extern u32 lbl_8029913C;
extern u32 lbl_802990F0;
extern u32 lbl_80299058;
extern u32 lbl_8029900C;
extern u32 lbl_80298FC0;
extern u32 lbl_80298F74;
extern u32 lbl_80298F28;
extern u32 lbl_80298EDC;
extern u32 lbl_80298E90;
extern u32 lbl_80298E44;
extern u32 lbl_80298C28;
extern u32 lbl_80298B2C;
extern u32 lbl_80298BA0;
extern u32 lbl_80298B4C;
extern u32 lbl_802990A4;
extern u32 lbl_80375BC8;
extern u32 lbl_80375BCC;
extern u32 lbl_80375BD0;
extern u32 lbl_80375BD4;
extern u32 lbl_80375BDC;
extern u32 lbl_80375BE4;
extern u32 lbl_80375BEC;
extern u32 lbl_80375BF4;
extern u32 lbl_80375BFC;
extern u32 lbl_80375C04;
extern u32 lbl_80375C30;
extern u32 lbl_80375C34;
extern u32 lbl_80375C38;
extern u32 lbl_80375C3C;
extern u32 lbl_80375C40;
extern u32 lbl_80375C44;
extern u32 lbl_80375C48;
extern u32 lbl_80375C4C;
extern u32 lbl_80375C50;
extern u32 lbl_80375C54;
extern u32 lbl_80375C5C;
extern u32 lbl_80375C64;

void fn_80103DA0(void) {
    u32* r28 = (u32*)&lbl_80375C5C;
    u32 r12 = (u32)&lbl_8028E4B4;
    u32 r24 = (u32)&lbl_8028E500;
    u32 r0  = (u32)&lbl_80298C74;
    u32 r29 = (u32)&lbl_80299188;
    u32 r30 = (u32)&lbl_8029913C;
    u32 r31 = (u32)&lbl_802990F0;

    lbl_80375BD4 = r12;
    lbl_80375BDC = r12;
    lbl_80375BE4 = r12;
    lbl_80375BEC = r12;
    lbl_80375BF4 = r12;
    lbl_80375BFC = r12;
    lbl_80375C04 = r12;

    r28[1] = r24;
    lbl_80375BC8 = r29;

    u32* r12p = (u32*)&lbl_80375BF4;
    r12p[1] = 4;
    u32* r12p2 = (u32*)&lbl_80375BFC;
    r12p2[1] = 5;

    lbl_80375BD4 = (u32)&lbl_802990A4;
    lbl_80375BDC = (u32)&lbl_802990A4;
    lbl_80375BE4 = (u32)&lbl_802990A4;
    lbl_80375BEC = (u32)&lbl_802990A4;
    lbl_80375BF4 = (u32)&lbl_802990A4;
    lbl_80375BFC = (u32)&lbl_802990A4;
    lbl_80375C04 = (u32)&lbl_802990A4;

    lbl_80375BCC = r30;
    lbl_80375BD0 = r31;

    u32* r15 = (u32*)&lbl_80375BD4;
    u32* r17 = (u32*)&lbl_80375BDC;
    u32* r19 = (u32*)&lbl_80375BE4;
    u32* r21 = (u32*)&lbl_80375BEC;
    u32* r11 = (u32*)&lbl_80375C04;
    r15[1] = 0;
    r17[1] = 1;
    r19[1] = 2;
    r21[1] = 3;
    r11[1] = 6;

    lbl_80375C30 = (u32)&lbl_80299058;
    lbl_80375C34 = (u32)&lbl_8029900C;
    lbl_80375C38 = (u32)&lbl_80298FC0;
    lbl_80375C3C = (u32)&lbl_80298F74;
    lbl_80375C40 = (u32)&lbl_80298F28;
    lbl_80375C44 = (u32)&lbl_80298EDC;
    lbl_80375C48 = (u32)&lbl_80298E90;
    lbl_80375C4C = (u32)&lbl_80298E44;
    lbl_80375C50 = r0;
    lbl_80375C54 = (u32)&lbl_80298C28;
    lbl_80375C5C = (u32)&lbl_80298B2C;
    r28[1] = (u32)&lbl_80298BA0;
    lbl_80375C64 = (u32)&lbl_80298B4C;
}