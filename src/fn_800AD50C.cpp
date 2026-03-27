#include <dolphin/types.h>

extern u8 lbl_8031CA94[];
extern void fn_800AD5F4(void);
extern void fn_800AD59C(void);
extern void fn_800AD564(void);
extern u8 lbl_8031CA88[];
extern void fn_80234FB0(void*, void*, void*, u32, u32);
extern void __register_global_object(void*, void*, void*);

void fn_800AD50C(void) {
    fn_80234FB0(lbl_8031CA94, (void*)fn_800AD5F4, (void*)fn_800AD59C, 0x10, 0x10);
    __register_global_object(0, (void*)fn_800AD564, lbl_8031CA88);
}

#pragma init (fn_800AD50C)