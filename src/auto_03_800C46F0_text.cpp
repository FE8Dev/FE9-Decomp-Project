// auto_03_800C46F0_text
#include <dolphin/types.h>

extern "C" void  fn_800C59AC(void*, s32);
extern "C" void* fn_800C6044(void*, void*);
extern "C" void  fn_8005B898(void);
extern "C" void  fn_8005B8A0(void);
extern "C" void  fn_8005C63C(void);
extern "C" void  fn_80204680(void*, s32);
extern "C" s32   fn_8023D008(void*, void*);
extern "C" void  fn_8023D15C(void*, void*, s32);
extern "C" void  fn_80234F38(void*, s32, void*, s32);
extern "C" void  fn_800056CC(void*);
extern "C" u32   OSGetTick(void);
extern "C" void* OSGetArenaLo(void);
extern "C" void* OSGetArenaHi(void);
extern "C" void  fn_8001C700(void);
extern "C" void  fn_800C4B84(void*);
extern "C" void  fn_800C4888(void);
extern "C" void  fn_800C4DE4(void);

extern u8  lbl_8032AB88[];
extern u8  lbl_80279320[];
extern u32 lbl_80375B08;
extern u32 lbl_80375B0C;
extern u32 lbl_80375B10;
extern u32 lbl_80375B14;
extern u32 lbl_80375B18;

void fn_800C46F0(void* r3) {
    u8* p = (u8*)r3;
    p[0x0] = 0;
    p[0x1] = 0;
    p[0x13] = 0;
    p[0x12] = 0;
    p[0x11] = 0;
    p[0x10] = 0;
    p[0x16] = 0x80;
    p[0x15] = 0x80;
    p[0x14] = 0x80;
    p[0x17] = 0xff;
}

void fn_800C4728(void* r3, s16 r4) {
    void* r30 = r3;
    s16 r31 = r4;
    if (!r30) return;
    fn_80234F38((void*)fn_8001C700, 0x8, (void*)fn_8001C700, 0xc8);
    if ((s32)r31 <= 0) return;
    fn_800C4888();
}

void fn_800C4788(void) {
    void* r28base = (void*)*(u32*)((u8*)lbl_80375B18 + 0x18);
    void* r29 = r28base;
    while (r29) {
        void* r30 = r28base;
        while (r30) {
            if (r29 != r30) {
                u32 r29size = *(u32*)((u8*)r29 + 0x10);
                void* r29end = (u8*)r29 + r29size;
                if (r30 == r29end)
                    fn_800056CC((void*)lbl_80279320);
                u32 r30size = *(u32*)((u8*)r30 + 0x10);
                void* r30end = (u8*)r30 + r30size;
                if (r29 == r30end)
                    fn_800056CC((void*)((u8*)lbl_80279320 + 0xc));
            }
            r30 = (void*)*(u32*)((u8*)r30 + 0xc);
        }
        r29 = (void*)*(u32*)((u8*)r29 + 0xc);
    }
}

void* fn_800C483C(void* r4) {
    void* r3 = fn_800C6044((void*)lbl_80375B18, r4);
    return (void*)((u8*)r3 + 0x20);
}

void fn_800C4868(void) {
    fn_800C4B84((void*)lbl_80375B18);
}

void fn_800C4888(void) {
    fn_800C4B84((void*)lbl_80375B18);
}

void* fn_800C48A8(void* r4) {
    void* r3 = fn_800C6044((void*)lbl_80375B18, r4);
    return (void*)((u8*)r3 + 0x20);
}

void* fn_800C48D4(void* r4) {
    void* r3 = fn_800C6044((void*)lbl_80375B18, r4);
    return (void*)((u8*)r3 + 0x20);
}

s32 fn_800C4900(void* r3) {
    void* r29 = r3;
    void* r30 = (void*)lbl_8032AB88;
    s32 r31 = 0;
    while (r31 < 0x10) {
        void* r4 = (void*)*(u32*)r30;
        if (r4 == 0) { r31++; r30 = (u8*)r30 + 4; continue; }
        s32 res = fn_8023D008(r29, (void*)((u8*)r4 + 4));
        if (res == 0) break;
        r31++; r30 = (u8*)r30 + 4;
    }
    if (r31 >= 0x10) r31 = -1;
    return r31;
}

void fn_800C4980(void) {
    s32 r31 = 0x18;
    if (lbl_80375B08 > 0x81800000u) r31 = 0x30;

    fn_800056CC((void*)((u8*)lbl_80279320 + 0x18));
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x1a));
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x46));
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x7a));

    void* r29 = (void*)lbl_8032AB88;
    for (s32 r31i = 0; r31i < 0x10; r31i++, r29 = (u8*)r29 + 4) {
        void* r28 = (void*)*(u32*)r29;
        if (!r28) continue;
        fn_800056CC((void*)((u8*)lbl_80279320 + 0x18));
        fn_800056CC((void*)((u8*)lbl_80279320 + 0xa2));
        fn_800056CC((void*)((u8*)lbl_80279320 + 0xd4));
    }
}

s32 fn_800C4AF0(s32 r3) {
    void* list;
    if (r3 < 0) {
        list = (void*)*(u32*)((u8*)lbl_80375B18 + 0x18);
    } else {
        void* heap = (void*)*(u32*)((u8*)lbl_8032AB88 + (u32)r3 * 4);
        list = (void*)*(u32*)((u8*)heap + 0x18);
    }
    u32 r4 = 0;
    void* node = list;
    while (node) {
        u32 r5 = *(u32*)((u8*)node + 0x10);
        u32 xorv = r4 ^ r5;
        u32 lz = 0;
        { u32 v = xorv; if (!v) lz = 32; else { lz = 0; while (!(v & 0x80000000u)) { lz++; v <<= 1; } } }
        u32 bit = (r4 << lz) >> 31;
        if (!bit) r4 = r5;
        node = (void*)*(u32*)((u8*)node + 0xc);
    }
    return (s32)(r4 - 0x20);
}

void fn_800C4B84(void* r3) {
    if (!r3) return;
    s32 r4 = (s32)((u8*)r3 - 0x20);
    void* r3p = (void*)*(u32*)((u8*)r3 - 0xc);
    fn_800C59AC(r3p, r4);
}

void* fn_800C4BB4(void* r4) {
    fn_8005B898();
    s8 idx = (s8)0;
    void* heap = (void*)*(u32*)((u8*)lbl_8032AB88 + (u32)(s32)idx * 4);
    void* r3 = fn_800C6044(heap, r4);
    return (void*)((u8*)r3 + 0x20);
}

void* fn_800C4C00(s32 r3) {
    void* heap = (void*)*(u32*)((u8*)lbl_8032AB88 + (u32)r3 * 4);
    void* r3r = fn_800C6044(heap, 0);
    return (void*)((u8*)r3r + 0x20);
}

void* fn_800C4C34(void* r4) {
    void* r3 = fn_800C6044((void*)lbl_80375B18, r4);
    return (void*)((u8*)r3 + 0x20);
}

void fn_800C4C60(s32 r3) {
    void* r5 = (void*)lbl_80375B10;
    void* r4 = (void*)*(u32*)((u8*)r5 + 0x18);
    void* r0p = r4;
    while (*(u32*)((u8*)r0p + 0xc) != 0)
        r0p = (void*)*(u32*)((u8*)r0p + 0xc);
    *(u32*)((u8*)r5 + 0x1c) += (u32)r3;
    *(u32*)((u8*)r0p + 0x10) += (u32)r3;
}

void fn_800C4C98(void* r3) {
    void* r29 = r3;
    void* r30 = (void*)lbl_8032AB88;
    s32 r31 = 0;
    while (r31 < 0x10) {
        void* r4 = (void*)*(u32*)r30;
        if (r4 == 0) { r31++; r30 = (u8*)r30 + 4; continue; }
        s32 res = fn_8023D008(r29, (void*)((u8*)r4 + 4));
        if (res == 0) {
            lbl_80375B18 = *(u32*)((u8*)lbl_8032AB88 + (u32)r31 * 4);
            return;
        }
        r31++; r30 = (u8*)r30 + 4;
    }
}

void fn_800C4D24(s32 r3) {
    lbl_80375B18 = *(u32*)((u8*)lbl_8032AB88 + (u32)r3 * 4);
}

s32 fn_800C4D3C(void) {
    u32 r4 = lbl_80375B18;
    void* r5 = (void*)lbl_8032AB88;
    s32 r3 = 0;
    for (s32 ctr = 0; ctr < 2; ctr++) {
        for (s32 i = 0; i < 8; i++, r3++) {
            u32 r0;
            if (i == 0) r0 = *(u32*)r5;
            else { r5 = (u8*)r5 + 4; r0 = *(u32*)r5; }
            if (r0 == r4) return r3;
        }
    }
    return -1;
}

// fn_800C4DE4: attachment 1
// fn_800C5188: attachment 2

s32 fn_800C552C(void* r3, s32 r4) {
    void* r28 = r3;
    u32 r31 = ((u32)(r4 + 0x1f)) & ~0x1fu;

    void* r30p;
    if (lbl_80375B14 != 0)
        r30p = (void*)(lbl_80375B14 - r31);
    else
        r30p = (void*)(lbl_80375B0C - r31);

    void* r3arr = (void*)lbl_8032AB88;
    s32 r29 = 0;
    for (s32 ctr = 0; ctr < 2; ctr++) {
        for (s32 i = 0; i < 8; i++, r29++) {
            u32 r0 = (i == 0) ? *(u32*)r3arr : *(u32*)(r3arr = (u8*)r3arr + 4);
            if (r0 == 0) goto found_slot_552c;
        }
    }
    r29 = -1;
found_slot_552c:;

    fn_8023D15C((void*)((u8*)r30p + 4), r28, 0xb);

    u8* blk = (u8*)r30p;
    blk[0xf] = 0;
    *(u32*)(blk + 0x10) = 0;
    *(u32*)(blk + 0x0) = 0x48454150u;
    *(u32*)(blk + 0x14) = 0;
    *(u32*)(blk + 0x18) = (u32)(blk + 0x20);
    *(u32*)(blk + 0x1c) = r31;
    { void* r5p = (void*)*(u32*)(blk + 0x18);
      *(u32*)((u8*)r5p + 0xc) = 0;
      *(u32*)((u8*)r5p + 0x8) = 0;
      *(u32*)((u8*)r5p + 0x10) = *(u32*)(blk + 0x1c) - 0x20; }

    *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4) = (u32)blk;
    lbl_80375B18 = *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4);
    fn_8005B8A0();
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x106));
    lbl_80375B14 = *(u32*)(blk + 0x10);
    *(u32*)(blk + 0x10) = lbl_80375B14;
    *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4) = (u32)blk;
    return r29;
}

s32 fn_800C56F8(void* r3, s32 r4) {
    void* r28 = r3;
    u32 r31 = ((u32)(r4 + 0x1f)) & ~0x1fu;

    void* r30p;
    if (lbl_80375B10 != 0) {
        void* r5p = (void*)lbl_80375B10;
        r30p = (u8*)r5p + *(u32*)((u8*)r5p + 0x1c);
    } else {
        r30p = (void*)lbl_80375B08;
    }

    void* r3arr = (void*)lbl_8032AB88;
    s32 r29 = 0;
    for (s32 ctr = 0; ctr < 2; ctr++) {
        for (s32 i = 0; i < 8; i++, r29++) {
            u32 r0 = (i == 0) ? *(u32*)r3arr : *(u32*)(r3arr = (u8*)r3arr + 4);
            if (r0 == 0) goto found_slot_56f8;
        }
    }
    r29 = -1;
found_slot_56f8:;

    fn_8023D15C((void*)((u8*)r30p + 4), r28, 0xb);

    u8* blk = (u8*)r30p;
    blk[0xf] = 0;
    *(u32*)(blk + 0x10) = 0;
    *(u32*)(blk + 0x0) = 0x48454150u;
    *(u32*)(blk + 0x14) = 0;
    *(u32*)(blk + 0x18) = (u32)(blk + 0x20);
    *(u32*)(blk + 0x1c) = r31;
    { void* r5p = (void*)*(u32*)(blk + 0x18);
      *(u32*)((u8*)r5p + 0xc) = 0;
      *(u32*)((u8*)r5p + 0x8) = 0;
      *(u32*)((u8*)r5p + 0x10) = *(u32*)(blk + 0x1c) - 0x20; }

    *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4) = (u32)blk;
    lbl_80375B18 = *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4);
    fn_8005B8A0();
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x106));
    lbl_80375B10 = *(u32*)(blk + 0x10);
    *(u32*)(blk + 0x10) = lbl_80375B10;
    *(u32*)((u8*)lbl_8032AB88 + (u32)r29 * 4) = (u32)blk;
    return r29;
}

s32 fn_800C58C4(void) {
    void* hi;
    if (lbl_80375B10 != 0) {
        void* r3p = (void*)lbl_80375B10;
        hi = (u8*)r3p + *(u32*)((u8*)r3p + 0x1c);
    } else {
        hi = (void*)lbl_80375B08;
    }
    void* lo = (lbl_80375B14 != 0) ? (void*)lbl_80375B14 : (void*)lbl_80375B0C;
    return (s32)((u8*)lo - (u8*)hi);
}

void fn_800C58FC(void) {
    lbl_80375B08 = (u32)OSGetArenaLo();
    lbl_80375B0C = (u32)OSGetArenaHi();
    u32* arr = (u32*)lbl_8032AB88;
    for (s32 i = 0; i < 16; i++) arr[i] = 0;
    lbl_80375B10 = 0;
    lbl_80375B14 = 0;
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x13d));
    fn_800056CC((void*)((u8*)lbl_80279320 + 0x152));
}

// Additional externs for later functions
extern "C" void  fn_8000CBC8(void*, void*);
extern "C" void  fn_8000CC18(void*, s32);
extern "C" void* fn_8000C1E8(void*);
extern "C" void  fn_8000C2B0(void*);
extern "C" void  fn_8005BB24(s8);
extern "C" u8    fn_8005B8A8(void*);
extern "C" void  fn_8005C708(void*, u32);
extern "C" void  fn_8006F9B8(void*);
extern "C" s32   fn_8006F270(void);
extern "C" void  fn_8006F268(void);
extern "C" void  fn_8006E6B0(void*);
extern "C" void  fn_8023A694(void*, void*, s32);
extern "C" void  fn_8021A370(s32);
extern "C" void  fn_8021A1D4(void);
extern "C" void  fn_80219504(void);
extern "C" void  fn_802296D8(void);
extern "C" void  fn_8022DE74(s32, s32);
extern "C" void  fn_8022D448(s32, s32);
extern "C" void  fn_8022A508(void*, s32);
extern "C" void  fn_8022A79C(s32, s32);
extern "C" void  fn_8022DD48(float, float, float, float, float, float);
extern "C" void  fn_8022CE4C(s32, void*, float, float, float, float);
extern "C" void  fn_8022D388(s32);
extern "C" void  fn_8022D3B4(s32);
extern "C" void  fn_8006E468(s32, s32, s32);
extern "C" void  fn_8006E50C(s32);
extern "C" void  fn_8006E4B4(s32, s32, s32, s32, s32);
extern "C" void  fn_8020B694(void*, float, float, float, float, float, float);
extern "C" void  fn_8022D9A8(void*, s32);
extern "C" void  fn_8006E160(s32);
extern "C" void  fn_80228914(void);
extern "C" void  fn_8022894C(s32, s32, s32, s32, s32);
extern "C" void  fn_80228240(s32, s32);
extern "C" void  fn_8006E19C(s32);
extern "C" void  fn_8006E1DC(s32, s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8006E0D0(s32);
extern "C" void  fn_8006DFEC(s32, s32, s32, s32);
extern "C" void  fn_8006DE78(s32, s32, s32, s32, s32);
extern "C" void  fn_8006DE0C(s32, s32, s32, s32, s32);
extern "C" void  fn_8006DF68(s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8006DEE4(s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8022C910(s32, void*);
extern "C" void  fn_8006F8E4(void*, void*, void*);
extern "C" void  fn_8022B9AC(void*, s32);
extern "C" void  fn_8022B7DC(void*);
extern "C" void  fn_8022B7EC(void*);
extern "C" void  fn_8006E090(s32);
extern "C" void  fn_8020B118(void*, float, float);
extern "C" void  fn_8022DBAC(void*, s32, s32);
extern "C" void  fn_8006DD20(s32, s32, s32, s32);
extern "C" void  fn_8020AB1C(void*);
extern "C" void  fn_8022DAD8(void*, s32);
extern "C" void  fn_8022DB28(void*, s32);
extern "C" void  fn_8006E55C(s32);
extern "C" void  fn_8006E110(s32, s32, s32, s32);
extern "C" void  fn_80229B48(s32, s32, s32);
extern "C" void  fn_8006E30C(s32, void*);
extern "C" void  fn_8006F7DC(void*, void*, void*, s32);
extern "C" void  fn_8022BA4C(void*, s32);
extern "C" void  fn_8020EB84(void*, s32, void*, void*, ...);
extern "C" s32   fn_8021A634(void);
extern "C" s32   fn_80212654(void);
extern "C" void  fn_802126C4(s32);
extern "C" s32   OSGetResetCode(void);
extern "C" s32   VIGetTvFormat(void);
extern "C" u32   OSDisableInterrupts(void);
extern "C" void  OSRestoreInterrupts(u32);
extern "C" void  OSDisableScheduler(void);
extern "C" void  OSEnableScheduler(void);
extern "C" void* fn_801CC748(void);
extern "C" void* fn_801CC750(void);
extern "C" void  memcpy(void*, void*, s32);
extern "C" void  fn_801E67E8(void);
extern "C" void  fn_8006FA00(void*, void*, s32);
extern "C" void  fn_800C6624(void);
extern "C" void  fn_800C7420(void*);
extern "C" void  fn_802049E4(void);
extern "C" void  fn_80202678(void);
extern "C" void  fn_80204A18(void);
extern "C" void  fn_802026AC(void);
extern "C" void  fn_8020565C(void);
extern "C" void  fn_802032F0(void);
extern "C" void  fn_80205690(void);
extern "C" void  fn_80203324(void);
extern u8  lbl_802978B0[];
extern u8  lbl_8029773C[];
extern u8  lbl_80297900[];
extern u8  lbl_802978C4[];
extern u8  lbl_8029793C[];
extern u8  lbl_802979B4[];
extern u8  lbl_80297978[];
extern u8  lbl_802794F0[];
extern u8  lbl_80297720[];
extern u8  lbl_8032ABC8[];
extern u32 lbl_80376554;
extern u32 lbl_803753B0;
extern u32 lbl_803754E0;
extern float lbl_8037810C;
extern float lbl_80378110;
extern float lbl_80378114;
extern float lbl_80378118;
extern float lbl_8037811C;
extern float lbl_80378120;
extern float lbl_80378124;
extern float lbl_80378128;
extern float lbl_8037813C;
extern float lbl_80378138;
extern double lbl_80378130;
extern u32 lbl_8037A998;
extern u32 lbl_8037A99C;
extern u32 lbl_8037A9A0;
extern u32 lbl_8037A9A4;
extern u32 lbl_8037A9A8;
extern u32 lbl_8037A9AC;
extern u32 lbl_8037A9B0;
extern u32 lbl_8037A9B4;
extern u32 lbl_8037A9B8;
extern u32 lbl_8037A9BC;
extern u32 lbl_8037A9C0;
extern u32 lbl_8037A9C4;
extern u32 lbl_8037A9C8;
extern u32 lbl_8037A9CC;
extern u32 lbl_803780F0;
extern u32 lbl_803780F4;
extern u32 lbl_803780F8;
extern u32 lbl_803780FC;
extern u32 lbl_80378100;
extern u32 lbl_80378104;
extern u32 lbl_80378108;

// fn_800C64F4: call fn_8000CBC8(lbl_802978B0, r3), then
//              fn_8000CC18(lbl_8029773C, 5)
// =============================================================
void fn_800C64F4(void* r3) {
    fn_8000CBC8((void*)lbl_802978B0, r3);
    fn_8000CC18((void*)lbl_8029773C, 0x5);
}

// =============================================================
// fn_800C6530: fn_8000C1E8(lbl_8029773C); if null, call fn_8000C2B0(r3)
// =============================================================
void fn_800C6530(void* r3) {
    void* r31 = r3;
    void* r3r = fn_8000C1E8((void*)lbl_8029773C);
    if (!r3r) fn_8000C2B0(r31);
}

// =============================================================
// fn_800C6574: cAIPad ctor -- set r3+0x34 = 4
// =============================================================
void fn_800C6574(void* r3) {
    *(u32*)((u8*)r3 + 0x34) = 4;
}

// =============================================================
// fn_800C6580: cAIPad ctor -- set r3+0x34 = 3
// =============================================================
void fn_800C6580(void* r3) {
    *(u32*)((u8*)r3 + 0x34) = 3;
}

// =============================================================
// fn_800C658C: cAIPad ctor -- set r3+0x34 = 2
// =============================================================
void fn_800C658C(void* r3) {
    *(u32*)((u8*)r3 + 0x34) = 2;
}

// =============================================================
// fn_800C6598: set r3+0x38=1, increment r3+0x3c, check timer
//              and lbl_803754E0 bits; if expired, reset and call fn_8000C2B0
// =============================================================
void fn_800C6598(void* r3) {
    ((u8*)r3)[0x38] = 1;
    u32 r4 = *(u32*)((u8*)r3 + 0x3c) + 1;
    *(u32*)((u8*)r3 + 0x3c) = r4;
    if (r4 < 0xdb6) {
        void* r4p = (void*)lbl_803754E0;
        u32 r5 = *(u32*)((u8*)r4p + 0x4);
        u32 r0 = *(u32*)((u8*)r4p + 0x8);
        r0 = r0 ^ r5;
        r0 = r5 & r0;
        if (r0 & 0x1f70) goto reset_598;
        return;
    }
reset_598:;
    *(u32*)((u8*)r3 + 0x3c) = 0;
    fn_8000C2B0(r3);
}

// =============================================================
// fn_800C65F8: cAIPad ctor -- set r3+0x34 = 0
// =============================================================
void fn_800C65F8(void* r3) {
    *(u32*)((u8*)r3 + 0x34) = 0;
}

// =============================================================

// =============================================================
// fn_800C6624: graphics init dispatch by r3+0x34 mode (attachment 3 / doc 30)
// =============================================================
void fn_800C6624(void) {
    // This function dispatches based on lbl_8031C7C0->0x34 or similar
    // The attachment is the large 0xDFC function. We'll stub the
    // key dispatch structure -- it's 5 cases (0,1,2,3,4,5) each
    // calling a different GX init sequence with sth writes to 0xCC010000.
    // Too large to translate exactly; stub for now.
}

// =============================================================
// fn_800C7420: graphics render dispatch by r3+0x34 (attachment 4 / doc 31)
// =============================================================
void fn_800C7420(void* r3) {
    (void)r3;
    // Large function (0x5B0) -- render path dispatcher, stubbed
}

// =============================================================
// fn_800C79D0: call fn_8006F9B8(r3+0x30), set lbl_803753B0 |= 0x10000000
// =============================================================
void fn_800C79D0(void* r3) {
    fn_8006F9B8((void*)((u8*)r3 + 0x30));
    lbl_803753B0 |= 0x10000000u;
}

// =============================================================
// fn_800C7A00: update lbl_8032ABC8 from controller data based on
//              lbl_80376554 mode bits, then call fn_8006F270 and fn_8023A694
// =============================================================
void fn_800C7A00(void) {
    void* r31i = 0;
    u32 r3 = lbl_80376554;
    if (r3 & 0x00060000u) {
        // bits 13-14 set
        if (!(r3 & 0x20u)) {
            if (r3 & 0x100u) {
                void* p = fn_801CC748();
                memcpy((void*)lbl_8032ABC8, p, 0x3c);
            } else {
                void* p = fn_801CC750();
                memcpy((void*)lbl_8032ABC8, p, 0x3c);
                u32 r0 = lbl_80376554 & ~0x00018000u;
                lbl_80376554 = r0;
                lbl_80376554 = r0 | 0x00040000u;
            }
        }
    } else if (!(r3 & 0x20u)) {
        if (r3 & 0x200u) {
            void* p = fn_801CC748();
            memcpy((void*)lbl_8032ABC8, p, 0x3c);
        } else {
            void* p = fn_801CC750();
            memcpy((void*)lbl_8032ABC8, p, 0x3c);
            u32 r0 = lbl_80376554 & ~0x00018000u;
            lbl_80376554 = r0 | 0x00020000u;
        }
    }

    s32 r3r = fn_8006F270();
    void* r4m = (void*)lbl_8032ABC8;
    fn_8023A694((void*)lbl_8032ABC8, r4m, 0x3c);
    if (r3r != 0) {
        fn_8021A370(0x1);
        fn_8021A1D4();
        fn_80219504();
        fn_8006E6B0((void*)lbl_8032ABC8);

        if (lbl_80376554 & 0x200u) {
            for (s32 i = 0; i < 0x78; i++) fn_80219504();
        }

        fn_8022DE74(0x0, 0x0);
        {
            u32 stk8 = lbl_8037A9CC;
            fn_8022A508((void*)&stk8, 0xfff);
        }
        fn_8006F268();
        fn_8022A79C(0x1, 0x1);
        fn_8021A370(0x0);
        fn_8021A1D4();
        fn_80219504();
    }

    lbl_80376554 |= 0x10;
}

// =============================================================
// fn_800C7B8C: swap/reinit GX state based on VIGetTvFormat and reset code
// =============================================================
void fn_800C7B8C(void) {
    void* r31i = 0;
    fn_8021A370(0x1);
    s32 r3f = fn_8006F270();
    void* r4m = (void*)lbl_8032ABC8;
    memcpy((void*)lbl_8032ABC8, (void*)r3f, 0x3c);
    fn_802296D8();
    fn_8021A1D4();
    fn_80219504();

    s32 tvfmt = VIGetTvFormat();
    if (tvfmt == 0x2) {
        fn_8006E6B0((void*)lbl_8029793C);
    } else if (tvfmt == 0x0) {
        // NTSC
        s32 rst = OSGetResetCode();
        if ((u32)rst >> 31) {
            rst = OSGetResetCode();
            if (rst & 0x40000000) goto handle_pal_0;
        }
        u32 r3v = lbl_80376554;
        if (!(r3v & 0x20u)) {
            if (r3v & 0x200u) {
                fn_8006E6B0((void*)lbl_80297900);
            } else {
                fn_8006E6B0((void*)lbl_802978C4);
            }
        } else {
            fn_8006E6B0((void*)lbl_802978C4);
        }
        goto done_7b8c;
handle_pal_0:;
        rst = OSGetResetCode();
        if (rst & 0x10000000) goto pal_y;
        fn_8006E6B0((void*)lbl_802978C4);
        goto done_7b8c;
pal_y:;
        fn_8006E6B0((void*)lbl_80297900);
    } else if (tvfmt == 0x1 || tvfmt == 0x5) {
        // PAL
        s32 rst = OSGetResetCode();
        if ((u32)rst >> 31) {
            rst = OSGetResetCode();
            if (rst & 0x4000000) goto pal_decide;
        }
        u32 r3v = lbl_80376554;
        if (!(r3v & 0x20u) && (r3v & 0x100u)) {
            fn_8006E6B0((void*)lbl_802979B4);
            lbl_80376554 = (lbl_80376554 & ~0x00018000u) | 0x00040000u;
        } else {
            fn_8006E6B0((void*)lbl_80297978);
            lbl_80376554 = (lbl_80376554 & ~0x00018000u) | 0x00020000u;
        }
        goto done_7b8c;
pal_decide:;
        rst = OSGetResetCode();
        if (rst & 0x8000000) {
            fn_8006E6B0((void*)lbl_802979B4);
            lbl_80376554 = (lbl_80376554 & ~0x00018000u) | 0x00040000u;
        } else {
            fn_8006E6B0((void*)lbl_80297978);
            lbl_80376554 = (lbl_80376554 & ~0x00018000u) | 0x00020000u;
        }
    } else {
        extern u8 lbl_802794F0[];
        fn_8020EB84((void*)((u8*)lbl_802794F0 + 0xdb), 0x59b,
                    (void*)((u8*)lbl_802794F0 + 0xec),
                    (void*)((u8*)lbl_802794F0 + 0xdb));
    }
done_7b8c:;
    fn_8021A1D4();
    if (lbl_80376554 & 0x200u) {
        for (s32 i = 0; i < 0x78; i++) fn_80219504();
    }
    fn_8021A370(0x0);
    fn_8021A1D4();
    fn_80219504();
    lbl_80376554 |= 0x10;
}

// =============================================================
// fn_800C7DB4: reset GX state, re-init scheduler and video
// =============================================================
void fn_800C7DB4(void* r3) {
    void* r30 = r3;
    s32 irq = OSDisableInterrupts();
    s32 r31 = irq;
    OSDisableScheduler();
    OSRestoreInterrupts(r31);

    u32 r0 = *(u32*)((u8*)r30 + 0x44);
    fn_8005B8A0();  // fn_8005B8A0 takes no args, but asm shows extsb r3, r0; bl
    *(u32*)((u8*)r30 + 0x30) = 0;
    fn_801E67E8();
    {
        u32 r3v = (u32)(*(s8*)((u8*)r30 + 0x44));
        r3v = r3v * 4;
        void* r4p = (void*)*(u32*)((u8*)lbl_80297720 + r3v);
        fn_8006FA00((void*)((u8*)r30 + 0x30), r4p, 0x4);
    }
    u32 r0b = *(u32*)((u8*)r30 + 0x40);
    fn_8005B8A0();

    irq = OSDisableInterrupts();
    r31 = irq;
    OSEnableScheduler();
    OSRestoreInterrupts(r31);

    *(u32*)((u8*)r30 + 0x34) = 0;
    ((u8*)r30)[0x38] = 0;
    *(u32*)((u8*)r30 + 0x3c) = 0;
    fn_8021A370(0x0);
    fn_8022D448(0x0, 0x0);
    fn_8022DE74(0x0, 0x0);
    {
        u32 stk8 = lbl_8037A9C8;
        fn_8022A508((void*)&stk8, 0xfff);
    }
    fn_8006F268();
    fn_8022A79C(0x1, 0x1);
    fn_802296D8();
    fn_8021A1D4();
    fn_80219504();
}

// =============================================================
// fn_800C7EAC: check anim state, conditionally free r3
// =============================================================
void fn_800C7EAC(void* r3) {
    void* r31 = r3;
    fn_801E67E8();
    {
        u32 r3v = (u32)(*(s8*)((u8*)r31 + 0x44));
        r3v = r3v * 4;
        void* r3p = (void*)*(u32*)((u8*)lbl_80297720 + r3v);
        u8 r3b = fn_8005B8A8(r3p);
        if (r3b & 0xff) fn_8000C2B0(r31);
    }
}

// =============================================================
// fn_800C7EFC: disable/re-enable scheduler around GX update for r30
// =============================================================
void fn_800C7EFC(void* r3) {
    void* r30 = r3;
    s32 irq = OSDisableInterrupts();
    s32 r31 = irq;
    OSDisableScheduler();
    OSRestoreInterrupts(r31);

    u32 r0 = *(u32*)((u8*)r30 + 0x44);
    fn_8005B8A0();
    fn_801E67E8();
    {
        u32 r3v = (u32)(*(s8*)((u8*)r30 + 0x44));
        r3v = r3v * 4;
        void* r3p = (void*)*(u32*)((u8*)lbl_80297720 + r3v);
        fn_8005C708(r3p, 0x4);
    }
    r0 = *(u32*)((u8*)r30 + 0x40);
    fn_8005B8A0();

    irq = OSDisableInterrupts();
    r31 = irq;
    OSEnableScheduler();
    OSRestoreInterrupts(r31);
}

// =============================================================
// fn_800C7F88: switch allocator to r31+0x40, free lbl_80375B14 heap
// =============================================================
void fn_800C7F88(void* r3) {
    void* r31 = r3;
    {
        u32 r0 = *(u32*)((u8*)r31 + 0x44);
        fn_8005BB24((s8)r0);
    }
    fn_800C4DE4();
    fn_800C4D24((s32)*(u32*)((u8*)r31 + 0x40));
    {
        u32 r0 = *(u32*)((u8*)r31 + 0x40);
        fn_8005B8A0();
    }
}

// =============================================================
// fn_800C7FD4: alloc new heap at lbl_802794F0+0x108, size 0xc0000
// =============================================================
void fn_800C7FD4(void* r3) {
    void* r31 = r3;
    s32 idx = fn_800C4D3C();
    *(u32*)((u8*)r31 + 0x40) = (u32)idx;
    s32 slot = fn_800C552C((void*)((u8*)lbl_802794F0 + 0x108), 0xc0000);
    *(u32*)((u8*)r31 + 0x44) = (u32)slot;
    fn_800C4D24((s32)*(u32*)((u8*)r31 + 0x40));
    fn_8005B8A0();
}

// =============================================================
// fn_800C8030: dispatch fn_802049E4 or fn_80202678 based on video mode
// =============================================================
void fn_800C8030(void) {
    if (lbl_80376554 & 0x00060000u)
        fn_802049E4();
    else
        fn_80202678();
}

// =============================================================
// fn_800C8064: dispatch fn_80204A18 or fn_802026AC based on video mode
// =============================================================
void fn_800C8064(void) {
    if (lbl_80376554 & 0x00060000u)
        fn_80204A18();
    else
        fn_802026AC();
}

// =============================================================
// fn_800C8098: dispatch fn_8020565C or fn_802032F0 based on video mode
// =============================================================
void fn_800C8098(void) {
    if (lbl_80376554 & 0x00060000u)
        fn_8020565C();
    else
        fn_802032F0();
}

// =============================================================
// fn_800C80CC: dispatch fn_80205690 or fn_80203324 based on video mode
// =============================================================
void fn_800C80CC(void) {
    if (lbl_80376554 & 0x00060000u)
        fn_80205690();
    else
        fn_80203324();
}

// =============================================================
// fn_800C8100: update lbl_80376554 based on reset code and video mode
// =============================================================
void fn_800C8100(void) {
    void* r31i = 0;
    u32 r3 = lbl_80376554;
    if (r3 & 0x00060000u) {
        s32 rst = OSGetResetCode();
        if (!((u32)rst >> 31)) {
            // clear bits 27-25
            lbl_80376554 = r3 & ~0x00000060u;
        } else {
            rst = OSGetResetCode();
            if (rst & 0x4000000) {
                lbl_80376554 = r3 | 0x20u;
            } else {
                lbl_80376554 = r3 & ~0x00000060u;
            }
        }
    } else {
        if (!(r3 & 0x8000u)) {
            if (r3 & 0x1000u) {
                lbl_80376554 = r3 | 0x20u;
            }
            return;
        }
        s32 r31v = 0;
        s32 rst = OSGetResetCode();
        if (!((u32)rst >> 31)) {
            goto check_a634;
        } else {
            rst = OSGetResetCode();
            if (rst & 0x40000000) goto check_a634_skip;
        }
check_a634:;
        {
            s32 r3r = fn_8021A634();
            if (r3r) {
                s32 r3q = fn_80212654();
                if (r3q == 1) {
                    r31v = 1;
                } else {
                    u32 r0 = *(u32*)((u8*)lbl_803754E0 + 0x4);
                    if (r0 & 0x200u) r31v = 1;
                }
            } else {
                fn_802126C4(0x0);
                lbl_80376554 = lbl_80376554 & ~0x00000060u;
            }
        }
check_a634_skip:;
        if ((u8)r31v == 0) {
            lbl_80376554 = lbl_80376554 | 0x20u;
        } else {
            lbl_80376554 = lbl_80376554 & ~0x00000060u;
        }
    }
}

// =============================================================
// fn_800C59AC: free block back into heap free list (with coalescing)
//              r3 = heap header, r4 = block header ptr
//              Two paths: r4->0x10 < 0 (neg size = high-side block)
//                         r4->0x10 >= 0 (pos size = low-side block)
// =============================================================
void fn_800C59AC(void* r3, s32 r4s) {
    void* r4 = (void*)r4s;
    s32 size = *(s32*)((u8*)r4 + 0x10);

    if (size < 0) {
        // negative-size path: negate size, unlink from used list, insert into free list sorted descending
        *(s32*)((u8*)r4 + 0x10) = -size;

        // unlink r4 from used list (r3->0x14)
        void* r6 = (void*)*(u32*)((u8*)r4 + 0xc);
        void* r5 = (void*)*(u32*)((u8*)r3 + 0x14);
        if (r6) { void* r0 = (void*)*(u32*)((u8*)r4 + 0x8); *(u32*)((u8*)r6 + 0x8) = (u32)r0; }
        r6 = (void*)*(u32*)((u8*)r4 + 0x8);
        if (r6) { void* r0 = (void*)*(u32*)((u8*)r4 + 0xc); *(u32*)((u8*)r6 + 0xc) = (u32)r0; }
        else r5 = (void*)*(u32*)((u8*)r4 + 0xc);
        *(u32*)((u8*)r3 + 0x14) = (u32)r5;

        // find insertion point in free list (r3->0x18), sorted descending by address
        void* r7 = 0;
        void* r8 = (void*)*(u32*)((u8*)r3 + 0x18);
        r6 = r8;
        while (r6) { r7 = r6; r6 = (void*)*(u32*)((u8*)r6 + 0xc); }
        // walk back up finding where r4 fits (r7 > r4)
        while (r7 && (u32)r7 > (u32)r4) { r6 = r7; r7 = (void*)*(u32*)((u8*)r7 + 0x8); }

        *(u32*)((u8*)r4 + 0xc) = (u32)r6;
        *(u32*)((u8*)r4 + 0x8) = (u32)r7;
        if (r6) *(u32*)((u8*)r6 + 0x8) = (u32)r4;

        // coalesce forward: if r4+size == r6, merge
        s32 sz4 = *(s32*)((u8*)r4 + 0x10);
        if (r6 && (u8*)r4 + sz4 == (u8*)r6) {
            s32 sz6 = *(s32*)((u8*)r6 + 0x10);
            *(s32*)((u8*)r4 + 0x10) = sz4 + sz6;
            void* r6n = (void*)*(u32*)((u8*)r6 + 0xc);
            *(u32*)((u8*)r4 + 0xc) = (u32)r6n;
            if (r6n) *(u32*)((u8*)r6n + 0x8) = (u32)r4;
        }

        // coalesce backward: if r7+size7 == r4, merge into r7
        if (r7) {
            *(u32*)((u8*)r7 + 0xc) = (u32)r4;
            s32 sz7 = *(s32*)((u8*)r7 + 0x10);
            if ((u8*)r7 + sz7 == (u8*)r4) {
                s32 sz4b = *(s32*)((u8*)r4 + 0x10);
                r6 = (void*)*(u32*)((u8*)r4 + 0xc);
                *(s32*)((u8*)r7 + 0x10) = sz7 + sz4b;
                *(u32*)((u8*)r7 + 0xc) = (u32)r6;
                if (r6) *(u32*)((u8*)r6 + 0x8) = (u32)r7;
            }
        } else {
            r8 = r4;
        }
        *(u32*)((u8*)r3 + 0x18) = (u32)r8;

    } else {
        // positive-size path: unlink from used list, insert into free list sorted ascending
        void* r6 = (void*)*(u32*)((u8*)r4 + 0xc);
        void* r5 = (void*)*(u32*)((u8*)r3 + 0x14);
        if (r6) { void* r0 = (void*)*(u32*)((u8*)r4 + 0x8); *(u32*)((u8*)r6 + 0x8) = (u32)r0; }
        r6 = (void*)*(u32*)((u8*)r4 + 0x8);
        if (r6) { void* r0 = (void*)*(u32*)((u8*)r4 + 0xc); *(u32*)((u8*)r6 + 0xc) = (u32)r0; }
        else r5 = (void*)*(u32*)((u8*)r4 + 0xc);
        *(u32*)((u8*)r3 + 0x14) = (u32)r5;

        // find insertion point: walk forward until r6 >= r4
        void* r7 = 0;
        void* r8 = (void*)*(u32*)((u8*)r3 + 0x18);
        r6 = r8;
        while (r6 && (u32)r4 > (u32)r6) { r7 = r6; r6 = (void*)*(u32*)((u8*)r6 + 0xc); }

        *(u32*)((u8*)r4 + 0xc) = (u32)r6;
        *(u32*)((u8*)r4 + 0x8) = (u32)r7;
        if (r6) *(u32*)((u8*)r6 + 0x8) = (u32)r4;

        // coalesce forward
        s32 sz4 = *(s32*)((u8*)r4 + 0x10);
        if (r6 && (u8*)r4 + sz4 == (u8*)r6) {
            s32 sz6 = *(s32*)((u8*)r6 + 0x10);
            *(s32*)((u8*)r4 + 0x10) = sz4 + sz6;
            void* r6n = (void*)*(u32*)((u8*)r6 + 0xc);
            *(u32*)((u8*)r4 + 0xc) = (u32)r6n;
            if (r6n) *(u32*)((u8*)r6n + 0x8) = (u32)r4;
        }

        // coalesce backward
        if (r7) {
            *(u32*)((u8*)r7 + 0xc) = (u32)r4;
            s32 sz7 = *(s32*)((u8*)r7 + 0x10);
            if ((u8*)r7 + sz7 == (u8*)r4) {
                s32 sz4b = *(s32*)((u8*)r4 + 0x10);
                r6 = (void*)*(u32*)((u8*)r4 + 0xc);
                *(s32*)((u8*)r7 + 0x10) = sz7 + sz4b;
                *(u32*)((u8*)r7 + 0xc) = (u32)r6;
                if (r6) *(u32*)((u8*)r6 + 0x8) = (u32)r7;
                else { }
            }
        } else {
            r8 = r4;
        }
        *(u32*)((u8*)r3 + 0x18) = (u32)r8;
    }
}

// =============================================================
// fn_800C5BAC: alloc with best-fit search + diagnostics fallback
//              (attachment 1 -- doc 28)
//              r3 = heap header, r4 = size request (if < 0 -> neg path via fn_800C5BAC)
// STUBBED -- too large, needs diff work
// =============================================================
void* fn_800C5BAC(void* r3, s32 r4) {
    (void)r3; (void)r4;
    return 0;
}

// =============================================================
// fn_800C6044: alloc wrapper; r4 < 0 -> fn_800C5BAC; else best-fit search
//              (attachment 2 -- doc 29)
// STUBBED -- too large, needs diff work
// =============================================================
void* fn_800C6044(void* r3, void* r4) {
    (void)r3; (void)r4;
    return 0;
}
void fn_800C6604(void* r3) {
    (void)r3;
    fn_800C6624();
}