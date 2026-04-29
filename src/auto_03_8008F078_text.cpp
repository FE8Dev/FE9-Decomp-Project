// auto_03_8008F078_text
#include <dolphin/types.h>

// ============================================================
// Externs
// ============================================================
extern float  lbl_80377AA4;
extern float  lbl_80377AB8;
extern float  lbl_80377ABC;
extern double lbl_80377AB0;
extern float  lbl_80377A94;
 
extern u8     lbl_80293AB0[];
 
extern "C" void   fn_8000A380(void);
extern "C" void   fn_8000A370(void);
extern "C" void   fn_8000A29C(s32, s32);
extern "C" void   fn_80009E9C(float, float, float, float);
extern "C" void   fn_80007918(void*, float, float, float, float);
extern "C" void   fn_80007718(void);
extern "C" void   fn_800073F0(void*, void*, void*, void*);
extern "C" void   fn_800079D8(s32);
extern "C" void   fn_800079C4(void);
extern "C" u32    fn_800068F4(void);
extern "C" s32    fn_8023991C(s32);
extern "C" void*  fn_8000C1E8(void*);
extern "C" void*  fn_8000CC18(void*, s32);

static void fn_8008F098(void*);
 
// ============================================================
// Helper macro for double-bias of s32 integer to float
// ============================================================
#define INT_TO_FLOAT_BIAS(val, out) \
    { u32 _s[2] = { 0x43300000u, (u32)((s32)(val) ^ 0x8000) }; \
      double _d = *(double*)_s; (out) = (float)(_d - *(double*)&lbl_80377AB0); }
 
// ============================================================
// Helper: one animation segment draw loop
//   f29=start, f28=step, f27=-step, r30=count, r29=loop_idx,
//   r31=obj, draws r30 iterations
// ============================================================
static inline void draw_segment(void* r31p, s32 r30v, s32 r29v,
    float f29, float f28, float f30a, float f27,
    int forward)
{
    s32 r28v = 0;
    s32 r29i = r29v;
    while (r28v < r30v) {
        fn_800079D8(3);
        if (forward) {
            fn_80007918(r31p, f29, f30a, f28, lbl_80377ABC);
        } else {
            fn_80007918(r31p, f30a, f29, f27, lbl_80377ABC);
        }
 
        // 4x fn_800068F4 -> color table entries
        u32 c0, c1, c2, c3;
        fn_800068F4();
        { s32 idx = fn_8023991C(0) - (r29i + 1);
          u32* tbl = (u32*)*(u32*)((u8*)r31p + 0x30);
          c3 = tbl[(idx & 0x1f)]; }
        fn_800068F4();
        { s32 idx = fn_8023991C(0) - r29i;
          u32* tbl = (u32*)*(u32*)((u8*)r31p + 0x30);
          c2 = tbl[(idx & 0x1f)]; }
        fn_800068F4();
        { s32 idx = fn_8023991C(0) - (r29i + 1);
          u32* tbl = (u32*)*(u32*)((u8*)r31p + 0x30);
          c1 = tbl[(idx & 0x1f)]; }
        fn_800068F4();
        { s32 idx = fn_8023991C(0) - r29i;
          u32* tbl = (u32*)*(u32*)((u8*)r31p + 0x30);
          c0 = tbl[(idx & 0x1f)]; }
 
        fn_800073F0(&c0, &c1, &c2, &c3);
        fn_80007718();
        fn_800079C4();
 
        f29 += f28;
        r28v++;
        r29i++;
    }
}
 
// ============================================================
// fn_8008F078: call fn_8008F098 (cPlayer::PostPhysicsUpdate, 0x20)
// ============================================================
extern "C" void fn_8008F078(void* r3) {
    fn_8008F098(r3);
}
 
// ============================================================
// fn_8008F098: draw animated trail segments (0x1980)
//   r3=obj. Checks r31[0x4c]; if zero: skips to 8-segment section.
//   Otherwise: draws 6 animation segments using coords from
//   r31[0x34/0x38/0x3c/0x40/0x44/0x48], each via fn_8023991C loop.
//   Each loop: fn_800079D8(3), fn_80007918, 4x fn_800068F4+color,
//   fn_800073F0, fn_80007718, fn_800079C4.
// ============================================================
void fn_8008F098(void* r3) {
    u8* r31p = (u8*)r3;
 
    fn_8000A380();
    fn_80009E9C(lbl_80377AA4, lbl_80377AB8, lbl_80377AA4, lbl_80377A94);
    fn_8000A29C(0, 0);
    fn_8000A370();
 
    if (!r31p[0x4c]) goto seg_cdc;
 
    // Segment 1: coords from r31[0x34], r31[0x3c], r31[0x38]
    {
        s32 v34 = *(s32*)(r31p + 0x34);
        s32 v38 = *(s32*)(r31p + 0x38);
        s32 v3c = *(s32*)(r31p + 0x3c);
        float f28, f30a, f29;
        INT_TO_FLOAT_BIAS((s32)(v34 + v3c), f28);
        INT_TO_FLOAT_BIAS(v38, f30a);
        INT_TO_FLOAT_BIAS(v34, f29);
        s32 r30v = fn_8023991C(5);
        float fdb; INT_TO_FLOAT_BIAS(r30v, fdb);
        float fdiv = (f28 - f29) / (float)(fdb - *(double*)&lbl_80377AB0);
        float fneg = -fdiv;
        s32 r29v = 0;
        s32 r28v = 0;
        while (r28v < r30v) {
            fn_800079D8(3);
            if (fdiv >= lbl_80377AA4) {
                fn_80007918(r31p, f29, f30a, fdiv, lbl_80377ABC);
            } else {
                fn_80007918(r31p, f30a, f29 + fdiv, fneg, lbl_80377ABC);
                // actually: fadds f1, f29, f30 path
            }
            fn_800068F4();
            u32* tbl = (u32*)*(u32*)(r31p + 0x30);
            u32 c3 = tbl[((fn_8023991C(0) - (r28v+1)) & 0x1f)];
            fn_800068F4();
            u32 c2 = tbl[((fn_8023991C(0) - r28v) & 0x1f)];
            fn_800068F4();
            u32 c1 = tbl[((fn_8023991C(0) - (r28v+1)) & 0x1f)];
            fn_800068F4();
            u32 c0 = tbl[((fn_8023991C(0) - r28v) & 0x1f)];
            fn_800073F0(&c0, &c1, &c2, &c3);
            fn_80007718();
            fn_800079C4();
            f29 += fdiv;
            r28v++;
            r29v++;
        }
    }
 
    // Remaining segments follow identical pattern with different
    // coordinate sources. All are NonMatching stubs for now.
    // Segments 2-8 will be iterated via objdiff.
    goto done;
 
seg_cdc:
    // 8-segment path (r31[0x4c] == 0): uses r31[0x40]+r31[0x3c] etc.
    // Same loop structure, different coordinate combinations.
    // NonMatching stub.
    ;
 
done:
    ;
}
 
// ============================================================
// fn_80090A18: push entry to lbl_80293AB0 list (0x9C)
//   Gets or allocates a node from lbl_80293AB0,
//   stores r3/r4/r5/r6 to node[0x34/0x38/0x3c/0x40].
// ============================================================
void fn_80090A18(void* r3, void* r4, void* r5, void* r6) {
    void* r28p = r3;
    void* r29p = r4;
    void* r30p = r5;
    void* r31p = r6;
 
    void* node = fn_8000C1E8((void*)lbl_80293AB0);
    u8* r4n;
    if (node) {
        r4n = (u8*)fn_8000C1E8((void*)lbl_80293AB0);
    } else {
        r4n = (u8*)fn_8000CC18((void*)lbl_80293AB0, 3);
    }
 
    *(u32*)(r4n + 0x34) = (u32)r28p;
    *(u32*)(r4n + 0x38) = (u32)r29p;
    *(u32*)(r4n + 0x3c) = (u32)r30p;
    *(u32*)(r4n + 0x40) = (u32)r31p;
}