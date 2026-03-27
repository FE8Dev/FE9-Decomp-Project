#include <dolphin/types.h>

extern u32 lbl_8028D860;
extern u32 lbl_8028DE14;
extern void fn_80011B00(void);
extern u8 lbl_802B9314[];
extern u32 lbl_80375400;
extern void __register_global_object(void*, void*, void*);

void fn_80011A88(void) {
    u32* ptr = (u32*)&lbl_80375400;
    ptr[0] = (u32)&lbl_8028D860;
    ptr[1] = 0;
    ptr[0] = (u32)&lbl_8028DE14;
    __register_global_object((void*)fn_80011B00, lbl_802B9314, (void*)&lbl_80375400);
}

#pragma init (fn_80011A88)