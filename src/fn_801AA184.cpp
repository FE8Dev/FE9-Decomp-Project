#include <dolphin/types.h>

extern u8 lbl_8033AEAC[];
extern void fn_801AA3A4(u8*);
extern void fn_801AA1C0(void);
extern u8 lbl_8033AEA0[];
extern void __register_global_object(void*, void*, void*);

void fn_801AA184(void) {
    fn_801AA3A4(lbl_8033AEAC);
    __register_global_object((void*)fn_801AA1C0, lbl_8033AEA0, 0);
}

#pragma init (fn_801AA184)