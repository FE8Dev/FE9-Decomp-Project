#include <dolphin/types.h>

extern u8 lbl_8028EF70[];
extern u8 lbl_802FA198[];
extern u8 lbl_8028F378[];
extern u8 lbl_8028F344[];
extern u32 lbl_80375518;
extern void fn_8001C874(u32*);
extern void fn_8001C700(void);
extern void __register_global_object(void*, void*, void*);

void fn_80033220(void) {
    u8* r31 = lbl_802FA198;
    u8* r7 = r31 + 0xc;
    u8* r6 = r31 + 0x0;
    *(u32*)(r7 + 4) = (u32)lbl_8028EF70;
    *(u32*)(r6 + 4) = (u32)lbl_8028EF70;
    *(u32*)(r7 + 4) = (u32)lbl_8028F378;
    *(u32*)(r6 + 4) = (u32)lbl_8028F378;
    *(u32*)(r7 + 4) = (u32)lbl_8028F344;
    fn_8001C874((u32*)&lbl_80375518);
    __register_global_object((void*)fn_8001C700, r31 + 0xdc, 0);
}

#pragma init (fn_80033220)