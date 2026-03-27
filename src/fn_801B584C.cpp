#include <dolphin/types.h>

extern u32 lbl_803764E0;
extern void fn_8001C874(u32*);
extern void fn_8001C700(void);
extern u8 lbl_8033BC60[];
extern void __register_global_object(void*, void*, void*);

void fn_801B584C(void) {
    fn_8001C874((u32*)&lbl_803764E0);
    __register_global_object((void*)fn_8001C700, lbl_8033BC60, 0);
}

#pragma init (fn_801B584C)