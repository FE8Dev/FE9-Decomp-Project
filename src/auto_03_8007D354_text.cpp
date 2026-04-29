// auto_03_8007D354_text
#include <dolphin/types.h>

// ============================================================
// Externs
// ============================================================
extern u8   lbl_80275488[];
extern u8   lbl_80275478[];
extern u32  lbl_80375750;
extern u32  lbl_803757BC;
extern u32  lbl_803776E0;
extern u32  lbl_803776E4;
extern double lbl_803776E8;
extern float  lbl_803776F4;
extern float  lbl_803776F8;
extern float  lbl_80377704;
extern u32  lbl_80377720;
extern u32  lbl_80377724;
extern u32  lbl_80377728;
extern u32  lbl_8037772C;
extern float  lbl_80377738;
extern float  lbl_8037773C;
extern float  lbl_80377740;
extern float  lbl_80377744;
extern float  lbl_80377748;
extern float  lbl_8037774C;
extern float  lbl_80377750;
extern float  lbl_80377754;
extern float  lbl_80377758;
extern float  lbl_8037775C;
extern double lbl_80377760;
extern double lbl_80377768;
extern u32  lbl_8037A960;
extern u32  lbl_8037A964;
extern u32  lbl_8037A968;
extern u32  lbl_8037A96C;
extern u8   lbl_802938E4[];
 
extern "C" void   fn_8000A380(void);
extern "C" void   fn_8000A370(void);
extern "C" void   fn_8000A29C(s32, s32);
extern "C" void   fn_8000A0B8(void*, s32, s32);
extern "C" void   fn_8000A164(void*, void*, s32, s32);
extern "C" void*  fn_8000C1E8(void*);
extern "C" void   fn_80009D34(float);
extern "C" void   fn_80009E9C(float, float, float, float);
extern "C" s32    fn_80010CA0(void*, s32);
extern "C" void   fn_80010164(s32, s32, s32, s32, s32, float, float, void*);
extern "C" void   fn_8018F780(void);
extern "C" void   fn_80007918(void*, float, float, float, float);
extern "C" void   fn_80007718(void);
extern "C" void   fn_80007978(void*, float, float, float, float);
extern "C" void   fn_80007958(void*, float, float, float, float);
extern "C" void   fn_80007998(void*, float, float);
extern "C" void   fn_80007264(void*);
extern "C" void   fn_800073BC(float);
extern "C" void   fn_800073D0(s32, s32, s32, s32);
extern "C" void   fn_800073F0(void*, void*, void*, void*);
extern "C" void   fn_800077EC(void*, s32, s32, s32);
extern "C" void   fn_800079D8(s32);
extern "C" void   fn_800079C4(void);
extern "C" void   fn_800079B0(void);
extern "C" void*  fn_8006F9F0(void*, s32);
extern "C" void   fn_80089250(void);
 
// ============================================================
// fn_8007D354: return lbl_80275488+0x1c3 (dataARAMDefaultGetInfo)
// ============================================================
extern "C" u8* fn_8007D354(void) {
    return (u8*)lbl_80275488 + 0x1c3;
}
 
// ============================================================
// fn_8007D364: if lbl_80375750->0x54 non-null, store 1 to [0x36]
// ============================================================
extern "C" s32 fn_8007D364(void) {
    void* r3 = (void*)*(u32*)((u8*)lbl_80375750 + 0x54);
    if (r3) *(s16*)((u8*)r3 + 0x36) = 1;
    return 0;
}
 
// ============================================================
// fn_8007D384: draw arrow/cursor at r29/r30 screen positions (0x188)
//   r3=unused, r4=pos_a ptr, r5=pos_b ptr.
//   Loads 4 floats from lbl_80275478 as color/style table.
//   Checks lbl_80375750->0x46 bits 26/25/24 for style index (0-3).
//   Double-biases r29[0x30/0x32] and r30[0x30/0x32] for screen coords.
//   fn_8000A380/A29C/A370, fn_800079D8(5), fn_80007998(x,y),
//   fn_80007264(color[style]), fn_800073BC, fn_800073D0 if flags.
// ============================================================
void fn_8007D384(void* r3, void* r4, void* r5) {
    void* r29p = r4;
    void* r30p = r5;
 
    // Load color table from lbl_80275478 (4 entries of 4 floats)
    u32 stk_8  = *(u32*)((u8*)lbl_80275478 + 0);
    u32 stk_c  = *(u32*)((u8*)lbl_80275478 + 4);
    u32 stk_10 = *(u32*)((u8*)lbl_80275478 + 8);
    u32 stk_14 = *(u32*)((u8*)lbl_80275478 + 0xc);
 
    // Determine style from bits 26/25/24 of lbl_80375750->0x46
    s32 r31v = 0;
    u16 flags = *(u16*)((u8*)lbl_80375750 + 0x46);
    if (flags & 0x20u) r31v = 1;  // bit 26 -> style 1
    if (flags & 0x40u) r31v = 2;  // bit 25 -> style 2
    if (flags & 0x80u) r31v = 3;  // bit 24 -> style 3
 
    fn_8000A380();
 
    // Double-bias r29[0x30] and r29[0x32]
    float f1, f2;
    { s16 x = *(s16*)((u8*)r29p + 0x30);
      u32 s[2] = { 0x43300000u, (u32)((s32)x ^ 0x8000) };
      double d = *(double*)s; f1 = (float)(d - *(double*)&lbl_803776E8); }
    { s16 y = *(s16*)((u8*)r29p + 0x32);
      u32 s[2] = { 0x43300000u, (u32)((s32)y ^ 0x8000) };
      double d = *(double*)s; f2 = (float)(d - *(double*)&lbl_803776E8); }
 
    fn_80009E9C(f1, f2, lbl_803776F4, lbl_803776F8);
    fn_8000A29C(0, 3);
    fn_8000A370();
    fn_800079D8(5);
 
    // Double-bias r30[0x30] and r30[0x32]
    float f1b, f2b;
    { s16 x = *(s16*)((u8*)r30p + 0x30);
      u32 s[2] = { 0x43300000u, (u32)((s32)x ^ 0x8000) };
      double d = *(double*)s; f1b = (float)(d - *(double*)&lbl_803776E8); }
    { s16 y = *(s16*)((u8*)r30p + 0x32);
      u32 s[2] = { 0x43300000u, (u32)((s32)y ^ 0x8000) };
      double d = *(double*)s; f2b = (float)(d - *(double*)&lbl_803776E8); }
 
    fn_80007998((void*)&f1b, f1b, f2b);
 
    // Select color from table by style
    void* color_ptr = (void*)((u8*)&stk_8 + r31v * 4);
    fn_80007264(color_ptr);
    fn_800073BC(lbl_80377704);
 
    // Check r30[0x38] for yellow highlight
    if (((u8*)r30p)[0x38]) {
        fn_800073D0(0xff, 0xff, 0, 0xff);
    }
 
    // Check r30[0x39] == 2 for black
    if (((u8*)r30p)[0x39] == 2) {
        fn_800073D0(0, 0, 0, 0xff);
    }
 
    fn_800079C4();
}
 
// ============================================================
// fn_8007D50C: set lbl_80375750->0x46 flags for display mode (0x74)
//   Reads lbl_80375750->0x50 (anim ptr); if null return 0.
//   Checks bits 26/25/24 of 0x46 to determine r7 (0x20/0x40/0x80/0x0).
//   Clears bits 27-23 of 0x46, stores r4=1 to 0x36(r8),
//   ORs r7 into 0x46.
// ============================================================
s32 fn_8007D50C(void) {
    u8* r6p = (u8*)lbl_80375750;
    s32 r7v = 0x20;
    void* r8p = (void*)*(u32*)(r6p + 0x50);
    if (!r8p) return 0;
 
    u16 flags = *(u16*)(r6p + 0x46);
    if (flags & 0x20u) r7v = 0x40;
    if (flags & 0x40u) r7v = 0x80;
    if (flags & 0x80u) r7v = 0;
 
    // Clear bits 27-23, store 1 to r8[0x36]
    u16 f2 = flags & ~0xf8u;
    *(u16*)(r6p + 0x46) = f2;
    *(s16*)((u8*)r8p + 0x36) = 1;
 
    // OR new value into 0x46
    u8* r5p = (u8*)lbl_80375750;
    u16 f3 = *(u16*)(r5p + 0x46);
    *(u16*)(r5p + 0x46) = (u16)(f3 | (u16)r7v);
    return 0;
}
 
// ============================================================
// fn_8007D580: draw single arrow at r29 position (0x15C)
//   Same pattern as fn_8007D384 but single position (r29=r4, r31=r5).
//   Checks bit 30 of lbl_80375750->0x46 for style index (0 or 1).
//   Draws using lbl_803776E0/E4 as color table.
// ============================================================
void fn_8007D580(void* r3, void* r4, void* r5) {
    void* r29p = r4;
    void* r31p = r5;
    s32 r30v = 0;
 
    u32 stk_8 = lbl_803776E0;
    u32 stk_c = lbl_803776E4;
 
    u16 flags = *(u16*)((u8*)lbl_80375750 + 0x46);
    if (flags & 4u) r30v = 1;  // bit 30
 
    fn_8000A380();
 
    float f1, f2;
    { s16 x = *(s16*)((u8*)r29p + 0x30);
      u32 s[2] = { 0x43300000u, (u32)((s32)x ^ 0x8000) };
      double d = *(double*)s; f1 = (float)(d - *(double*)&lbl_803776E8); }
    { s16 y = *(s16*)((u8*)r29p + 0x32);
      u32 s[2] = { 0x43300000u, (u32)((s32)y ^ 0x8000) };
      double d = *(double*)s; f2 = (float)(d - *(double*)&lbl_803776E8); }
 
    fn_80009E9C(f1, f2, lbl_803776F4, lbl_803776F8);
    fn_8000A29C(0, 3);
    fn_8000A370();
    fn_800079D8(5);
 
    float f1b, f2b;
    { s16 x = *(s16*)((u8*)r31p + 0x30);
      u32 s[2] = { 0x43300000u, (u32)((s32)x ^ 0x8000) };
      double d = *(double*)s; f1b = (float)(d - *(double*)&lbl_803776E8); }
    { s16 y = *(s16*)((u8*)r31p + 0x32);
      u32 s[2] = { 0x43300000u, (u32)((s32)y ^ 0x8000) };
      double d = *(double*)s; f2b = (float)(d - *(double*)&lbl_803776E8); }
 
    fn_80007998((void*)&f1b, f1b, f2b);
 
    void* color_ptr = (void*)((u8*)&stk_8 + r30v * 4);
    fn_80007264(color_ptr);
    fn_800073BC(lbl_80377704);
 
    if (((u8*)r31p)[0x38]) {
        fn_800073D0(0xff, 0xff, 0, 0xff);
    }
    if (((u8*)r31p)[0x39] == 2) {
        fn_800073D0(0, 0, 0, 0xff);
    }
 
    fn_800079C4();
}
 
// ============================================================
// fn_8007D6DC: toggle bit 30 of lbl_80375750->0x46 (0x44)
//   If bit 30 already set: r3=0, else r3=2.
//   Clears bits via AND ~0x202, then ORs r3.
// ============================================================
void fn_8007D6DC(void) {
    u8* r6p = (u8*)lbl_80375750;
    s32 r3v = 2;
    u16 flags = *(u16*)(r6p + 0x46);
    if (flags & 4u) r3v = 0;  // bit 30 set -> r3=0
 
    u16 masked = (u16)(flags & ~0x202u);
    *(u16*)(r6p + 0x46) = masked;
 
    u8* r5p = (u8*)lbl_80375750;
    u16 f2 = *(u16*)(r5p + 0x46);
    *(u16*)(r5p + 0x46) = (u16)(f2 | (u16)r3v);
}
 
// ============================================================
// fn_8007D720: return 1 if lbl_802938E4 list non-empty, 0 if empty (0x34)
// ============================================================
u32 fn_8007D720(void) {
    void* r3 = fn_8000C1E8((void*)lbl_802938E4);
    u32 r0 = (u32)r3;
    return (r0 | (u32)(-(s32)r0)) >> 31;
}
 
// ============================================================
// fn_8007D754: draw cursor line with two colored rects (0x1AC)
//   r3=obj ptr, r4=frame (u8/bool).
//   Two passes: draws rect 1 (lbl_80377738/3C/40/44),
//   then rect 2 (lbl_80377738/40/44/48).
//   Reads color words from lbl_8037A960-6C.
//   Then draws centered text via fn_80010164.
// ============================================================
void fn_8007D754(void* r3, u8 r4) {
    void* r30p = r3;
    u8    r31v = r4;
 
    fn_8000A380();
    fn_8000A29C(0, 0x12);
    fn_8000A370();
    fn_800079D8(3);
 
    // First rect
    fn_80007978(r30p, lbl_80377738, lbl_8037773C, lbl_80377738, lbl_80377738);
    fn_80007958(r30p, lbl_80377740, lbl_80377738, lbl_80377738, lbl_80377744);
 
    // Color words on stack
    u32 stk_8  = lbl_8037A960;
    u32 stk_c  = lbl_8037A964;
    u32 stk_10 = lbl_8037A964; // note: r8=lbl_80377720 in asm
    u32 stk_14 = lbl_80377724;
    fn_800073F0((void*)&stk_8, (void*)&stk_c, (void*)&stk_10, (void*)&stk_14);
    fn_80007718();
    fn_800079C4();
 
    fn_800079D8(3);
    fn_80007978(r30p, lbl_80377738, lbl_80377744, lbl_80377738, lbl_80377738);
    fn_80007958(r30p, lbl_80377740, lbl_80377738, lbl_80377738, lbl_80377748);
 
    u32 stk_18 = lbl_8037A968;
    u32 stk_1c = lbl_8037A96C;
    u32 stk_20 = lbl_8037772C;
    u32 stk_24 = lbl_80377728;
    fn_800073F0((void*)&stk_18, (void*)&stk_1c, (void*)&stk_20, (void*)&stk_24);
    fn_80007718();
    fn_800079C4();
 
    fn_8000A380();
    fn_80009D34(lbl_8037774C);
    fn_8000A370();
 
    fn_8000A380();
    fn_8000A29C(0, 0x13);
    fn_8000A370();
 
    // Compute text x position
    s32 r3v;
    if (r31v) {
        r3v = 0x18;
    } else {
        s32 tmp = fn_80010CA0(r30p, -1);
        // signed divide by 2: (tmp + (tmp>>31)) >> 1
        s32 shifted = (tmp >> 31);
        r3v = (s16)(0x130 - ((tmp + shifted) >> 1));
    }
 
    fn_80010164(r3v, 0x197, 1, 1, 0, lbl_80377750, lbl_80377738, r30p);
 
    fn_8000A380();
    fn_80009D34(lbl_80377750);
    fn_8000A370();
}
 
// ============================================================
// fn_8007D900: call fn_80089250 (cPlayer::PostPhysicsUpdate, 0x20)
// ============================================================
extern "C" void fn_8007D900(void) {
    fn_80089250();
}
 
// ============================================================
// fn_8007D920: draw animated sprite with screen text (0x304)
//   r3=obj, r4=anim_ptr, f1=x, f2=y, f3=frame_val.
//   Double-biases fn_80010CA0 result to get f29 (height or frame offset).
//   Sets up two GX passes: first draws fn_80007918 sprite,
//   second draws fn_80007978/fn_80007958 with texture coords
//   from lbl_803757BC->0x1d via fn_8006F9F0/fn_8018F780.
//   Draws centered text via fn_80010164.
// ============================================================
void fn_8007D920(void* r3, float f1, float f2, float f3) {
    void* r29p = r3;
    void* r30p = (void*)r3;  // r30 = r4 in asm
    float f30  = f1;
    float f31  = f2;
    float f25  = f3;
    float f29  = f25;

    // fn_80010CA0(r29, -1) -> double-bias -> compare with lbl_80377754+result
    {
        s32 ret = fn_80010CA0(r29p, -1);
        float fdb;
        { u32 s[2] = { 0x43300000u, (u32)((s32)(ret ^ 0x8000)) };
          double d = *(double*)s; fdb = (float)(d - *(double*)&lbl_80377760); }
        float cmp = lbl_80377754 + fdb;
        // cror eq,lt,eq: branch if f25 <= cmp
        if (f25 <= cmp) {
            // second fn_80010CA0 call
            s32 ret2 = fn_80010CA0(r29p, -1);
            float fdb2;
            { u32 s[2] = { 0x43300000u, (u32)((s32)(ret2 ^ 0x8000)) };
              double d = *(double*)s; fdb2 = (float)(d - *(double*)&lbl_80377760); }
            f29 = lbl_80377754 + fdb2;
        }
    }

    // First GX pass: draw sprite
    fn_8000A380();
    fn_8000A29C(0, 0x12);
    fn_8000A370();
    fn_800079D8(1);
    fn_80007918(r30p, f30, f31, f29, lbl_80377758);
    fn_80007718();
    fn_800077EC(r30p, 0, 0, 0xff);
    fn_800079C4();

    // Get texture dimensions from lbl_803757BC->0x1d
    void* tex1 = fn_8006F9F0((void*)lbl_803757BC, 0x1d);
    void* r6p = (void*)*(u32*)tex1;
    u16 w1 = *(u16*)r6p;
    u16 h1 = *(u16*)((u8*)r6p + 2);
    float f25a, f26;
    { u32 s[2] = { 0x43300000u, (u32)(w1 ^ 0x8000) };
      double d = *(double*)s; f25a = (float)((d - *(double*)&lbl_80377768) * lbl_80377750); }
    { u32 s[2] = { 0x43300000u, (u32)(h1 ^ 0x8000) };
      double d = *(double*)s; f26  = (float)((d - *(double*)&lbl_80377768) * lbl_80377750); }

    fn_8018F780();

    // Second texture dims
    void* r31p = (void*)lbl_803757BC;
    u32 stk_8 = *(u32*)fn_8018F780;  // placeholder
    void* tex2 = fn_8006F9F0(r31p, 0x1d);
    void* r5p = (void*)*(u32*)tex2;
    u16 w2 = *(u16*)((u8*)r5p + 2);
    u16 h2 = *(u16*)r5p;
    float f27, f28;
    { u32 s[2] = { 0x43300000u, (u32)(w2 ^ 0x8000) };
      double d = *(double*)s; f27 = (float)(d - *(double*)&lbl_80377768); }
    { u32 s[2] = { 0x43300000u, (u32)(h2 ^ 0x8000) };
      double d = *(double*)s; f28 = (float)(d - *(double*)&lbl_80377768); }

    // Second GX pass
    fn_8000A380();
    fn_8000A0B8(r31p, 0x1d, 0x11);
    fn_8000A370();
    fn_800079D8(1);
    fn_800079B0();

    f29 = f30 + f29;
    fn_80007978(r30p, f29, f31, lbl_80377738, lbl_80377738);
    fn_80007958(r30p, f29 + f26, f31 + f25a, f27, f28);

    // Color from stk[0x8..0xa]
    u8 stk_r = ((u8*)&stk_8)[0];
    u8 stk_g = ((u8*)&stk_8)[1];
    u8 stk_b = ((u8*)&stk_8)[2];
    fn_800077EC(r30p, stk_r, stk_g, stk_b);
    fn_80007718();
    fn_800079C4();

    fn_8000A380();
    fn_80009D34(lbl_8037774C);
    fn_8000A370();

    fn_8000A380();
    fn_8000A29C(0, 0x13);
    fn_8000A370();

    // Text position: lbl_80377754 + f30, f31 - lbl_8037775C
    float fx, fy;
    { float ftmp = lbl_80377754 + f30;
      s32 iv; { iv = (s32)ftmp; }
      u32 s[2] = { 0x43300000u, (u32)(iv ^ 0x8000) };
      // fctiwz then store
      fx = ftmp; }
    { float ftmp2 = f31 - lbl_8037775C;
      fy = ftmp2; }

    s32 ix = (s32)(lbl_80377754 + f30);
    s32 iy = (s32)(f31 - lbl_8037775C);
    fn_80010164(ix, iy, 1, 1, 0, lbl_80377750, lbl_80377738, r29p);

    fn_8000A380();
    fn_80009D34(lbl_80377750);
    fn_8000A370();
}
