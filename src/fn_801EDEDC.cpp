#include <dolphin/types.h>

extern u8 lbl_8033C020[];
extern void GoalOverlay__SceneCreated_801EE048(void);
extern u16 lbl_803765AC;
extern u16 lbl_803765B4;
extern u16 lbl_803765BC;
extern u16 lbl_803765C4;
extern u16 lbl_803765CC;
extern u16 lbl_803765D4;
extern u16 lbl_803765DC;
extern u16 lbl_803765E4;
extern u16 lbl_803765EC;
extern u16 lbl_803765F4;
extern u16 lbl_803765FC;
extern u16 lbl_80376604;
extern void __construct_array(void*, void*, void*, u32, u32);

void fn_801EDEDC(void) {
    u16* r8 = &lbl_803765AC;
    r8[2] = 0xd8;
    r8[1] = 0;
    r8[3] = 0x30;

    lbl_803765AC = 0; lbl_803765B4 = 0;
    (&lbl_803765B4)[1] = 0; (&lbl_803765B4)[2] = 0x220; (&lbl_803765B4)[3] = 0x1a;
    lbl_803765BC = 0; (&lbl_803765BC)[1] = 0; (&lbl_803765BC)[2] = 0x64; (&lbl_803765BC)[3] = 0x22;
    lbl_803765C4 = 0; (&lbl_803765C4)[1] = 0; (&lbl_803765C4)[2] = 0x60; (&lbl_803765C4)[3] = 0x20;
    lbl_803765CC = 0; (&lbl_803765CC)[1] = 0; (&lbl_803765CC)[2] = 0x220; (&lbl_803765CC)[3] = 0x20;
    lbl_803765D4 = 0; (&lbl_803765D4)[1] = 0; (&lbl_803765D4)[2] = 0x2; (&lbl_803765D4)[3] = 0x8;
    lbl_803765DC = 0; (&lbl_803765DC)[1] = 0; (&lbl_803765DC)[2] = 0x2; (&lbl_803765DC)[3] = 0x8;
    lbl_803765E4 = 0; (&lbl_803765E4)[1] = 0; (&lbl_803765E4)[2] = 0x2; (&lbl_803765E4)[3] = 0x8;
    lbl_803765EC = 0; (&lbl_803765EC)[1] = 0; (&lbl_803765EC)[2] = 0x38; (&lbl_803765EC)[3] = 0x18;
    lbl_803765F4 = 0; (&lbl_803765F4)[1] = 0; (&lbl_803765F4)[2] = 0x10; (&lbl_803765F4)[3] = 0x8;
    lbl_803765FC = 0; (&lbl_803765FC)[1] = 0; (&lbl_803765FC)[2] = 0x8; (&lbl_803765FC)[3] = 0x8;
    lbl_80376604 = 0; (&lbl_80376604)[1] = 0; (&lbl_80376604)[2] = 0x10; (&lbl_80376604)[3] = 0x8;

    __construct_array(lbl_8033C020, (void*)GoalOverlay__SceneCreated_801EE048, 0, 0x18, 0x18);
}

#pragma init (fn_801EDEDC)