#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_8029DAC4;
extern u32 lbl_8029DA78;
extern u32 lbl_8029DA2C;
extern u32 lbl_8029D800;
extern u32 lbl_8029D9A4;
extern u32 lbl_80375E38;
extern u32 lbl_80375E3C;
extern u32 lbl_80375E40;
extern u32 lbl_80375E44;

void fn_8014F6B8(void) {
    lbl_80375E38 = (u32)&lbl_8029DAC4;
    lbl_80375E3C = (u32)&lbl_8029DA78;
    lbl_80375E40 = (u32)&lbl_8029DA2C;
    lbl_80375E44 = (u32)&lbl_8029D800;
    *(u32*)((u8*)&lbl_80375E44 + 4) = (u32)&lbl_8028E500;
    *(u32*)((u8*)&lbl_80375E44 + 4) = (u32)&lbl_8029D9A4;
}

#pragma init (fn_8014F6B8)