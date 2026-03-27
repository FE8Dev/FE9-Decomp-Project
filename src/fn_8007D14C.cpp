#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_80292FE8;
extern u32 lbl_80292D00;
extern u32 lbl_80292F9C;
extern u32 lbl_80292F50;
extern u32 lbl_80292F04;
extern u32 lbl_80292EB8;
extern u32 lbl_80292E6C;
extern u32 lbl_80292E20;
extern u32 lbl_80292DD4;
extern u32 lbl_80292CA8;
extern u32 lbl_80292D4C;
extern u32 lbl_80375754;
extern u32 lbl_80375758;
extern u32 lbl_8037575C;
extern u32 lbl_80375760;
extern u32 lbl_80375764;
extern u32 lbl_80375768;
extern u32 lbl_8037576C;
extern u32 lbl_80375770;
extern u32 lbl_80375774;
extern u32 lbl_80375778;

void fn_8007D14C(void) {
    u32* r30 = (u32*)&lbl_80375778;
    r30[1] = (u32)&lbl_8028E500;
    u32 r0 = (u32)&lbl_80292D4C;
    lbl_80375754 = (u32)&lbl_80292D00;
    lbl_80375758 = (u32)&lbl_80292FE8;
    lbl_8037575C = (u32)&lbl_80292F9C;
    lbl_80375760 = (u32)&lbl_80292F50;
    lbl_80375764 = (u32)&lbl_80292F04;
    lbl_80375768 = (u32)&lbl_80292EB8;
    lbl_8037576C = (u32)&lbl_80292E6C;
    lbl_80375770 = (u32)&lbl_80292E20;
    lbl_80375774 = (u32)&lbl_80292DD4;
    lbl_80375778 = (u32)&lbl_80292CA8;
    r30[1] = r0;
}

#pragma init (fn_8007D14C)