#include <dolphin/types.h>

extern u32 lbl_802D47A8;
extern u32 lbl_8028E0F4;
extern u32 lbl_8028E154;
extern u32 lbl_8028E13C;
extern u32 lbl_8028E124;
extern u32 lbl_8028E10C;

void fn_80019660(void) {
    u32* base = (u32*)&lbl_802D47A8;
    u32* r8  = base;
    u32* r9  = (u32*)((u8*)base + 0x78);
    u32* r10 = (u32*)((u8*)base + 0xf0);
    u32* r11 = (u32*)((u8*)base + 0x16c);
    u32 r7 = (u32)&lbl_8028E0F4;
    *(u32*)((u8*)r8  + 0x74) = r7;
    *(u32*)((u8*)r9  + 0x74) = r7;
    *(u32*)((u8*)r10 + 0x74) = r7;
    *(u32*)((u8*)r11 + 0x74) = r7;
    *(u32*)((u8*)r8  + 0x74) = (u32)&lbl_8028E154;
    *(u32*)((u8*)r9  + 0x74) = (u32)&lbl_8028E13C;
    *(u32*)((u8*)r10 + 0x74) = (u32)&lbl_8028E124;
    *(u32*)((u8*)r11 + 0x74) = (u32)&lbl_8028E10C;
}

#pragma init (fn_80019660)