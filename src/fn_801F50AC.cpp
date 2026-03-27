#include <dolphin/types.h>

extern u8 lbl_80343270[];
extern void fn_801F5144(void);
extern u32 lbl_8028E500;
extern u32 lbl_802905FC;
extern u32 lbl_80290324;
extern u32 lbl_80290688;
extern u32 lbl_80290128;
extern u32 lbl_802A49E0;
extern u32 lbl_802A4A7C;
extern u32 lbl_803432B8;
extern void __construct_array(void*, void*, void*, u32, u32);

void fn_801F50AC(void) {
    __construct_array(lbl_80343270, (void*)fn_801F5144, 0, 0x8, 0x9);
    u32* r7 = (u32*)&lbl_803432B8;
    r7[1] = (u32)&lbl_8028E500;
    r7[1] = (u32)&lbl_802905FC;
    r7[1] = (u32)&lbl_80290324;
    r7[1] = (u32)&lbl_80290688;
    r7[1] = (u32)&lbl_80290128;
    r7[0] = (u32)&lbl_802A49E0;
    r7[1] = (u32)&lbl_802A4A7C;
}

#pragma init (fn_801F50AC)