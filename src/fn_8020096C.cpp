#include <dolphin/types.h>

extern u32 lbl_803766C0;

void fn_8020096C(void) {
    u32* ptr = (u32*)&lbl_803766C0;
    ptr[0] = 0;
    ptr[1] = 0;
}

#pragma init (fn_8020096C)