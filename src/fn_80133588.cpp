#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_8029B6EC;
extern u32 lbl_8029B6A0;
extern u32 lbl_8029B654;
extern u32 lbl_8029B608;
extern u32 lbl_8029B5BC;
extern u32 lbl_8029B570;
extern u32 lbl_8029B524;
extern u32 lbl_8029B428;
extern u32 lbl_8029B448;
extern u32 lbl_8029B49C;
extern u32 lbl_80375D58;
extern u32 lbl_80375D5C;
extern u32 lbl_80375D60;
extern u32 lbl_80375D64;
extern u32 lbl_80375D68;
extern u32 lbl_80375D6C;
extern u32 lbl_80375D70;
extern u32 lbl_80375D74;
extern u32 lbl_80375D7C;

void fn_80133588(void) {
    u32* r30 = (u32*)&lbl_80375D74;
    r30[1] = (u32)&lbl_8028E500;
    u32 r0 = (u32)&lbl_8029B448;
    lbl_80375D58 = (u32)&lbl_8029B6EC;
    lbl_80375D5C = (u32)&lbl_8029B6A0;
    lbl_80375D60 = (u32)&lbl_8029B654;
    lbl_80375D64 = (u32)&lbl_8029B608;
    lbl_80375D68 = (u32)&lbl_8029B5BC;
    lbl_80375D6C = (u32)&lbl_8029B570;
    lbl_80375D70 = (u32)&lbl_8029B524;
    lbl_80375D74 = (u32)&lbl_8029B428;
    r30[1] = (u32)&lbl_8029B49C;
    lbl_80375D7C = r0;
}

#pragma init (fn_80133588)