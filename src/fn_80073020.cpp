#include <dolphin/types.h>

extern u32 lbl_8028E500;
extern u32 lbl_8028E4B4;
extern u32 lbl_8031C368;
extern u32 lbl_80274944;
extern u32 lbl_80290768;
extern u32 lbl_8028FF08;
extern u32 lbl_80290688;
extern u32 lbl_80290714;
extern void fn_800731E0(void);
extern u32 lbl_80375618;
extern u32 lbl_80375620;
extern void __construct_array(void*, void*, void*, u32, u32);
extern void fn_8001C874(u32*);
extern void fn_8001C700(void);
extern void __register_global_object(void*, void*, void*);

void fn_80073020(void) {
    u32* r31 = (u32*)&lbl_8031C368;
    u32* r28 = (u32*)((u8*)r31 + 0x38);
    u32* r12 = (u32*)((u8*)r31 + 0x10);
    u32* r29 = (u32*)((u8*)r31 + 0x24);
    u32* r11 = (u32*)r31;
    u32 r5 = (u32)&lbl_8028E500;
    u32 r0 = (u32)&lbl_8028E4B4;
    u32 r18 = (u32)&lbl_80274944;

    lbl_80375618 = r0;
    lbl_80375620 = r0;

    r28[1] = r5;
    r12[1] = r5;
    r29[1] = r5;
    r11[1] = r5;

    lbl_80375618 = (u32)((u8*)&lbl_8028FF08 + 0x338);
    lbl_80375620 = (u32)((u8*)&lbl_8028FF08 + 0x338);

    r28[1] = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    lbl_80375618 = (u32)((u8*)&lbl_8028FF08 + 0x338);
    lbl_80375620 = (u32)((u8*)&lbl_8028FF08 + 0x338);

    r12[1] = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    r29[1] = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    r28[1] = (u32)((u8*)&lbl_8028FF08 + 0x41c);

    lbl_80375618 = (u32)((u8*)&lbl_8028FF08 + 0x2ac);
    lbl_80375620 = (u32)((u8*)&lbl_8028FF08 + 0x2ac);

    r11[1] = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    r12[1] = (u32)((u8*)&lbl_8028FF08 + 0x41c);
    r29[1] = (u32)((u8*)&lbl_8028FF08 + 0x41c);
    r28[1] = (u32)&lbl_80290688;

    lbl_80375618 = (u32)&lbl_80290768;
    *(u32*)((u8*)&lbl_80375620 + 0) = (u32)(r18 + 0x12f);
    lbl_80375620 = (u32)&lbl_80290714;

    r31[0] = (u32)((u8*)&lbl_8028FF08);
    r31[4] = (u32)((u8*)&lbl_8028FF08);
    r31[9] = (u32)((u8*)&lbl_8028FF08);
    r31[14] = (u32)((u8*)&lbl_8028FF08);

    __construct_array((u8*)r31 + 0x4c, (void*)fn_800731E0, 0, 0x8, 0x4);

    u32* r10 = (u32*)((u8*)r31 + 0x94);
    u32* r9  = (u32*)((u8*)r31 + 0x80);
    r10[1] = (u32)&lbl_8028E500;
    r9[1]  = (u32)&lbl_8028E500;
    r10[1] = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    r9[1]  = (u32)((u8*)&lbl_8028FF08 + 0x6f4);
    r10[1] = (u32)((u8*)&lbl_8028FF08 + 0x41c);
    r9[1]  = (u32)((u8*)&lbl_8028FF08 + 0x41c);
    ((u32*)((u8*)r31 + 0x80))[1] = (u32)&lbl_8028FF08 + 0x108;
    r10[1] = (u32)((u8*)&lbl_8028FF08 + 0x7c);
    r31[0x80/4] = (u32)((u8*)r31 + 0x6c);
    r31[0x94/4] = (u32)((u8*)r31 + 0x6c);
    *(u16*)((u8*)r9 + 0xe) = 0;
    *(u16*)((u8*)r9 + 0x10) = 0x46;
    *(u16*)((u8*)r10 + 0xe) = 0;
    *(u16*)((u8*)r10 + 0x10) = 0x46;
    r10[1] = (u32)((u8*)&lbl_8028FF08 + 0x7c);

    fn_8001C874((u32*)((u8*)r31 + 0xa8));
    __register_global_object((void*)fn_8001C700, (u8*)r31 + 0xa8, 0);
}

#pragma init (fn_80073020)