#include <dolphin/types.h>

extern "C" void  fn_80234F38(void*, void*, s32, s32);
extern "C" void  fn_80234FB0(void*, void*, void*, s32, s32);
extern "C" void* fn_8000E20C(void*);
extern "C" void* fn_8014D838(void*);
extern "C" void* fn_8000C1E8(void*);
extern "C" void  fn_8000C028(void*);
extern "C" void* fn_8000CC18(void*, void*);
extern "C" void* fn_800C4C34(void*, int, int, int);
extern "C" void  fn_8000C2B0(void*);
extern "C" s32   fn_8000D00C(s32);
extern "C" float fn_800596D0(float, float, float, float, float);
extern "C" float fn_8005A124(float, float, float);
extern "C" void  fn_8005A138(s32, float, float, float);
extern "C" void  fn_8005A1E8(s32, float, float, float, float);
extern "C" s16   fn_8017C3F4(void*);
extern "C" u32   fn_8017C420(void*);
extern "C" void  fn_8017C008(void*, s16);
extern "C" void  fn_8017C030(void*, u8);
extern "C" void  fn_8014DF60(void*);
extern "C" void  fn_800C4B84(void*);
extern "C" u8    fn_80106398(void*, s32);
extern "C" void* fn_80016CB8(void*);
extern "C" void  fn_8001C700(void);
extern "C" void  fn_8001C874(void);
extern "C" void  fn_80016A84(void*, s16);
extern "C" void  fn_80017D24(void*);
extern "C" void  fn_800181FC(void*, u8);
extern "C" void  fn_8001869C(void*);
extern "C" void  fn_80018514(void*);
extern "C" void  fn_8000C198(void*, u8);
extern "C" void* fn_80068478(s32);
extern "C" void  fn_8006778C(s32, void*, void*);
extern "C" void  fn_800194E0(void*);
extern "C" void  fn_80040A0C(void);
extern "C" void  fn_8020AE58(void*, s32, float);
extern "C" void  fn_8020AB7C(void*, void*, void*);
extern "C" void  fn_8020B51C(void*, void*, void*);
extern "C" void  fn_80067F18(void*, void*, void*);
extern "C" void  fn_8005A2A0(s32, void*, void*);
extern "C" void  fn_80148640(void*, s32);

extern u8   lbl_802BB9C4[];
extern u8   lbl_80270EA0[];
extern u8   lbl_8033A708[];
extern u8   lbl_8028E0C8[];
extern u8   lbl_802710A8[];
extern u32  lbl_8027109C[];
extern u8   lbl_80271090[];
extern u32  lbl_802D4914[];
extern u32  lbl_802D47A8[];
extern u32  lbl_80375464;
extern u8   lbl_80375468;
extern u8   lbl_80375460;
extern u8   lbl_80375461;
extern u8   lbl_8037552B;
extern u8   lbl_80375050;
extern u32  lbl_803753B0;
extern u32  lbl_80376554;
extern u32  lbl_802D49F8[];
extern u8   lbl_80271040[];
extern float lbl_80376F98;
extern float lbl_80376F9C;
extern float lbl_80376FA0;
extern float lbl_80376FA4;
extern float lbl_80376FB0;
extern float lbl_80376FB4;
extern float lbl_80376FB8;
extern float lbl_80376FBC;
extern float lbl_80376FC0;
extern float lbl_80376FC4;
extern float lbl_80376FC8;
extern float lbl_80376FCC;
extern float lbl_80376FD0;
extern float lbl_80376FD4;
extern float lbl_80376FD8;
extern float lbl_80376FDC;
extern float lbl_80376FE0;
extern float lbl_80376FE4;
extern float lbl_80376FE8;
extern float lbl_80376FEC;
extern float lbl_80376FF0;
extern float lbl_80376FF4;
extern double lbl_80376FA8;

void fn_8001701C(void) {
    fn_80234F38((void*)lbl_802BB9C4, (void*)fn_80016A84, 0x280, 0x9f);
}

void fn_80017054(void* r3) {
    u8* r31 = (u8*)r3;
    *(u32*)(r31 + 0x1a0) = 0;
    fn_80234FB0((void*)(r31 + 0x1cc), (void*)fn_8001C874, (void*)fn_8001C700, 8, 4);
    fn_80234FB0((void*)(r31 + 0x1ec), (void*)fn_8001C874, (void*)fn_8001C700, 8, 4);
    *(u16*)(r31 + 0x228) = 0;
    *(u16*)(r31 + 0x22a) = 0;
    *(u16*)(r31 + 0x22c) = 0;
    *(u16*)(r31 + 0x22e) = 0;
    *(u16*)(r31 + 0x230) = 0;
    *(u16*)(r31 + 0x232) = 0;
    *(u8*)(r31 + 0x234) = 0;
    *(u8*)(r31 + 0x235) = 0;
}

void* fn_800170EC(void* r3) {
    u8 type = *(u8*)r3;
    u8* r31 = lbl_80270EA0 + 0x1d;

    if (type == 3) {
        goto case3;
    } else if (type > 3) {
        if (type >= 7) goto done;
        if (type >= 5) goto lookup;
        goto done;
    } else if (type == 0) {
        goto lookup;
    } else {
        goto done;
    }

lookup:
    {
        void* entry = fn_8014D838((void*)lbl_8033A708);
        if (!entry) { r31 = 0; goto done; }
        u8 val = *(u8*)entry;
        u8 mapped;
        if (val == 0)      mapped = 0;
        else if (val == 1) mapped = 8;
        else if (val == 2) mapped = 7;
        else if (val == 3) mapped = 4;
        else if (val == 4) mapped = 5;
        else               mapped = 0;

        mapped = mapped & 0xFF;
        if (mapped == 6) goto done;
        if (mapped >= 6) {
            if (mapped < 8) { r31 = lbl_80270EA0 + 0x22; goto done; }
            goto done;
        }
        if (mapped == 4)      { r31 = lbl_80270EA0 + 0x28; goto done; }
        if (mapped >= 4)      { r31 = lbl_80270EA0 + 0x2e; goto done; }
        goto done;
    }

case3:
    {
        void* entry = fn_8014D838((void*)lbl_8033A708);
        if (!entry) { r31 = 0; goto done; }
        u8 val = *(u8*)entry;
        u8 mapped;
        if (val == 0)      mapped = 0;
        else if (val == 1) mapped = 8;
        else if (val == 2) mapped = 7;
        else if (val == 3) mapped = 4;
        else if (val == 4) mapped = 5;
        else               mapped = 0;

        mapped = mapped & 0xFF;
        if (mapped == 5)      { r31 = lbl_80270EA0 + 0x40; goto done; }
        if (mapped >= 5) {
            if (mapped == 8)  { r31 = lbl_80270EA0 + 0x46; goto done; }
            goto done;
        }
        if (mapped == 0)      { r31 = lbl_80270EA0 + 0x34; goto done; }
        if (mapped < 4)       goto done;
        r31 = lbl_80270EA0 + 0x3a;
        goto done;
    }

done:
    if (r31) {
        r31 = (u8*)fn_8000E20C(r31);
    }
    return r31;
}

void* fn_8001731C(void* r3) {
    u8 r4 = *(u8*)r3;
    void* entry = fn_8014D838((void*)lbl_8033A708);
    if (!entry) return 0;
    return fn_80016CB8((void*)(lbl_80270EA0 + 0x4c));
}

s32 fn_8001736C(void* r3) {
    u8 r4 = *(u8*)r3;
    void* entry = fn_8014D838((void*)lbl_8033A708);
    if (!entry) return -1;
    return (s32)*(u8*)((u8*)entry + 3);
}

s32 fn_800173B0(void* r3) {
    u8 r4 = *(u8*)r3;
    void* entry = fn_8014D838((void*)lbl_8033A708);
    if (!entry) return -1;
    return (s32)*(u8*)((u8*)entry + 2);
}

s32 fn_800173F4(void* r3) {
    u8 r4 = *(u8*)r3;
    void* entry = fn_8014D838((void*)lbl_8033A708);
    if (!entry) return 0;
    u8 val = *(u8*)entry;
    if (val == 0)      return 0;
    else if (val == 1) return 8;
    else if (val == 2) return 7;
    else if (val == 3) return 4;
    else if (val == 4) return 5;
    return 0;
}

void fn_80017490(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;
    u8 flag = fn_80106398((void*)(r31 + 0x1bc), 0);
    if ((u8)flag) {
        r30[0] = 1;
    } else {
        u8* r3b = (u8*)*(u32*)(r31 + 0x190);
        r30[0] = r3b[8];
    }
}

void fn_800174F0(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;
    *(u16*)(r30 + 0x0) = fn_8017C3F4(r31);
    *(u16*)(r30 + 0x2) = fn_8017C3F4(r31);
    *(u16*)(r30 + 0x4) = fn_8017C3F4(r31);
    *(u16*)(r30 + 0x6) = fn_8017C3F4(r31);
    *(u16*)(r30 + 0x8) = fn_8017C3F4(r31);
    *(u16*)(r30 + 0xa) = fn_8017C3F4(r31);
    *(u8*) (r30 + 0xc) = (u8)fn_8017C420(r31);
    *(u8*) (r30 + 0xd) = (u8)fn_8017C420(r31);
}

void fn_80017584(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;
    fn_8017C008(r31, *(u16*)(r30 + 0x0));
    fn_8017C008(r31, *(u16*)(r30 + 0x2));
    fn_8017C008(r31, *(u16*)(r30 + 0x4));
    fn_8017C008(r31, *(u16*)(r30 + 0x6));
    fn_8017C008(r31, *(u16*)(r30 + 0x8));
    fn_8017C008(r31, *(u16*)(r30 + 0xa));
    fn_8017C030(r31, *(u8*)(r30 + 0xc));
    fn_8017C030(r31, *(u8*)(r30 + 0xd));
}

void fn_80017618(void* r3) {
    u8* r31 = (u8*)r3;
    s32 val = fn_8000D00C(0xe4c);
    *(u16*)r31 = (u16)val;
}

void* fn_8001764C(s32 r3) {
    u8* r3out;
    if ((u32)r3 > 0x17) goto epilog;
    switch (r3) {
    case  0: r3out = lbl_80270EA0 + 0xe8;  break;
    case  1: r3out = lbl_80270EA0 + 0xee;  break;
    case  2: r3out = lbl_80270EA0 + 0xf5;  break;
    case  3: r3out = lbl_80270EA0 + 0xfd;  break;
    case  4: r3out = lbl_80270EA0 + 0x105; break;
    case  5: r3out = lbl_80270EA0 + 0x10e; break;
    case  6: r3out = lbl_80270EA0 + 0x116; break;
    case  7: r3out = lbl_80270EA0 + 0x11d; break;
    case  8: r3out = lbl_80270EA0 + 0x125; break;
    case  9: r3out = lbl_80270EA0 + 0x12e; break;
    case 10: r3out = lbl_80270EA0 + 0x135; break;
    case 11: r3out = lbl_80270EA0 + 0x13b; break;
    case 12: r3out = lbl_80270EA0 + 0x141; break;
    case 13: r3out = lbl_80270EA0 + 0x148; break;
    case 14: r3out = lbl_80270EA0 + 0x14f; break;
    case 15: r3out = lbl_80270EA0 + 0x158; break;
    case 16: r3out = lbl_80270EA0 + 0x15f; break;
    case 17: r3out = lbl_80270EA0 + 0x166; break;
    case 18: r3out = lbl_80270EA0 + 0x16d; break;
    case 19: r3out = lbl_80270EA0 + 0x175; break;
    case 20: r3out = lbl_80270EA0 + 0x17d; break;
    case 21: r3out = lbl_80270EA0 + 0x186; break;
    case 22: r3out = lbl_80270EA0 + 0x18d; break;
    case 23: r3out = lbl_80270EA0 + 0x195; break;
    default: goto epilog;
    }
    return fn_8000E20C(r3out);
epilog:
    return fn_8000E20C(0);
}

s32 fn_80017808(void) {
    void* r3 = fn_8000C1E8((void*)lbl_8028E0C8);
    if (!r3) return 0;
    if (*(u8*)((u8*)r3 + 0x3c)) return 0;
    return 1;
}

void fn_80017850(void) {
    fn_8000C028((void*)lbl_8028E0C8);
}

void fn_80017878(u8 r3) {
    u8 r31 = r3;
    void* obj = fn_8000C1E8((void*)lbl_8028E0C8);
    if (obj) {
        fn_800181FC(obj, (u8)(r31 & 0xFF));
    }
}

void fn_800178BC(void* r3, void* r4) {
    u8* r31;
    void* obj = fn_8000CC18((void*)lbl_8028E0C8, r3);
    r31 = (u8*)obj;
    void* mem = fn_800C4C34((void*)0x1400, (int)(lbl_802710A8 + 0x4e), 0, 0);
    *(u32*)(r31 + 0x40) = (u32)mem;
    *(u8*)(r31 + 0x44) = 0;
    *(u8*)(r31 + 0x3c) = 0;
}

void fn_8001791C(void* r3, void* r4, float f1, float f2, float f3) {
    u8* r31 = (u8*)r3;
    u32 r30 = (u32)r4;
    float f29 = f1;
    float f30 = f2;
    float f31 = f3;

    void* obj = fn_8000C1E8((void*)lbl_8028E0C8);
    if (!obj) return;

    u32 r8 = lbl_80376554;
    u32* r7 = lbl_8027109C;
    u32 r6 = r7[0]; u32 r5 = r7[1]; u32 r0 = r7[2];

    float stk[3];
    stk[0] = *(float*)&r6;
    stk[1] = *(float*)&r5;
    stk[2] = *(float*)&r0;
    stk[0] = f29; stk[1] = f30; stk[2] = f31;

    u8 r4b = 0;
    if (!(r8 & ((1<<(31-13))|(1<<(31-14))))) {
        if (r8 & (1<<(31-13))) r4b = 1;
    } else {
        r4b = 1;
    }

    float f3b;
    if ((u8)r4b) f3b = lbl_80376FA0;
    else         f3b = lbl_80376FA4;

    u32 xored = r30 ^ 0x8000;
    u32 stk_hi = 0x43300000;
    u32 stk2[2]; stk2[0] = stk_hi; stk2[1] = xored;
    double bias = lbl_80376FA8;
    float f0 = (float)(*(double*)stk2 - bias);

    u8 idx = *(u8*)((u8*)obj + 0x44);
    u8* arr = (u8*)*(u32*)((u8*)obj + 0x40);
    u32 off = (u32)idx * 0x14;

    arr[off] = r31[0];

    u32 ival;
    { u32 s[2]; s[0]=stk_hi; s[1]=xored; float v=(float)(*(double*)s-bias); s32 iv=(s32)(v/f3b); ival=(u32)iv; }
    *(u32*)(arr + off + 4) = ival;

    *(float*)(arr + off + 8)   = stk[0];
    *(float*)(arr + off + 0xc) = stk[1];
    *(float*)(arr + off + 0x10) = stk[2];

    *(u8*)((u8*)obj + 0x44) = idx + 1;
}

void fn_80017AA0(void* r3) {
    u8* r31 = (u8*)r3;
    u32 cur = *(u32*)(r31 + 0x34);
    *(u32*)(r31 + 0x34) = cur + 1;

    u32 flags = lbl_803753B0;
    if (flags & 1) {
        u32 r0 = *(u32*)(r31 + 0x38);
        *(u32*)(r31 + 0x34) = r0;
    }

    u32 val = *(u32*)(r31 + 0x34);
    u32 max = *(u32*)(r31 + 0x38);
    if (val >= max) {
        *(u32*)(r31 + 0x34) = max;
        fn_8000C2B0(r31);
        *(u8*)(r31 + 0x3c) = 1;
    }

    u32 mode = *(u32*)(r31 + 0x30);
    float f1 = lbl_80376F98;

    if (mode == 0) {
        u32 r4 = *(u32*)(r31 + 0x38);
        u32 r0 = *(u32*)(r31 + 0x34);
        u32 s[2]; s[0]=0x43300000; s[1]=r4^0x8000;
        u32 s2[2]; s2[0]=0x43300000; s2[1]=r0^0x8000;
        double bias = lbl_80376FA8;
        float f2 = (float)(*(double*)s - bias);
        float f3 = (float)(*(double*)s2 - bias);
        float f4 = (float)(*(double*)s - bias);
        fn_8005A124(f2, f3, f4);
    } else if (mode == 1) {
        u32 r3b = *(u32*)(r31 + 0x38);
        u32 r0 = *(u32*)(r31 + 0x34);
        u32 s[2]; s[0]=0x43300000; s[1]=r3b^0x8000;
        u32 s2[2]; s2[0]=0x43300000; s2[1]=r3b^0x8000;
        u32 s3[2]; s3[0]=0x43300000; s3[1]=r0^0x8000;
        double bias = lbl_80376FA8;
        float f2 = (float)(*(double*)s - bias);
        float f3 = (float)(*(double*)s2 - bias);
        float f4 = (float)(*(double*)s3 - bias);
        fn_8005A138(2, f2, f3, f4);
    } else if (mode == 2) {
        u32 r3b = *(u32*)(r31 + 0x38);
        u32 r0 = *(u32*)(r31 + 0x34);
        u32 s[2]; s[0]=0x43300000; s[1]=r3b^0x8000;
        u32 s2[2]; s2[0]=0x43300000; s2[1]=r3b^0x8000;
        u32 s3[2]; s3[0]=0x43300000; s3[1]=r0^0x8000;
        double bias = lbl_80376FA8;
        float f2 = (float)(*(double*)s - bias);
        float f3 = (float)(*(double*)s2 - bias);
        float f4 = (float)(*(double*)s3 - bias);
        fn_8005A1E8(2, f2, f3, f4, f1);
    } else if (mode == 3) {
        u32 r4 = *(u32*)(r31 + 0x38);
        u32 r3b = *(u32*)(r31 + 0x34);
        u32 half = (u32)(((s32)r4 + (s32)((u32)r4 >> 31)) >> 1);
        if (r3b < half) {
            u32 s[2]; s[0]=0x43300000; s[1]=half^0x8000;
            u32 s2[2]; s2[0]=0x43300000; s2[1]=half^0x8000;
            u32 s3[2]; s3[0]=0x43300000; s3[1]=r3b^0x8000;
            double bias = lbl_80376FA8;
            float f2 = (float)(*(double*)s - bias);
            float f3 = (float)(*(double*)s2 - bias);
            float f4 = (float)(*(double*)s3 - bias);
            fn_8005A138(2, f2, f3, f4);
        } else {
            u32 diff = r3b - half;
            u32 s[2]; s[0]=0x43300000; s[1]=half^0x8000;
            u32 s2[2]; s2[0]=0x43300000; s2[1]=r4^0x8000;
            u32 s3[2]; s3[0]=0x43300000; s3[1]=diff^0x8000;
            double bias = lbl_80376FA8;
            float f1b = (float)(*(double*)s - bias);
            float f2 = (float)(*(double*)s2 - bias);
            float f3 = (float)(*(double*)s3 - bias);
            float f4 = (float)(*(double*)s - bias);
            fn_8005A1E8(2, f1b, f2, f3, f4);
        }
    }

    fn_80017D24(r31);
}

void fn_80017D04(void) {
    fn_80018514(0);
}

void fn_80017D24(void* r3) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)lbl_80375464;
    float f31 = lbl_80376F98;

    {
        u8 r6 = r30[0x45];
        u32 neg_or = (u32)(-((s32)r6) | r6);
        if (!(neg_or >> 31)) goto skip1;

        u32 d0 = ((u32*)lbl_80271090)[0];
        u32 d1 = ((u32*)lbl_80271090)[1];
        u32 d2 = ((u32*)lbl_80271090)[2];

        if (r6 == 0) {
            *(u32*)(r31 + 0x4c) = d0; *(float*)(r31+0x4c) = *(float*)&d0;
            *(u32*)(r31 + 0x50) = d1;
            *(u32*)(r31 + 0x54) = d2;
            *(float*)(r31 + 0x40) = *(float*)(r31 + 0x4c);
            *(float*)(r31 + 0x44) = *(float*)(r31 + 0x50);
            *(float*)(r31 + 0x48) = *(float*)(r31 + 0x54);
            goto skip1;
        }

        u8* r29 = (u8*)*(u32*)(r30 + 0x48);
        s32 r5 = 0;
        double bias = lbl_80376FA8;
        u32 hi = 0x43300000;
        s32 ctr = r6;
        float xyz[3] = { *(float*)&d0, *(float*)&d1, *(float*)&d2 };

        if (r6 <= 0) goto spline1_end;

        while (ctr > 0) {
            u32 r4 = *(u32*)(r29 + 4);
            u32 tmp[2]; tmp[0]=hi; tmp[1]=r4^0x8000;
            float f0 = (float)(*(double*)tmp - bias);
            if (f0 <= f31) {
                ctr--; r5++; r29+=0x14; continue;
            }
            if (r5 == 0) {
                xyz[0] = *(float*)(r29+8); xyz[1] = *(float*)(r29+0xc); xyz[2] = *(float*)(r29+0x10);
            } else {
                u32 r0 = *(u32*)(r29 - 0x10);
                u32 tmp2[2]; tmp2[0]=hi; tmp2[1]=r0^0x8000;
                float f2 = (float)(*(double*)tmp - bias);
                float f1b = (float)(*(double*)tmp2 - bias);
                float f_thresh = lbl_80376F98;
                float f0b = f31 - f1b;
                float f30;
                if (f_thresh == f2) f30 = lbl_80376F9C;
                else                f30 = (float)(f0b / f2);

                u8* r28 = (r5 >= 2) ? r29 - 0x28 : r29 - 0x14;
                u8* r27 = ((s32)r5 < (s32)r6-1) ? r29 + 0x14 : r29;

                float f5 = f30;
                xyz[0] = fn_800596D0(*(float*)(r28+8), *(float*)(r29-0xc), *(float*)(r29+8), *(float*)(r27+8), f5);
                xyz[1] = fn_800596D0(*(float*)(r28+0xc), *(float*)(r29-8), *(float*)(r29+0xc), *(float*)(r27+0xc), f5);
                xyz[2] = fn_800596D0(*(float*)(r28+0x10), *(float*)(r29-4), *(float*)(r29+0x10), *(float*)(r27+0x10), f5);
            }
            goto spline1_write;
        }
        spline1_end:
        {
            u32 off2 = (u32)(r6-1)*0x14 + 8;
            xyz[0] = *(float*)(r29 + off2 + 0);
            xyz[1] = *(float*)(r29 + off2 + 4);
            xyz[2] = *(float*)(r29 + off2 + 8);
        }
        spline1_write:
        *(float*)(r31 + 0x4c) = xyz[0];
        *(float*)(r31 + 0x50) = xyz[1];
        *(float*)(r31 + 0x54) = xyz[2];
        *(float*)(r31 + 0x40) = *(float*)(r31 + 0x4c);
        *(float*)(r31 + 0x44) = *(float*)(r31 + 0x50);
        *(float*)(r31 + 0x48) = *(float*)(r31 + 0x54);
    }
    skip1:;

    {
        u8 r6 = r30[0x46];
        u32 neg_or = (u32)(-((s32)r6) | r6);
        if (!(neg_or >> 31)) return;

        u32 d0 = ((u32*)lbl_80271090)[0];
        u32 d1 = ((u32*)lbl_80271090)[1];
        u32 d2 = ((u32*)lbl_80271090)[2];

        if (r6 == 0) {
            *(float*)(r31 + 4) = *(float*)&d0;
            *(float*)(r31 + 8) = *(float*)&d1;
            *(float*)(r31 + 0xc) = *(float*)&d2;
            return;
        }

        u8* r29 = (u8*)*(u32*)(r30 + 0x4c);
        s32 r5 = 0;
        double bias = lbl_80376FA8;
        u32 hi = 0x43300000;
        s32 ctr = r6;
        float xyz[3] = { *(float*)&d0, *(float*)&d1, *(float*)&d2 };

        if (r6 <= 0) goto spline2_end;

        while (ctr > 0) {
            u32 r4 = *(u32*)(r29 + 4);
            u32 tmp[2]; tmp[0]=hi; tmp[1]=r4^0x8000;
            float f0 = (float)(*(double*)tmp - bias);
            if (f0 <= f31) {
                ctr--; r5++; r29+=0x14; continue;
            }
            if (r5 == 0) {
                xyz[0] = *(float*)(r29+8); xyz[1] = *(float*)(r29+0xc); xyz[2] = *(float*)(r29+0x10);
            } else {
                u32 r0 = *(u32*)(r29 - 0x10);
                u32 tmp2[2]; tmp2[0]=hi; tmp2[1]=r0^0x8000;
                float f2 = (float)(*(double*)tmp - bias);
                float f1b = (float)(*(double*)tmp2 - bias);
                float f_thresh = lbl_80376F98;
                float f0b = f31 - f1b;
                float f30;
                if (f_thresh == f2) f30 = lbl_80376F9C;
                else                f30 = (float)(f0b / f2);

                u8* r27 = (r5 >= 2) ? r29 - 0x28 : r29 - 0x14;
                u8* r28 = ((s32)r5 < (s32)r6-1) ? r29 + 0x14 : r29;

                float f5 = f30;
                xyz[0] = fn_800596D0(*(float*)(r27+8), *(float*)(r29-0xc), *(float*)(r29+8), *(float*)(r28+8), f5);
                xyz[1] = fn_800596D0(*(float*)(r27+0xc), *(float*)(r29-8), *(float*)(r29+0xc), *(float*)(r28+0xc), f5);
                xyz[2] = fn_800596D0(*(float*)(r27+0x10), *(float*)(r29-4), *(float*)(r29+0x10), *(float*)(r28+0x10), f5);
            }
            goto spline2_write;
        }
        spline2_end:
        {
            u32 off2 = (u32)(r6-1)*0x14 + 8;
            xyz[0] = *(float*)(r29 + off2 + 0);
            xyz[1] = *(float*)(r29 + off2 + 4);
            xyz[2] = *(float*)(r29 + off2 + 8);
        }
        spline2_write:
        *(float*)(r31 + 4)   = xyz[0];
        *(float*)(r31 + 8)   = xyz[1];
        *(float*)(r31 + 0xc) = xyz[2];
    }
}

void fn_800181FC(void* r3, u8 r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)lbl_80375464;
    *(u32*)(r30 + 0x30) = (u32)(r4 & 0xFF);

    fn_8001869C(r30);

    u8* r5 = (u8*)lbl_802D4914;
    *(float*)(r5 + 0x28) = lbl_80376FB0;
    *(float*)(r5 + 0x34) = lbl_80376FB0;
    *(float*)(r5 + 0x58) = lbl_80376F98;
    *(float*)(r5 + 0x5c) = lbl_80376F98;
    *(float*)(r5 + 0x60) = lbl_80376F98;
    *(float*)(r5 + 0x64) = lbl_80376F98;
    *(float*)(r5 + 0x68) = lbl_80376F98;
    *(float*)(r5 + 0x6c) = lbl_80376F98;
    *(u32*) (r5 + 0x1c) = 0;
    *(float*)(r5 + 0x70) = lbl_80376F9C;

    {
        u8 r6 = r30[0x45];
        u32 neg_or = (u32)(-((s32)r6) | r6);
        if (!(neg_or >> 31)) {
            *(float*)(r5 + 0x4c) = *(float*)(r31 + 0x40);
            *(float*)(r5 + 0x50) = *(float*)(r31 + 0x44);
            *(float*)(r5 + 0x54) = *(float*)(r31 + 0x48);
            *(float*)(r5 + 0x40) = *(float*)(r31 + 0x40);
            *(float*)(r5 + 0x44) = *(float*)(r31 + 0x44);
            *(float*)(r5 + 0x48) = *(float*)(r31 + 0x48);
            goto check46;
        }

        if (r6 == 0) goto check46;

        u8* r4p = (u8*)*(u32*)(r30 + 0x48);
        u32 hi = 0x43300000;
        double bias = lbl_80376FA8;
        float f2 = lbl_80376F98;
        s32 ctr = r6;
        s32 found = 0;
        while (ctr > 0) {
            u32 r3b = *(u32*)(r4p + 4);
            u32 tmp[2]; tmp[0]=hi; tmp[1]=r3b^0x8000;
            float f0 = (float)(*(double*)tmp - bias);
            if (f0 == f2) { found = 1; break; }
            r4p += 0x14; ctr--;
        }

        if (found) {
            u8 idx = r30[0x44];
            u32 off = (u32)idx * 0x14;
            u8* arr = (u8*)*(u32*)(r30 + 0x40);
            arr[off] = 0;
            *(u32*)(arr + off + 4) = 0;
            float fx = *(float*)(r31 + 0x40);
            float fy = *(float*)(r31 + 0x44);
            float fz = *(float*)(r31 + 0x48);
            *(float*)(arr + off + 8)   = fx;
            *(float*)(arr + off + 0xc) = fy;
            *(float*)(arr + off + 0x10) = fz;
            r30[0x44] = idx + 1;
        }
    }

check46:
    {
        u8 r3b = r30[0x46];
        u32 neg_or = (u32)(-((s32)r3b) | r3b);
        if (!(neg_or >> 31)) {
            *(float*)(r5 + 0x4)  = *(float*)(r31 + 0x4);
            *(float*)(r5 + 0x10) = *(float*)(r31 + 0x4);
            *(float*)(r5 + 0x8)  = *(float*)(r31 + 0x8);
            *(float*)(r5 + 0x14) = *(float*)(r31 + 0x8);
            *(float*)(r5 + 0xc)  = *(float*)(r31 + 0xc);
            *(float*)(r5 + 0x18) = *(float*)(r31 + 0xc);
            goto finalize;
        }

        if (r3b == 0) goto finalize;

        u8* r4p = (u8*)*(u32*)(r30 + 0x4c);
        u32 hi = 0x43300000;
        double bias = lbl_80376FA8;
        float f0cmp = lbl_80376F98;
        s32 ctr = r3b;
        s32 found = 0;
        while (ctr > 0) {
            u32 r3c = *(u32*)(r4p + 4);
            u32 tmp[2]; tmp[0]=hi; tmp[1]=r3c^0x8000;
            float f1b = (float)(*(double*)tmp - bias);
            if (f1b == f0cmp) { found = 1; break; }
            r4p += 0x14; ctr--;
        }

        if (found) {
            u8 idx = r30[0x44];
            u32 off = (u32)idx * 0x14;
            u8* arr = (u8*)*(u32*)(r30 + 0x40);
            arr[off] = 1;
            *(u32*)(arr + off + 4) = 0;
            float fx = *(float*)(r31 + 0x4);
            float fy = *(float*)(r31 + 0x8);
            float fz = *(float*)(r31 + 0xc);
            *(float*)(arr + off + 8)   = fx;
            *(float*)(arr + off + 0xc) = fy;
            *(float*)(arr + off + 0x10) = fz;
            r30[0x44] = idx + 1;
        }
    }

finalize:
    fn_8001869C(r30);
    lbl_80375468 = 3;
    lbl_80375464 = (u32)lbl_802D4914;
    fn_80017D24(r30);
    fn_8000C198(r30, 0);
}

void fn_80018514(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r30 = (u8*)lbl_80375464;

    {
        float f1 = *(float*)(r30 + 0x40) - lbl_80376FB4;
        float f2 = *(float*)(r30 + 0x44) - lbl_80376FB4;
        fn_8014DF60((void*)lbl_8033A708);
    }

    u8* r5 = (u8*)lbl_802D47A8;
    *(float*)(r5 + 0x28) = lbl_80376FB0;
    *(float*)(r5 + 0x34) = lbl_80376FB0;
    *(float*)(r5 + 0x58) = lbl_80376F98;
    *(float*)(r5 + 0x5c) = lbl_80376F98;
    *(float*)(r5 + 0x60) = lbl_80376F98;
    *(float*)(r5 + 0x64) = lbl_80376F98;
    *(float*)(r5 + 0x68) = lbl_80376F98;
    *(float*)(r5 + 0x6c) = lbl_80376F98;
    *(u32*) (r5 + 0x1c) = 0;
    *(float*)(r5 + 0x70) = lbl_80376F9C;

    *(float*)(r5 + 0x4c) = *(float*)(r30 + 0x40);
    *(float*)(r5 + 0x50) = *(float*)(r30 + 0x44);
    *(float*)(r5 + 0x54) = *(float*)(r30 + 0x48);
    *(float*)(r5 + 0x40) = *(float*)(r30 + 0x40);
    *(float*)(r5 + 0x44) = *(float*)(r30 + 0x44);
    *(float*)(r5 + 0x48) = *(float*)(r30 + 0x48);
    *(float*)(r5 + 0xc)  = *(float*)(r30 + 0x18);
    *(float*)(r5 + 0x18) = *(float*)(r30 + 0x18);
    *(float*)(r5 + 0x4)  = *(float*)(r30 + 0x10);
    *(float*)(r5 + 0x10) = *(float*)(r30 + 0x10);
    *(float*)(r5 + 0x8)  = *(float*)(r30 + 0x14);
    *(float*)(r5 + 0x14) = *(float*)(r30 + 0x14);
    *(float*)(r5 + 0x70) = lbl_80376FB8;

    u32 flags = lbl_803753B0;
    if (flags & 1) {
        *(float*)(r5 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
        *(float*)(r5 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
        *(float*)(r5 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);
        *(float*)(r5 + 0x40) = *(float*)((u8*)lbl_8033A708 + 0x52c);
        *(float*)(r5 + 0x44) = *(float*)((u8*)lbl_8033A708 + 0x530);
        *(float*)(r5 + 0x48) = *(float*)((u8*)lbl_8033A708 + 0x53c);
        *(float*)(r5 + 0x14) = *(float*)(r30 + 0x14);
        *(float*)(r5 + 0x18) = *(float*)(r30 + 0x18);
    }

    lbl_80375468 = 0;
    lbl_80375464 = (u32)lbl_802D47A8;
    *(u8*)(r31 + 0x3c) = 1;
    fn_800C4B84((void*)*(u32*)(r31 + 0x40));
    *(u32*)(r31 + 0x40) = 0;
}

void fn_8001869C(void* r3) {
    u8* p = (u8*)r3;

    p[0x45] = 0; *(u32*)(p+0x48) = 0;
    p[0x46] = 0; *(u32*)(p+0x4c) = 0;
    p[0x47] = 0; *(u32*)(p+0x50) = 0;
    *(u32*)(p+0x34) = 0; *(u32*)(p+0x38) = 0;

    s32 r29 = 0;
    u8 cnt = p[0x44];
    while (r29 < (s32)cnt) {
        s32 r30 = 0;
        s32 r11 = 0;
        u8* arr = (u8*)*(u32*)(p+0x40);
        while (r30 < (s32)cnt - 1 - r29) {
            u8* r12 = arr + r11;
            u32 r9 = *(u32*)(r12 + 4);
            u32 r0b = *(u32*)(r12 + 0x18);
            if (r9 > r0b) {
                u8  s0 = r12[0];
                u32 s4 = *(u32*)(r12+4);
                u32 s8 = *(u32*)(r12+8);
                u32 sc = *(u32*)(r12+0xc);
                u32 s10 = *(u32*)(r12+0x10);
                u8* r10 = arr + (u32)(r30+1)*0x14;
                u8  n0 = r10[0];
                r12[0] = n0;
                *(u32*)(r12+4)   = r9;
                *(u32*)(r12+8)   = *(u32*)(r10+8);
                *(u32*)(r12+0xc) = *(u32*)(r10+0xc);
                *(u32*)(r12+0x10) = *(u32*)(r10+0x10);
                r10[0] = s0;
                *(u32*)(r10+4)   = s4;
                *(u32*)(r10+8)   = s8;
                *(u32*)(r10+0xc) = sc;
                *(u32*)(r10+0x10) = s10;
            }
            r11 += 0x14; r30++;
        }
        r29++;
    }

    s32 r30b = 0;
    while (r30b < (s32)cnt) {
        s32 r29b = 0;
        s32 r11b = 0;
        u8* arr = (u8*)*(u32*)(p+0x40);
        while (r29b < (s32)cnt - 1 - r30b) {
            u8* r12 = arr + r11b;
            u8 r4b = r12[0];
            u8 r0b2 = r12[0x14];
            if ((u32)r4b > (u32)r0b2) {
                u8 s0 = r12[0];
                u32 s4 = *(u32*)(r12+4);
                u32 s8 = *(u32*)(r12+8);
                u32 sc = *(u32*)(r12+0xc);
                u32 s10 = *(u32*)(r12+0x10);
                u8* r10 = arr + (u32)(r29b+1)*0x14;
                u8 n0 = r10[0];
                r12[0] = n0;
                *(u32*)(r12+4)   = *(u32*)(r10+4);
                *(u32*)(r12+8)   = *(u32*)(r10+8);
                *(u32*)(r12+0xc) = *(u32*)(r10+0xc);
                *(u32*)(r12+0x10) = *(u32*)(r10+0x10);
                r10[0] = s0;
                *(u32*)(r10+4)   = s4;
                *(u32*)(r10+8)   = s8;
                *(u32*)(r10+0xc) = sc;
                *(u32*)(r10+0x10) = s10;
            }
            r11b += 0x14; r29b++;
        }
        r30b++;
    }

    s32 r8 = 0;
    while (r8 < (s32)cnt) {
        u8* arr = (u8*)*(u32*)(p+0x40);
        u8* r5 = arr + (u32)r8 * 0x14;
        u8 r6 = r5[0];
        u32 r4b = (u32)r6 * 4 + 0x48;
        u32 slot = *(u32*)((u8*)p + r4b);
        if (!slot) *(u32*)((u8*)p + r4b) = (u32)r5;

        u32 cnt_off = (u32)r6 + 0x45;
        u8 old_cnt = *(u8*)((u8*)p + cnt_off);
        *(u8*)((u8*)p + cnt_off) = old_cnt + 1;

        u32 r4c = (u32)r8 * 0x14 + 4;
        u32 key = *(u32*)(arr + r4c);
        u32 cur_max = *(u32*)(p + 0x38);
        if (key > cur_max) *(u32*)(p + 0x38) = key;

        r8++;
    }
}

void fn_800188F8(void) {
    u8* r4 = (u8*)lbl_80375464;
    if (r4) {
        *(float*)(r4 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
        *(float*)(r4 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
        *(float*)(r4 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);
        *(float*)(r4 + 0x40) = *(float*)(r4 + 0x4c);
        *(float*)(r4 + 0x44) = *(float*)(r4 + 0x50);
        *(float*)(r4 + 0x48) = *(float*)(r4 + 0x54);
    }
    u8* r3 = (u8*)lbl_80375464;
    if (!r3) return;
    *(float*)(r3 + 0x10) = *(float*)(r3 + 0x4);
    *(float*)(r3 + 0x14) = *(float*)(r3 + 0x8);
    *(float*)(r3 + 0x18) = *(float*)(r3 + 0xc);
}

void fn_80018964(void) {
    u8* r4 = (u8*)lbl_80375464;
    if (!r4) return;
    *(float*)(r4 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
    *(float*)(r4 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
    *(float*)(r4 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);
    *(float*)(r4 + 0x40) = *(float*)(r4 + 0x4c);
    *(float*)(r4 + 0x44) = *(float*)(r4 + 0x50);
    *(float*)(r4 + 0x48) = *(float*)(r4 + 0x54);
}

s32 fn_800189AC(u8 r3) {
    u8* r5 = (u8*)lbl_80375464;
    if (!r5) { goto check_result; }
    if (!lbl_80375468) {
        *(float*)(r5 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
        *(float*)(r5 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
        *(float*)(r5 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);
    }
    {
        u8* r4 = (u8*)lbl_80375464;
        float f2 = (u8)(r3 & 0xFF) ? lbl_80376FBC : lbl_80376F9C;
        float d1 = *(float*)(r4+0x4c) - *(float*)(r4+0x40);
        if (d1 < 0.0f) d1 = -d1;
        if (d1 > f2) { return 1; }
        float d2 = *(float*)(r4+0x50) - *(float*)(r4+0x44);
        if (d2 < 0.0f) d2 = -d2;
        if (d2 > f2) { return 1; }
    }
check_result:;
    {
        u8* r4b = (u8*)lbl_80375464;
        if (!r4b) { goto final; }
        float f2b = (u8)(r3 & 0xFF) ? lbl_80376F9C : lbl_80376FC0;
        float d1 = *(float*)(r4b+0x4) - *(float*)(r4b+0x10);
        if (d1 < 0.0f) d1 = -d1;
        if (d1 > f2b) { return 1; }
        float d2 = *(float*)(r4b+0x8) - *(float*)(r4b+0x14);
        if (d2 < 0.0f) d2 = -d2;
        if (d2 > f2b) { return 1; }
        float d3 = *(float*)(r4b+0xc) - *(float*)(r4b+0x18);
        if (d3 < 0.0f) d3 = -d3;
        if (d3 > f2b) { return 1; }
    }
final:
    return 0;
}

s32 fn_80018B10(u8 r3) {
    u8* r5 = (u8*)lbl_80375464;
    if (!r5) return 0;
    if (!lbl_80375468) {
        *(float*)(r5 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
        *(float*)(r5 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
        *(float*)(r5 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);
    }
    u8* r3b = (u8*)lbl_80375464;
    float f2 = (u8)(r3 & 0xFF) ? lbl_80376FBC : lbl_80376F9C;
    float d1 = *(float*)(r3b+0x4c) - *(float*)(r3b+0x40);
    if (d1 < 0.0f) d1 = -d1;
    if (d1 > f2) return 1;
    float d2 = *(float*)(r3b+0x50) - *(float*)(r3b+0x44);
    if (d2 < 0.0f) d2 = -d2;
    if (d2 > f2) return 1;
    return 0;
}

void fn_80018BB4(void) {
    u8* r3 = (u8*)lbl_80375464;
    void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)(r3+0x74)+8);
    fp(r3);
}

void* fn_80018BE4(void) {
    return (void*)lbl_80375464;
}

void fn_80018BEC(void) {
    lbl_80375460 = lbl_80375460 - 1;
}

void fn_80018BFC(void) {
    lbl_80375460 = lbl_80375460 + 1;
}

void fn_80018C0C(void) {
    lbl_80375460 = lbl_80375050;
    lbl_80375050 = 0xFF;
}

void fn_80018C20(void) {
    lbl_80375050 = lbl_80375460;
}

void fn_80018C2C(void) {
    u8* r31 = (u8*)lbl_80375464;
    void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)(r31+0x74)+0x14);
    fp(r31);

    u8 flag = lbl_8037552B & 1;
    if (flag) {
        *(float*)(r31 + 0x64) = lbl_80376F98;
        *(float*)(r31 + 0x68) = lbl_80376F98;
    } else {
        u32 hi = 0x43300000;
        u32 v1 = ((u32*)lbl_802D49F8)[1];
        u32 v0 = ((u32*)lbl_802D49F8)[0];
        u32 s1[2]; s1[0]=hi; s1[1]=v1^0x8000;
        u32 s0[2]; s0[0]=hi; s0[1]=v0^0x8000;
        double bias = lbl_80376FA8;
        float f4 = (float)(*(double*)s1 - bias);
        float f2 = (float)(*(double*)s0 - bias);
        float f5 = lbl_80376FB4;
        float f29 = (float)(f5 * f4);
        float f30 = (float)(f5 * f2);
        float f3 = *(float*)(r31 + 0x18);
        float f0 = lbl_80376FCC;
        float f2b = lbl_80376FC4;
        float f4b = (float)(f3 - f0);
        float f31b = fn_8005A124(f4b, lbl_80376F98, f2b);
        if (f31b < lbl_80376F98) f31b = lbl_80376F98;
        if (f31b > lbl_80376FC4) f31b = lbl_80376FC4;

        float f0b = *(float*)(r31 + 0x40);
        *(float*)(r31 + 0x64) = -(fn_8005A124(f0b - f30, lbl_80376F98, f2b));

        float f0c = *(float*)(r31 + 0x44);
        *(float*)(r31 + 0x68) = -(fn_8005A124(f0c - f29, lbl_80376F98, f2b));
    }

    {
        u8* r3 = (u8*)*(u32*)r31;
        *(float*)(r3 + 0xf8)  = *(float*)(r31 + 0x18);
        *(float*)(r3 + 0xfc)  = *(float*)(r31 + 0x10);
        *(float*)(r3 + 0x100) = *(float*)(r31 + 0x14);
        *(float*)(r3 + 0xe0)  = *(float*)(r31+0x40) + *(float*)(r31+0x58) + *(float*)(r31+0x64);
        *(float*)(r3 + 0xe4)  = *(float*)(r31+0x44) + *(float*)(r31+0x5c) + *(float*)(r31+0x68);
    }
    fn_80040A0C();
    {
        u8* r3 = (u8*)*(u32*)r31;
        float f2 = *(float*)(r31 + 0x48);
        float f0 = *(float*)(r31 + 0x60);
        float f1 = *(float*)((u8*)*(u32*)((u8*)*(u32*)r31 + 0x30) + 0x48);
        *(float*)(r3 + 0xe8) = (float)(f2 + f0 - f1);
        *(float*)(r3 + 0xec) = lbl_80376F98;
        *(float*)(r3 + 0xf0) = lbl_80376FD0;
        *(float*)(r3 + 0xf4) = lbl_80376F98;
        *(float*)(r3 + 0xd4) = lbl_80376F98;
        *(float*)(r3 + 0xd8) = lbl_80376F98;
        *(float*)(r3 + 0xdc) = -(*(float*)(r3 + 0xf8));
    }
    {
        u8* r5 = (u8*)*(u32*)r31;
        u8 stk1[0x30]; u8 stk2[0x30];
        fn_8020AE58((void*)stk2, 0x58, lbl_80376FD4 * *(float*)(r5+0x100));
        fn_8020AE58((void*)stk2, 0x5a, lbl_80376FD4 * *(float*)(r5+0xfc));
        fn_8020AB7C((void*)stk2, (void*)stk2, (void*)stk2);
        fn_8020B51C((void*)stk2, (void*)(r5+0xd4), (void*)(r5+0xd4));
        fn_8020B51C((void*)stk2, (void*)(r5+0xec), (void*)(r5+0xec));
        *(float*)(r5+0xd4) += *(float*)(r5+0xe0);
        *(float*)(r5+0xd8) += *(float*)(r5+0xe4);
        *(float*)(r5+0xdc) += *(float*)(r5+0xe8);
        fn_80067F18((void*)(r5+0xd4), (void*)(r5+0xec), (void*)(r5+0xe0));
        fn_8006778C(0, (void*)fn_800194E0, r31);
    }
}

void fn_80018F14(void) {
    u8* r4 = (u8*)lbl_802D47A8;
    if (lbl_80375460) goto epilog;
    {
        u8 val = lbl_80375468 + 1;
        s32 sval = (s32)(u32)val;
        u32 low = (u32)(sval & 1);
        u32 hi2 = (u32)(sval >> 31);
        s32 mod = (s32)((low ^ hi2) - hi2);
        if (mod < 0 || mod > 3) mod = ((mod % 4) + 4) % 4;
        lbl_80375468 = (u8)mod;
        switch (mod) {
        case 0: lbl_80375464 = (u32)(r4 + 0x000); break;
        case 1: lbl_80375464 = (u32)(r4 + 0x078); break;
        case 2: lbl_80375464 = (u32)(r4 + 0x0f0); break;
        case 3: lbl_80375464 = (u32)(r4 + 0x16c); break;
        }
    }
    fn_80148640((void*)(lbl_802710A8 + 0x18c), 0x64);
epilog:;
}

void fn_80018FC8(void) {
    u8* r3 = (u8*)lbl_80375464;
    if (!r3) return;
    *(float*)(r3 + 0x28) = lbl_80376FB0;
    *(float*)(r3 + 0x34) = lbl_80376FB0;
    *(float*)(r3 + 0x58) = lbl_80376F98;
    *(float*)(r3 + 0x5c) = lbl_80376F98;
    *(float*)(r3 + 0x60) = lbl_80376F98;
    *(float*)(r3 + 0x64) = lbl_80376F98;
    *(float*)(r3 + 0x68) = lbl_80376F98;
    *(float*)(r3 + 0x6c) = lbl_80376F98;
    *(u32*)(r3 + 0x1c) = 0;
    *(float*)(r3 + 0x70) = lbl_80376F9C;
}

void fn_80019010(void) {
    u8* r31 = (u8*)lbl_802D47A8;
    u8* r30 = r31;

    *(u32*)(r30 + 0x20) = 0;
    *(u32*)r31 = (u32)fn_80068478(0);
    *(float*)(r30 + 0x10) = lbl_80376F98;
    *(float*)(r30 + 0x4)  = lbl_80376F98;
    *(float*)(r30 + 0x14) = lbl_80376FD8;
    *(float*)(r30 + 0x8)  = lbl_80376FD8;
    { u32 r4 = *(u32*)(r30+0x20); void (*fp)(void*,u32)=(void(*)(void*,u32))*(u32*)((u8*)*(u32*)(r30+0x74)+0x10); fp(r30,r4); }
    *(float*)(r30 + 0x18) = lbl_80376F98; *(float*)(r30 + 0xc) = lbl_80376F98;
    *(u8*)(r30+0x24)=1; lbl_80375460=0; lbl_80375461=0;
    *(float*)(r30+0x40)=lbl_80376F98; *(float*)(r30+0x4c)=lbl_80376F98;
    *(float*)(r30+0x44)=lbl_80376F98; *(float*)(r30+0x50)=lbl_80376F98;
    *(float*)(r30+0x48)=lbl_80376F98; *(float*)(r30+0x54)=lbl_80376F98;
    *(float*)(r30+0x28)=lbl_80376FB0; *(float*)(r30+0x34)=lbl_80376FB0;
    *(float*)(r30+0x58)=lbl_80376F98; *(float*)(r30+0x5c)=lbl_80376F98;
    *(float*)(r30+0x60)=lbl_80376F98; *(float*)(r30+0x64)=lbl_80376F98;
    *(float*)(r30+0x68)=lbl_80376F98; *(float*)(r30+0x6c)=lbl_80376F98;
    *(u32*)(r30+0x1c)=0; *(float*)(r30+0x70)=lbl_80376F9C;

    r30 = r31 + 0x78;
    *(u32*)(r30+0x20)=0; *(u32*)(r31+0x78)=(u32)fn_80068478(0);
    *(float*)(r30+0x10)=lbl_80376F98; *(float*)(r30+0x4)=lbl_80376F98;
    *(float*)(r30+0x14)=lbl_80376FD8; *(float*)(r30+0x8)=lbl_80376FD8;
    { u32 r4=*(u32*)(r30+0x20); void (*fp)(void*,u32)=(void(*)(void*,u32))*(u32*)((u8*)*(u32*)(r30+0x74)+0x10); fp(r30,r4); }
    *(float*)(r30+0x18)=lbl_80376F98; *(float*)(r30+0xc)=lbl_80376F98;
    *(u8*)(r30+0x24)=1; lbl_80375460=0; lbl_80375461=0;
    *(float*)(r30+0x40)=lbl_80376F98; *(float*)(r30+0x4c)=lbl_80376F98;
    *(float*)(r30+0x44)=lbl_80376F98; *(float*)(r30+0x50)=lbl_80376F98;
    *(float*)(r30+0x48)=lbl_80376F98; *(float*)(r30+0x54)=lbl_80376F98;
    *(float*)(r30+0x28)=lbl_80376FB0; *(float*)(r30+0x34)=lbl_80376FB0;
    *(float*)(r30+0x58)=lbl_80376F98; *(float*)(r30+0x5c)=lbl_80376F98;
    *(float*)(r30+0x60)=lbl_80376F98; *(float*)(r30+0x64)=lbl_80376F98;
    *(float*)(r30+0x68)=lbl_80376F98; *(float*)(r30+0x6c)=lbl_80376F98;
    *(u32*)(r30+0x1c)=0; *(float*)(r30+0x70)=lbl_80376F9C;

    r30 = r31 + 0xf0;
    *(u32*)(r30+0x20)=0; *(u32*)(r31+0xf0)=(u32)fn_80068478(0);
    *(float*)(r30+0x10)=lbl_80376F98; *(float*)(r30+0x4)=lbl_80376F98;
    *(float*)(r30+0x14)=lbl_80376FD8; *(float*)(r30+0x8)=lbl_80376FD8;
    { u32 r4=*(u32*)(r30+0x20); void (*fp)(void*,u32)=(void(*)(void*,u32))*(u32*)((u8*)*(u32*)(r30+0x74)+0x10); fp(r30,r4); }
    *(float*)(r30+0x18)=lbl_80376F98; *(float*)(r30+0xc)=lbl_80376F98;
    *(u8*)(r30+0x24)=1; lbl_80375460=0; lbl_80375461=0;
    *(float*)(r30+0x40)=lbl_80376F98; *(float*)(r30+0x4c)=lbl_80376F98;
    *(float*)(r30+0x44)=lbl_80376F98; *(float*)(r30+0x50)=lbl_80376F98;
    *(float*)(r30+0x48)=lbl_80376F98; *(float*)(r30+0x54)=lbl_80376F98;
    *(float*)(r30+0x28)=lbl_80376FB0; *(float*)(r30+0x34)=lbl_80376FB0;
    *(float*)(r30+0x58)=lbl_80376F98; *(float*)(r30+0x5c)=lbl_80376F98;
    *(float*)(r30+0x60)=lbl_80376F98; *(float*)(r30+0x64)=lbl_80376F98;
    *(float*)(r30+0x68)=lbl_80376F98; *(float*)(r30+0x6c)=lbl_80376F98;
    *(u32*)(r30+0x1c)=0; *(float*)(r30+0x70)=lbl_80376F9C;

    r30 = r31 + 0x16c;
    *(u32*)(r30+0x20)=0; *(u32*)(r31+0x16c)=(u32)fn_80068478(0);
    *(float*)(r30+0x10)=lbl_80376F98; *(float*)(r30+0x4)=lbl_80376F98;
    *(float*)(r30+0x14)=lbl_80376FD8; *(float*)(r30+0x8)=lbl_80376FD8;
    { u32 r4=*(u32*)(r30+0x20); void (*fp)(void*,u32)=(void(*)(void*,u32))*(u32*)((u8*)*(u32*)(r30+0x74)+0x10); fp(r30,r4); }
    *(float*)(r30+0x18)=lbl_80376F98; *(float*)(r30+0xc)=lbl_80376F98;
    *(u8*)(r30+0x24)=1; lbl_80375460=0; lbl_80375461=0;
    *(float*)(r30+0x40)=lbl_80376F98; *(float*)(r30+0x4c)=lbl_80376F98;
    *(float*)(r30+0x44)=lbl_80376F98; *(float*)(r30+0x50)=lbl_80376F98;
    *(float*)(r30+0x48)=lbl_80376F98; *(float*)(r30+0x54)=lbl_80376F98;
    *(float*)(r30+0x28)=lbl_80376FB0; *(float*)(r30+0x34)=lbl_80376FB0;
    *(float*)(r30+0x58)=lbl_80376F98; *(float*)(r30+0x5c)=lbl_80376F98;
    *(float*)(r30+0x60)=lbl_80376F98; *(float*)(r30+0x64)=lbl_80376F98;
    *(float*)(r30+0x68)=lbl_80376F98; *(float*)(r30+0x6c)=lbl_80376F98;
    *(u32*)(r30+0x1c)=0; *(float*)(r30+0x70)=lbl_80376F9C;

    lbl_80375468 = 0;
    lbl_80375464 = (u32)r31;
}

void fn_80019310(void* r3) {
    u8* r31 = (u8*)r3;
    if (!lbl_80375460) {
        u32 flags = lbl_8037552B;
        if (!(flags & (1<<(31-29)))) {
            void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32*)((u8*)r3+0x74)+0xc);
            fp(r3);
        }
    }

    float f5 = lbl_80376FDC;
    float f4 = lbl_80376F9C;
    float f2b = lbl_80376FE0;
    float f1b = lbl_80376FE4;
    float f0b = lbl_80376FE8;
    float f0 = *(float*)(r31 + 0x70);
    float f3 = (float)(f5 * f0 + f4);
    float f2c = (float)(f3 * f2b);
    *(float*)(r31 + 0x70) = f2c;
    float f2d = *(float*)(r31 + 0x70);
    float f5b = (float)(f5 * f2d);
    float f3b = *(float*)(r31 + 0x18);
    float f2e = *(float*)(r31 + 0xc);
    *(float*)(r31 + 0x18) = (float)((f3b * f5b + f2e) / (f4 + f5b));
    float f3c = *(float*)(r31 + 0x10);
    float f2g = *(float*)(r31 + 0x4);
    *(float*)(r31 + 0x10) = (float)((f3c * f5b + f2g) / (f4 + f5b));
    float f3d = *(float*)(r31 + 0x14);
    float f2h = *(float*)(r31 + 0x8);
    *(float*)(r31 + 0x14) = (float)((f3d * f5b + f2h) / (f4 + f5b));

    *(float*)(r31 + 0x4c) = *(float*)((u8*)lbl_8033A708 + 0x52c);
    *(float*)(r31 + 0x50) = *(float*)((u8*)lbl_8033A708 + 0x530);
    *(float*)(r31 + 0x54) = *(float*)((u8*)lbl_8033A708 + 0x53c);

    float f2i = *(float*)(r31 + 0x70);
    float f6 = (float)(f1b * f2i);
    float f7 = (float)(f0b * f2i);

    u8 flag = lbl_80375461;
    u32 stk[6];
    stk[0]=*(u32*)(r31+0x4c); stk[1]=*(u32*)(r31+0x50); stk[2]=*(u32*)(r31+0x54);
    stk[3]=*(u32*)(r31+0x40); stk[4]=*(u32*)(r31+0x44); stk[5]=*(u32*)(r31+0x48);

    if (flag) {
        f6 = (float)(lbl_80376FEC * f2i);
        f7 = (float)(lbl_80376FF0 * f2i);
    }

    float f0c = lbl_80376F9C;
    float f5c = f0c + f6;
    float f0d = f0c + f7;
    *(float*)(r31+0x40) = (float)(*(float*)&stk[0] * f6 + *(float*)&stk[3]) / f5c;
    *(float*)(r31+0x44) = (float)(*(float*)&stk[1] * f6 + *(float*)&stk[4]) / f5c;
    *(float*)(r31+0x48) = (float)(*(float*)&stk[2] * f7 + *(float*)&stk[5]) / f0d;
}

void fn_8001948C(void* r3, s32 r4) {
    u8* r31 = (u8*)r3;
    *(u32*)(r31 + 0x20) = (u32)(r4 & 3);
    u32 r4b = *(u32*)(r31 + 0x20);
    float (*fp)(void*, u32) = (float(*)(void*, u32))*(u32*)((u8*)*(u32*)(r31+0x74)+0x10);
    float f1 = fp(r31, r4b);
    *(float*)(r31 + 0xc) = f1;
}

void fn_800194D4(void* r3, float f1) {
    *(float*)((u8*)r3 + 0xc)  = f1;
    *(float*)((u8*)r3 + 0x18) = f1;
}

void fn_800194E0(void* r3) {
    u8* r31 = (u8*)r3;
    float f1 = lbl_80376FF4;
    float f0 = lbl_80376FB0;
    u8* r28 = (u8*)r31 + 0x44;
    s32 r27 = 0;

    float min_x = f1, min_y = f1;
    float max_x = f0, max_y = f0;

    while (r27 < 4) {
        float out[2];
        fn_8005A2A0(0, r28, (void*)out);
        if (min_x > out[0]) min_x = out[0];
        if (min_y > out[1]) min_y = out[1];
        if (max_x < out[0]) max_x = out[0];
        if (max_y < out[1]) max_y = out[1];
        r27++;
        r28 += 0xc;
    }

    *(float*)(r31 + 0x28) = min_x;
    *(float*)(r31 + 0x2c) = min_y;
    *(float*)(r31 + 0x30) = 0.0f;
    *(float*)(r31 + 0x34) = max_x;
    *(float*)(r31 + 0x38) = max_y;
    *(float*)(r31 + 0x3c) = 0.0f;
}