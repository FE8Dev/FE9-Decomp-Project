#include <dolphin/types.h>

extern u8 lbl_8033BC38[];

void fn_801B08D4(void) {
    u32* r28 = (u32*)lbl_8033BC38;
    u32 v[9];
    u8* p;

    p = (u8*)&v[7]; p[0]=0x80; p[1]=0x80; p[2]=0x80; p[3]=0xFF;
    u32 r29 = v[7];
    p = (u8*)&v[6]; p[0]=0x60; p[1]=0x60; p[2]=0x60; p[3]=0xFF;
    u32 r30 = v[6];
    p = (u8*)&v[5]; p[0]=0xAA; p[1]=0xAA; p[2]=0xAA; p[3]=0xFF;
    u32 r12v = v[5];
    p = (u8*)&v[4]; p[0]=0xB4; p[1]=0x96; p[2]=0x5A; p[3]=0xFF;
    u32 r9v = v[4];
    p = (u8*)&v[3]; p[0]=0x6E; p[1]=0xA0; p[2]=0x5A; p[3]=0xFF;
    u32 r6v = v[3];
    p = (u8*)&v[2]; p[0]=0x6E; p[1]=0x8C; p[2]=0xB4; p[3]=0xFF;
    u32 r5v = v[2];
    p = (u8*)&v[1]; p[0]=0x96; p[1]=0x5A; p[2]=0xA0; p[3]=0xFF;
    u32 r4v = v[1];
    p = (u8*)&v[0]; p[0]=0xAA; p[1]=0x5A; p[2]=0x50; p[3]=0xFF;
    u32 r3v = v[0];
    p = (u8*)&v[8]; p[0]=0xD2; p[1]=0x6E; p[2]=0x96; p[3]=0xFF;
    u32 r0v = v[8];

    r28[0] = r29;
    r28[1] = r30;
    r28[2] = r12v;
    r28[3] = r9v;
    r28[4] = r6v;
    r28[5] = r5v;
    r28[6] = r4v;
    r28[7] = r3v;
    r28[8] = r0v;
}

#pragma init (fn_801B08D4)