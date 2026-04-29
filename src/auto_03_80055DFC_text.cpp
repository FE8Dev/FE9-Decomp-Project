#include <dolphin/types.h>

// -- Extern declarations --
extern "C" void* fn_8000CBC8(void*, s32);
extern "C" void* fn_8000CC18(void*, s32);
extern "C" void  fn_8023D1A0(void*, void*);
extern "C" u8    fn_8005B8A8(void*);
extern "C" void  fn_8005C74C(void*);
extern "C" void  fn_8000A4B0(void*, void*, void*, void*);
extern "C" void  fn_800056CC(const char*, ...);
extern "C" void  fn_8000C2B0(void*);
extern "C" void  fn_800C4B84(void*);
extern "C" void  fn_800C4888(void*);
extern "C" void* fn_800C48D4(s32);
extern "C" void* fn_800C4C34(void*, s32, void*, s32);
extern "C" void  fn_80067638(s32, s32, void*, void*);
extern "C" void* fn_80067370(void*);
extern "C" void  fn_80067234(void*);
extern "C" void* fn_8006DB14(void*);
extern "C" void  fn_8006DAB4(void*);
extern "C" void* fn_8000C1E8(void*);
extern "C" void  fn_80057C60(void*);

// Additional externs for fn_8005685C / fn_800571A0 / fn_80056C8C
extern "C" void  fn_8000A380(void);
extern "C" void  fn_8000A370(void);
extern "C" void  fn_8000A29C(s32, s32);
extern "C" void  fn_80009E9C(float, float, float, float);
extern "C" void  fn_8000A0B8(void*, s32);
extern "C" void  fn_800079D8(s32);
extern "C" void  fn_800079C4(void);
extern "C" void  fn_80007718(void);
extern "C" void  fn_8000784C(float, float, float, float, float, float);
extern "C" void  fn_80007958(float, float);
extern "C" void  fn_80007978(float, float, float, float);
extern "C" void  fn_800077EC(s32, s32, s32, s32);
extern "C" void  fn_800073F0(void*, void*, void*, void*);
extern "C" void  fn_80009CB4(s32);
extern "C" void* fn_80010CA0(void*, float, s32);
extern "C" void* fn_80010898(void*, float, s32);
extern "C" void  fn_80010164(void*, s16, s16, s32, s32, s32, ...);
extern "C" void  fn_80009C50(void);
extern "C" void  fn_80067E0C(s32);
extern "C" void  fn_8006E19C(s32);
extern "C" void  fn_8006E1DC(s32, s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8006E0D0(s32);
extern "C" void  fn_8006DE78(s32, s32, s32, s32, s32);
extern "C" void  fn_8006DF68(s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8006DE0C(s32, s32, s32, s32, s32);
extern "C" void  fn_8006DEE4(s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8006E090(s32);
extern "C" void  fn_8006DFEC(s32, s32, s32, s32);
extern "C" void  fn_8006DD20(s32, s32, s32, s32);
extern "C" void  fn_8022B3A0(void*, void*, s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8022B634(void*, s32, s32, float, float, float, s32, s32, s32);
extern "C" void  fn_8022B9AC(void*, s32);
extern "C" void  fn_8006E110(s32, s32, s32, s32);
extern "C" void  fn_8006E468(s32, s32, s32);
extern "C" void  fn_80228914(void);
extern "C" void  fn_80228240(s32, s32);
extern "C" void  fn_8022894C(s32, s32, s32, s32, s32);
extern "C" void  fn_80229B48(s32, s32, s32);
extern "C" void  fn_80066C30(s32);
extern "C" void  fn_800678B4(s32);
extern "C" void  fn_80229FA8(s32, s32, s32, s32);
extern "C" void  fn_8022A058(s32, s32, s32, s32);
extern "C" void  fn_8022A904(void*, s32);
extern "C" void  fn_80229758(void);
extern "C" void  fn_8022BC10(void);

extern float lbl_8037743C;
extern float lbl_80377448;
extern float lbl_8037744C;
extern float lbl_80377458;
extern float lbl_8037745C;
extern u32   lbl_803773EC;
extern u32   lbl_803773E8;
extern u32   lbl_8037A920;
extern u32   lbl_8037A91C;
extern u32   lbl_8037A928;
extern u32   lbl_8037A924;
extern u32   lbl_803773F4;
extern u32   lbl_803773F0;
extern u32   lbl_803773FC;
extern u32   lbl_803773F8;
extern u32   lbl_8037A930;
extern u32   lbl_8037A92C;
extern u32   lbl_8037740C;
extern u32   lbl_80377408;
extern u32   lbl_80377404;
extern u32   lbl_80377400;

void fn_80056374(void);

void fn_8005685C(void*);

void fn_80058154(void*, void*);

extern u8  lbl_8028FAF0[];
extern u8  lbl_8028FAD0[];
extern u8  lbl_8028FAB0[];
extern u8  lbl_80273B40[];

// -- sdata2 float constants --
extern float lbl_80377418;  // 0.0f
extern float lbl_8037741C;  // likely 1.0f
extern float lbl_80377420;
extern float lbl_80377424;
extern double lbl_80377428;
extern double lbl_80377430;
extern float lbl_80377440;
extern float lbl_80377444;
extern float lbl_80377450;
extern float lbl_80377454;
extern u32   lbl_80377410;  // loaded as u32 at fn_80056374 start

extern "C" void  fn_8000C028(void*);
extern "C" void  fn_8000C198(void*, s32);
extern "C" void  fn_800056A0(s32);
extern "C" s32   fn_80061284(void*, void*);
extern "C" void  fn_80058B8C(void*, void*, void*, void*);
extern "C" void  fn_8000C734(void*);
extern "C" void  fn_8005E93C(void*);
extern "C" void  fn_8005EAA8(void*, s32);
extern "C" void  fn_8005EA84(void*);
extern "C" void  fn_8005E56C(void*);
extern "C" void  fn_80007918(float, float, float, float);
extern "C" void  fn_800078F0(float, float, float);
extern "C" void  fn_80007678(void);
extern float lbl_80377460;
extern float lbl_80377464;
extern float lbl_80377468;
extern double lbl_80377470;
extern float lbl_8037746C;
extern float lbl_80377414;
extern float lbl_80377478;
extern u32   lbl_803773E4;
extern u8    lbl_8028FA8C[];
extern u8    lbl_8028FB10[];

extern "C" void  fn_80060E98(void*, s32, void*);
extern "C" void  fn_8022D388(s32);
extern "C" void  fn_8022D3B4(s32);
extern "C" void  fn_8022DAD8(void*, s32);
extern "C" void  fn_8006E160(s32);
extern "C" void  fn_80067F0C(void);
extern "C" void  fn_8006DD8C(s32, s32);
extern "C" void  fn_8006E55C(s32);
extern "C" void  fn_8006E4B4(s32, s32, s32, s32, s32);
extern "C" float fn_80240BE0(float);
extern "C" void  fn_80068478(void);
extern "C" void  fn_8020B874(void*, void*);
extern "C" void  fn_8020BC64(void*, void*, void*);
extern "C" void  fn_8022DD90(void*);
extern "C" void  fn_8022D834(void*, void*, void*, void*, void*, void*, void*, void*, void*);
extern "C" void  fn_80058F04(void*);
extern float lbl_80377460;
extern float lbl_8037747C;
extern float lbl_80377480;
extern float lbl_80377484;
extern float lbl_80377488;
extern float lbl_8037748C;
extern u32   lbl_803773E0;
extern u32   lbl_8037A918;
extern u8    lbl_8028FA54[];
extern u8    lbl_8028FA28[];
extern u8    lbl_8028FA10[];
extern u8    lbl_8028FA74[];
extern u32   lbl_803754E0;

// =============================================================
// fn_80055DFC: return r3->0x8
// =============================================================
void* fn_80055DFC(void* r3) {
    return (void*)*(u32*)((u8*)r3 + 0x8);
}

// =============================================================
// fn_80055E04: return r3->0x5 (byte)
// =============================================================
u8 fn_80055E04(void* r3) {
    return ((u8*)r3)[0x5];
}

// =============================================================
// fn_80055E0C: return r3->0x0
// =============================================================
void* fn_80055E0C(void* r3) {
    return (void*)*(u32*)((u8*)r3 + 0x0);
}

// =============================================================
// fn_80055E14: fn_8000CBC8(lbl_8028FAF0, r5), store r4 to result+0x6c,
//              then fn_8023D1A0(result+0x30, r3)
// =============================================================
void fn_80055E14(void* r3, void* r4, s32 r5) {
    void* r30 = r3;
    void* r31 = r4;
    void* r3r = fn_8000CBC8((void*)lbl_8028FAF0, r5);
    *(u32*)((u8*)r3r + 0x6c) = (u32)r31;
    fn_8023D1A0((void*)((u8*)r3r + 0x30), r30);
}

// =============================================================
// fn_80055E6C: tick counter at r3+0x68, increment and wrap at 0x2a30;
//              call fn_8005B8A8(r3+0x30), if zero call fn_8000C2B0;
//              if counter > 0x2a30 or fn_8005B8A8 nonzero: call vtable
//              at r3+0x6c with r3->0x18, then printf + fn_8000C2B0
// =============================================================
void fn_80055E6C(void* r3) {
    void* r31 = r3;
    u16 ctr = *(u16*)((u8*)r31 + 0x68);
    u16 next = ctr + 1;
    *(u16*)((u8*)r31 + 0x68) = next;
    if (ctr <= 0x2a30) {
        u8 res = fn_8005B8A8((void*)((u8*)r31 + 0x30));
        if (!(res & 0xff)) {
            goto done;
        }
    }
    {
        void* vfn = (void*)*(u32*)((u8*)r31 + 0x6c);
        if (vfn) {
            void* arg = (void*)*(u32*)((u8*)r31 + 0x18);
            ((void(*)(void*))vfn)(arg);
        }
        fn_800056CC((const char*)((u8*)lbl_80273B40 + 0x91),
                    (void*)((u8*)r31 + 0x30));
        fn_8000C2B0(r31);
    }
done:;
}

// =============================================================
// fn_80055EF0: zero r3+0x68, call fn_8005C74C(r3+0x30)
// =============================================================
void fn_80055EF0(void* r3) {
    *(u16*)((u8*)r3 + 0x68) = 0;
    fn_8005C74C((void*)((u8*)r3 + 0x30));
}

// =============================================================
// fn_80055F1C: return 0
// =============================================================
s32 fn_80055F1C(void) {
    return 0;
}

// =============================================================
// fn_80055F24: if r3==null return; else set r3+0x32 = 0xff
// =============================================================
void fn_80055F24(void* r3) {
    if (!r3) return;
    ((u8*)r3)[0x32] = 0xff;
}

// =============================================================
// fn_80055F38: set r4[r3->0x30] = 1
// =============================================================
void fn_80055F38(void* r3, void* r4) {
    u8 idx = ((u8*)r3)[0x30];
    ((u8*)r4)[idx] = 1;
}

// =============================================================
// fn_80055F48: allocate node from lbl_8028FAD0 with callback fn_80055F38,
//              find first free slot (r31 = 4..7 or -1), if -1 return null;
//              init node fields and call fn_80067370 + fn_80067234
// =============================================================
void* fn_80055F48(void* r3, void* r4, void* r5, float f1) {
    void* r28 = r3;
    void* r29 = r4;
    void* r30 = r5;
    float f29 = f1;

    u8 slots[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    fn_8000A4B0((void*)lbl_8028FAD0, (void*)fn_80055F38,
                (void*)&slots[0], 0);

    s32 r31;
    if (!slots[4])       r31 = 4;
    else if (!slots[5])  r31 = 5;
    else if (!slots[6])  r31 = 6;
    else if (!slots[7])  r31 = 7;
    else                 r31 = -1;

    if (r31 < 0) return 0;

    if (!r30) r30 = (void*)3;

    void* r3r = fn_8000CC18((void*)lbl_8028FAD0, (s32)(u32)r30);
    void* r30n = r3r;

    u32 w0 = *(u32*)((u8*)r28 + 0x0);
    u32 w4 = *(u32*)((u8*)r28 + 0x4);
    u32 w8 = *(u32*)((u8*)r28 + 0x8);
    u32 p0 = *(u32*)((u8*)r29 + 0x0);

    ((u8*)r30n)[0x30] = (u8)r31;
    ((u8*)r30n)[0x31] = 1;
    *(float*)((u8*)r30n + 0x3c) = *(float*)&w0;
    float f31 = *(float*)&w4;
    float f30 = *(float*)&w8;
    *(float*)((u8*)r30n + 0x40) = f31;
    *(float*)((u8*)r30n + 0x44) = f30;
    *(float*)((u8*)r30n + 0x48) = f29;

    u8 r7 = (u8)(w0 >> 24);
    u8 r6 = (u8)(w0 >> 16);
    u8 r5b = (u8)(w0 >> 8);
    u8 r4b = (u8)(w0);
    ((u8*)r30n)[0x38] = r7;
    ((u8*)r30n)[0x39] = r6;
    ((u8*)r30n)[0x3a] = r5b;
    ((u8*)r30n)[0x3b] = r4b;
    *(s16*)((u8*)r30n + 0x36) = 0;
    ((u8*)r30n)[0x32] = 1;

    void* r3q = fn_80067370(r30n);
    *(u32*)((u8*)r30n + 0x4c) = (u32)r3q;

    fn_80067234((void*)*(u32*)((u8*)r30n + 0x4c));

    void* r4q = (void*)*(u32*)((u8*)r30n + 0x4c);
    *(float*)((u8*)r4q + 0x8)  = *(float*)&w0;
    *(float*)((u8*)r4q + 0xc)  = f31;
    *(float*)((u8*)r4q + 0x10) = f30;
    *(float*)((u8*)r4q + 0x20) = f29;
    *(s16*)((u8*)r30n + 0x34) = 0xa;

    return 0;
}

// =============================================================
// fn_8005613C: same as fn_80055F48 but r31=0x0, r0=0x1 and
//              sth writes 0 (not 0) to 0x36, stb 0 to 0x32,
//              and sth 0x14 to 0x34
// =============================================================
void* fn_8005613C(void* r3, void* r4, void* r5, float f1) {
    void* r28 = r3;
    void* r29 = r4;
    void* r30 = r5;
    float f29 = f1;

    u8 slots[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    fn_8000A4B0((void*)lbl_8028FAD0, (void*)fn_80055F38,
                (void*)&slots[0], 0);

    s32 r31;
    if (!slots[4])       r31 = 4;
    else if (!slots[5])  r31 = 5;
    else if (!slots[6])  r31 = 6;
    else if (!slots[7])  r31 = 7;
    else                 r31 = -1;

    if (r31 < 0) return 0;

    if (!r30) r30 = (void*)3;

    void* r3r = fn_8000CC18((void*)lbl_8028FAD0, (s32)(u32)r30);
    void* r30n = r3r;

    u32 w0 = *(u32*)((u8*)r28 + 0x0);
    u32 w4 = *(u32*)((u8*)r28 + 0x4);
    u32 w8 = *(u32*)((u8*)r28 + 0x8);
    u32 p0 = *(u32*)((u8*)r29 + 0x0);

    ((u8*)r30n)[0x30] = (u8)r31;
    ((u8*)r30n)[0x31] = 0;
    *(float*)((u8*)r30n + 0x3c) = *(float*)&w0;
    float f31 = *(float*)&w4;
    float f30 = *(float*)&w8;
    *(float*)((u8*)r30n + 0x40) = f31;
    *(float*)((u8*)r30n + 0x44) = f30;
    *(float*)((u8*)r30n + 0x48) = f29;

    u8 r7 = (u8)(w0 >> 24);
    u8 r6 = (u8)(w0 >> 16);
    u8 r5b = (u8)(w0 >> 8);
    u8 r4b = (u8)(w0);
    ((u8*)r30n)[0x38] = r7;
    ((u8*)r30n)[0x39] = r6;
    ((u8*)r30n)[0x3a] = r5b;
    ((u8*)r30n)[0x3b] = r4b;
    *(s16*)((u8*)r30n + 0x36) = 0;
    ((u8*)r30n)[0x32] = 1;

    void* r3q = fn_80067370(r30n);
    *(u32*)((u8*)r30n + 0x4c) = (u32)r3q;

    fn_80067234((void*)*(u32*)((u8*)r30n + 0x4c));

    void* r4q = (void*)*(u32*)((u8*)r30n + 0x4c);
    *(float*)((u8*)r4q + 0x8)  = *(float*)&w0;
    *(float*)((u8*)r4q + 0xc)  = f31;
    *(float*)((u8*)r4q + 0x10) = f30;
    *(float*)((u8*)r4q + 0x20) = f29;
    *(s16*)((u8*)r30n + 0x34) = 0x14;

    return 0;
}

// =============================================================
// fn_80056330: call fn_80056374, return
// =============================================================
void fn_80056330(void) {
    fn_80056374();
}

// =============================================================
// fn_80056350: call fn_80067234(r3->0x4c)
// =============================================================
void fn_80056350(void* r3) {
    fn_80067234((void*)*(u32*)((u8*)r3 + 0x4c));
}

// fn_80056374: see document 1

// =============================================================
// fn_80056708: fn_8000C1E8(lbl_8028FAB0); if result != null,
//              set result+0x36 = 0xff
// =============================================================
void fn_80056708(void) {
    void* r3 = fn_8000C1E8((void*)lbl_8028FAB0);
    if (r3) {
        ((u8*)r3)[0x36] = 0xff;
    }
}

// =============================================================
// fn_80056740: fn_80067638(4, 4, fn_8005685C, r3); compute
//              fade value from r3+0x35, clamp to [0,0xa],
//              store to r3+0x34; add r3+0x36, clamp, call fn_8000C2B0
// =============================================================
void fn_80056740(void* r3) {
    void* r31 = r3;
    fn_80067638(4, 4, (void*)fn_8005685C, r31);

    s8 v = (s8)((u8*)r31)[0x35];
    // int-to-float bias pattern for v
    // fade = 1.0f - ((lbl_80377440 * (v - lbl_80377444)^2) / lbl_80377444^2)
    // result clamped 0..1, then fctiwz, store to r31+0x34
    // (simplified: compiler computes a quadratic ease and stores byte)
    ((u8*)r31)[0x34] = (u8)(s32)(lbl_80377418 + (lbl_80377440 *
        (lbl_80377444 - (float)v) * (lbl_80377444 - (float)v)) / 
        (lbl_80377444 * lbl_80377444));

    u8 cur = ((u8*)r31)[0x35];
    u8 inc = ((u8*)r31)[0x36];
    ((u8*)r31)[0x35] = cur + inc;
    s8 next = (s8)((u8*)r31)[0x35];
    if (next > 0xa) ((u8*)r31)[0x35] = 0xa;
    next = (s8)((u8*)r31)[0x35];
    if (next < 0) {
        ((u8*)r31)[0x35] = 0;
        fn_8000C2B0(r31);
    }
}

// =============================================================
// fn_80056820: fn_800C4B84(r3->0x30), zero r3->0x30 twice
// =============================================================
void fn_80056820(void* r3) {
    void* r31 = r3;
    fn_800C4B84((void*)*(u32*)((u8*)r31 + 0x30));
    *(u32*)((u8*)r31 + 0x30) = 0;
    *(u32*)((u8*)r31 + 0x30) = 0;
}

// fn_8005685C: see document 2

// =============================================================
// fn_80056B84: if r3 null skip; fn_800C4B84(r3->0x14), zero
//              r3->0x14; if r4 > 0 call fn_800C4888(r3)
//              return r3
// =============================================================
void* fn_80056B84(void* r3, s16 r4) {
    void* r30 = r3;
    void* r31 = (void*)(s32)r4;
    if (!r30) goto done;
    fn_800C4B84((void*)*(u32*)((u8*)r30 + 0x14));
    *(u32*)((u8*)r30 + 0x14) = 0;
    if ((s32)(s16)r4 > 0) {
        fn_800C4888(r30);
    }
done:
    return r30;
}

// =============================================================
// fn_80056BE0: alloc 0x80 bytes via fn_800C4C34 with string
//              lbl_80273B40+0xa9; init fields at r3:
//              f32 at +8=0, +c=lbl_80377450, +10=lbl_80377454
//              u8 at +3=0xff, +0=0, u16 at +4=0x30
//              zero byte at r3->0x14[0]
// =============================================================
void fn_80056BE0(void* r3) {
    void* r31 = r3;
    void* buf = fn_800C4C34(r31, 0x80,
                    (void*)((u8*)lbl_80273B40 + 0xa9), 0);
    *(u32*)((u8*)r31 + 0x14) = (u32)buf;
    *(float*)((u8*)r31 + 0x8)  = lbl_80377418;
    *(float*)((u8*)r31 + 0xc)  = lbl_80377450;
    *(float*)((u8*)r31 + 0x10) = lbl_80377454;
    ((u8*)r31)[0x3] = 0xff;
    ((u8*)r31)[0x0] = 0;
    *(u16*)((u8*)r31 + 0x4) = 0x30;
    ((u8*)*(u32*)((u8*)r31 + 0x14))[0] = 0;
}

// =============================================================
// fn_80056C60: if r4 != null, call fn_8023D1A0(r3->0x14, r4)
// =============================================================
void fn_80056C60(void* r3, void* r4) {
    if (!r4) return;
    fn_8023D1A0((void*)*(u32*)((u8*)r3 + 0x14), r4);
}

// fn_80056C8C: see document 3
// fn_800571A0: see document 4

// =============================================================
// fn_80057854: free r3->0x24 and r3->0x28 nodes;
//              if r4 != 0, alloc two 0x58 nodes, init their fields,
//              store to r3->0x24 and r3->0x28;
//              set r3->0x24/28->0x34=1, r3->0x24/28->0x54=0
// =============================================================
void fn_80057854(void* r3, u8 r4) {
    void* r31 = r3;
    void* r29 = (void*)(u32)r4;

    void* r30 = (void*)*(u32*)((u8*)r31 + 0x24);
    if (r30) {
        fn_8006DAB4((void*)*(u32*)((u8*)r30 + 0x30));
        fn_800C4888(r30);
    }
    *(u32*)((u8*)r31 + 0x24) = 0;

    r30 = (void*)*(u32*)((u8*)r31 + 0x28);
    if (r30) {
        fn_8006DAB4((void*)*(u32*)((u8*)r30 + 0x30));
        fn_800C4888(r30);
    }
    *(u32*)((u8*)r31 + 0x28) = 0;

    if (!(r4 & 0xff)) goto done;

    r30 = fn_800C48D4(0x58);
    if (r30) {
        *(u32*)((u8*)r30 + 0x44) = 8;
        *(u32*)((u8*)r30 + 0x48) = 0;
        void* str = fn_8006DB14((void*)((u8*)lbl_80273B40 + 0xbf));
        *(u32*)((u8*)r30 + 0x30) = (u32)str;
        *(u32*)((u8*)r30 + 0x4c) = 0;
        *(float*)((u8*)r30 + 0x38) = lbl_80377418;
        *(float*)((u8*)r30 + 0x3c) = lbl_80377418;
        *(float*)((u8*)r30 + 0x40) = lbl_80377418;
        ((u8*)r30)[0x55] = 1;
        ((u8*)r30)[0x54] = 1;
        *(u32*)((u8*)r30 + 0x50) = 0x30;
        ((u8*)r30)[0x34] = 0;
    }
    *(u32*)((u8*)r31 + 0x24) = (u32)r30;

    r30 = fn_800C48D4(0x58);
    if (r30) {
        *(u32*)((u8*)r30 + 0x44) = 4;
        *(u32*)((u8*)r30 + 0x48) = 0;
        void* str = fn_8006DB14((void*)((u8*)lbl_80273B40 + 0xbf));
        *(u32*)((u8*)r30 + 0x30) = (u32)str;
        *(u32*)((u8*)r30 + 0x4c) = 0;
        *(float*)((u8*)r30 + 0x38) = lbl_80377418;
        *(float*)((u8*)r30 + 0x3c) = lbl_80377418;
        *(float*)((u8*)r30 + 0x40) = lbl_80377418;
        ((u8*)r30)[0x55] = 1;
        ((u8*)r30)[0x54] = 1;
        *(u32*)((u8*)r30 + 0x50) = 0x30;
        ((u8*)r30)[0x34] = 0;
    }
    *(u32*)((u8*)r31 + 0x28) = (u32)r30;

    {
        void* n24 = (void*)*(u32*)((u8*)r31 + 0x24);
        void* n28 = (void*)*(u32*)((u8*)r31 + 0x28);
        ((u8*)n24)[0x34] = 1;
        ((u8*)n28)[0x34] = 1;
        ((u8*)n24)[0x54] = 0;
        ((u8*)n28)[0x54] = 0;
    }
done:;
}

// =============================================================
// fn_80056374: per-frame color/alpha update for animation node
//   r31 = node ptr. Reads r31+0x31 (mode byte) to branch:
//   0 -> increment counter at r31+0x36, compute lerp ratio,
//        write RGBA to r31->0x4c+[4..7] and stack bytes [8..a]
//   1 -> add r31+0x32 delta to counter, compute ratio differently,
//        write RGBA similarly
//   else -> epilogue
// =============================================================
void fn_80056374(void) {
}

// =============================================================
// fn_8005685C: GX/video setup function initializes GX state,
//   sets viewport, color, fog, calls fn_8022B3A0/B634/B9AC,
//   sets up line width/pattern, channel config, matids,
//   writes directly to GX FIFO at 0xCC018000 for color/fog data,
//   then calls fn_80066C30/fn_800678B4 or falls through to
//   fn_80229FA8/A058/A904/80229758/BC10 cleanup
// =============================================================
void fn_8005685C(void* r3) {
}

// =============================================================
// fn_80056C8C: per-frame render loop for scrolling text widget
//   r26=r3 struct. Reads r26+0x4/0x8 as x/y coords (fctiwz),
//   r26+0x10 as width, r26+0x24 as scroll ptr.
//   Four render passes using vtable calls at r26+0x2c->[0x8/0xc/0x14/0x1c],
//   each preceded by fn_8000A380+fn_80009E9C+fn_8000A0B8+fn_8000A370.
//   Then computes r25=r26->0x1c*r26->0x1c/r26->0x14 and
//   r27=r26->0x18*r31/r26->0x14; clamps r27 to [4,0x10] range;
//   two more render passes using vtable at 0xc/0x8 offset;
//   then updates scroll position floats and r26->0x4c timer.
// =============================================================
void fn_80056C8C(void* r3) {
}

// =============================================================
// fn_800571A0: same as fn_80056C8C (documents 3 and 4 are identical)
// =============================================================
void fn_800571A0(void* r3) {
}


// =============================================================
// fn_800579E0: clamp r4 to (r3->0x14 - r3->0x18), store to r3->0x1c
// =============================================================
void fn_800579E0(void* r3, s32 r4) {
    s32 limit = *(s32*)((u8*)r3 + 0x14) - *(s32*)((u8*)r3 + 0x18);
    if (r4 > limit) r4 = limit;
    *(s32*)((u8*)r3 + 0x1c) = r4;
}

// =============================================================
// fn_80057A00: clamp r4 to r3->0x14, store to r3->0x18
// =============================================================
void fn_80057A00(void* r3, s32 r4) {
    s32 limit = *(s32*)((u8*)r3 + 0x14);
    if (r4 > limit) r4 = limit;
    *(s32*)((u8*)r3 + 0x18) = r4;
}

// =============================================================
// fn_80057A18: store r4 to r3->0x14
// =============================================================
void fn_80057A18(void* r3, s32 r4) {
    *(s32*)((u8*)r3 + 0x14) = r4;
}

// =============================================================
// fn_80057A20: store f1 to r3->0xc
// =============================================================
void fn_80057A20(void* r3, float f1) {
    *(float*)((u8*)r3 + 0xc) = f1;
}

// =============================================================
// fn_80057A28: int-to-float bias r4/r5 -> store as floats to
//              r3->0x4 and r3->0x8; store r6 to r3->0x10
// =============================================================
void fn_80057A28(void* r3, s16 r4, s16 r5, s32 r6) {
    // int-to-float bias pattern for r4 and r5
    float f1 = (float)r4;
    float f0 = (float)r5;
    *(float*)((u8*)r3 + 0x4) = f1;
    *(float*)((u8*)r3 + 0x8) = f0;
    *(s32*)((u8*)r3 + 0x10) = r6;
}

// =============================================================
// fn_80057A70: free r29->0x24 and 0x28 child nodes,
//              free lbl_8028FB10 vtable ptrs,
//              then if r30 > 0 free r29 itself. Return r29.
// =============================================================
void* fn_80057A70(void* r3, s16 r4) {
    void* r29 = r3;
    void* r30 = (void*)(s32)r4;
    if (!r29) goto done;

    *(u32*)((u8*)r29 + 0x2c) = (u32)lbl_8028FB10;

    fn_8006DAB4((void*)*(u32*)((u8*)r29 + 0x0));

    void* r31 = (void*)*(u32*)((u8*)r29 + 0x24);
    if (r31) {
        fn_8006DAB4((void*)*(u32*)((u8*)r31 + 0x30));
        fn_800C4888(r31);
    }

    r31 = (void*)*(u32*)((u8*)r29 + 0x28);
    if (r31) {
        fn_8006DAB4((void*)*(u32*)((u8*)r31 + 0x30));
        fn_800C4888(r31);
    }

    if ((s32)(s16)r4 > 0) {
        fn_800C4888(r29);
    }
done:
    return r29;
}

// =============================================================
// fn_80057B18: init r31 struct set vtable ptr lbl_8028FB10,
//              alloc string node via fn_8006DB14(lbl_80273B40+0xaa),
//              zero fields 0x14..0x28, zero floats 0x4..0xc
// =============================================================
void fn_80057B18(void* r3) {
    void* r31 = r3;
    *(u32*)((u8*)r31 + 0x2c) = (u32)lbl_8028FB10;
    void* str = fn_8006DB14((void*)((u8*)lbl_80273B40 + 0xaa));
    *(u32*)((u8*)r31 + 0x0) = (u32)str;
    *(u32*)((u8*)r31 + 0x14) = 0;
    *(u32*)((u8*)r31 + 0x18) = 0;
    *(u32*)((u8*)r31 + 0x1c) = 0;
    *(u32*)((u8*)r31 + 0x20) = 0;
    *(float*)((u8*)r31 + 0x4) = lbl_80377418;
    *(float*)((u8*)r31 + 0x8) = lbl_80377418;
    *(float*)((u8*)r31 + 0xc) = lbl_80377418;
    *(u32*)((u8*)r31 + 0x24) = 0;
    *(u32*)((u8*)r31 + 0x28) = 0;
}

// =============================================================
// fn_80057B90: free r30->0x30 node, if r31 > 0 free r30. Return r30.
// =============================================================
void* fn_80057B90(void* r3, s16 r4) {
    void* r30 = r3;
    void* r31 = (void*)(s32)r4;
    if (!r30) goto done;
    fn_8006DAB4((void*)*(u32*)((u8*)r30 + 0x30));
    if ((s32)(s16)r4 > 0) {
        fn_800C4888(r30);
    }
done:
    return r30;
}

// =============================================================
// fn_80057BE4: init r31 text node store r4 to r31->0x44,
//              zero r31->0x48, alloc string lbl_80273B40+0xbf,
//              store to r31->0x30; init floats/bytes at 0x38..0x40
// =============================================================
void fn_80057BE4(void* r3, s32 r4) {
    void* r31 = r3;
    *(s32*)((u8*)r31 + 0x44) = r4;
    *(u32*)((u8*)r31 + 0x48) = 0;
    void* str = fn_8006DB14((void*)((u8*)lbl_80273B40 + 0xbf));
    *(u32*)((u8*)r31 + 0x30) = (u32)str;
    *(u32*)((u8*)r31 + 0x4c) = 0;
    ((u8*)r31)[0x55] = 1;
    ((u8*)r31)[0x54] = 1;
    *(u32*)((u8*)r31 + 0x50) = 0x30;
    *(float*)((u8*)r31 + 0x38) = lbl_80377418;
    *(float*)((u8*)r31 + 0x3c) = lbl_80377418;
    *(float*)((u8*)r31 + 0x40) = lbl_80377418;
    ((u8*)r31)[0x34] = 0;
}

// fn_80057C60: see document 10 below

// =============================================================
// fn_80057FD4: store r4 to r3->0x34
// =============================================================
void fn_80057FD4(void* r3, u8 r4) {
    ((u8*)r3)[0x34] = r4;
}

// =============================================================
// fn_80057FDC: store r4 to r3->0x54
// =============================================================
void fn_80057FDC(void* r3, u8 r4) {
    ((u8*)r3)[0x54] = r4;
}

// =============================================================
// fn_80057FE4: store r4 to r3->0x55
// =============================================================
void fn_80057FE4(void* r3, u8 r4) {
    ((u8*)r3)[0x55] = r4;
}

// =============================================================
// fn_80057FEC: if r3->0x54 != 0, store 0x1e to r3->0x4c; else store 1
// =============================================================
void fn_80057FEC(void* r3) {
    if (((u8*)r3)[0x54]) {
        *(u32*)((u8*)r3 + 0x4c) = 0x1e;
    } else {
        *(u32*)((u8*)r3 + 0x4c) = 1;
    }
}

// =============================================================
// fn_80058010: store f1 to r3->0x40
// =============================================================
void fn_80058010(void* r3, float f1) {
    *(float*)((u8*)r3 + 0x40) = f1;
}

// =============================================================
// fn_80058018: int-to-float bias r4/r5 -> store as floats
//              to r3->0x38 and r3->0x3c (no r6 store)
// =============================================================
void fn_80058018(void* r3, s16 r4, s16 r5) {
    float f1 = (float)r4;
    float f0 = (float)r5;
    *(float*)((u8*)r3 + 0x38) = f1;
    *(float*)((u8*)r3 + 0x3c) = f0;
}

// =============================================================
// fn_8005805C: fn_8000C028(lbl_8028FA8C)
// =============================================================
void fn_8005805C(void) {
    fn_8000C028((void*)lbl_8028FA8C);
}

// =============================================================
// fn_80058084: fn_80061284(r4, r5) and fn_80061284(r3, r5);
//              if either < 0: printf error; else find in lbl_8028FA8C
//              via fn_80058154, alloc via fn_8000CC18, call fn_80058B8C
// =============================================================
void* fn_80058084(void* r3, void* r4, void* r5, void* r6) {
    void* r28 = r3;
    void* r29 = r4;
    void* r30 = r5;
    void* r31 = r6;

    s32 res = fn_80061284(r29, r30);
    if (res < 0) goto error;
    res = fn_80061284(r28, r30);
    if (res >= 0) goto ok;

error:
    fn_800056CC((const char*)((u8*)lbl_80273B40 + 0xd0), r29, r30);
    fn_800056A0(0);

ok:
    fn_8000A4B0((void*)lbl_8028FA8C, (void*)fn_80058154, r28, 0);
    void* r31r = fn_8000CC18((void*)lbl_8028FA8C, (s32)(u32)r31);
    fn_80058B8C(r31r, r28, r29, r30);
    return r31r;
}

// =============================================================
// fn_80058154: callback if r3->0x34 == r4, call fn_8000C028(lbl_8028FA8C)
// =============================================================
void fn_80058154(void* r3, void* r4) {
    if (*(u32*)((u8*)r3 + 0x34) == (u32)r4) {
        fn_8000C028((void*)lbl_8028FA8C);
    }
}

// =============================================================
// fn_80058188: if r3->0x54 bit 2 set, call fn_8005E93C(r3->0x34);
//              fn_8000C734(r3->0x30);
//              fn_800C4B84(r3->0x44), zero r3->0x44;
//              fn_800C4B84(r3->0x40), zero r3->0x40
// =============================================================
void fn_80058188(void* r3) {
    void* r31 = r3;
    u16 flags = *(u16*)((u8*)r31 + 0x54);
    if (flags & (1u << (31 - 29))) {
        fn_8005E93C((void*)*(u32*)((u8*)r31 + 0x34));
    }
    fn_8000C734((void*)*(u32*)((u8*)r31 + 0x30));
    fn_800C4B84((void*)*(u32*)((u8*)r31 + 0x44));
    *(u32*)((u8*)r31 + 0x44) = 0;
    fn_800C4B84((void*)*(u32*)((u8*)r31 + 0x40));
    *(u32*)((u8*)r31 + 0x40) = 0;
}

// =============================================================
// fn_800581EC: increment r31->0x53 counter, clamp to 0x14,
//              call fn_8000C2B0 if clamped;
//              compute quadratic ease alpha for r31->0x3b;
//              compute scroll position r31->0x4a via int-to-float bias
// =============================================================
void fn_800581EC(void* r3) {
    void* r31 = r3;
    u8 ctr = ((u8*)r31)[0x53] + 1;
    ((u8*)r31)[0x53] = ctr;
    if (((u8*)r31)[0x53] >= 0x14) {
        ((u8*)r31)[0x53] = 0x14;
        fn_8000C2B0(r31);
    }
    // quadratic ease: alpha = r3f[end] - (f1*(end-t)^2 / f6) + r3f[start]
    // (int-to-float bias pattern for r31->0x53 and r31->0x3f)
    float f1 = lbl_80377468;
    float f6 = f1 * f1;
    float t = (float)((u8*)r31)[0x53];
    float end = (float)((u8*)r31)[0x3f];
    float f0 = f1 - t;
    f0 = lbl_80377418 - ((lbl_80377418 - end) * f0 * f0 / f6);
    f0 = end + f0;
    ((u8*)r31)[0x3b] = (u8)(s32)f0;

    // scroll pos: r31->0x4a = (r31->0x4c * r31->0x51 * r31->0x53) / 2
    s32 prod = *(s16*)((u8*)r31 + 0x4c) * (s32)((u8*)r31)[0x51];
    s32 half = prod / 2;
    // second bias computation for r31->0x4a
    *(s16*)((u8*)r31 + 0x4a) = (s16)(s32)((float)half);
}

// fn_80058324: see document 11 below

// =============================================================
// fn_80058A6C: fn_8000C198(r3, 0)
// =============================================================
void fn_80058A6C(void* r3) {
    fn_8000C198(r3, 0);
}

// =============================================================
// fn_80058A90: if r4 != 0: fn_8005EAA8(r3->0x34, 6), set r3->0x54 bit 2;
//              else: fn_8005E93C(r3->0x34), clear r3->0x54 bits 29..31
// =============================================================
void fn_80058A90(void* r3, u8 r4) {
    void* r31 = r3;
    if (r4 & 0xff) {
        fn_8005EAA8((void*)*(u32*)((u8*)r31 + 0x34), 6);
        u16 f = *(u16*)((u8*)r31 + 0x54);
        *(u16*)((u8*)r31 + 0x54) = f | 4;
    } else {
        fn_8005E93C((void*)*(u32*)((u8*)r31 + 0x34));
        u16 f = *(u16*)((u8*)r31 + 0x54);
        *(u16*)((u8*)r31 + 0x54) = f & ~6u;
    }
}

// =============================================================
// fn_80058AF0: copy 4 bytes from r4 to r3+0x38..0x3b,
//              mirror to r3+0x3c..0x3f;
//              if all 3 of r4[0..2] < 0x80: clear bits, set bit 1 of r3->0x54;
//              else: set bit 0 of r3->0x54
// =============================================================
void fn_80058AF0(void* r3, void* r4) {
    ((u8*)r3)[0x38] = ((u8*)r4)[0];
    ((u8*)r3)[0x39] = ((u8*)r4)[1];
    ((u8*)r3)[0x3a] = ((u8*)r4)[2];
    ((u8*)r3)[0x3b] = ((u8*)r4)[3];
    ((u8*)r3)[0x3c] = ((u8*)r3)[0x38];
    ((u8*)r3)[0x3d] = ((u8*)r3)[0x39];
    ((u8*)r3)[0x3e] = ((u8*)r3)[0x3a];
    ((u8*)r3)[0x3f] = ((u8*)r3)[0x3b];

    if (((u8*)r4)[0] < 0x80 && ((u8*)r4)[1] < 0x80 && ((u8*)r4)[2] < 0x80) {
        u16 f = *(u16*)((u8*)r3 + 0x54);
        f = f & ~0xfffe;
        *(u16*)((u8*)r3 + 0x54) = f;
        f = *(u16*)((u8*)r3 + 0x54);
        *(u16*)((u8*)r3 + 0x54) = f | 2;
    } else {
        u16 f = *(u16*)((u8*)r3 + 0x54);
        f = f & ~6u;
        *(u16*)((u8*)r3 + 0x54) = f;
        f = *(u16*)((u8*)r3 + 0x54);
        *(u16*)((u8*)r3 + 0x54) = f | 1;
    }
}

// =============================================================
// fn_80057C60: per-frame scroll position update for text node r28.
//   Increments r28->0x48, handles r28->0x4c wrap/speed,
//   computes float lerp ratio for scroll position,
//   if r28->0x55 nonzero: computes alpha quad ease, calls
//   fn_8000A380/fn_80009E9C/fn_8000A0B8/fn_8000A370,
//   then fn_80007918 for RGBA channel setup, fn_800078F0,
//   fn_80007718, fn_80007678 based on r28->0x44 mode
// =============================================================
void fn_80057C60(void* r3) {
}

// =============================================================
// fn_80058324: large font/glyph rendering function.
//   Uses GQR2-5 for paired-single quantized loads.
//   r31 = font struct. Outer loop over r4=0..r31->0x4c-1 (glyphs).
//   Inner: loads glyph data blocks of 0x28 bytes from r31->0x40 table,
//   interpolates between adjacent glyphs using cubic hermite spline,
//   writes x/y/z float triples into output buffer at r31->0x44.
//   Then fade-in/out: computes alpha lerp for r31->0x3b from
//   r31->0x4a counter, writes byte alpha to r31->0x44 output,
//   interpolates xyz positions via lerp.
//   If r31->0x54 bit 2 set: calls fn_8005EA84 + fn_8005E56C.
// =============================================================
void fn_80058324(void* r3) {
}

// =============================================================
// fn_80058B8C: init scrolling text node r30 from args,
//   alloc two data buffers, copy RGBA from lbl_803773E0,
//   alloc node from lbl_8028FA74, call fn_80058324 + fn_80067638
// =============================================================
void fn_80058B8C(void* r3, void* r4, void* r5, void* r6) {
    void* r30 = r3;
    void* r27 = r6;

    *(u32*)((u8*)r30 + 0x34) = (u32)r4;
    fn_8023D1A0((void*)((u8*)r30 + 0x56), r5);
    fn_8023D1A0((void*)((u8*)r30 + 0x5e), r27);

    *(s16*)((u8*)r30 + 0x4e) = 0xa;
    ((u8*)r30)[0x51] = 8;
    *(s16*)((u8*)r30 + 0x4a) = 0;
    *(s16*)((u8*)r30 + 0x4c) = 0;
    *(s16*)((u8*)r30 + 0x48) = 0;
    ((u8*)r30)[0x53] = 0;
    *(s16*)((u8*)r30 + 0x54) = 1;

    s16 n = *(s16*)((u8*)r30 + 0x4e);
    void* buf0 = fn_800C4C34(r30, (s32)n * 0x28,
                    (void*)((u8*)lbl_80273B40 + 0xa9), 0);
    *(u32*)((u8*)r30 + 0x40) = (u32)buf0;

    s16 n2 = *(s16*)((u8*)r30 + 0x4e);
    u8  n3 = ((u8*)r30)[0x51];
    void* buf1 = fn_800C4C34(r30, (s32)((u32)n2 * (u32)n3) * 0x28,
                    (void*)((u8*)lbl_80273B40 + 0xa9), 0);
    *(u32*)((u8*)r30 + 0x44) = (u32)buf1;

    // Copy RGBA from lbl_803773E0 (4-byte word)
    u32 rgba = lbl_803773E0;
    u8 r = (u8)(rgba >> 24);
    u8 g = (u8)(rgba >> 16);
    u8 b = (u8)(rgba >> 8);
    u8 a = (u8)(rgba);
    ((u8*)r30)[0x38] = r;
    ((u8*)r30)[0x39] = g;
    ((u8*)r30)[0x3a] = b;
    ((u8*)r30)[0x3b] = a;
    ((u8*)r30)[0x3c] = ((u8*)r30)[0x38];
    ((u8*)r30)[0x3d] = ((u8*)r30)[0x39];
    ((u8*)r30)[0x3e] = ((u8*)r30)[0x3a];
    ((u8*)r30)[0x3f] = ((u8*)r30)[0x3b];

    if (r < 0x80 && g < 0x80 && b < 0x80) {
        u16 f = *(u16*)((u8*)r30 + 0x54);
        f &= ~0xfffeU;
        *(u16*)((u8*)r30 + 0x54) = f;
        *(u16*)((u8*)r30 + 0x54) |= 2;
    } else {
        u16 f = *(u16*)((u8*)r30 + 0x54);
        f &= ~6U;
        *(u16*)((u8*)r30 + 0x54) = f;
        *(u16*)((u8*)r30 + 0x54) |= 1;
    }

    void* r31 = fn_8000CC18((void*)lbl_8028FA74, 4);
    *(u32*)((u8*)r30 + 0x30) = (u32)r31;
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;

    void* r30b = (void*)*(u32*)((u8*)r31 + 0x30);
    if (!((u8*)r30b)[0x53]) {
        s32 res0 = fn_80061284((void*)*(u32*)((u8*)r30b + 0x34),
                               (void*)((u8*)r30b + 0x56));
        s32 res1 = fn_80061284((void*)*(u32*)((u8*)r30b + 0x34),
                               (void*)((u8*)r30b + 0x5e));
        if (res0 >= 0 && res1 >= 0) {
            s16 h48 = *(s16*)((u8*)r30b + 0x48);
            s16 h4c = *(s16*)((u8*)r30b + 0x4c);
            s16 h4e = *(s16*)((u8*)r30b + 0x4e);
            s32 sum = (s32)h48 + (s32)h4c;
            void* base = (void*)*(u32*)((u8*)r30b + 0x40);
            s32 idx = (sum / h4e) * h4e;
            void* r28 = (void*)((u8*)base + (sum - idx) * 0x28);

            if (h4c == h4e) {
                s16 nh = h48 + 1;
                *(s16*)((u8*)r30b + 0x48) = (s16)((nh / h4e) * h4e - nh * h4e + nh);
            } else {
                *(s16*)((u8*)r30b + 0x4c) = h4c + 1;
            }

            void* r27b = (void*)&res0;
            for (s32 i = 0; i < 2; i++) {
                fn_80060E98((void*)*(u32*)((u8*)r30b + 0x34),
                            *(u32*)((u8*)r27b),
                            r28);
                r27b = (void*)((u8*)r27b + 4);
                r28  = (void*)((u8*)r28  + 0xc);
            }
            s16 h4c2 = *(s16*)((u8*)r30b + 0x4c);
            u8  n51  = ((u8*)r30b)[0x51];
            *(s16*)((u8*)r30b + 0x4a) = (s16)((u32)h4c2 * (u32)n51);
        }
    }

    fn_80058324((void*)*(u32*)((u8*)r31 + 0x30));
    fn_80067638(2, 3, (void*)fn_80058F04,
                (void*)*(u32*)((u8*)r31 + 0x30));
}

// =============================================================
// fn_80058DEC: tick update for scrolling text advance scroll
//   index in r31, call fn_80058324 + fn_80067638(fn_80058F04)
// =============================================================
void fn_80058DEC(void* r3) {
    void* r30 = r3;
    void* r31 = (void*)*(u32*)((u8*)r30 + 0x30);

    if (!((u8*)r31)[0x53]) {
        s32 res0 = fn_80061284((void*)*(u32*)((u8*)r31 + 0x34),
                               (void*)((u8*)r31 + 0x56));
        s32 res1 = fn_80061284((void*)*(u32*)((u8*)r31 + 0x34),
                               (void*)((u8*)r31 + 0x5e));
        if (res0 >= 0 && res1 >= 0) {
            s16 h48 = *(s16*)((u8*)r31 + 0x48);
            s16 h4c = *(s16*)((u8*)r31 + 0x4c);
            s16 h4e = *(s16*)((u8*)r31 + 0x4e);
            s32 sum = (s32)h48 + (s32)h4c;
            void* base = (void*)*(u32*)((u8*)r31 + 0x40);
            s32 idx = (sum / h4e) * h4e;
            void* r28 = (void*)((u8*)base + (sum - idx) * 0x28);

            if (h4c == h4e) {
                s16 nh = h48 + 1;
                *(s16*)((u8*)r31 + 0x48) = (s16)((nh / h4e) * h4e - nh * h4e + nh);
            } else {
                *(s16*)((u8*)r31 + 0x4c) = h4c + 1;
            }

            void* r27 = (void*)&res0;
            for (s32 i = 0; i < 2; i++) {
                fn_80060E98((void*)*(u32*)((u8*)r31 + 0x34),
                            *(u32*)((u8*)r27),
                            r28);
                r27 = (void*)((u8*)r27 + 4);
                r28 = (void*)((u8*)r28 + 0xc);
            }
            s16 h4c2 = *(s16*)((u8*)r31 + 0x4c);
            u8  n51  = ((u8*)r31)[0x51];
            *(s16*)((u8*)r31 + 0x4a) = (s16)((u32)h4c2 * (u32)n51);
        }
    }

    fn_80058324((void*)*(u32*)((u8*)r30 + 0x30));
    fn_80067638(2, 3, (void*)fn_80058F04,
                (void*)*(u32*)((u8*)r30 + 0x30));
}

// =============================================================
// fn_80058F04: GX render pass for scrolling text glyph strip.
//   If r30->0x4c < 2, early exit. Sets up GX TEV/channel state,
//   streams two batches of vertex data to GX FIFO at 0xCC018000
// =============================================================
void fn_80058F04(void* r3) {
    void* r30 = r3;
    if (*(s16*)((u8*)r30 + 0x4c) < 2) goto done;

    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);

    if (*(s16*)((u8*)r30 + 0x54) & 1) {
        fn_8006E110(1, 4, 1, 0);
    } else {
        fn_8006E110(1, 4, 5, 0);
    }

    fn_8006E0D0(1);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006DD8C(0, 4);
    fn_8006DFEC(0, 0xff, 0xff, 4);
    fn_8006E090(0);
    fn_8006E160(0);
    fn_80067F0C();
    fn_8022DAD8(0, 0);
    fn_8006E55C(0);

    {
        s16 h4c = *(s16*)((u8*)r30 + 0x4c);
        u8  n51 = ((u8*)r30)[0x51];
        s16 h4a = *(s16*)((u8*)r30 + 0x4a);
        s32 total = (s32)h4c * (s32)n51;
        u32 r5 = (u32)(u16)h4a << 1;
        s32 r31 = total - (s32)h4a;
        fn_80229B48(0x98, 0, 4);

        // First pass: write vertex data for h4a glyphs
        volatile u32* gx = (volatile u32*)0xCC018000u;
        s32 r8 = 0;
        while (r8 < (s32)h4a) {
            s32 offset = (r8 + r31) * 0x28;
            void* r9 = (void*)((u8*)*(u32*)((u8*)r30 + 0x44) + offset);
            // Write xyz0, xyz1 positions and RGBA colors
            *(volatile float*)gx = *(float*)((u8*)r9 + 0x18);
            *(volatile float*)gx = *(float*)((u8*)r9 + 0x1c);
            *(volatile float*)gx = *(float*)((u8*)r9 + 0x20);
            *(volatile u8*)gx  = ((u8*)r30)[0x38];
            *(volatile u8*)gx  = ((u8*)r30)[0x39];
            *(volatile u8*)gx  = ((u8*)r30)[0x3a];
            *(volatile u8*)gx  = ((u8*)r9)[0x24];
            *(volatile float*)gx = *(float*)((u8*)r9 + 0xc);
            *(volatile float*)gx = *(float*)((u8*)r9 + 0x10);
            *(volatile float*)gx = *(float*)((u8*)r9 + 0x14);
            *(volatile u8*)gx  = ((u8*)r30)[0x38];
            *(volatile u8*)gx  = ((u8*)r30)[0x39];
            *(volatile u8*)gx  = ((u8*)r30)[0x3a];
            *(volatile u8*)gx  = 0;
            r8++;
        }

        fn_80229B48(0x98, 0, (s32)r5);

        // Second pass: write vertex data for r31 glyphs
        s32 r7 = 0;
        while (r7 < r31) {
            s32 offset2 = (r7 + r31) * 0x28;
            void* r8p = (void*)((u8*)*(u32*)((u8*)r30 + 0x44) + offset2);
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x0);
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x4);
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x8);
            *(volatile u8*)gx  = ((u8*)r30)[0x38];
            *(volatile u8*)gx  = ((u8*)r30)[0x39];
            *(volatile u8*)gx  = ((u8*)r30)[0x3a];
            *(volatile u8*)gx  = 0;
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x18);
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x1c);
            *(volatile float*)gx = *(float*)((u8*)r8p + 0x20);
            *(volatile u8*)gx  = ((u8*)r30)[0x38];
            *(volatile u8*)gx  = ((u8*)r30)[0x39];
            *(volatile u8*)gx  = ((u8*)r30)[0x3a];
            *(volatile u8*)gx  = ((u8*)r8p)[0x24];
            r7++;
        }
        fn_80066C30(-1);
    }
done:;
}

// =============================================================
// fn_800591AC: fn_8000CBC8(lbl_8028FA54, r3), store r4 as s16 to result+0x32
// =============================================================
void fn_800591AC(void* r3, s16 r4) {
    void* r31 = (void*)(s32)r4;
    void* res = fn_8000CBC8((void*)lbl_8028FA54, (s32)(u32)r3);
    *(s16*)((u8*)res + 0x32) = (s16)(u32)r31;
}

// =============================================================
// fn_800591EC: check lbl_803754E0 button bits; if matching bits
//              set, call fn_8000C2B0; else increment r3->0x30,
//              call fn_8000C2B0 if it reaches r3->0x32
// =============================================================
void fn_800591EC(void* r3) {
    u32* r4 = (u32*)lbl_803754E0;
    u32 cur = r4[1];
    u32 prev = r4[2];
    u32 pressed = cur & (prev ^ cur);
    if (pressed & 0x1f70) {
        fn_8000C2B0(r3);
        return;
    }
    s16 ctr = *(s16*)((u8*)r3 + 0x30) + 1;
    *(s16*)((u8*)r3 + 0x30) = ctr;
    if (ctr == *(s16*)((u8*)r3 + 0x32)) {
        fn_8000C2B0(r3);
    }
}

// =============================================================
// fn_8005924C: zero r3->0x30
// =============================================================
void fn_8005924C(void* r3) {
    *(s16*)((u8*)r3 + 0x30) = 0;
}

// =============================================================
// fn_80059258: fn_8000CBC8(lbl_8028FA28, r6), store r3/r4/r5
//              to result+0x30/0x34/0x38
// =============================================================
void fn_80059258(void* r3, void* r4, void* r5, s32 r6) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;
    void* res = fn_8000CBC8((void*)lbl_8028FA28, r6);
    *(u32*)((u8*)res + 0x30) = (u32)r29;
    *(u32*)((u8*)res + 0x34) = (u32)r30;
    *(u32*)((u8*)res + 0x38) = (u32)r31;
}

// =============================================================
// fn_800592B8: fn_8000CC18(lbl_8028FA28, r6 or 3), store r3/r4/r5
//              to result+0x30/0x34/0x38
// =============================================================
void fn_800592B8(void* r3, void* r4, void* r5, s32 r6) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;
    if (!r6) r6 = 3;
    void* res = fn_8000CC18((void*)lbl_8028FA28, r6);
    *(u32*)((u8*)res + 0x30) = (u32)r29;
    *(u32*)((u8*)res + 0x34) = (u32)r30;
    *(u32*)((u8*)res + 0x38) = (u32)r31;
}

// =============================================================
// fn_80059320: call r3->0x30 vtable function with r3->0x34 as arg
// =============================================================
void fn_80059320(void* r3) {
    void (*vfn)(void*) = (void(*)(void*))*(u32*)((u8*)r3 + 0x30);
    void* arg = (void*)*(u32*)((u8*)r3 + 0x34);
    vfn(arg);
}

// =============================================================
// fn_8005934C: decrement r3->0x38; if <= 0, call fn_8000C198(r3, 0x63)
// =============================================================
void fn_8005934C(void* r3) {
    s32 v = *(s32*)((u8*)r3 + 0x38) - 1;
    *(s32*)((u8*)r3 + 0x38) = v;
    if (v <= 0) {
        fn_8000C198(r3, 0x63);
    }
}

// =============================================================
// fn_80059388: fn_8000CC18(lbl_8028FA10), store r3 to result+0x30
// =============================================================
void fn_80059388(void* r3) {
    void* r31 = r3;
    void* res = fn_8000CC18((void*)lbl_8028FA10, 0);
    *(u32*)((u8*)res + 0x30) = (u32)r31;
}

// =============================================================
// fn_800593C0: call r3->0x30 vtable function with r3->0x18 as arg
// =============================================================
void fn_800593C0(void* r3) {
    void (*vfn)(void*) = (void(*)(void*))*(u32*)((u8*)r3 + 0x30);
    void* arg = (void*)*(u32*)((u8*)r3 + 0x18);
    vfn(arg);
}

// =============================================================
// fn_800593EC: if r26==0: render single quad via fn_8000784C;
//              else: loop dividing r26 by 0xa each iteration,
//              computing per-iteration x position lerp,
//              call fn_8000784C each iteration. Return iteration count.
// =============================================================
s32 fn_800593EC(s16 r3, s16 r4, s16 r5, s16 r6, s16 r7, s16 r8, s16 r9,
                s32 r10, void* r11) {
    void* r31 = r11;
    s16 r22 = r3, r30 = r4, r23 = r5, r29_s = r6;
    s16 r24 = r7, r25 = r8;

    if (!r10) {
        fn_800079D8(1);
        // int-to-float bias all 6 coords and call fn_8000784C
        float f1 = (float)r22, f2 = (float)r30, f3 = (float)r23;
        float f4 = (float)r29_s, f5 = (float)r24, f6 = (float)r25;
        fn_8000784C(f1, f2, f3, f4, f5, f6);
        fn_80007718();
        fn_800079C4();
        return 1;
    }

    // Count digits: divide r26 by 0xa repeatedly
    s32 r28 = 0;
    s32 r0 = (s32)r9;
    while (r0) {
        r0 = (r0 * (s32)0x66666667LL) >> 34;
        r28++;
    }

    if (r10 == 1) {
        s32 r27 = (s32)r25 * (r28 - 1);
        (void)r27;
    }

    // Loop rendering each digit
    s32 r26 = (s32)r9;
    s32 r27 = 0;
    while (r26) {
        fn_800079D8(1);
        // compute x position for this digit
        s32 xpos = r22 + r27;
        float f1 = (float)xpos;
        float f2 = (float)r30;
        s32 digit = (r26 * (s32)0x66666667LL) >> 34;
        digit *= 0xa;
        s32 d = r26 - digit;
        float f6 = (float)d;
        fn_8000784C(f1, f2, (float)r23, (float)r29_s, f6, (float)r24);
        fn_80007718();
        fn_800079C4();
        r27 -= (s32)r25;
        r26 = (r26 * (s32)0x66666667LL) >> 34;
    }
    return r28;
}

// =============================================================
// fn_80059610: atan2-based angle computation between two 2D vectors
//   (f3-f1, f4-f2); special cases for near-zero denominator;
//   returns angle in range via fnmsubs
// =============================================================
float fn_80059610(float f1, float f2, float f3, float f4) {
    float dy = f3 - f1;
    float dx = f4 - f2;
    float result;
    if (dy < lbl_8037747C && dy > lbl_80377480) {
        if (dx <= lbl_80377418) {
            result = lbl_80377484;
        } else {
            goto normal;
        }
        goto done;
    }
normal:
    result = fn_80240BE0(dy / dx);
    result = lbl_80377488 * result;
    if (dx < lbl_80377418) result += lbl_80377484;
    {
        s32 iq = (s32)(result / lbl_8037748C);
        float rem = result - lbl_8037748C * (float)iq;
        result = result - lbl_8037748C * (float)iq;
        (void)rem;
    }
done:
    return result;
}

// =============================================================
// fn_800596D0: cubic hermite spline interpolation (6 floats in,
//   1 float out). Used by fn_80058324 glyph rendering.
// =============================================================
float fn_800596D0(float f1, float f2, float f3, float f4, float f5) {
    float f6  = lbl_80377414;
    float f11 = lbl_8037743C;
    float f1c = lbl_8037746C;
    float f9  = (double)lbl_80377470;  // double cast
    float f7  = f3 - f1;
    float f8  = f4 - f2;
    float f10 = f5 - f11;
    float f6b = f11 - f5;
    float f12 = f6 * f5;
    float f1d = f1c - f12;
    float f4b = f11 + f12;

    float t2  = f5 * f5;
    float h00 = f1d * t2 * f1 + f4b * (f10 * f10) * f2;
    float h10 = (double)f9 * f7 * f10 * f10;
    float h01 = f5 * f6b * h00;
    float h11 = (double)f9 * f8;
    float r   = h01 + f5 * h10 + h11 * f8;
    return r;
}

// fn_8005973C: document 12

// =============================================================
// fn_80059B90: fn_80229FA8(r3,r4,r5,r6), fn_8022A058(r3,r4,0x27,0),
//              fn_8022A904(r7,0), fn_80229758, fn_8022BC10
// =============================================================
void fn_80059B90(s16 r3, s16 r4, s16 r5, s16 r6, void* r7) {
    void* r31 = r7;
    void* r30 = (void*)(s32)r6;
    void* r29 = (void*)(s32)r5;
    fn_80229FA8((u32)(u16)r3, (u32)(u16)r4, (u32)(u16)r5, (u32)(u16)r6);
    fn_8022A058((u32)(u16)r29, (u32)(u16)r30, 0x27, 0);
    fn_8022A904(r31, 0);
    fn_80229758();
    fn_8022BC10();
}

// =============================================================
// fn_80059C0C: GX setup + 4-vertex quad render to GX FIFO
//   for a rectangle (r3,r4)-(r3+r5,r4+r6) with alpha
// =============================================================
void fn_80059C0C(s16 r3, s16 r4, s16 r5, s16 r6) {
    s16 r28 = r3, r29 = r4, r30 = r5, r31 = r6;
    fn_80228914();
    fn_80228240(9, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8006E090(0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DFEC(0, 0xff, 0xff, 4);
    fn_8006DD8C(0, 4);
    fn_8006E468(0, 3, 0);
    fn_8006E110(1, 0, 7, 0);
    fn_80229B48(0x80, 0, 4);

    volatile u32* gx = (volatile u32*)0xCC018000u;
    float x0 = (float)r28, y0 = (float)r29;
    float x1 = (float)(r28 + r30), y1 = (float)(r29 + r31);
    float zero = lbl_80377418;

    *(volatile float*)gx = x0; *(volatile float*)gx = y0; *(volatile float*)gx = zero;
    *(volatile float*)gx = x1; *(volatile float*)gx = y0; *(volatile float*)gx = zero;
    *(volatile float*)gx = x1; *(volatile float*)gx = y1; *(volatile float*)gx = zero;
    *(volatile float*)gx = x0; *(volatile float*)gx = y1; *(volatile float*)gx = zero;
    *(volatile float*)gx = x0; *(volatile float*)gx = y0; *(volatile float*)gx = zero;
    fn_80066C30(-1);
}

// =============================================================
// fn_80059DEC: GX setup + 4-vertex colored quad with per-vertex
//   RGBA from r31[0..3], rendering two triangles to GX FIFO
// =============================================================
void fn_80059DEC(s16 r3, s16 r4, s16 r5, s16 r6, s16 r7, s16 r8, void* r9,
                 s32 r10, void* r11) {
    void* r31 = (r7 == 0) ? (void*)&r10 : r9;
    s16 r27 = r3, r28 = r4, r29 = r5, r30 = r6;

    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E090(0);
    fn_8006E0D0(1);
    fn_8006DD8C(0, 4);
    fn_8006DFEC(0, 0xff, 0xff, 4);
    fn_8006E110(0, 0, 0, 0);
    fn_8006E468(0, 3, 0);
    fn_8006E4B4(0, 0, 1, 7, 0);
    fn_8022D388(0);
    fn_8022D3B4(1);
    fn_80229B48(0x98, 0, 4);

    volatile u32* gx = (volatile u32*)0xCC018000u;
    float x0 = (float)r27, y0 = (float)r28;
    float x1 = (float)(r27 + r29), y1 = (float)(r28 + r30);
    float zero = lbl_80377418;

    // 4 vertices with per-vertex color from r31[0..3]
    *(volatile float*)gx = x0; *(volatile float*)gx = y0; *(volatile float*)gx = zero;
    *(volatile u8*)gx = 0; *(volatile u8*)gx = 0; *(volatile u8*)gx = 0;
    *(volatile u8*)gx = ((u8*)r31)[0];
    *(volatile float*)gx = x1; *(volatile float*)gx = y0; *(volatile float*)gx = zero;
    *(volatile u8*)gx = 0; *(volatile u8*)gx = 0; *(volatile u8*)gx = 0;
    *(volatile u8*)gx = ((u8*)r31)[1];
    *(volatile float*)gx = x1; *(volatile float*)gx = y1; *(volatile float*)gx = zero;
    *(volatile u8*)gx = 0; *(volatile u8*)gx = 0; *(volatile u8*)gx = 0;
    *(volatile u8*)gx = ((u8*)r31)[2];
    *(volatile float*)gx = x0; *(volatile float*)gx = y1; *(volatile float*)gx = zero;
    *(volatile u8*)gx = 0; *(volatile u8*)gx = 0; *(volatile u8*)gx = 0;
    *(volatile u8*)gx = ((u8*)r31)[3];

    fn_8022D3B4(1);
    fn_8022D388(1);
    fn_80066C30(-1);
}

// =============================================================
// fn_8005A078: float interpolation lerp f1->f2 based on
//   r4 mod r3 position, choosing direction based on comparison
// =============================================================
float fn_8005A078(s32 r3, s32 r4, float f1, float f2) {
    s32 mod = r4 % r3;
    s32 half = r3 / 2;
    if (mod < half) {
        float t = (float)mod;
        float h = (float)half;
        float num = (f2 - f1) * t;
        float den = h;
        return f1 + num / den;
    } else {
        s32 d = mod - half;
        float t = (float)d;
        float h = (float)half;
        float num = (f1 - f2) * t;
        return f2 + num / h;
    }
}

// =============================================================
// fn_8005A124: simple float lerp: f1 + (f2-f1)*f4/f3
// =============================================================
float fn_8005A124(float f1, float f2, float f3, float f4) {
    return f1 + (f2 - f1) * f4 / f3;
}

// =============================================================
// fn_8005A138: float power function f1 + (f2-f1)*(f4^(r3-1))/(f3^(r3-1))
//   Uses loop-unrolled multiply (8 per iteration) for performance
// =============================================================
float fn_8005A138(s32 r3, float f1, float f2, float f3, float f4) {
    float diff = f2 - f1;
    float num = f4, den = f3;
    for (s32 i = 1; i < r3; i++) {
        num *= f4;
        den *= f3;
    }
    return f1 + diff * num / den;
}

// =============================================================
// fn_8005A1E8: same as fn_8005A138 but subtracts rather than adds
//   f1 + (f2-f1) * (1 - (f3-f4)^n / f3^n)
// =============================================================
float fn_8005A1E8(s32 r3, float f1, float f2, float f3, float f4) {
    float f0 = f3 - f4;
    float diff = f2 - f1;
    float num = f0, den = f3;
    for (s32 i = 1; i < r3; i++) {
        num *= f0;
        den *= f3;
    }
    return f1 + diff - diff * num / den;
}

// =============================================================
// fn_8005A2A0: project 3D world point r30 onto screen,
//   apply r31->0x8 Y offset, compute screen XY position,
//   store to r31[0..1], copy r30[8] to r31[2]
// =============================================================
void fn_8005A2A0(void* r3, void* r4, void* r5) {
    void* r31 = r5;
    void* r30 = r4;
    if (!r3) fn_80068478();
    // fn_8020B874 projects r3+0x64 point, fn_8020BC64 transforms
    // (actual computation stubbed complex matrix math)
    *(float*)((u8*)r31 + 0x0) = 0.0f;
    *(float*)((u8*)r31 + 0x4) = 0.0f;
    *(float*)((u8*)r31 + 0x8) = *(float*)((u8*)r30 + 0x8);
}

// =============================================================
// fn_8005A3A8: compute screen projection of 3D point r30,
//   apply transform via fn_8022DD90/fn_8022D834,
//   store result to r31 xyz
// =============================================================
void fn_8005A3A8(void* r3, void* r4, void* r5) {
    void* r31 = r5;
    void* r30 = r4;
    void* r29 = r3;
    if (!r29) {
        fn_80068478();
        r29 = (void*)0; // result from fn_80068478
    }
    // setup matrix stack buffer and call projection functions
    // (complex stub calls fn_8022DD90 + fn_8022D834)
    (void)r30; (void)r31;
}

// fn_8005973C: document 12 stubbed
void fn_8005973C(void) {
}