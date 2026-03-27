#include <dolphin/types.h>

extern u32 lbl_8028FB38;
extern u32 lbl_802FA7E8;
extern u32 lbl_802FA830;
extern u32 lbl_8028FBEC;
extern u32 lbl_8028FBA4;

void fn_8005AFA4(void) {
    *(u32*)((u8*)&lbl_802FA7E8 + 0x44) = (u32)&lbl_8028FB38;
    *(u32*)((u8*)&lbl_802FA830 + 0x44) = (u32)&lbl_8028FB38;
    *(u32*)((u8*)&lbl_802FA7E8 + 0x44) = (u32)&lbl_8028FBEC;
    *(u32*)((u8*)&lbl_802FA830 + 0x44) = (u32)&lbl_8028FBA4;
}

#pragma init (fn_8005AFA4)