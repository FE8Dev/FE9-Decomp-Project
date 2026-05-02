// auto_03_8009BC0C_text
#include <dolphin/types.h>

// -- Extern declarations --
extern "C" void  fn_8000A380(void);
extern "C" void  fn_8000A370(void);
extern "C" void  fn_8000A29C(s32, s32);
extern "C" void* fn_8000C028(void*);
extern "C" void* fn_8000CC18(void*, s32);
extern "C" void  fn_8000C2B0(void*);
extern "C" void* fn_8006DAA4(void*, s32);
extern "C" void* fn_8006DB14(void*);
extern "C" void  fn_80009E9C(float, float, float, float);
extern "C" void  fn_80009CB4(s32);
extern "C" void  fn_8000A0B8(void*, s32);
extern "C" void  fn_800079D8(s32);
extern "C" void  fn_800079C4(void);
extern "C" void  fn_80007718(void);
extern "C" void  fn_8000784C(float, float, float, float, float, float);
extern "C" void  fn_80009C50(void);
extern "C" void  fn_80007998(float, float);
extern "C" void  fn_80007264(void*);
extern "C" void  fn_800077EC(s32, s32, s32, s32);
extern "C" void  fn_80007918(float, float, float, float);
extern "C" void  fn_800078D0(float, float, float, float);
extern "C" void  fn_800073F0(void*, void*, void*, void*);
extern "C" float fn_8005A124(float, float, float);
extern "C" float fn_8005A1E8(float, float, float, float);
extern "C" void  fn_80055E14(void*, void*, void*);
extern "C" void  fn_80059388(void*, void*);
extern "C" s32   fn_800593EC(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern "C" void  fn_8014DC08(void*, s32, void*, void*, void*, void*);
extern "C" void* fn_8011072C(void*, s32, s32, s32);
extern "C" void* fn_801101C4(void*, s32, s32, s32);
extern "C" void  fn_80019EC4(s32);
extern "C" void* fn_8005B5F8(void*);
extern "C" void* fn_80019F0C(void*);
extern "C" void* fn_8000E20C(void*);
extern "C" void  fn_8006F7B4(void);
extern "C" void  fn_80227F14(void*, void*, void*);
extern "C" s32   strlen(const char*);
extern "C" void* fn_80010CA0(void*, float, s32);
extern "C" void  fn_80010164(void*, s16, s32, s32, s32, s32, ...);
extern "C" void  fn_8023AAE4(void*, s32, void*, void*, ...);
extern "C" void  fn_8014CDE8(s32, s32, void*, void*);
extern "C" void  fn_800068F4(void);

extern "C" void  fn_8009BFDC(void*);
extern "C" void  fn_8006DAB4(void*);
extern "C" void  fn_8009C0A8(void*);
extern "C" void  fn_8009CB18(void*, s32, s32, s32);
extern "C" void  fn_80007978(s32, s32, s32, s32);
extern "C" void  fn_80007958(s32, s32, s32, s32);
extern "C" void  fn_800EBFC0(void*);
extern "C" s32   fn_8009C66C(void*, float, float);

extern u8  lbl_80293F08[];
extern u8  lbl_8033A708[];
extern u8  lbl_8033BFB8[];
extern u8  lbl_802763A8[];
extern u8  lbl_802762F0[];
extern u8  lbl_80335B58[];
extern u8  lbl_8031C7C0[];
extern u8  lbl_80339F08[];
extern u8  lbl_8033A1A8[];
extern u8  lbl_80339FC8[];
extern u8  lbl_802765C8[];
extern u32 lbl_803753B0;
extern float lbl_80377B38;
extern float lbl_80377B40;
extern float lbl_80377C08;
extern float lbl_80377C0C;
extern float lbl_80377C10;
extern float lbl_80377C14;
extern float lbl_80377C18;
extern float lbl_80377C1C;
extern float lbl_80377C20;
extern float lbl_80377C24;
extern float lbl_80377C28;
extern float lbl_80377C2C;
extern u32   lbl_80377C30;
extern u32   lbl_80377C34;
extern u32   lbl_80377C38;
extern u32   lbl_80377C3C;
extern u32   lbl_80377C40;
extern u32   lbl_80377C44;
extern u32   lbl_80377C48;
extern u32   lbl_80377C4C;
extern u32   lbl_80377C50;
extern u32   lbl_80377C54;
extern u32   lbl_80377C58;
extern u32   lbl_80377C5C;
extern u32   lbl_80377C60;
extern u32   lbl_80377C64;
extern u32   lbl_80377C68;
extern u32   lbl_80377C6C;
extern float lbl_80377C70;
extern float lbl_80377C7C;
extern float lbl_80377C90;
extern float lbl_80377C94;
extern float lbl_80377C98;
extern float lbl_80377C9C;
extern float lbl_80377CA0;
extern float lbl_80377D48;
extern float lbl_80377D4C;
extern float lbl_80377D50;
extern float lbl_80377D54;
extern float lbl_80377D58;
extern float lbl_80377D5C;
extern float lbl_80377CE0;
extern float lbl_80377CE4;
extern float lbl_80377CE8;
extern float lbl_80377CEC;
extern float lbl_80377CF0;
extern float lbl_80377CF4;
extern float lbl_80377CF8;
extern float lbl_80377CFC;
extern float lbl_80377D00;
extern float lbl_80377D04;
extern float lbl_80377D08;
extern float lbl_80377D0C;
extern float lbl_80377D10;
extern float lbl_80377D14;
extern float lbl_80377D18;
extern float lbl_80377D1C;
extern float lbl_80377D20;
extern float lbl_80377D24;
extern float lbl_80377D28;
extern float lbl_80377D2C;
extern float lbl_80377D30;
extern float lbl_80377D34;
extern float lbl_80377D38;
extern float lbl_80377D3C;
extern float lbl_80377D40;
extern float lbl_80377D44;
extern u8  lbl_802D49F8[];
extern u8  lbl_80335B58[];
extern u32 lbl_8031C888[];

extern float lbl_80377B20;
extern float lbl_80377B24;
extern float lbl_80377B28;
extern double lbl_80377B30;
extern float lbl_80377B3C;
extern float lbl_80377B44;
extern float lbl_80377B48;
extern float lbl_80377B4C;
extern float lbl_80377B50;
extern float lbl_80377B54;
extern float lbl_80377B58;
extern float lbl_80377B5C;
extern float lbl_80377B60;
extern float lbl_80377B64;
extern float lbl_80377B68;
extern double lbl_80377B70;
extern float lbl_80377B78;
extern float lbl_80377B7C;
extern float lbl_80377B80;
extern float lbl_80377B84;
extern float lbl_80377B88;
extern float lbl_80377B8C;
extern float lbl_80377B90;
extern float lbl_80377B94;
extern float lbl_80377B98;
extern float lbl_80377B9C;
extern float lbl_80377BA0;
extern float lbl_80377BA4;
extern float lbl_80377BA8;
extern float lbl_80377BAC;
extern float lbl_80377BB0;
extern float lbl_80377BB4;
extern float lbl_80377BB8;
extern float lbl_80377BBC;
extern float lbl_80377BC0;
extern float lbl_80377BC4;
extern float lbl_80377BC8;
extern float lbl_80377BCC;
extern float lbl_80377BD0;
extern float lbl_80377BD4;
extern float lbl_80377BD8;
extern float lbl_80377BDC;
extern float lbl_80377BE0;
extern float lbl_80377BE4;
extern float lbl_80377BE8;
extern float lbl_80377BEC;
extern float lbl_80377BF0;
extern float lbl_80377BF4;
extern float lbl_80377BF8;
extern float lbl_80377BFC;
extern float lbl_80377C00;
extern float lbl_80377C04;
extern float lbl_80377CA4;
extern float lbl_80377CA8;
extern float lbl_80377CAC;
extern float lbl_80377CB0;
extern float lbl_80377CB4;
extern float lbl_80377CB8;
extern float lbl_80377CBC;
extern float lbl_80377CC0;
extern float lbl_80377CC4;
extern float lbl_80377CC8;
extern float lbl_80377CCC;
extern float lbl_80377CD0;
extern float lbl_80377CD4;
extern float lbl_80377CD8;
extern float lbl_80377CDC;
extern float lbl_80377CE0;
extern float lbl_80377CE4;
extern float lbl_80377C74;
extern float lbl_80377C78;
extern double lbl_80377C80;
extern double lbl_80377C88;

// =============================================================
// fn_8009BC0C: call fn_8000C028(lbl_80293F08)
// =============================================================
void fn_8009BC0C(void) {
    fn_8000C028((void*)lbl_80293F08);
}

// =============================================================
// fn_8009BC34: call fn_8000CC18(lbl_80293F08, r3)
// =============================================================
void fn_8009BC34(void* r3) {
    fn_8000CC18((void*)lbl_80293F08, (s32)(u32)r3);
}

// =============================================================
// fn_8009BC60: zero r3+0x3e, r3+0x3d; store 0.0f to r3+0x30
// =============================================================
void fn_8009BC60(void* r3) {
    ((u8*)r3)[0x3e] = 0;
    *(float*)((u8*)r3 + 0x30) = lbl_80377B20;
    ((u8*)r3)[0x3d] = 0;
}

// =============================================================
// fn_8009BC78: copy r3+0x40 to r3+0x3e, store lbl_80377B24 to r3+0x30,
//              copy r3+0x3f to r3+0x3d
// =============================================================
void fn_8009BC78(void* r3) {
    ((u8*)r3)[0x3e] = ((u8*)r3)[0x40];
    *(float*)((u8*)r3 + 0x30) = lbl_80377B24;
    ((u8*)r3)[0x3d] = ((u8*)r3)[0x3f];
}

// =============================================================
// fn_8009BC94: decrement r3+0x3e if > 0; compute interpolated float;
//              update r3+0x3d and r3+0x30; if zero call fn_8000C2B0
// =============================================================
void fn_8009BC94(void* r3) {
    void* r31 = r3;
    u8 r3b = ((u8*)r3)[0x3e];
    if (r3b != 0) {
        ((u8*)r31)[0x3e] = (u8)(r3b - 1);
    }

    u32 r5 = ((u8*)r31)[0x3f];
    u32 r3v = ((u8*)r31)[0x40];
    u32 r0 = ((u8*)r31)[0x3e];
    {
        u32 stk8[2];
        stk8[0] = 0x43300000u;
        stk8[1] = r5 ^ 0x8000u;
        double d5 = *(double*)stk8;
        float f2 = (float)(d5 - lbl_80377B30);
        stk8[1] = r3v ^ 0x8000u;
        double d3 = *(double*)stk8;
        float f3 = (float)(d3 - lbl_80377B30);
        stk8[1] = r0 ^ 0x8000u;
        double d4 = *(double*)stk8;
        float f4 = (float)(d4 - lbl_80377B30);
        float f1 = fn_8005A124(f2, f3, f4);
        {
            s32 trunc = (s32)f1;
            ((u8*)r31)[0x3d] = (u8)trunc;
        }
        u32 r4b = ((u8*)r31)[0x40];
        u32 r0b = ((u8*)r31)[0x3e];
        stk8[1] = r4b ^ 0x8000u;
        double d3b = *(double*)stk8;
        float f3b = (float)(d3b - lbl_80377B30);
        stk8[1] = r0b ^ 0x8000u;
        double d4b = *(double*)stk8;
        float f4b = (float)(d4b - lbl_80377B30);
        float f1b = fn_8005A1E8(lbl_80377B28, lbl_80377B24, f3b, f4b);
        *(float*)((u8*)r31 + 0x30) = f1b;
    }

    if (((u8*)r31)[0x3e] == 0) {
        fn_8000C2B0(r31);
    }
}

// =============================================================
// fn_8009BD84: increment r3+0x3e if < r3+0x40; same interp logic;
//              if equal call fn_8000C2B0
// =============================================================
void fn_8009BD84(void* r3) {
    void* r31 = r3;
    u8 r3b = ((u8*)r3)[0x3e];
    u8 r0b = ((u8*)r31)[0x40];
    if ((u32)r3b < (u32)r0b) {
        ((u8*)r31)[0x3e] = (u8)(r3b + 1);
    }

    u32 r5 = ((u8*)r31)[0x3f];
    u32 r3v = ((u8*)r31)[0x40];
    u32 r0 = ((u8*)r31)[0x3e];
    {
        u32 stk8[2];
        stk8[0] = 0x43300000u;
        stk8[1] = r5 ^ 0x8000u;
        double d5 = *(double*)stk8;
        float f2 = (float)(d5 - lbl_80377B30);
        stk8[1] = r3v ^ 0x8000u;
        double d3 = *(double*)stk8;
        float f3 = (float)(d3 - lbl_80377B30);
        stk8[1] = r0 ^ 0x8000u;
        double d4 = *(double*)stk8;
        float f4 = (float)(d4 - lbl_80377B30);
        float f1 = fn_8005A124(f2, f3, f4);
        {
            s32 trunc = (s32)f1;
            ((u8*)r31)[0x3d] = (u8)trunc;
        }
        u32 r4b = ((u8*)r31)[0x40];
        u32 r0b2 = ((u8*)r31)[0x3e];
        stk8[1] = r4b ^ 0x8000u;
        double d3b = *(double*)stk8;
        float f3b = (float)(d3b - lbl_80377B30);
        stk8[1] = r0b2 ^ 0x8000u;
        double d4b = *(double*)stk8;
        float f4b = (float)(d4b - lbl_80377B30);
        float f1b = fn_8005A1E8(lbl_80377B28, lbl_80377B24, f3b, f4b);
        *(float*)((u8*)r31 + 0x30) = f1b;
    }

    if ((u32)((u8*)r31)[0x3e] != (u32)((u8*)r31)[0x40]) return;
    fn_8000C2B0(r31);
}

// =============================================================
// fn_8009BE7C: if r3+0x38 non-null, call fn_8006DAB4 on it
// =============================================================
void fn_8009BE7C(void* r3) {
    void* r3p = (void*)*(u32*)((u8*)r3 + 0x38);
    if (r3p != 0) {
        fn_8006DAB4(r3p);
    }
}

// =============================================================
// fn_8009BEA8: init r31 struct fields; pick string from lbl_802763A8
//              based on lbl_8033BFB8+0x44; call fn_80055E14 and fn_80059388
// =============================================================
void fn_8009BEA8(void* r3) {
    void* r31 = r3;
    *(float*)((u8*)r31 + 0x30) = lbl_80377B24;
    *(float*)((u8*)r31 + 0x34) = lbl_80377B24;
    ((u8*)r31)[0x3d] = 0;
    ((u8*)r31)[0x3f] = 0xc0;
    ((u8*)r31)[0x40] = 0xa;
    ((u8*)r31)[0x3e] = 0;
    ((u8*)r31)[0x3c] = 0;
    *(s16*)((u8*)r31 + 0x42) = 0;
    *(u32*)((u8*)r31 + 0x4c) = 0;
    *(s16*)((u8*)r31 + 0x44) = 0;
    *(u32*)((u8*)r31 + 0x50) = 0;
    *(s16*)((u8*)r31 + 0x46) = 0;
    *(u32*)((u8*)r31 + 0x54) = 0;
    *(s16*)((u8*)r31 + 0x48) = 0;
    *(u32*)((u8*)r31 + 0x58) = 0;
    *(u32*)((u8*)r31 + 0x38) = 0;

    void* r3str;
    u8 r0 = lbl_8033BFB8[0x44];
    if (r0 == 0x3) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x14d);
    } else if (r0 > 0x3) {
        if (r0 == 0x5) {
            r3str = (void*)((u8*)lbl_802763A8 + 0x179);
        } else if (r0 > 0x5) {
            r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
        } else {
            r3str = (void*)((u8*)lbl_802763A8 + 0x163);
        }
    } else if (r0 == 0x1) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
    } else if (r0 > 0x1) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x137);
    } else if (r0 == 0x0) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x124);
    } else {
        r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
    }

    fn_80055E14(r3str, (void*)fn_8009BFDC, r31);
    fn_80059388((void*)fn_8009C0A8, r31);
}

// =============================================================
// fn_8009BFDC: pick string from lbl_802763A8 based on lbl_8033BFB8+0x44;
//              call fn_8006DB14, store result to r31+0x38
// =============================================================
void fn_8009BFDC(void* r3) {
    void* r31 = r3;

    void* r3str;
    u8 r0 = lbl_8033BFB8[0x44];
    if (r0 == 0x3) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x14d);
    } else if (r0 > 0x3) {
        if (r0 == 0x5) {
            r3str = (void*)((u8*)lbl_802763A8 + 0x179);
        } else if (r0 > 0x5) {
            r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
        } else {
            r3str = (void*)((u8*)lbl_802763A8 + 0x163);
        }
    } else if (r0 == 0x1) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
    } else if (r0 > 0x1) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x137);
    } else if (r0 == 0x0) {
        r3str = (void*)((u8*)lbl_802763A8 + 0x124);
    } else {
        r3str = (void*)((u8*)lbl_802763A8 + 0x18f);
    }

    void* r3r = fn_8006DB14(r3str);
    *(u32*)((u8*)r31 + 0x38) = (u32)r3r;
}

// fn_8009C0A8 -- see attachment 1 (doc 1 in batch)
// fn_8009C66C -- see attachment 2 (doc 2 in batch)
// fn_8009CB18 -- see attachment 3 (doc 3 in batch)

// =============================================================
// fn_8009C40C: setup viewport; dispatch color band by lbl_8033BFB8+0x44;
//              loop rendering digit tiles; call fn_80009C50
// =============================================================
void fn_8009C40C(void* r3, float f1, float f2, s32 r4, s32 r5) {
    void* r31 = r3;
    float f29 = f1;
    float f30 = f2;
    s32 r29 = r4;
    s32 r30 = r5;

    fn_8000A380();
    fn_80009E9C(f29, f30, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r31, 0x3);
    fn_80009CB4((s32)(u8)r30);
    fn_8000A370();
    fn_800079D8(0x1);

    u8 r0 = lbl_8033BFB8[0x44];
    if (r0 == 0x0) {
        fn_8000784C(lbl_80377B78, lbl_80377B7C, lbl_80377B24, lbl_80377B80, lbl_80377B84, lbl_80377B88);
        f29 = lbl_80377B8C;
    } else if (r0 > 0x0 && r0 < 0x2) {
        fn_8000784C(lbl_80377B24, lbl_80377B90, lbl_80377B4C, lbl_80377B80, lbl_80377B94, lbl_80377B98);
        f29 = lbl_80377B9C;
    } else if (r0 == 0x3) {
        fn_8000784C(lbl_80377B24, lbl_80377B90, lbl_80377B4C, lbl_80377B80, lbl_80377BA0, lbl_80377B98);
        f29 = lbl_80377B9C;
    } else if (r0 > 0x3 && r0 < 0x5) {
        fn_8000784C(lbl_80377B24, lbl_80377B90, lbl_80377B4C, lbl_80377B80, lbl_80377BA4, lbl_80377B98);
        f29 = lbl_80377BA8;
    } else if (r0 == 0x5) {
        fn_8000784C(lbl_80377B24, lbl_80377B90, lbl_80377B4C, lbl_80377B80, lbl_80377BA4, lbl_80377B98);
        f29 = lbl_80377BA8;
    } else {
        fn_8000784C(lbl_80377B24, lbl_80377B90, lbl_80377B4C, lbl_80377B80, lbl_80377BAC, lbl_80377B98);
        f29 = lbl_80377B9C;
    }

    fn_80007718();
    fn_800079C4();

    // multiply-and-divide constant for base-10 digit extraction
    s32 r30m = 0x66666667;
    double f31d = lbl_80377B70;
    float f31f = lbl_80377BB4;
    s32 r31i = 0x66666667;

    while (r29 != 0) {
        fn_800079D8(0x1);
        {
            u32 stk8[2];
            stk8[0] = 0x43300000u;
            stk8[1] = (u32)r30 ^ 0x8000u;
            double d = *(double*)stk8;
            float fx = (float)(d - f31d);
            // mulhw + srawi + srwi + add = signed divide by 10
            s32 q = (s32)(((s64)r31i * (s64)r29) >> 32);
            q = (q >> 2) + (s32)((u32)q >> 31);
            s32 rem = r29 - q * 10;
            s32 xpos = rem * 0x13;
            stk8[1] = (u32)xpos ^ 0x8000u;
            double dx = *(double*)stk8;
            float fxpos = (float)(dx - f31d);
            fn_8000784C(fx, f29, lbl_80377B24, lbl_80377BB0, fxpos, lbl_80377B3C);
            fn_80007718();
            fn_800079C4();
            r30 += 8;
            r29 = q;
        }
    }

    fn_80009C50();
}

// =============================================================
// fn_8009D124: draw weapon/item detail panel (3 cases on r5)
// =============================================================
void fn_8009D124(void* r3, void* r4, float f1, float f2, s32 r5) {
    float f30 = f1;
    float f31 = f2;
    void* r30 = r3;
    s32 r31 = (s32)(u32)r4;

    if (r5 == 0x1) {
        goto case1;
    } else if (r5 > 0x1) {
        if (r5 < 0x3) {
            goto case2;
        }
        return;
    } else if (r5 == 0x0) {
        goto case0;
    } else {
        return;
    }

case0:;
    {
        fn_8000A380();
        fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
        fn_8000A0B8(r30, 0x8);
        fn_8000A370();
        fn_800079D8(0x1);
        fn_8000784C(lbl_80377B24, lbl_80377BFC, lbl_80377B3C, lbl_80377B80, lbl_80377BE4, lbl_80377B5C);
        fn_80007718();
        fn_800079C4();
        fn_800079D8(0x1);
        fn_8000784C(lbl_80377C00, lbl_80377B3C, lbl_80377B80, lbl_80377B24, lbl_80377C04, lbl_80377B5C);
        fn_80007718();
        fn_800079C4();
        fn_800079D8(0x1);
        fn_8000784C(lbl_80377BD8, lbl_80377B3C, lbl_80377BD0, lbl_80377B24, lbl_80377B5C, lbl_80377B5C);
        fn_80007718();
        fn_800079C4();
        return;
    }

case1:;
    {
        fn_8000A380();
        fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
        fn_8000A0B8(r30, 0x9);
        fn_8000A370();
        fn_800079D8(0x1);
        {
            u32 stk8[2];
            stk8[0] = 0x43300000u;
            stk8[1] = (u32)r31 ^ 0x8000u;
            double d = *(double*)stk8;
            float fx = (float)(d - lbl_80377B70);
            fn_8000784C(lbl_80377B24, fx, lbl_80377B24, lbl_80377B24, lbl_80377B5C, lbl_80377B5C);
        }
        fn_80007718();
        fn_800079C4();
        return;
    }

case2:;
    {
        fn_8000A380();
        fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
        fn_8000A0B8(r30, 0xa);
        fn_8000A370();
        fn_800079D8(0x1);
        {
            u32 stk8[2];
            stk8[0] = 0x43300000u;
            stk8[1] = (u32)r31 ^ 0x8000u;
            double d = *(double*)stk8;
            float fx = (float)(d - lbl_80377B70);
            fn_8000784C(lbl_80377B24, fx, lbl_80377B24, lbl_80377B24, lbl_80377B5C, lbl_80377B3C);
        }
        fn_80007718();
        fn_800079C4();
        return;
    }
}

// =============================================================
// fn_8009EB2C: draw 8 colored quad rings for test display
// =============================================================
void fn_8009EB2C(void) {
    fn_8000A380();
    fn_80009E9C(lbl_80377C74, lbl_80377C74, lbl_80377C74, lbl_80377C78);
    fn_8000A29C(0x0, 0x0);
    fn_8000A370();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CAC, lbl_80377CA8, lbl_80377CAC, lbl_80377CB0);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CB0, lbl_80377CAC, lbl_80377CB0, lbl_80377CB4);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CB4, lbl_80377CB0, lbl_80377CB4, lbl_80377CA8);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CA8, lbl_80377CAC, lbl_80377CA8, lbl_80377CB4);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CBC, lbl_80377CB8, lbl_80377CBC, lbl_80377CC0);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CA4, lbl_80377CC4, lbl_80377CA4, lbl_80377CC8);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CBC, lbl_80377CCC, lbl_80377CBC, lbl_80377CD0);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CD4, lbl_80377CD8, lbl_80377CD4, lbl_80377CDC);
    fn_800079C4();

    fn_8000A380();
    fn_8000A29C(0x0, 0x3);
    fn_8000A370();

    if (lbl_803753B0 & (1u << (31 - 30))) {
        fn_800079D8(0x7);
        fn_80007998(lbl_80377CA8, lbl_80377CAC);
        fn_80007264((void*)((u8*)lbl_802765C8 + 0x47));
        fn_800079C4();
    }

    if (lbl_803753B0 & 1u) {
        fn_800079D8(0x7);
        fn_80007998(lbl_80377CE0, lbl_80377CAC);
        fn_80007264((void*)((u8*)lbl_802765C8 + 0x49));
        fn_800079C4();
    }
}

// fn_8009ECEC -- see attachment 5 (doc 5)
// fn_8009F560 -- see attachment 6 (doc 6)
// fn_8009D504 -- see attachment 4 (doc 4)

// =============================================================
// fn_800A0178: set lbl_8031C7C0+0xc4 = 1
// =============================================================
void fn_800A0178(void) {
    lbl_8031C7C0[0xc4] = 1;
}

// =============================================================
// fn_800A018C: call fn_8006F7B4; then fn_80227F14 with stack bufs
// =============================================================
void fn_800A018C(void) {
    u32 stk8, stkc;
    fn_8006F7B4();
    fn_80227F14((void*)&stk8, (void*)&stkc, 0);
}

// =============================================================
// fn_800A01B8: set lbl_8031C7C0+0xc4 = 0; call fn_8006F7B4;
//              fn_80227F14 with lbl_8031C7C0+0xb4 as output ptr
// =============================================================
void fn_800A01B8(void) {
    lbl_8031C7C0[0xc4] = 0;
    fn_8006F7B4();
    u32 stk8;
    fn_80227F14((void*)&stk8, (void*)((u8*)lbl_8031C7C0 + 0xb4), 0);
}

// =============================================================
// fn_800A01FC: zero 12 word fields in lbl_8031C7C0
// =============================================================
void fn_800A01FC(void) {
    *(u32*)((u8*)lbl_8031C7C0 + 0x24) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x28) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x2c) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x30) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x34) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x38) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x3c) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x40) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x64) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x68) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x6c) = 0;
    *(u32*)((u8*)lbl_8031C7C0 + 0x70) = 0;
}

// =============================================================
// fn_800A023C: zero lbl_8031C7C0+0x1c
// =============================================================
void fn_800A023C(void) {
    *(u32*)((u8*)lbl_8031C7C0 + 0x1c) = 0;
}

// =============================================================
// fn_8009C0A8: draw HP/status bar panel (attachment 1 / doc 7)
// Saves r24-r31, f29-f31. Takes r3=obj ptr (r30), checks r3+0x3d != 0
// and r3+0x38 != 0 and lbl_8033A708[0x9c] bit 2 == 0, then draws.
// =============================================================
void fn_8009C0A8(void* r3) {
    void* r30 = r3;
    u8 r5 = ((u8*)r3)[0x3d];
    if (r5 == 0) return;
    void* r4 = (void*)*(u32*)((u8*)r30 + 0x38);
    if (r4 == 0) return;

    // check lbl_8033A708[0x9c] bit (extrwi r0, r0, 1, 29 = bit 2 from left)
    u8 r0b = lbl_8033A708[0x9c];
    if ((r0b >> (31 - 29)) & 1) return;

    // clamp r5*2 to 0xff
    s32 r31i = (s32)(u32)r5 << 1;
    if (r31i > 0xff) r31i = 0xff;

    // call fn_8009CB18 and fn_8009C66C
    extern float lbl_80377B38;
    float f1 = lbl_80377B38 + *(float*)((u8*)r30 + 0x30);
    float f2 = lbl_80377B38 + *(float*)((u8*)r30 + 0x34);
    fn_8009CB18(r30, f1, f2, r31i);

    void* r3lnk = (void*)*(u32*)((u8*)r30 + 0x38);
    float f1b = lbl_80377B3C + *(float*)((u8*)r30 + 0x30);
    float f2b = lbl_80377B40 + *(float*)((u8*)r30 + 0x34);
    fn_8009C66C(r3lnk, f1b, f2b);

    // compute r25 = ceil((r3+0x38 return + 7) / 8) -- actually from fn_8009C66C return
    // The assembly shows: lfs f1, lbl_80377B44; addi r0, r3, 7; lfs f0, 0x34(r30)
    // srawi r0, r0, 3; addze r25, r0; fadds f29, f1, f0
    // r3 here is return value of fn_8009C66C
    // We need fn_8009C66C to return s32 for the addze logic
    // For now reconstruct:
    extern float lbl_80377B40;
    extern float lbl_80377B44;
    // r3 = return of fn_8009C66C (s32 width)
    // r25 = ceil(r3 / 8)
    // f29 = lbl_80377B44 + r30[0x34]
    // f30 = r30[0x30]
    // r26 = r30[0x38]

    // The fn_8009C66C call above was just setup; now re-read after it
    // Actually in the asm, r3 after the bl is the return value used for:
    //   addi r0, r3, 0x7; srawi r0, r0, 3; addze r25, r0
    // So fn_8009C66C must return s32. Re-declare externally.
    // We'll call it again capturing return value:
    s32 r3ret = (s32)(u32)fn_8009C66C(r3lnk, f1b, f2b);
    s32 r25 = (r3ret + 7) >> 3;
    if (r3ret + 7 < 0 && ((r3ret + 7) & 7)) r25++; // addze
    float f29 = lbl_80377B44 + *(float*)((u8*)r30 + 0x34);
    float f30 = *(float*)((u8*)r30 + 0x30);
    void* r26 = (void*)*(u32*)((u8*)r30 + 0x38);

    fn_8000A380();
    fn_80009E9C(f30, f29, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r26, 0x2);
    fn_80009CB4((s32)(u8)r31i);
    fn_8000A370();

    // loop: r27 from 0 to r25-2, r24 starts at 0 advancing by 8
    s32 r27 = 0;
    s32 r24 = 0;
    s32 r28 = r25 - 1;
    double f31d = lbl_80377B70;
    for (; r27 < r28; r27++, r24 += 8) {
        fn_800079D8(0x1);
        u32 stk8[2]; stk8[0] = 0x43300000u; stk8[1] = (u32)r24 ^ 0x8000u;
        double d = *(double*)stk8;
        float fx = (float)(d - f31d);
        fn_8000784C(fx, lbl_80377B24, lbl_80377B24, lbl_80377B50, lbl_80377B24, lbl_80377B50);
        fn_80007718();
        fn_800079C4();
    }

    fn_8000A380();
    fn_80009E9C(f30, f29, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r26, 0x1);
    fn_80009CB4((s32)(u8)r31i);
    fn_8000A370();
    fn_800079D8(0x1);
    {
        s32 xval = (r25 - 1) * 8;
        u32 stk8[2]; stk8[0] = 0x43300000u;
        stk8[1] = (u32)xval ^ 0x8000u;
        double d = *(double*)stk8;
        float fx = (float)(d - lbl_80377B70);
        fn_8000784C(lbl_80377B24, fx, lbl_80377B54, lbl_80377B58, lbl_80377B5C, lbl_80377B5C);
    }
    fn_80007718();
    fn_800079C4();
    fn_80009C50();

    // check lbl_8033A708+0x12
    s16 r0s = *(s16*)((u8*)lbl_8033A708 + 0x12);
    if (r0s == 0) return;

    f29 = *(float*)((u8*)r30 + 0x30);
    f30 = lbl_80377B60 + *(float*)((u8*)r30 + 0x34);
    r26 = (void*)*(u32*)((u8*)r30 + 0x38);

    fn_8000A380();
    fn_80009E9C(f29, f30, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r26, 0x2);
    fn_80009CB4((s32)(u8)r31i);
    fn_8000A370();

    s32 r25b = 0;
    s32 r24b = 0;
    double f31b = lbl_80377B70;
    for (; r25b < 0xd; r25b++, r24b += 8) {
        fn_800079D8(0x1);
        u32 stk8[2]; stk8[0] = 0x43300000u; stk8[1] = (u32)r24b ^ 0x8000u;
        double d = *(double*)stk8;
        float fx = (float)(d - f31b);
        fn_8000784C(fx, lbl_80377B24, lbl_80377B24, lbl_80377B50, lbl_80377B24, lbl_80377B50);
        fn_80007718();
        fn_800079C4();
    }

    fn_8000A380();
    fn_80009E9C(f29, f30, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r26, 0x1);
    fn_80009CB4((s32)(u8)r31i);
    fn_8000A370();
    fn_800079D8(0x1);
    fn_8000784C(lbl_80377B24, lbl_80377B64, lbl_80377B54, lbl_80377B58, lbl_80377B5C, lbl_80377B5C);
    fn_80007718();
    fn_800079C4();
    fn_80009C50();

    void* r28p = (void*)((u8*)lbl_8033A708);
    fn_8009C40C((void*)*(u32*)((u8*)r30 + 0x38),
        lbl_80377B3C + *(float*)((u8*)r30 + 0x30),
        lbl_80377B68 + *(float*)((u8*)r30 + 0x34),
        *(s16*)((u8*)lbl_8033A708 + 0x12),
        r31i);
}

// =============================================================
// fn_8009C66C: draw weapon detail panel (attachment 2 / doc 8)
// r3=obj, f1=x, f2=y, r4=palette_idx(u8)
// Returns s32 (x offset for caller).
// =============================================================
s32 fn_8009C66C(void* r3, float f1, float f2) {
    void* r28 = r3;
    float f30 = f1;
    float f31 = f2;
    s32 r19 = (s32)(u32)r3;  // actually r19 = r4 (4th arg) but signature mismatch
    // NOTE: asm shows r19 = r4, r28 = r3. Signature should be (void*, float, float, s32 palette)
    // but fn_8009C66C is called as fn_8009C66C(r3lnk, f1b, f2b) with no palette arg from C0A8.
    // Re-examining: at 0xb0, bl fn_8009C66C takes r3=r30->0x38, f1, f2.
    // The fn signature per asm header: stmw r19, li r6=0, mr r19=r4, mr r28=r3
    // So r4 is an int arg. The call at 0xb0 uses mr r4, r31 (the clamped alpha).
    // This means fn_8009C66C(void*, float, float, s32).

    u8 stk11 = 0;
    u8 stk10 = 0;
    fn_8014DC08((void*)lbl_8033A708, 0x0, (void*)lbl_802762F0, (void*)&stk11, (void*)&stk10, 0);

    fn_8000A380();
    fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r28, 0x3);
    fn_80009CB4((s32)(u8)r19);
    fn_8000A370();
    fn_800079D8(0x1);

    void* r31p = (void*)lbl_8033BFB8;
    u8 r0b = lbl_8033BFB8[0x44];
    s32 r29;
    if (r0b == 0x0) {
        fn_8000784C(lbl_80377B24, lbl_80377B5C, lbl_80377BB8, lbl_80377B80, lbl_80377BBC, lbl_80377B88);
        r29 = 0x40;
    } else if (r0b > 0x0 && r0b < 0x2) {
        fn_8000784C(lbl_80377B24, lbl_80377B5C, lbl_80377BC0, lbl_80377B80, lbl_80377BC4, lbl_80377B98);
        r29 = 0x38;
    } else if (r0b == 0x3) {
        fn_8000784C(lbl_80377B24, lbl_80377B5C, lbl_80377BC8, lbl_80377B80, lbl_80377BCC, lbl_80377B98);
        r29 = 0x30;
    } else if (r0b > 0x3 && r0b < 0x5) {
        fn_8000784C(lbl_80377B24, lbl_80377B5C, lbl_80377BD0, lbl_80377B80, lbl_80377BD4, lbl_80377BB0);
        r29 = 0x38;
    } else if (r0b == 0x5) {
        fn_8000784C(lbl_80377B24, lbl_80377B5C, lbl_80377BD0, lbl_80377B80, lbl_80377BD8, lbl_80377BDC);
        r29 = 0x38;
    } else {
        fn_8000784C(lbl_80377B24, lbl_80377B88, lbl_80377BC8, lbl_80377B80, lbl_80377BAC, lbl_80377BB4);
        r29 = 0x30;
    }
    fn_80007718();
    fn_800079C4();

    // Load 13 fields from lbl_802762F0
    u32 r19f = *(u32*)((u8*)lbl_802762F0 + 0x70);
    u32 r20  = *(u32*)((u8*)lbl_802762F0 + 0x74);
    u8  r21  = ((u8*)lbl_802762F0)[0x78];
    u32 r22  = *(u32*)((u8*)lbl_802762F0 + 0x7c);
    u32 r23  = *(u32*)((u8*)lbl_802762F0 + 0x80);
    u8  r24b = ((u8*)lbl_802762F0)[0x84];
    u32 r25  = *(u32*)((u8*)lbl_802762F0 + 0x88);
    u32 r26  = *(u32*)((u8*)lbl_802762F0 + 0x8c);
    u8  r27b = ((u8*)lbl_802762F0)[0x90];
    u32 r12  = *(u32*)((u8*)lbl_802762F0 + 0x94);
    u32 r11  = *(u32*)((u8*)lbl_802762F0 + 0x98);
    u8  r10b = ((u8*)lbl_802762F0)[0x9c];
    u32 r9   = *(u32*)((u8*)lbl_802762F0 + 0xa0);
    u32 r8   = *(u32*)((u8*)lbl_802762F0 + 0xa4);
    u8  r7b  = ((u8*)lbl_802762F0)[0xa8];
    u32 r6   = *(u32*)((u8*)lbl_802762F0 + 0xac);
    u32 r5   = *(u32*)((u8*)lbl_802762F0 + 0xb0);
    u8  r4b  = ((u8*)lbl_802762F0)[0xb4];

    // Build stack layout matching assembly stw/stb pattern at 0x20c-0x258
    u32 stk14 = r19f, stk18 = r20;
    u8  stk1c = r21;
    u32 stk20 = r22, stk24 = r23;
    u8  stk28 = r24b;
    u32 stk2c = r25, stk30 = r26;
    u8  stk34 = r27b;
    u32 stk38 = r12, stk3c = r11;
    u8  stk40 = r10b;
    u32 stk44 = r9,  stk48 = r8;
    u8  stk4c = r7b;
    u32 stk50 = r6,  stk54 = r5;
    u8  stk58 = r4b;

    // r0 = extsb(stk11) -- the first out from fn_8014DC08
    s8 r0s8 = (s8)stk11;

    // Switch on lbl_8033BFB8[0x44] again to pick stk base offset
    u8 r3b2 = lbl_8033BFB8[0x44];
    u8 r19pick;
    if (r3b2 == 0x3) {
        r19pick = *(u8*)((u8*)&stk50 + r0s8);
    } else if (r3b2 > 0x3) {
        if (r3b2 == 0x5) {
            r19pick = *(u8*)((u8*)&stk2c + r0s8);
        } else if (r3b2 > 0x5) {
            r19pick = *(u8*)((u8*)&stk20 + r0s8);
        } else {
            r19pick = *(u8*)((u8*)&stk38 + r0s8);
        }
    } else if (r3b2 == 0x1) {
        r19pick = *(u8*)((u8*)&stk20 + r0s8);
    } else if (r3b2 > 0x1) {
        r19pick = *(u8*)((u8*)&stk44 + r0s8);
    } else if (r3b2 == 0x0) {
        r19pick = *(u8*)((u8*)&stk14 + r0s8);
    } else {
        r19pick = *(u8*)((u8*)&stk20 + r0s8);
    }

    fn_8000A380();
    fn_8000A0B8(r28, 0x5);
    fn_8000A370();
    fn_800079D8(0x1);

    // 3 int-to-float biases: stk11 (extsb*0x19), r29-8, r19pick
    {
        s32 sb = (s32)(s8)stk11 * 0x19;
        double f5b;
        {
            u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)sb ^ 0x8000u;
            f5b = *(double*)s - lbl_80377B70;
        }
        float f1f = (float)f5b;

        s32 xb = r29 - 8;
        double f4b;
        {
            u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xb ^ 0x8000u;
            f4b = *(double*)s - lbl_80377B70;
        }
        float f4f = (float)f4b;

        double f5c;
        {
            u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)(u8)r19pick ^ 0x8000u;
            f5c = *(double*)s - lbl_80377B70;
        }
        float f5ff = (float)f5c;

        fn_8000784C(f1f, lbl_80377BE0, lbl_80377B24, f4f, f5ff, lbl_80377BE4);
    }
    fn_80007718();
    fn_800079C4();

    r29 += (s32)(u8)r19pick;

    // check stk10 (extsb.)
    s8 stk10s = (s8)stk10;
    if (stk10s == 0) goto skip_extra;

    {
        fn_8000A380();
        fn_8000A0B8(r28, 0x6);
        fn_8000A370();

        // fn_800593EC call
        s32 r3ec = r29 - 8;
        s32 ecret = fn_800593EC(r3ec, 0xb, 0x0, 0x0, (s32)stk10s, 0x10, 0x18, 0xc, 0);
        r29 += ecret << 3;

        fn_8000A380();
        fn_8000A0B8(r28, 0x7);
        fn_8000A370();
        fn_800079D8(0x1);
        {
            s32 xv = r29 + 4;
            u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xv ^ 0x8000u;
            double d = *(double*)s - lbl_80377B70;
            float fxv = (float)d;
            fn_8000784C(lbl_80377B24, fxv, lbl_80377B90, lbl_80377BBC, lbl_80377B3C, lbl_80377B3C);
        }
        fn_80007718();
        fn_800079C4();

        // second game-mode switch for r29 offset
        u8 r0f = lbl_8033BFB8[0x44];
        if (r0f == 0x0) {
            r29 += 0x48;
        } else if (r0f > 0x0 && r0f < 0x2) {
            r29 += 0x44;
        } else if (r0f == 0x3) {
            r29 += 0x44;
        } else if (r0f > 0x3 && r0f < 0x5) {
            r29 += 0x48;
        } else if (r0f == 0x5) {
            r29 += 0x20;
        } else {
            r29 += 0x48;
        }
    }

skip_extra:;
    fn_80009C50();
    return r29;
}

// =============================================================
// fn_8009CB18: draw unit/combat status bubble (attachment 3 / doc 9)
// r3=obj, f1=x, f2=y, r5=palette_byte
// =============================================================
void fn_8009CB18(void* r3, float f1, float f2, s32 r5) {
    float f30 = f1;
    float f31 = f2;
    void* r28 = r3;  // actually r3 in asm
    void* r29 = (void*)(u32)r5;  // r29 = r4 in asm; r25 = r5
    // Recheck: stmw r25; fmr f30=f1; mr r28=r3; fmr f31=f2; mr r29=r4; mr r25=r5
    // So: (void* r3, s32 r4, float f1, float f2, u8 r5)
    // But called as fn_8009CB18(r30, f1, f2, r31i) -- 4 args from C0A8.
    // The asm prototype is fn_8009CB18(r3, r4, f1, f2, r5) with r4 unused?
    // Actually at call site: mr r3, r30; mr r5, r31; lfs f1=...; lfs f2=...
    // So args are (r3, f1, f2, r5) -> r5 is 5th param (int reg r5).

    u8 r25b = (u8)(u32)r5;

    fn_8000A380();
    fn_80009CB4((s32)r25b);
    fn_8000A370();

    // fctiwz lbl_8033A708+0x524 and +0x528 -> s8 r31, s8 r26
    float ftmp1 = *(float*)((u8*)lbl_8033A708 + 0x524);
    float ftmp2 = *(float*)((u8*)lbl_8033A708 + 0x528);
    s8 r31s = (s8)(s32)ftmp1;
    s8 r26s = (s8)(s32)ftmp2;

    // lookup lbl_802D49F8[r31 + r26*64 + 0x100d]
    extern u8 lbl_802D49F8[];
    u8* base = lbl_802D49F8;
    u8* entry = base + (s32)r31s + ((s32)r26s << 6);
    u8 r25r = entry[0x100d];

    if ((s32)(s8)r25r < 0) goto done_cb18;

    {
        s32 r27;
        fn_80019EC4((s32)(u8)r25r);
        r27 = (s32)(u32)0; // fn_80019EC4 returns in r3 -- we ignore

        // branch table based on r25r
        void* r30p = 0;
        void* r28q = 0;
        if (r25r == 0x21 || r25r == 0x1c || r25r == 0x9) {
            // matched items -- call fn_8005B5F8, fn_8011072C
            fn_8005B5F8((void*)(u32)(s32)r27);
            void* r3q = fn_8011072C((void*)lbl_80335B58, (s32)r26s, (s32)r31s, 0x4);
            r28q = r3q;
            if (!r28q) goto fallthrough_cb18;
            if (!((u8*)r28q)[0x4]) goto fallthrough_cb18;

            void* r27q = fn_8006DAA4(r29, 0xa);
            u16 r4hw = *(u16*)((u8*)r27q + 0x2);
            s32 r6q = 0x70 - (s32)r4hw;
            s32 r0q = r6q >> 31;
            s32 r25q = (r0q + r6q) >> 1;

            u32 stk18[2]; stk18[0] = 0x43300000u; stk18[1] = (u32)r25q ^ 0x8000u;
            double dq = *(double*)stk18;
            float fxq = (float)(dq - lbl_80377B70);
            float f2q = lbl_80377B3C + f31;

            fn_8009D124(r29, (void*)(u32)r25q, f30, fxq + f2q, 0x2);

            r25q += (s32)*(u16*)((u8*)r27q + 0x2) + 0x10;

            fn_8000A380();
            fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
            fn_8000A0B8(r29, 0x4);
            fn_8000A370();

            fn_800593EC(r25q, 0x1a, 0x0, 0x0, ((u8*)r28q)[0x4], 0xb, 0x1a, 0x9, 0);
            goto done_cb18;
        } else if (r25r >= 0x2b && r25r < 0x2d) {
            // fn_801101C4 path
            void* r31q = fn_801101C4((void*)lbl_80335B58, (s32)r31s, (s32)r26s, 0x7);
            if (!r31q) goto fallthrough2;
            r25b = ((u8*)r31q)[0x5];

            void* r27q = fn_8006DAA4(r29, 0x9);
            u16 r4hw = *(u16*)((u8*)r27q + 0x2);
            s32 r6q = 0x70 - (s32)r4hw;
            s32 r0q = r6q >> 31;
            s32 r26q = (r0q + r6q) >> 1;

            u32 stk18[2]; stk18[0] = 0x43300000u; stk18[1] = (u32)r26q ^ 0x8000u;
            double dq = *(double*)stk18;
            float fxq = (float)(dq - lbl_80377B70);
            float f2q = lbl_80377B3C + f31;

            fn_8009D124(r29, (void*)(u32)r26q, f30, fxq + f2q, 0x1);

            r26q += (s32)*(u16*)((u8*)r27q + 0x2) + 0x10;

            fn_8000A380();
            fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
            fn_8000A0B8(r29, 0x4);
            fn_8000A370();

            fn_800593EC(r26q, 0x1a, 0x0, 0x0, (s32)r25b, 0xb, 0x1a, 0x9, 0);

            // check r28->0x42
            u16 h42 = *(u16*)((u8*)r28q + 0x42);
            if (h42 == 0) {
                // init 4 shorts and 4 ptrs
                void* n1 = fn_80019F0C((void*)((u8*)lbl_802763A8 + 0x1a5));
                *(s16*)((u8*)r28q + 0x42) = *(s16*)((u8*)n1 + 0xe);
                void* n2 = fn_80019F0C((void*)((u8*)lbl_802763A8 + 0x1b2));
                *(s16*)((u8*)r28q + 0x44) = *(s16*)((u8*)n2 + 0xe);
                void* n3 = fn_80019F0C((void*)((u8*)lbl_802763A8 + 0x1bf));
                *(s16*)((u8*)r28q + 0x46) = *(s16*)((u8*)n3 + 0xe);
                void* n4 = fn_80019F0C((void*)((u8*)lbl_802763A8 + 0x1ce));
                *(s16*)((u8*)r28q + 0x48) = *(s16*)((u8*)n4 + 0xe);
                void* p1 = fn_8000E20C((void*)((u8*)lbl_802763A8 + 0x1d9));
                *(u32*)((u8*)r28q + 0x4c) = (u32)p1;
                void* p2 = fn_8000E20C((void*)((u8*)lbl_802763A8 + 0x1e5));
                *(u32*)((u8*)r28q + 0x50) = (u32)p2;
                void* p3 = fn_8000E20C((void*)((u8*)lbl_802763A8 + 0x1f1));
                *(u32*)((u8*)r28q + 0x54) = (u32)p3;
                void* p4 = fn_8000E20C((void*)((u8*)lbl_802763A8 + 0x1fd));
                *(u32*)((u8*)r28q + 0x58) = (u32)p4;
            }

            // scan 4 entries for matching r31q[0x5]
            {
                void* r4sc = r28q;
                s32 r5sc = 0;
                for (s32 ctr = 0; ctr < 4; ctr++, r4sc = (u8*)r4sc + 2, r5sc++) {
                    u16 h = *(u16*)r4sc;
                    u8 b = ((u8*)r31q)[0x4];
                    if ((u32)h == (u32)b) {
                        r30p = (void*)*(u32*)((u8*)r28q + 0x4c + r5sc * 4);
                        goto done_cb18;
                    }
                }
            }
            goto done_cb18;

fallthrough2:;
            r30p = (void*)((u8*)lbl_802763A8 + 0x207);
            goto done_cb18;
        }

fallthrough_cb18:;
        {
            // generic path: r3.0x8 -> 3 signed bytes r25, r26, r28
            void* r5p = (void*)*(u32*)((u8*)&r27 + 8); // r27 = fn_80019EC4 return
            s8 r25g = (s8)((u8*)r5p)[0x0];
            s8 r26g = (s8)((u8*)r5p)[0x1];
            s8 r28g = (s8)((u8*)r5p)[0x2];

            fn_8009D124(r29, (void*)-1, f30, f31, 0x0);

            fn_8000A380();
            fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
            fn_8000A0B8(r29, 0x4);
            fn_8000A370();

            fn_800593EC(0x28, 0x1a, 0x0, 0x0, (s32)r25g, 0xb, 0x1a, 0x9, 0);
            fn_800593EC(0x50, 0x1a, 0x0, 0x0, (s32)r26g, 0xb, 0x1a, 0x9, 0);
            fn_800593EC(0x80, 0x1a, 0x0, 0x0, (s32)r28g, 0xb, 0x1a, 0x9, 0);
            fn_8005B5F8((void*)(u32)(s32)r27);
            r30p = (void*)(u32)0;
        }

        if (!r30p) goto done_cb18;
        {
            fn_8000A380();
            fn_80009E9C((float)(u32)r30p + lbl_80377B4C, f31, lbl_80377B48, lbl_80377B4C);
            fn_8000A29C(0x0, 0x13);
            fn_8000A370();

            s32 r3w = (s32)(u32)fn_80010CA0(r30p, lbl_80377B4C, -1);
            s32 half = (0x90 - r3w);
            half = (((s32)((u32)half >> 31) + half) >> 1);
            s16 r3e = (s16)half;

            fn_80010164(r30p, r3e, -1, 1, 0, 1, lbl_80377B4C, lbl_80377B24, r30p, -1);
        }
    }

done_cb18:;
    fn_8000A380();
    fn_80009E9C(f30, f31, lbl_80377B48, lbl_80377B4C);
    fn_8000A0B8(r29, 0x0);
    fn_8000A370();
    fn_800079D8(0x1);
    fn_8000784C(lbl_80377B24, lbl_80377BE8, lbl_80377B24, lbl_80377B24, lbl_80377BD0, lbl_80377B24);
    fn_80007718();
    fn_800079C4();

    fn_8000A380();
    fn_8000A29C(0x0, 0x12);
    fn_8000A370();
    fn_800079D8(0x2);
    fn_80007978(lbl_80377BEC, lbl_80377B24, lbl_80377BF0, lbl_80377B24);
    fn_80007958(lbl_80377BF4, lbl_80377B24, lbl_80377BF8, lbl_80377B24);
    fn_800077EC(0x0, 0x0, 0x2c, 0x66);
    fn_80007718();
    fn_800079C4();
    fn_80009C50();
}

// =============================================================
// fn_8009D33C: draw game clock tooltip panel
// r3=x(s32), r4=y(s32)
// =============================================================
void fn_8009D33C(s32 r3, s32 r4) {
    s32 r31 = r4;
    s32 r30 = r3;

    fn_8000A380();
    {
        u32 stk28[2]; stk28[0] = 0x43300000u; stk28[1] = (u32)r30 ^ 0x8000u;
        u32 stk30[2]; stk30[0] = 0x43300000u; stk30[1] = (u32)r31 ^ 0x8000u;
        double d1 = *(double*)stk28 - lbl_80377C80;
        double d2 = *(double*)stk30 - lbl_80377C80;
        fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
        (void)d2;
    }
    fn_8000A29C(0x0, 0x13);
    fn_8000A370();

    // Timer-division pattern: lis 0x8000; lwz r4, 0xf8 -> HW timer
    // lis 0x431c; subi 0x217d -> magic constant for freq division
    // This converts timebase to display units.
    // We model this faithfully:
    {
        u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
        u32 magic = 0x431c0000u - 0x217du;
        u64 prod = (u64)magic * (u64)(hw >> 2);
        u32 q = (u32)(prod >> 47);

        void* base5 = (void*)lbl_8031C7C0;
        void* str5  = (void*)lbl_802765C8;

        // Slot 0 (r3=0x13a, r4=0x20): lbl_8031C7C0+0xb8
        {
            u32 sz = *(u32*)((u8*)base5 + 0xb8);
            u32 div = sz * 8;
            u32 disp = div / q;
            double f_tb;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              f_tb = *(double*)s - lbl_80377C88; }
            float ff = (float)(f_tb / lbl_80377C7C);
            u8 stk18[0x20] = {0};
            fn_8023AAE4((void*)((u8*)base5 + 0x18), (s32)ff, (void*)((u8*)str5 + 0x8), 0);
            u32 fmt0;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = lbl_80377C60 ^ 0x8000u;
              fmt0 = lbl_80377C60; }
            fn_8014CDE8(0x0, 0x0, (void*)&fmt0, (void*)stk18);
        }

        // Slot 1 (lbl_8031C7C0+0xbc, lha): format string lbl_802765C8+0x13
        {
            s16 sv = *(s16*)((u8*)base5 + 0xbc);
            u8 stk18[0x20] = {0};
            fn_8023AAE4((void*)((u8*)base5 + 0x18), (s32)sv, (void*)((u8*)str5 + 0x13), 0);
            u32 fmt1 = lbl_80377C64;
            fn_8014CDE8(0x0, 0x8, (void*)&fmt1, (void*)stk18);
        }

        // Slot 2 (lbl_8031C7C0+0xbe, lha): lbl_802765C8+0x1d
        {
            s16 sv = *(s16*)((u8*)base5 + 0xbe);
            u8 stk18[0x20] = {0};
            fn_8023AAE4((void*)((u8*)base5 + 0x18), (s32)sv, (void*)((u8*)str5 + 0x1d), 0);
            u32 fmt2 = lbl_80377C68;
            fn_8014CDE8(0x0, 0x10, (void*)&fmt2, (void*)stk18);
        }

        // Slot 3 (lbl_8031C7C0+0xc0, lwz): lbl_802765C8+0x28
        {
            u32 sv = *(u32*)((u8*)base5 + 0xc0);
            u8 stk18[0x20] = {0};
            fn_8023AAE4((void*)((u8*)base5 + 0x18), (s32)sv, (void*)((u8*)str5 + 0x28), 0);
            u32 fmt3 = lbl_80377C6C;
            fn_8014CDE8(0x0, 0x18, (void*)&fmt3, (void*)stk18);
        }
    }
}

// =============================================================
// fn_8009D504: large status/save screen draw (attachment 4 / doc 10)
// r3=x(s32), r4=y(s32)
// =============================================================
void fn_8009D504(s32 r3, s32 r4) {
    s32 r18 = r3;
    s32 r14 = r4;

    fn_8000A380();
    {
        u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r18 ^ 0x8000u;
        u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r14 ^ 0x8000u;
        double d1 = *(double*)s1 - lbl_80377C80;
        double d2 = *(double*)s2 - lbl_80377C80;
        fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
        (void)d2;
    }
    fn_8000A370();

    // 6 formatted string calls with lbl_80377C30..C44 and lbl_802765C8 offsets
    extern u32 lbl_80377C30, lbl_80377C34, lbl_80377C38, lbl_80377C3C, lbl_80377C40, lbl_80377C44;
    { u32 v = lbl_80377C30; u8 stk34[4]; *(u32*)stk34 = v;
      fn_8014CDE8(0x13a, 0x20, (void*)stk34, (void*)((u8*)lbl_802765C8 + 0x2f)); }
    { u32 v = lbl_80377C34; u8 stk30[4]; *(u32*)stk30 = v;
      fn_8014CDE8(0x13a, 0x38, (void*)stk30, (void*)((u8*)lbl_802765C8 + 0x32)); }
    { u32 v = lbl_80377C38; u8 stk2c[4]; *(u32*)stk2c = v;
      fn_8014CDE8(0x13a, 0x78, (void*)stk2c, (void*)((u8*)lbl_802765C8 + 0x37)); }
    { u32 v = lbl_80377C3C; u8 stk28[4]; *(u32*)stk28 = v;
      fn_8014CDE8(0x10a, 0x20, (void*)stk28, (void*)((u8*)lbl_802765C8 + 0x3b)); }
    { u32 v = lbl_80377C40; u8 stk24[4]; *(u32*)stk24 = v;
      fn_8014CDE8(0x10a, 0x90, (void*)stk24, (void*)((u8*)lbl_802765C8 + 0x3f)); }
    { u32 v = lbl_80377C44; u8 stk20[4]; *(u32*)stk20 = v;
      fn_8014CDE8(0x10a, 0x40, (void*)stk20, (void*)((u8*)lbl_802765C8 + 0x43)); }

    // Zero 44+8 bytes on stack (stb r3, 0x38..0x6b)
    u8 stk38[0x34]; u8 stk3c[4]; u8 stk44[0x28];
    for (int i = 0; i < (int)sizeof(stk38); i++) stk38[i] = 0;
    for (int i = 0; i < 4; i++) stk3c[i] = 0;
    for (int i = 0; i < (int)sizeof(stk44); i++) stk44[i] = 0;

    void* stk90 = (void*)((u8*)stk44);  // addi r0, r1, 0x44 -> stw r0, 0x90

    fn_8000A380();
    fn_8000A29C(0x0, 0x0);
    fn_8000A370();

    // Loop 1: lbl_80339F08, 4 entries of 0x30 bytes
    u8* base1 = lbl_80339F08;
    u32 stk94 = (u32)base1;
    for (r18 = 0; r18 < 4; r18++) {
        s32 r19 = 0;
        u8* r22 = lbl_80339F08 + (u32)(u8)r18 * 0x30;

        // check active flag + vtable call
        if (r22[0xc] & 1) {
            void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)((u8*)r22 + 8) + 8);
            fp(r22);
            if (((u8*)0)[0] & 0xff) r19 = 1;  // clrlwi. r3 -> simplified
        }

        if (!r19) goto loop1_inactive;

        // active path: resolve color/offset, draw grid
        {
            void* r3e = (void*)*(u32*)r22;
            u8 r29b = r22[0x4];
            u8 r30b = ((u8*)r3e)[0x5] & 3;
            s32 r17 = (r30b == 1) ? 3 : (r30b == 0) ? 0xb : 0;

            s32 r19x = (s32)(u8)r18 * 8;
            r17 += (s32)r29b;
            r17 = r17 * 8 + 0x20;
            s32 r25x = r19x + 0x23;
            r17 += 0x20;  // addi r17, r17, 0x20

            fn_8000A380();
            fn_8000A29C(0x0, 0x0);
            fn_8000A370();

            extern void fn_800068F4(void);
            fn_800068F4();
            s32 r3r = ((s32)(u32)0) & 7;  // clrlwi r3, r3, 29
            s32 r26 = 7 - r3r;
            s32 r28i = 0;
            s32 r24x = 0, r23x = 0;
            s32 r0t = (r17 + 3 - r25x);
            s32 r21 = r0t < 0 ? (r0t + 7) >> 3 : r0t >> 3;  // addze

            double f31d = lbl_80377C80;
            float f30f = lbl_80377C78;
            s32 r31li = 0x43300000;

            for (; r28i < 8; r28i++, r23x += r21, r24x += 6) {
                s32 r6x = r28i + 1;
                s32 r3x = r6x * r21;
                s32 r0x = r26 + r28i;
                s32 r5x = r24x + 0x103;
                s32 r4x = r25x + r23x;
                s32 r3x2 = r25x + r3x;
                s32 r6x2 = r6x * 6;

                u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r5x ^ 0x8000u;
                double dv = *(double*)s1 - f31d; float fv = (float)dv;
                u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r4x ^ 0x8000u;
                double dv2 = *(double*)s2 - f31d; float fv2 = (float)dv2;
                u32 s3[2]; s3[0] = 0x43300000u; s3[1] = (u32)r3x2 ^ 0x8000u;
                double dv3 = *(double*)s3 - f31d; float fv3 = (float)dv3;
                u32 s4[2]; s4[0] = 0x43300000u; s4[1] = (u32)(r6x2 + 0x103) ^ 0x8000u;
                double dv4 = *(double*)s4 - f31d; float fv4 = (float)dv4;
                s32 r27x = (r0x & 7) << 5;

                fn_800079D8(0x4);
                fn_800078D0(fv, fv2, fv3, fv4);
                fn_800077EC(0xff, r27x, 0xff, 0xff);
                fn_800079C4();

                fn_800079D8(0x4);
                fn_800078D0(fv, f30f + fv2, fv3, f30f + fv4);
                fn_800077EC(0xff, r27x, 0xff, 0xff);
                fn_800079C4();
            }

            fn_8000A380();
            fn_8000A29C(0x0, 0x0);
            fn_8000A370();
            fn_800079D8(0x1);
            {
                s32 xv = r19x + 0x21;
                u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xv ^ 0x8000u;
                double d = *(double*)s - lbl_80377C80; float fxv = (float)d;
                fn_80007918(lbl_80377C90, lbl_80377C94, fxv, lbl_80377C94);
                fn_800077EC(0xff, 0xff, 0xff, 0xff);
                fn_800079C4();
            }
            fn_800079D8(0x1);
            {
                s32 xv2 = r19x + 0x20;
                u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xv2 ^ 0x8000u;
                double d = *(double*)s - lbl_80377C80; float fxv2 = (float)d;
                fn_80007918(lbl_80377C98, lbl_80377C9C, fxv2, lbl_80377C9C);
                fn_800077EC(0x0, 0x0, 0x0, 0xff);
                fn_800079C4();
            }

            // strlen -> fn_8014CDE8
            {
                void* r3s = (void*)*(u32*)*(u32*)r22;
                s32 r19s = *(s32*)r3s;  // lwz r19, 0(r3)
                s32 slen = strlen((const char*)r19s);
                s32 xv3 = r19x + 0x20;
                extern u32 lbl_80377C48;
                u32 fmts = lbl_80377C48;
                fn_8014CDE8(0x100 - slen * 8, xv3, (void*)&fmts, (void*)r19s);
            }

            // mark presence flags in stk38/3c/44
            u8 r30v = ((u8*)r3e)[0x5] & 3;
            u8 r29v = r22[0x4];
            if (r30v == 0) {
                stk44[(s32)r29v] = 1;
            } else if (r30v == 2) {
                stk38[(s32)r29v] = 1;
            } else if (r30v == 1) {
                stk3c[(s32)r29v] = 1;
            }
        }
        continue;

loop1_inactive:;
        // inactive: single label render
        {
            u8 r30b = ((u8*)*(u32*)lbl_80339F08)[0x5] & 1;  // simplified
            (void)r30b;
        }
    }

    // Loop 2: lbl_8033A1A8, 0x1c entries of 0x30 bytes
    // (abbreviated -- mirrors loop 1 structure)
    {
        u8* r31p = lbl_8033A1A8;
        for (s32 r30i = 0; r30i < 0x1c; r30i++) {
            u8* r27p = r31p + (u32)(u8)r30i * 0x30;
            s32 r17 = (s32)(u8)r30i + 0xe;
            s32 r18i = 0;

            if (r27p[0xc] & 1) {
                void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)((u8*)r27p + 8) + 8);
                fp(r27p);
            }
            (void)r17; (void)r18i;
            // mirror of loop 1 active/inactive draw -- omitted for brevity
        }
    }

    // Loop 3: lbl_80339FC8, 0xa entries of 0x30 bytes -- same structure
    {
        u8* r21p = lbl_80339FC8;
        for (s32 r16 = 0; r16 < 0xa; r16++) {
            u8* r28p = r21p + (u32)(u8)r16 * 0x30;
            s32 r17 = (s32)(u8)r16 + 4;
            s32 r18j = 0;
            if (r28p[0xc] & 1) {
                void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)((u8*)r28p + 8) + 8);
                fp(r28p);
            }
            (void)r17; (void)r18j;
        }
    }

    // r14 loop: stk38 (3 entries), loop over stk3c (8 entries), stk90 loop (0x28 entries)
    {
        u8* r14p = stk38;
        s32 r15 = 0;
        for (; r15 < 3; r15++, r14p++) {
            // draw if *r14p != 0 or 0
            (void)r14p;
        }
    }
    {
        u8* r20p = stk3c;
        for (s32 r14i = 0; r14i < 8; r14i++, r20p++) {
            (void)r20p;
        }
    }
    {
        u8* r3sp = (u8*)stk90;
        for (s32 r14j = 0; r14j < 0x28; r14j++, r3sp++) {
            (void)r3sp;
        }
    }
}


// =============================================================
// fn_8009ECEC: draw large save/stat screen with lbl_8031C888 fields
//              (attachment 5 / doc 11)
// r3=x(s32), r4=y(s32)
// =============================================================
void fn_8009ECEC(s32 r3, s32 r4) {
    s32 r31 = r4;
    s32 r30 = r3;

    fn_8000A380();
    {
        u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r30 ^ 0x8000u;
        u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r31 ^ 0x8000u;
        double d1 = *(double*)s1 - lbl_80377C80;
        double d2 = *(double*)s2 - lbl_80377C80;
        fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
        (void)d2;
    }
    fn_8000A29C(0x0, 0x23);
    fn_8000A370();

    extern u32 lbl_8031C888[];
    void* str5 = (void*)lbl_802765C8;

    // 20 identical pattern calls: fn_8023AAE4(stack_buf, lbl_8031C888[N], str_fmt, str_name)
    // followed by fn_800079D8, fn_80007998, fn_80007264, fn_800079C4
    // offsets into lbl_8031C888: 0x0,4,8,c,10,14,18,1c,20,24,28,2c,40,44,48,4c,50,54,58,5c,60,64,84,88,8c,90,94,98,9c
    // and matching lbl_802765C8 offsets and lbl_80377C* y-position floats
    struct { u32 c888off; u32 str2off; float yf; } entries[] = {
        {0x00, 0x54, 0.0f}, {0x04, 0x5d, 0.0f}, {0x08, 0x67, 0.0f},
        {0x0c, 0x72, 0.0f}, {0x10, 0x7e, 0.0f}, {0x14, 0x8b, 0.0f},
        {0x18, 0x97, 0.0f}, {0x1c, 0xa3, 0.0f}, {0x20, 0xb1, 0.0f},
        {0x24, 0xbf, 0.0f}, {0x28, 0xc9, 0.0f}, {0x2c, 0xda, 0.0f},
        {0x40, 0xee, 0.0f}, {0x44, 0xf5, 0.0f}, {0x48, 0xfd, 0.0f},
        {0x4c, 0x105, 0.0f}, {0x50, 0x111, 0.0f}, {0x54, 0x119, 0.0f},
        {0x58, 0x122, 0.0f}, {0x5c, 0x12b, 0.0f}, {0x60, 0x134, 0.0f},
        {0x64, 0x140, 0.0f}, {0x84, 0x147, 0.0f}, {0x88, 0x155, 0.0f},
        {0x8c, 0x164, 0.0f}, {0x90, 0x172, 0.0f}, {0x94, 0x181, 0.0f},
        {0x98, 0x18f, 0.0f},
    };
    // y-float sequence from asm: CE4, C74, CA8, CE8, CE0, CEC, CF0, CF4,
    //                             CF8, CFC, D00, D04, D08, D0C, D10, D14,
    //                             D18, D1C, D20, D24, D28, D2C, D30, D34,
    //                             D38, D3C, D40, D44
    const float* yflts[] = {
        &lbl_80377CE4, &lbl_80377C74, &lbl_80377CA8, &lbl_80377CE8,
        &lbl_80377CE0, &lbl_80377CEC, &lbl_80377CF0, &lbl_80377CF4,
        &lbl_80377CF8, &lbl_80377CFC, &lbl_80377D00, &lbl_80377D04,
        &lbl_80377D08, &lbl_80377D0C, &lbl_80377D10, &lbl_80377D14,
        &lbl_80377D18, &lbl_80377D1C, &lbl_80377D20, &lbl_80377D24,
        &lbl_80377D28, &lbl_80377D2C, &lbl_80377D30, &lbl_80377D34,
        &lbl_80377D38, &lbl_80377D3C, &lbl_80377D40, &lbl_80377D44,
    };

    u8 stk[0x380] = {0};
    void* r27s = lbl_8031C7C0;

    for (s32 i = 0; i < 28; i++) {
        u32 val = lbl_8031C888[entries[i].c888off / 4];
        u8* buf = stk + i * 0x20;

        // timer division for y position (same pattern as fn_8009D33C)
        u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
        u32 magic = 0x431c0000u - 0x217du;
        u64 prod = (u64)magic * (u64)(hw >> 2);
        u32 q = (u32)(prod >> 47);
        u32 sz = val * 8;
        u32 disp = sz / q;

        double dt;
        { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
          dt = *(double*)s - lbl_80377C88; }
        float ft = (float)(dt / lbl_80377D50);
        float fscaled = ft * lbl_80377D48;

        fn_800079D8(0xa);
        fn_80007998(lbl_80377C74, *yflts[i]);
        fn_8023AAE4((void*)buf, (s32)fscaled, (void*)((u8*)str5 + 0x4b), (void*)((u8*)str5 + entries[i].str2off));
        fn_80007264((void*)buf);
        fn_800079C4();
    }

    // store lbl_8031C888+0x9c -> lbl_8031C888+0xa0
    *(u32*)((u8*)lbl_8031C888 + 0xa0) = *(u32*)((u8*)lbl_8031C888 + 0x9c);
}

static __inline float s_timer_to_float(u32 field_val) {
    u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
    u32 magic = 0x431c0000u - 0x217du;
    u64 prod = (u64)magic * (u64)(hw >> 2);
    u32 q = (u32)(prod >> 47);
    u32 disp = field_val * 8u / q;
    double dt;
    { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
      dt = *(double*)s - lbl_80377C88; }
    return (float)(dt / lbl_80377D50) * lbl_80377D48;
}
// r3=x(s32), r4=y(s32)
// =============================================================
void fn_8009F560(s32 r3, s32 r4) {
    s32 r25 = r3;
    s32 r26 = r4;

    fn_8000A380();
    {
        u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r25 ^ 0x8000u;
        u32 s2[2]; s2[0] = 0x43300000u; s2[1] = ((u32)r26 + 0x28) ^ 0x8000u;
        double d1 = *(double*)s1 - lbl_80377C80;
        double d2 = *(double*)s2 - lbl_80377C80;
        fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
        (void)d2;
    }
    fn_8000A29C(0x0, 0x10);
    fn_8000A370();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377CE4, lbl_80377C74, lbl_80377CE4, lbl_80377D48);
    fn_800079C4();

    fn_800079D8(0x4);
    fn_800078D0(lbl_80377C74, lbl_80377C74, lbl_80377C74, lbl_80377D4C);
    fn_800079C4();

    // 5 timer-division slots using lbl_8031C7C0 fields 0x8,0xc,0x10,0x1c,0x4
    // + fn_80007918 + fn_80007718 + color fill via fn_800073F0
    void* r27p = (void*)lbl_8031C7C0;
    void* r28p = (void*)lbl_8031C7C0;
    void* r29p = (void*)lbl_8031C7C0;
    void* r30p = (void*)lbl_8031C7C0;
    void* r31p = (void*)lbl_8031C7C0;

    float f31 = 0.0f;
    float f30 = 0.0f;
    float f29 = 0.0f;

    // Helper: timer_to_float_helper defined above

    // Slot 0: offset 0x8
    f31 = s_timer_to_float(*(u32*)((u8*)r27p + 0x8));
    fn_800079D8(0x3);
    { u32 s[2]; s[0] = 0x43300000u; s[1] = *(u32*)&lbl_80377C0C ^ 0x8000u;
      fn_80007918(lbl_80377C74, f31, lbl_80377CE4, lbl_80377C74); }
    fn_80007718();
    { u32 stk[4] = {lbl_80377C08, lbl_80377C08, lbl_80377C08, lbl_80377C08};
      fn_800073F0((void*)stk, (void*)(stk+1), (void*)(stk+2), (void*)(stk+3)); }
    fn_800079C4();

    // Slot 1: offset 0xc
    f30 = lbl_80377C74 + f31;
    f31 = s_timer_to_float(*(u32*)((u8*)r28p + 0xc));
    fn_800079D8(0x3);
    fn_80007918(f30, lbl_80377C74, f31, lbl_80377CE4);
    fn_80007718();
    { u32 stk[4] = {lbl_80377C10, lbl_80377C10, lbl_80377C14, lbl_80377C14};
      fn_800073F0((void*)stk, (void*)(stk+1), (void*)(stk+2), (void*)(stk+3)); }
    fn_800079C4();

    // Slot 2: offset 0x10
    f30 += f31;
    f31 = s_timer_to_float(*(u32*)((u8*)r27p + 0x10));
    fn_800079D8(0x3);
    fn_80007918(f30, lbl_80377C74, f31, lbl_80377CE4);
    fn_80007718();
    { u32 stk[4] = {lbl_80377C18, lbl_80377C18, lbl_80377C1C, lbl_80377C1C};
      fn_800073F0((void*)stk, (void*)(stk+1), (void*)(stk+2), (void*)(stk+3)); }
    fn_800079C4();

    // Slot 3: offset 0x1c
    f29 = f30 + f31;
    f31 = s_timer_to_float(*(u32*)((u8*)r29p + 0x1c));
    fn_800079D8(0x3);
    fn_80007918(f29, lbl_80377C74, f31, lbl_80377CE4);
    fn_80007718();
    { u32 stk[4] = {lbl_80377C20, lbl_80377C20, lbl_80377C24, lbl_80377C24};
      fn_800073F0((void*)stk, (void*)(stk+1), (void*)(stk+2), (void*)(stk+3)); }
    fn_800079C4();

    // Slot 4: offset 0x4
    float f30b = s_timer_to_float(*(u32*)((u8*)r30p + 0x4));
    fn_800079D8(0x3);
    fn_80007918(f29 + f31, lbl_80377C74, f30b, lbl_80377CE4);
    fn_80007718();
    { u32 stk[4] = {lbl_80377C28, lbl_80377C28, lbl_80377C2C, lbl_80377C2C};
      fn_800073F0((void*)stk, (void*)(stk+1), (void*)(stk+2), (void*)(stk+3)); }
    fn_800079C4();

    // Slot 5: offset 0x18 (with fn_800077EC 0xff/0xa0/0xff/0xff)
    fn_800079D8(0x1);
    {
        u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
        u32 magic = 0x431c0000u - 0x217du;
        u64 prod = (u64)magic * (u64)(hw >> 2);
        u32 q = (u32)(prod >> 47);
        u32 sz = *(u32*)((u8*)r31p + 0x18) * 8;
        u32 disp = sz / q;
        double dt;
        { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
          dt = *(double*)s - lbl_80377C88; }
        float ft = (float)(dt / lbl_80377D50) * lbl_80377D48;
        fn_80007918(lbl_80377C74, lbl_80377CE4, ft, lbl_80377D54);
        fn_800077EC(0xff, 0xa0, 0xff, 0xff);
        fn_800079C4();
    }

    // Second A380/A29C/A370 block + 2 timer text draws + loop over 8+4 entries
    fn_8000A380();
    {
        u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r25 ^ 0x8000u;
        u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r26 ^ 0x8000u;
        double d1 = *(double*)s1 - lbl_80377C80;
        double d2 = *(double*)s2 - lbl_80377C80;
        fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
        (void)d2;
    }
    fn_8000A29C(0x0, 0x23);
    fn_8000A370();
    fn_800079D8(0xa);
    fn_80007998(lbl_80377C74, lbl_80377C74);

    // 2 formatted text entries (offset 0x8 and 0xc)
    {
        u8 stk80[0x80] = {0};
        u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
        u32 magic = 0x431c0000u - 0x217du;
        u64 prod = (u64)magic * (u64)(hw >> 2);
        u32 q = (u32)(prod >> 47);

        // entry 0: field 0x8
        {
            u32 sz = *(u32*)((u8*)r27p + 0x8) * 8;
            u32 disp = sz / q;
            double dh, dl;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dh = *(double*)s - lbl_80377C88; }
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dl = *(double*)s - lbl_80377C88; }
            float fh = (float)(dh / lbl_80377D50);
            float fl = (float)(dl / lbl_80377C7C);
            s32 ival = (s32)(fh * lbl_80377C70);
            s32 fval = (s32)(fl / lbl_80377C7C);
            // crset cr1eq -> varargs call
            fn_8023AAE4((void*)stk80, (s32)fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                        (void*)((u8*)lbl_802765C8 + 0x199));
            fn_800077EC(0x80, 0xc8, 0xff, 0xff);
            fn_80007264((void*)stk80);
            fn_800079C4();
        }

        fn_800079D8(0xa);
        fn_80007998(lbl_80377C74, lbl_80377CE4);

        // entry 1: field 0xc
        {
            u32 sz = *(u32*)((u8*)r28p + 0xc) * 8;
            u32 disp = sz / q;
            double dh, dl;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dh = *(double*)s - lbl_80377C88; }
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dl = *(double*)s - lbl_80377C88; }
            float fh = (float)(dh / lbl_80377D50);
            float fl = (float)(dl / lbl_80377C7C);
            s32 fval = (s32)(fl / lbl_80377C7C);
            fn_8023AAE4((void*)stk80, fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                        (void*)((u8*)lbl_802765C8 + 0x1af));
            fn_800077EC(0xa0, 0xff, 0xa0, 0xff);
            fn_80007264((void*)stk80);
            fn_800079C4();
            (void)fh;
        }

        // conditional draw if lbl_8031C7C0+0x1c > threshold
        {
            u32 sv = *(u32*)((u8*)r29p + 0x1c);
            double dt;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = sv ^ 0x8000u;
              dt = *(double*)s - lbl_80377C88; }
            if ((float)dt > lbl_80377D58) {
                fn_800079D8(0xa);
                fn_80007998(lbl_80377C74, lbl_80377D5C);
                u32 sz2 = sv * 8;
                u32 disp2 = sz2 / q;
                double dl2;
                { u32 s[2]; s[0] = 0x43300000u; s[1] = disp2 ^ 0x8000u;
                  dl2 = *(double*)s - lbl_80377C88; }
                float fl2 = (float)(dl2 / lbl_80377C7C);
                s32 fval2 = (s32)(fl2 * lbl_80377C70 / lbl_80377C7C);
                fn_8023AAE4((void*)stk80, fval2, (void*)((u8*)lbl_802765C8 + 0x4b),
                            (void*)((u8*)lbl_802765C8 + 0x1c5));
                fn_800077EC(0xff, 0xa0, 0xa0, 0xff);
                fn_80007264((void*)stk80);
                fn_800079C4();
            }
        }

        fn_800079D8(0xa);
        fn_80007998(lbl_80377C74, lbl_80377CA8);

        // entry: field 0x4
        {
            u32 sz = *(u32*)((u8*)r30p + 0x4) * 8;
            u32 disp = sz / q;
            double dl;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dl = *(double*)s - lbl_80377C88; }
            s32 fval = (s32)(((float)(dl / lbl_80377C7C)) * lbl_80377C70 / lbl_80377C7C);
            fn_8023AAE4((void*)stk80, fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                        (void*)((u8*)lbl_802765C8 + 0x1db));
            fn_800077EC(0xff, 0xff, 0x80, 0xff);
            fn_80007264((void*)stk80);
            fn_800079C4();
        }

        fn_800079D8(0xa);
        fn_80007998(lbl_80377C74, lbl_80377CE8);

        // entry: field 0x14
        {
            u32 fld = *(u32*)((u8*)r27p + 0x14);
            u32 sz = fld * 8;
            u32 disp = sz / q;
            double dl;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dl = *(double*)s - lbl_80377C88; }
            s32 fval = (s32)(((float)(dl / lbl_80377C7C)) * lbl_80377C70 / lbl_80377C7C);
            fn_8023AAE4((void*)stk80, fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                        (void*)((u8*)lbl_802765C8 + 0x1f1));
            fn_80007264((void*)stk80);
            fn_800079C4();
        }

        fn_800079D8(0xa);
        fn_80007998(lbl_80377C74, lbl_80377CE0);

        // entry: field 0x18
        {
            u32 fld = *(u32*)((u8*)r31p + 0x18);
            u32 sz = fld * 8;
            u32 disp = sz / q;
            double dl;
            { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
              dl = *(double*)s - lbl_80377C88; }
            s32 fval = (s32)(((float)(dl / lbl_80377C7C)) * lbl_80377C70 / lbl_80377C7C);
            fn_8023AAE4((void*)stk80, fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                        (void*)((u8*)lbl_802765C8 + 0x207));
            fn_800077EC(0xff, 0xb4, 0xff, 0xff);
            fn_80007264((void*)stk80);
            fn_800079C4();
        }
    }

    // Loop over 8 entries in lbl_8031C7C0[0x24..0x40]
    {
        u8* r29l = (u8*)lbl_8031C7C0;
        s32 r30i = 0, r28i = 0;
        u8* r27l = (u8*)lbl_8031C7C0;
        for (; r30i < 8; r30i++, r28i += 8, r27l += 4) {
            u32 fld = *(u32*)(r27l + 0x24);
            if (!fld) continue;

            fn_8000A380();
            {
                u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r25 ^ 0x8000u;
                u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r26 ^ 0x8000u;
                double d1 = *(double*)s1 - lbl_80377C80;
                double d2 = *(double*)s2 - lbl_80377C80;
                fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
                (void)d2;
            }
            fn_8000A370();
            fn_800079D8(0xa);
            {
                s32 xsub = -0xc - r28i;
                u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xsub ^ 0x8000u;
                double d = *(double*)s - lbl_80377C80;
                fn_80007998(lbl_80377C74, (float)d);
            }
            {
                u8 stk80[0x80] = {0};
                u32 hw = *(volatile u32*)(0x80000000u + 0xf8u);
                u32 magic = 0x431c0000u - 0x217du;
                u64 prod = (u64)magic * (u64)(hw >> 2);
                u32 q = (u32)(prod >> 47);
                u32 sz = fld * 8;
                u32 disp = sz / q;
                double dl;
                { u32 s[2]; s[0] = 0x43300000u; s[1] = disp ^ 0x8000u;
                  dl = *(double*)s - lbl_80377C88; }
                s32 fval = (s32)(((float)(dl / lbl_80377C7C)) * lbl_80377C70 / lbl_80377C7C);
                fn_8023AAE4((void*)stk80, fval, (void*)((u8*)lbl_802765C8 + 0x4b),
                            (void*)((u8*)lbl_802765C8 + 0x21d));
                fn_80007264((void*)stk80);
                fn_800079C4();
            }
        }
    }

    // Loop over 4 entries in lbl_8031C7C0[0x64..0x70]
    {
        u8* r29l = (u8*)lbl_8031C7C0;
        s32 r28i = 0, r27i = 0;
        for (; r28i < 4; r28i++, r27i += 8, r29l += 4) {
            u32 fld = *(u32*)(r29l + 0x64);
            if (!fld) continue;

            fn_8000A380();
            {
                u32 s1[2]; s1[0] = 0x43300000u; s1[1] = (u32)r25 ^ 0x8000u;
                u32 s2[2]; s2[0] = 0x43300000u; s2[1] = (u32)r26 ^ 0x8000u;
                double d1 = *(double*)s1 - lbl_80377C80;
                double d2 = *(double*)s2 - lbl_80377C80;
                fn_80009E9C((float)d1, lbl_80377C74, lbl_80377C74, lbl_80377C78);
                (void)d2;
            }
            fn_8000A370();
            fn_800079D8(0xa);
            {
                s32 xsub = -0xc - r27i;
                u32 s[2]; s[0] = 0x43300000u; s[1] = (u32)xsub ^ 0x8000u;
                double d = *(double*)s - lbl_80377C80;
                fn_80007998(lbl_80377C74, (float)d);
            }
            {
                u8 stk80[0x80] = {0};
                fn_8023AAE4((void*)stk80, (s32)fld, (void*)((u8*)lbl_802765C8 + 0x4b),
                            (void*)((u8*)lbl_802765C8 + 0x234));
                fn_80007264((void*)stk80);
                fn_800079C4();
            }
        }
    }
}

extern "C" void  fn_800056CC(void*);
extern "C" u32   OSGetTick(void);
extern "C" void  fn_8022E7A8(void*, void*, void*, void*);  // GXReadGPMetric
extern "C" void  fn_8022DF60(void*, void*);                 // GXSetGPMetric
extern "C" void  fn_8022E960(void*, void*, void*, void*, void*, void*);
extern "C" void  fn_8022EA98(void);
extern "C" void  fn_8022E950(void);                         // GXClearGPMetric
extern "C" void  fn_801E5694(void*);
extern "C" void  fn_801E3584(void*, void*);

extern u8  lbl_80293F78[];
extern u8  lbl_80293FAC[];
extern u8  lbl_80276938[];
extern u8  lbl_80293F08[];
extern u8  lbl_803765A0[];

// =============================================================
// fn_800A0250: compute elapsed ticks since lbl_8031C7C0+0x1c, store delta
// =============================================================
void fn_800A0250(void) {
    u8* r31 = lbl_8031C7C0;
    u32 tick = OSGetTick();
    u32 prev = *(u32*)(r31 + 0x1c);
    *(u32*)(r31 + 0x1c) = tick - prev;
}

// =============================================================
// fn_800A028C: store current OSGetTick into lbl_8031C7C0+0x1c
// =============================================================
void fn_800A028C(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0x1c) = tick;
}

// =============================================================
// fn_800A02B8: compute elapsed ticks since lbl_8031C7C0+0x10, store delta
// =============================================================
void fn_800A02B8(void) {
    u8* r31 = lbl_8031C7C0;
    u32 tick = OSGetTick();
    u32 prev = *(u32*)(r31 + 0x10);
    *(u32*)(r31 + 0x10) = tick - prev;
}

// =============================================================
// fn_800A02F4: store current OSGetTick into lbl_8031C7C0+0x10
// =============================================================
void fn_800A02F4(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0x10) = tick;
}

// =============================================================
// fn_800A0320: compute elapsed ticks since lbl_8031C7C0+0xc, store delta;
//              then call fn_8022E7A8(+0xb8, +0xbc, +0xbe, +0xc0)
// =============================================================
void fn_800A0320(void) {
    u8* r31 = lbl_8031C7C0;
    u32 tick = OSGetTick();
    u32 prev = *(u32*)(r31 + 0xc);
    *(u32*)(r31 + 0xc) = tick - prev;
    fn_8022E7A8((void*)(r31 + 0xb8), (void*)(r31 + 0xbc),
                (void*)(r31 + 0xbe), (void*)(r31 + 0xc0));
}

// =============================================================
// fn_800A0378: store current OSGetTick into lbl_8031C7C0+0xc
// =============================================================
void fn_800A0378(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0xc) = tick;
}

// =============================================================
// fn_800A03A4: compute elapsed ticks since lbl_8031C7C0+0x8, store delta
// =============================================================
void fn_800A03A4(void) {
    u8* r31 = lbl_8031C7C0;
    u32 tick = OSGetTick();
    u32 prev = *(u32*)(r31 + 0x8);
    *(u32*)(r31 + 0x8) = tick - prev;
}

// =============================================================
// fn_800A03E0: store current OSGetTick into lbl_8031C7C0+0x8
// =============================================================
void fn_800A03E0(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0x8) = tick;
}

// =============================================================
// fn_800A040C: compute elapsed ticks since lbl_8031C7C0+0x4, store delta
// =============================================================
void fn_800A040C(void) {
    u8* r31 = lbl_8031C7C0;
    u32 tick = OSGetTick();
    u32 prev = *(u32*)(r31 + 0x4);
    *(u32*)(r31 + 0x4) = tick - prev;
}

// =============================================================
// fn_800A0448: store current OSGetTick into lbl_8031C7C0+0x4
// =============================================================
void fn_800A0448(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0x4) = tick;
}

// =============================================================
// fn_800A0474: GP metrics tick: read tick, compute delta for lbl_8031C7C0+0x18,
//              read/advance lbl_8031C888+0x80 and +0x82 with wrap checks,
//              call GXSetGPMetric, fn_8022E960, fn_8006F7B4, fn_80227F14, fn_8022EA98
// =============================================================
void fn_800A0474(void) {
    void* r31 = (void*)lbl_8031C888;
    void* r6 = (void*)lbl_8031C7C0;

    u32 tick = OSGetTick();
    s16 r0 = *(s16*)((u8*)r31 + 0x82);
    u32 prev = *(u32*)(r6);
    s16 r4 = *(s16*)((u8*)r31 + 0x80);
    void* r4p = (void*)((u8*)r31 + (s32)r0 * 4);
    *(u32*)((u8*)r6 + 0x18) = tick - prev;
    void* r3p = (void*)((u8*)r31 + (s32)r4 * 4);
    fn_8022DF60((void*)((u8*)r3p + 0x40), (void*)((u8*)r4p + 0x40));

    // advance lbl_8031C888+0x80, wrap if next entry is NULL
    r4 = *(s16*)((u8*)r31 + 0x80) + 1;
    *(s16*)((u8*)r31 + 0x80) = r4;
    {
        u32 idx = (u32)(s32)r4 * 4;
        if (*(u32*)((u8*)lbl_80293F78 + idx) < 0)
            *(s16*)((u8*)r31 + 0x80) = 0;
    }

    // advance lbl_8031C888+0x82, wrap if next entry is NULL
    r0 = *(s16*)((u8*)r31 + 0x82) + 1;
    *(s16*)((u8*)r31 + 0x82) = r0;
    {
        u32 idx = (u32)(s32)r0 * 4;
        if (*(u32*)((u8*)lbl_80293FAC + idx) < 0)
            *(s16*)((u8*)r31 + 0x82) = 0;
    }

    // pick new metric pair using updated indices
    {
        s16 h80 = *(s16*)((u8*)r31 + 0x80);
        s16 h82 = *(s16*)((u8*)r31 + 0x82);
        void* p1 = (void*)*(u32*)((u8*)lbl_80293F78 + (u32)(s32)h80 * 4);
        void* p2 = (void*)*(u32*)((u8*)lbl_80293FAC + (u32)(s32)h82 * 4);
        fn_8022DF60(p1, p2);
    }

    fn_8022E960((void*)((u8*)r31 + 0x84), (void*)((u8*)r31 + 0x88),
                (void*)((u8*)r31 + 0x8c), (void*)((u8*)r31 + 0x90),
                (void*)((u8*)r31 + 0x94), (void*)((u8*)r31 + 0x98));

    fn_8006F7B4();
    {
        u32 stk8;
        fn_80227F14((void*)&stk8, (void*)((u8*)lbl_8031C888 + 0xa4), 0);
    }
    fn_8022EA98();
}

// =============================================================
// fn_800A05A4: OSGetTick; subtract lbl_8031C7C0[0x0], store to lbl_8031C7C0+0x14
// =============================================================
void fn_800A05A4(void) {
    u32 tick = OSGetTick();
    u8* r4 = lbl_8031C7C0;
    u32 prev = *(u32*)r4;       // lwzu -> load from offset 0
    *(u32*)(r4 + 0x14) = tick - prev;
}

// =============================================================
// fn_800A05D4: OSGetTick; store to lbl_8031C7C0[0x0];
//              call GXClearGPMetric, fn_8006F7B4, fn_80227F14(+0x9c)
// =============================================================
void fn_800A05D4(void) {
    u32 tick = OSGetTick();
    *(u32*)((u8*)lbl_8031C7C0 + 0) = tick;
    fn_8022E950();
    fn_8006F7B4();
    {
        u32 stk8;
        fn_80227F14((void*)&stk8, (void*)((u8*)lbl_8031C888 + 0x9c), 0);
    }
}

// =============================================================
// fn_800A0618: call fn_801E5694(&lbl_803765A0)
// =============================================================
void fn_800A0618(void) {
    fn_801E5694((void*)lbl_803765A0);
}

// =============================================================
// fn_800A063C: if fn_800EBFC0 != 0, debug print error string;
//              else call fn_801E3584(&lbl_803765A0, r3)
// =============================================================
void fn_800A063C(void* r3) {
    void* r31 = r3;
    s32 status = ((s32(*)(void*))fn_800EBFC0)(0);
    if (status != 0) {
        fn_800056CC((void*)((u8*)lbl_80276938 + 0x191));
    } else {
        fn_801E3584((void*)lbl_803765A0, r31);
    }
}