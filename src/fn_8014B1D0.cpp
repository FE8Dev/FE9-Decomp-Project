#include <dolphin/types.h>

extern u8 lbl_80339F08[];
extern void fn_8014B2A0(void);
extern void fn_8014B278(void);
extern void fn_8014B250(void);
extern void __construct_array(void*, void*, void*, u32, u32);

void fn_8014B1D0(void) {
    __construct_array(lbl_80339F08,        (void*)fn_8014B2A0, 0, 0x30, 0x4);
    __construct_array(lbl_80339F08 + 0xc0, (void*)fn_8014B278, 0, 0x30, 0xa);
    __construct_array(lbl_80339F08 + 0x2a0,(void*)fn_8014B250, 0, 0x30, 0x1c);
}

#pragma init (fn_8014B1D0)