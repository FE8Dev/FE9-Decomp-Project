#include <dolphin/types.h>

extern u8 lbl_803754B8[];
extern u32 lbl_8032A6EC;
extern void fn_800C381C(u32*);
extern void fn_8001C700(void);
extern u8 lbl_802D4990[];
extern void __register_global_object(void*, void*, void*);

void fn_8001EFA0(void) {
    u8* r31 = lbl_803754B8;
    u32 r5 = 0;
    u8 r0 = r31[5];
    r0 = (r0 & ~0x3f) | (r5 & 0x3f);
    *(u32*)r31 = r5;
    r0 = r0 & 0xff;
    r31[5] = r0;
    u8 r3 = r0 & 0xff;
    r3 = (r3 & ~0x80) | ((r5 << 7) & 0x80);
    r0 = r3 & 0xff;
    r0 = (r0 & ~0x40) | ((r5 << 6) & 0x40);
    r31[5] = r3;
    r31[4] = (u8)r5;
    r31[5] = r0;
    if (r0 & 0x3f) {
        fn_800C381C((u32*)&lbl_8032A6EC);
        r0 = r31[5];
        r0 = (r0 & ~0x3f) | 0;
        r31[5] = r0;
    }
    __register_global_object((void*)fn_8001C700, lbl_803754B8, lbl_802D4990);
}

#pragma init (fn_8001EFA0)