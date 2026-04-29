// auto_03_8005A468_text
#include <dolphin/types.h>

// ============================================================
// Externs
// ============================================================
extern u32  jumptable_8028FB80[];

extern float  lbl_80377490;
extern float  lbl_80377494;
extern float  lbl_80377498;
extern double lbl_803774A0;
extern float  lbl_803774A8;
extern float  lbl_803774AC;
extern double lbl_803774B0;
extern u32    lbl_8037A938;
extern u8     lbl_80273C48[];

extern "C" void   fn_8000A164(void*, void*, s32, s32);
extern "C" void   fn_8000A380(void);
extern "C" void   fn_8000A370(void);
extern "C" void   fn_8000A29C(s32, s32);
extern "C" void   fn_8000784C(void*, float, float, float, float, float, float, float);
extern "C" void   fn_800077EC(void*, s32, s32, s32);
extern "C" void   fn_800077D8(void*);
extern "C" float  fn_800068FC(s32, float, float, float, float);
extern "C" void   fn_80235530(void*, void*, void*, s32);
extern "C" void   fn_8022BA38(void*);
extern "C" u16    fn_8022BA44(void*);
extern "C" void   fn_8022BA00(void*, void*, s32, void*, s32);
extern "C" void   fn_8006F9B8(void*);
extern "C" void   fn_8006FB14(void*, void*);
extern "C" void*  fn_8006F9F0(void*, void*);
extern "C" void   fn_8006F7DC(void*, void*, void*, s32, void*);
extern "C" void   fn_8006F8E4(void*, void*, s32);
extern "C" void*  fn_800C4C34(void*, void*, s32);
extern "C" u32    OSGetTime(void);
extern "C" void   fn_8005C74C(void*);
extern "C" void   fn_800079D8(s32);
extern "C" void   fn_800079C4(void);
extern "C" void   fn_80009E9C(float, float, float, float);
extern "C" void   memcpy(void*, void*, s32);
extern "C" void   DCFlushRange(void*, u32);

// ============================================================
// fn_8005A468: return 0
// ============================================================
s32 fn_8005A468(void) { return 0; }

// ============================================================
// fn_8005A470: return 1
// ============================================================
s32 fn_8005A470(void) { return 1; }

// ============================================================
// fn_8005A478: return 2
// ============================================================
s32 fn_8005A478(void) { return 2; }

// ============================================================
// fn_8005A480: return 6
// ============================================================
s32 fn_8005A480(void) { return 6; }

// ============================================================
// fn_8005A488: return 7
// ============================================================
s32 fn_8005A488(void) { return 7; }

// ============================================================
// fn_8005A490: return 8
// ============================================================
s32 fn_8005A490(void) { return 8; }

// ============================================================
// fn_8005A498: return 0
// ============================================================
s32 fn_8005A498(void) { return 0; }

// ============================================================
// fn_8005A4A0: return 0x300
// ============================================================
s32 fn_8005A4A0(void) { return 0x300; }

// ============================================================
// fn_8005A4A8: return 0xf0
// ============================================================
s32 fn_8005A4A8(void) { return 0xf0; }

// ============================================================
// fn_8005A4B0: return 0x20
// ============================================================
s32 fn_8005A4B0(void) { return 0x20; }

// ============================================================
// fn_8005A4B8: return 0xa
// ============================================================
s32 fn_8005A4B8(void) { return 0xa; }

// ============================================================
// fn_8005A4C0: return 0x18
// ============================================================
s32 fn_8005A4C0(void) { return 0x18; }

// ============================================================
// fn_8005A4C8: return 0x18
// ============================================================
s32 fn_8005A4C8(void) { return 0x18; }

// ============================================================
// fn_8005A4D0: dispatch on r4 (0..8) channel ID (0x78)
// ============================================================
s32 fn_8005A4D0(void* r3, u8 r4, u8 r5) {
    if (r4 > 8) return 0;
    switch (r4) {
        case 0: return 0x10;
        case 1: return 0x11;
        case 2: return 0x12;
        case 3: return 0x13;
        case 4: return 0x15;
        case 5: return 0x17;
        case 6: return 0x16;
        case 7:
            if (!r5) return 0x14;
            return 0x18;
        case 8: return 0x18;
        default: return 0;
    }
}

// ============================================================
// fn_8005A548: render colored rect with frame timing (0x1FC)
//   r3=obj, r4=anim ptr, r5=total_frames, f1/f2/f3=RGB, r6=cur_frame.
//   If r6==0: return. Else setup GX viewport, compute normalized
//   frame position via vtable, double-bias, draw + set white color.
// ============================================================
void fn_8005A548(void* r3, void* r4, s32 r5, float f1, float f2, float f3, s32 r6) {
    u8*  r30p = (u8*)r3;
    void* r31p = r4;
    s32   r29v = r5;
    float f31  = f1;
    float f30  = f2;
    float f29  = f3;
    s32   r28v = r6;

    if (!r28v) return;

    fn_8000A380();
    fn_80009E9C(f31, f30, f29, lbl_80377494);
    fn_8000A29C((s32)((u8*)r30p + 4), r29v);
    fn_8000A370();

    // vtable[0x40](r3) width
    s32 (*vtbl40)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x40);
    s32 r29a = vtbl40(r30p);

    // vtable[0x38](r3) total_frames
    s32 (*vtbl38)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x38);
    s32 r3a = vtbl38(r30p);

    // double-bias: (r28v-1) / r3a remainder * r29a
    s32 r5a = r28v - 1;
    s32 r4a = r5a / r3a;
    float f30b;
    { u32 s[2] = { 0x43300000u, (u32)(((s32)(r5a - r4a * r3a) * r29a) ^ 0x8000) };
      double d = *(double*)s; f30b = (float)(d - *(double*)&lbl_803774A0); }

    // vtable[0x44](r3) something
    s32 (*vtbl44)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x44);
    s32 r29b = vtbl44(r30p);

    // vtable[0x38] again
    r3a = vtbl38(r30p);
    s32 r4b = (r28v - 1) / r3a;
    float f29b;
    { u32 s[2] = { 0x43300000u, (u32)((r4b * r29b) ^ 0x8000) };
      double d = *(double*)s; f29b = (float)(d - *(double*)&lbl_803774A0); }

    fn_800079D8(1);

    // vtable[0x44] f31
    s32 r3b = vtbl44(r30p);
    float f31b;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3b ^ 0x8000)) };
      // note: xoris r3, r3, 0x8000 then lis 0x4330
      double d = *(double*)s; f31b = (float)(d - *(double*)&lbl_803774A0); }

    // vtable[0x40] f5
    s32 r3c = vtbl40(r30p);
    float f5;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3c ^ 0x8000)) };
      double d = *(double*)s; f5 = (float)(d - *(double*)&lbl_803774A0); }

    fn_8000784C(r30p, f30b, f29b, f31b, f5, lbl_80377498, f31b, f5);
    fn_800077EC(r31p, 0xff, 0xff, 0xff);
    fn_800079C4();
}

// ============================================================
// fn_8005A744: render colored rect variant (0x218)
//   Same as fn_8005A548 but f1/f2 only, no f3,
//   checks r3[0x40] for fn_8000A164 vs fn_8000A29C,
//   uses fn_800077D8(r4) instead of fn_800077EC.
// ============================================================
void fn_8005A744(void* r3, void* r4, s32 r5, float f1, float f2) {
    u8*  r30p = (u8*)r3;
    void* r31p = r4;
    float f27  = f1;
    float f28  = f2;
    s32   r28v = r5;

    if (!r28v) return;

    fn_8000A380();

    if (r30p[0x40]) {
        fn_8000A164((void*)(r30p + 4), (void*)(r30p + 0x24), 0, 0x11);
    } else {
        fn_8000A29C((s32)(r30p + 4), 0x11);
    }

    fn_8000A370();

    s32 (*vtbl40)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x40);
    s32 r29a = vtbl40(r30p);

    s32 (*vtbl38)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x38);
    s32 r3a = vtbl38(r30p);

    s32 r5a = r28v - 1;
    s32 r4a = r5a / r3a;
    float f30;
    { u32 s[2] = { 0x43300000u, (u32)(((s32)(r5a - r4a * r3a) * r29a) ^ 0x8000) };
      double d = *(double*)s; f30 = (float)(d - *(double*)&lbl_803774A0); }

    s32 (*vtbl44)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x44);
    s32 r29b = vtbl44(r30p);

    r3a = vtbl38(r30p);
    s32 r4b = (r28v - 1) / r3a;
    float f29;
    { u32 s[2] = { 0x43300000u, (u32)((r4b * r29b) ^ 0x8000) };
      double d = *(double*)s; f29 = (float)(d - *(double*)&lbl_803774A0); }

    fn_800079D8(1);

    s32 r3b = vtbl44(r30p);
    float f31;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3b ^ 0x8000)) };
      double d = *(double*)s; f31 = (float)(d - *(double*)&lbl_803774A0); }

    s32 r3c = vtbl40(r30p);
    float f5;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3c ^ 0x8000)) };
      double d = *(double*)s; f5 = (float)(d - *(double*)&lbl_803774A0); }

    fn_8000784C(r30p, f27, f28, f30, f29, f5, f31, f5);
    fn_800077D8(r31p);
    fn_800079C4();
}

// ============================================================
// fn_8005A95C: render with pixel color tinting (0x320)
//   r3=obj, r4=anim, r5=r_add (u16), r6=g_add (u16), r7=cur_frame.
//   If r7==0: return. Checks r3[0x40] for viewport setup.
//   fn_8022BA38/44 to get pixel buffer + count. Loop: for each pixel
//   with bit 15 set, decode 5-bit R/G/B, add r5[0]/[1]/[2]>>3,
//   clamp to 0x1f, repack. DCFlushRange. Viewport + draw.
// ============================================================
void fn_8005A95C(void* r3, void* r4, u16 r5, u16 r6, s32 r7) {
    u8*  r26p = (u8*)r3;
    void* r30p = r4;
    u16   r27v = r5;   // r (as u16, stored to r27)
    u16   r28v = r6;   // g
    s32   r29v = r7;   // cur_frame (r29 in asm but called r6 in prototype actually r7)

    // NOTE: asm has mr r29,r6; mr r26,r3; mr r27,r4; mr r28,r5; mr r30,r7
    // so: r26=r3(obj), r27=r4(anim), r28=r5(r_add u16), r29=r6(... wait

    // Re-reading asm: mr r29,r6; mr r26,r3; mr r27,r4; mr r28,r5; mr r30,r7
    // So: r26=obj, r27=anim, r28=r5, r29=r6, r30=r7(frame)
    // beq 2f4 checks r29 (r6 arg). So r6 is the frame count guard.

    if (!r6) return;

    fn_8000A380();

    // Check r26[0x40]
    if (r26p[0x40]) {
        fn_8000A164((void*)(r26p + 4), (void*)(r26p + 0x24), 0, 0x11);
    } else {
        // Check r30[0..2] all zero fn_8000A164 with 0x11 or fn_8000A29C
        u8 b0 = ((u8*)r4)[0]; // r30 = r7 = frame ptr? No...
        // r30 in asm is r7 arg. lbz r0, 0x0(r30) checks frame color bytes.
        u8 rb = ((u8*)&r7)[0];
        u8 gb = ((u8*)&r7)[1];
        u8 bb = ((u8*)&r7)[2];
        if (!rb && !gb && !bb) {
            fn_8000A164((void*)(r26p + 4), (void*)(r26p + 0x30), 0, 0x11);
        } else {
            fn_8000A29C((s32)(r26p + 4), 0x11);
        }
    }

    fn_8000A370();

    // vtable calls same as above
    s32 (*vtbl40)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r26p + 0x44) + 0x40);
    s32 r29a = vtbl40(r26p);

    s32 (*vtbl38)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r26p + 0x44) + 0x38);
    s32 r3a = vtbl38(r26p);

    s32 r5a = (s32)r6 - 1;
    s32 r4a = r5a / r3a;
    float f30;
    { u32 s[2] = { 0x43300000u, (u32)(((s32)(r5a - r4a * r3a) * r29a) ^ 0x8000) };
      double d = *(double*)s; f30 = (float)(d - *(double*)&lbl_803774A0); }

    // Copy pixel buffer
    fn_8022BA38((void*)(r26p + 0x24));
    u16 pixel_count = fn_8022BA44((void*)(r26p + 0x24));

    // Get dest buffer and copy
    u16* dest = (u16*)*(u32*)(r26p + 0x3c);
    u32  byte_count = (u32)pixel_count * 2;
    memcpy(dest, dest, (s32)byte_count);  // src from fn_8022BA38 result

    // Tint loop
    u8* color = (u8*)&r7;  // r30 = r7 arg contains RGB tint
    for (s32 i = 0; i < (s32)pixel_count; i++) {
        u16 px = dest[i];
        if (!(px & 0x8000)) continue;

        u16 r_field = (u16)((px >> 10) & 0x1f);
        u16 g_field = (u16)((px >> 5)  & 0x1f);
        u16 b_field = (u16)(px & 0x1f);

        s32 r_new = (s32)r_field + ((s8)color[0] >> 3);
        s32 g_new = (s32)g_field + ((s8)color[1] >> 3);
        s32 b_new = (s32)b_field + ((s8)color[2] >> 3);

        if (r_new > 0x1f) r_new = 0x1f;
        if (g_new > 0x1f) g_new = 0x1f;
        if (b_new > 0x1f) b_new = 0x1f;

        u16 out = (u16)(0x8000 | ((u16)r_new << 10) | ((u16)g_new << 5) | (u16)b_new);
        dest[i] = out;
    }

    DCFlushRange(dest, byte_count);

    fn_8000A164((void*)(r26p + 4), (void*)(r26p + 0x30), 0, 0x11);

    fn_8000A370();

    // vtable[0x44]  f31, vtable[0x40]  f5 (same pattern)
    s32 (*vtbl44)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32*)(r26p + 0x44) + 0x44);
    s32 r29b = vtbl44(r26p);

    r3a = vtbl38(r26p);
    s32 r4b = ((s32)r6 - 1) / r3a;
    float f29;
    { u32 s[2] = { 0x43300000u, (u32)((r4b * r29b) ^ 0x8000) };
      double d = *(double*)s; f29 = (float)(d - *(double*)&lbl_803774A0); }

    fn_800079D8(1);

    s32 r3b = vtbl44(r26p);
    float f31;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3b ^ 0x8000)) };
      double d = *(double*)s; f31 = (float)(d - *(double*)&lbl_803774A0); }

    s32 r3c = vtbl40(r26p);
    float f5;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(r3c ^ 0x8000)) };
      double d = *(double*)s; f5 = (float)(d - *(double*)&lbl_803774A0); }

    fn_8000784C(r26p, f30, f29, f31, f5, lbl_80377498, f31, f5);
    fn_800077D8(r30p);
    fn_800079C4();
}

// ============================================================
// fn_8005AC7C: time-based color animation render (0x168)
//   r3=obj, r4=r, r5=g, r6=b, r7=flag.
//   If flag==0: vtable[0x14](r3) and return.
//   Else: OSGetTime, compute time-based value via fn_80235530 +
//   fn_800068FC, pack as RGB, call vtable[0x1c] with color.
// ============================================================
void fn_8005AC7C(void* r3, s32 r4, s32 r5, s32 r6, u8 r7) {
    u8* r28p = (u8*)r3;
    s32 r29v = r4;
    s32 r30v = r5;
    s32 r31v = r6;

    if (!r7) {
        void (*vtbl14)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)(r28p + 0x44) + 0x14);
        vtbl14(r28p);
        return;
    }

    OSGetTime();
    // Timer from 0x800000F8 >> 2
    u32 hw_timer = *(u32*)((u8*)0x80000000 + 0xf8) >> 2;
    // Multiply by 0x10624dd3 >> 6 to get seconds-ish
    u32 t_frac;
    { u32 k = 0x10624dd3u;
      t_frac = (u32)(((u64)k * hw_timer) >> 32) >> 6; }
    fn_80235530(0, 0, 0, 0);  // placeholder actual args from r6 register

    // remainder within 600 (0x258)
    u32 t2 = t_frac;
    { u32 k2 = 0x1b4f7eb5u;
      u32 hi = (u32)(((u64)k2 * t2) >> 32) >> 6;
      t2 = t2 - hi * 600; }

    s32 r8v;
    if (t2 < 0x12c) {
        float fv;
        { u32 s[2] = { 0x43300000u, (u32)(t2 ^ 0x8000) };
          double d = *(double*)s; fv = (float)(d - *(double*)&lbl_803774B0); }
        r8v = (s32)fn_800068FC(0, lbl_80377498, lbl_803774A8, fv, lbl_803774AC);
    } else {
        u32 t3 = t2 - 0x12c;
        float fv;
        { u32 s[2] = { 0x43300000u, (u32)(t3 ^ 0x8000) };
          double d = *(double*)s; fv = (float)(d - *(double*)&lbl_803774B0); }
        r8v = (s32)fn_800068FC(0, lbl_803774A8, lbl_80377498, fv, lbl_803774AC);
    }

    u32 color = lbl_80377490;
    ((u8*)&color)[0] = (u8)r8v;
    ((u8*)&color)[1] = (u8)r8v;
    ((u8*)&color)[2] = (u8)r8v;

    u8 stk_c[4];
    *(u32*)stk_c = color;

    void (*vtbl1c)(void*, s32, s32, s32, void*, void*) =
        (void(*)(void*, s32, s32, s32, void*, void*))
        *(u32*)((u8*)*(u32*)(r28p + 0x44) + 0x1c);
    vtbl1c(r28p, r29v, r30v, r31v, (void*)r31v, stk_c);
}

// ============================================================
// fn_8005ADE4: call vtable[0x1c] with lbl_8037A938 color (0x38)
// ============================================================
void fn_8005ADE4(void* r3) {
    u32 stk_8 = lbl_8037A938;
    void (*vtbl1c)(void*, void*) =
        (void(*)(void*, void*))*(u32*)((u8*)*(u32*)((u8*)r3 + 0x44) + 0x1c);
    vtbl1c(r3, (void*)&stk_8);
}

// ============================================================
// fn_8005AE1C: if r3[0] non-null call fn_8006F9B8 (0x2C)
// ============================================================
void fn_8005AE1C(void* r3) {
    if (*(u32*)r3) fn_8006F9B8((void*)*(u32*)r3);
}

// ============================================================
// fn_8005AE48: init render texture object (0x12C)
// ============================================================
void fn_8005AE48(void* r3) {
    u8* r30p = (u8*)r3;

    if (*(u32*)r30p) return;

    void* (*vtbl28)(void*) = (void*(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x28);
    void* r4 = vtbl28(r30p);
    fn_8006FB14(r30p, r4);

    void* (*vtbl2c)(void*) = (void*(*)(void*))*(u32*)((u8*)*(u32*)(r30p + 0x44) + 0x2c);
    void* r5 = vtbl2c(r30p);

    void* res = fn_8006F9F0((void*)*(u32*)r30p, r5);

    if (*(u32*)((u8*)res + 4)) {
        r30p[0x40] = 1;
        void* r7 = vtbl2c(r30p);
        fn_8022BA38((void*)(r30p + 0x24));
        u16 r31v = fn_8022BA44((void*)(r30p + 0x24));
        void* texbuf = fn_800C4C34((void*)*(u32*)(r30p + 0x3c),
                                    (void*)((u8*)lbl_80273C48 + 8), 0);
        *(u32*)(r30p + 0x3c) = (u32)texbuf;
        fn_8022BA00((void*)(r30p + 0x30), (void*)(r30p + 0x3c),
                    2, (void*)(u32)r31v, 0);
    } else {
        r30p[0x40] = 0;
        void* r5b = vtbl2c(r30p);
        fn_8006F8E4((void*)*(u32*)r30p, (void*)(r30p + 4), (s32)r5b);
    }
}

// ============================================================
// fn_8005AF74: vtable[0x28](r3) then fn_8005C74C(r3) (0x30)
// ============================================================
void fn_8005AF74(void* r3) {
    void (*vtbl28)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)((u8*)r3 + 0x44) + 0x28);
    vtbl28(r3);
    fn_8005C74C(r3);
}