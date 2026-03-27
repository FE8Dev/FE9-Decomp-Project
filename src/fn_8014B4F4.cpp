#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_8029C870;
extern u32 lbl_8029CF8C;
extern u32 lbl_8029CECC;
extern u32 lbl_8029CE6C;
extern u32 lbl_8029CE0C;
extern u32 lbl_8029CDAC;
extern u32 lbl_8029CD4C;
extern u32 lbl_8029CCEC;
extern u32 lbl_8029CC54;
extern u32 lbl_8029CC08;
extern u32 lbl_8029CB80;
extern u32 lbl_8029CB34;
extern u32 lbl_8029CAE8;
extern u32 lbl_8029CA9C;
extern u32 lbl_8029CA50;
extern u32 lbl_8029CA04;
extern u32 lbl_8029C97C;
extern u32 lbl_80375DC8;
extern u32 lbl_80375DCC;
extern u32 lbl_80375DD0;
extern u32 lbl_80375DD4;
extern u32 lbl_80375DD8;
extern u32 lbl_80375DDC;
extern u32 lbl_80375DE0;
extern u32 lbl_80375DE4;
extern u32 lbl_80375DEC;
extern u32 lbl_80375DF0;
extern u32 lbl_80375DF4;
extern u32 lbl_80375DFC;
extern u32 lbl_80375E00;
extern u32 lbl_80375E04;
extern u32 lbl_80375E08;
extern u32 lbl_80375E0C;
extern u32 lbl_80375E10;

void fn_8014B4F4(void) {
    u32* r29 = (u32*)&lbl_80375DF4;
    u32* r28 = (u32*)&lbl_80375E10;
    u32* r19 = (u32*)&lbl_80375DE4;
    u32 r6   = (u32)&lbl_8028E500;
    u32* r30 = (u32*)&lbl_8029C870;
    u32 r0   = (u32)r30;
    r29[1] = r6;
    r28[1] = r6;
    lbl_80375DC8 = (u32)&lbl_8029CF8C;
    lbl_80375DCC = (u32)&lbl_8029CECC;
    lbl_80375DD0 = (u32)&lbl_8029CE6C;
    lbl_80375DD4 = (u32)&lbl_8029CE0C;
    lbl_80375DD8 = (u32)&lbl_8029CDAC;
    lbl_80375DDC = (u32)&lbl_8029CD4C;
    lbl_80375DE0 = (u32)&lbl_8029CCEC;
    r19[1] = r6;
    lbl_80375DE4 = (u32)(r30 + 0);
    lbl_80375DEC = (u32)&lbl_8029CC54;
    lbl_80375DF0 = (u32)&lbl_8029CC08;
    lbl_80375DF4 = r0;
    r29[1] = (u32)&lbl_8029CB80;
    lbl_80375DFC = (u32)&lbl_8029CB34;
    lbl_80375E00 = (u32)&lbl_8029CAE8;
    lbl_80375E04 = (u32)&lbl_8029CA9C;
    lbl_80375E08 = (u32)&lbl_8029CA50;
    lbl_80375E0C = (u32)&lbl_8029CA04;
    lbl_80375E10 = (u32)(r30 + 0x88/4);
    r28[1] = (u32)&lbl_8029C97C;
}

#pragma init (fn_8014B4F4)