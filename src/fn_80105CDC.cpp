#include <dolphin/types.h>

extern u32 lbl_80335B44;
extern u32 lbl_80335B38;
extern void fn_80105B0C(void);
extern void __register_global_object(void*, void*, void*);

void fn_80105CDC(void) {
    u32* ptr = (u32*)&lbl_80335B44;
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
    ptr[3] = 0;
    __register_global_object((void*)fn_80105B0C, (void*)&lbl_80335B38, 0);
}

#pragma init (fn_80105CDC)