#include <dolphin/types.h>

extern u8 lbl_802BB9C4[];
extern void fn_80017054(void);
extern void fn_80016A84(void);
extern void fn_8001701C(void);
extern u8 lbl_802BB9B8[];
extern void fn_80234FB0(void*, void*, void*, u32, u32);
extern void __register_global_object(void*, void*, void*);

void fn_80016FC4(void) {
    fn_80234FB0(lbl_802BB9C4, (void*)fn_80017054, (void*)fn_80016A84, 0x280, 0x9f);
    __register_global_object(0, (void*)fn_8001701C, lbl_802BB9B8);
}

#pragma init (fn_80016FC4)