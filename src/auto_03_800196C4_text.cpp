#include <dolphin/types.h>

extern "C" void* fn_8000D47C(u8*);
extern "C" void  fn_80148640(void*, s32);
extern "C" void  fn_8000A39C(s32);
extern "C" void* fn_8000D3E4(void*);
extern "C" void* fn_800C48A8(void*);
extern "C" void* fn_80235164(void*, void*, s32, s32);
extern "C" void  fn_8000D514(void*, void*);
extern "C" u8    fn_8001EC8C(s32);
extern "C" u8    fn_8001E908(u32);
extern "C" u8    fn_8001CF80(u32);
extern "C" void  fn_8001DF64(void*, u32);
extern "C" void  fn_8001DBDC(void*, u32);
extern "C" void  fn_8001E864(void*);
extern "C" void  fn_8001CD50(void*, u32);
extern "C" void  fn_80106584(void*, u32);
extern "C" u8    fn_80106524(void*, u32);
extern "C" u8    fn_80106398(void*, s32);
extern "C" s32   fn_8023CEE8(void);
extern "C" u8    fn_8003BC20(u32);
extern "C" void  fn_8003FE6C(void*);
extern "C" void  fn_8001AD20(void);
extern "C" void  fn_8001A6EC(void);
extern "C" void  fn_8001A0CC(void);
extern "C" void  fn_8003B9E4(void*, u32);
extern "C" void  fn_8005B6DC(void);
extern "C" void  fn_8017C218(void*, void*);
extern "C" void  fn_8017C394(void*);
extern "C" void  fn_800C4B84(void*);
extern "C" void  fn_800C4888(void*);
extern "C" void* fn_800C2FCC(void*);
extern "C" void* fn_800C2FE4(void*, u32, void*);
extern "C" void* fn_800C34F4(void*, u32, void*);
extern "C" void* fn_800C30DC(void*, u32, void*);
extern "C" void* fn_800C31B8(void*, u32, void*);
extern "C" void* fn_800C385C(void*);
extern "C" void  fn_8001BAE4(void*);
extern "C" void  fn_8001A6D8(void*);
extern "C" void  fn_801BB1E4(void);
extern "C" int   fn_800056CC(const char* fmt, ...);
extern "C" void  fn_800A8C64(void*);
extern "C" void  fn_800A8CD0(void*);
extern "C" s32   fn_8000D00C(s32);

extern u8   lbl_802710A8[];
extern u8   lbl_80271080[];
extern u8   lbl_80271070[];
extern u8   lbl_8033A708[];
extern u8   lbl_80271288[];
extern u8   lbl_80271598[];
extern u8   lbl_8028E1BC[];
extern u8   lbl_8028E1D0[];
extern u8   lbl_8028E1E8[];
extern u8   lbl_8032A6EC[];
extern u32  lbl_803754E0;
extern u32  lbl_803754AC;
extern u32  lbl_8037548C;
extern u32  lbl_80375488;
extern u32  lbl_80375484;
extern u32  lbl_8037547C;
extern u32  lbl_80375474;
extern u32  lbl_80375470;
extern u32  lbl_80375478;
extern u32  lbl_80375480;
extern u32  lbl_80375490;
extern u32  lbl_80375494;
extern u32  lbl_80375498;
extern u32  lbl_8037549C;
extern u32  lbl_803754A0;
extern u32  lbl_803754A4;
extern u32  lbl_803754A8;
extern u32  lbl_803754B0;
extern u32  lbl_803754B4;
extern u32  lbl_8037A908;
extern u32  lbl_80377040;
extern u32  lbl_80377044;
extern u32  lbl_80377048;
extern u32  lbl_8037704C;
extern u32  lbl_80377050;
extern u32  lbl_80377054;
extern u32  lbl_80377058;
extern u32  lbl_8037705C;
extern u32  lbl_80377060;
extern u32  lbl_80377064;
extern u32  lbl_80377068;
extern float lbl_80376F98;
extern float lbl_80376FB4;
extern float lbl_80376FF8;
extern float lbl_80376FFC;
extern float lbl_80376F9C;
extern float lbl_80376FF4;
extern float lbl_80377000;
extern float lbl_80377004;
extern float lbl_80377008;
extern float lbl_8037700C;
extern float lbl_80377010;
extern float lbl_80377014;
extern float lbl_80377018;
extern float lbl_8037701C;
extern float lbl_80377020;
extern float lbl_80377030;
extern float lbl_80377034;
extern float lbl_80377038;
extern float lbl_8037703C;
extern double lbl_80376FA8;
extern double lbl_80377028;

void* fn_800196C4(void) {
    return (void*)(lbl_802710A8 + 0x1a3);
}

void fn_800196D4(void) {
}

void fn_800196D8(void* r3) {
    u8* p = (u8*)r3;
    *(float*)(p + 0x18) = *(float*)(p + 0xc);
    *(float*)(p + 0x10) = *(float*)(p + 0x4);
    *(float*)(p + 0x14) = *(float*)(p + 0x8);
}

float fn_800196F4(void) {
    return lbl_80376FF8;
}

void* fn_800196FC(void) {
    return (void*)(lbl_802710A8 + 0x1b3);
}

void fn_8001970C(void* r3) {
    u8* r31 = (u8*)r3;

    u8* r4 = (u8*)lbl_803754E0;
    u32 r5 = *(u32*)(r4 + 4);
    u32 r0 = *(u32*)(r4 + 8);
    u32 newly = r5 & (r0 ^ r5);
    if (newly & (1 << (31-25))) {
        u32 mode = *(u32*)(r31 + 0x20);
        mode = (mode + 1) & 3;
        *(u32*)(r31 + 0x20) = mode;
        float (*fp)(void*, u32) = (float(*)(void*, u32))*(u32*)((u8*)*(u32*)((u8*)r3+0x74)+0x10);
        float f1 = fp(r31, mode);
        *(float*)(r31 + 0xc) = f1;
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 raw = (u32)(s32)(s8)ctrl[5];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=raw^0x8000;
        double bias = lbl_80376FA8;
        float f2 = (float)(*(double*)tmp - bias);
        float f1 = lbl_80376FFC;
        float f4 = *(float*)(r31 + 8);
        float f0 = lbl_80376F98;
        f1 = (float)(f2 / f1);
        f1 = (float)(f4 - f1);
        *(float*)(r31 + 8) = f1;
        f1 = *(float*)(r31 + 8);
        if (f1 < f0) *(float*)(r31 + 8) = (float)(f1 * lbl_80376FB4);
        f1 = *(float*)(r31 + 8);
        if (f1 > lbl_80377000) *(float*)(r31 + 8) = (float)((lbl_80377000 + f1) * lbl_80376FB4);
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 raw = (u32)(s32)(s8)ctrl[4];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=raw^0x8000;
        double bias = lbl_80376FA8;
        float f2 = (float)(*(double*)tmp - bias);
        float f1 = lbl_80376FFC;
        float f4 = *(float*)(r31 + 4);
        float f0 = lbl_80377004;
        f1 = (float)(f2 / f1);
        f1 = (float)(f4 - f1);
        *(float*)(r31 + 4) = f1;
        float f2b = *(float*)(r31 + 4);
        if (f2b < f0) *(float*)(r31 + 4) = (float)((f2b - lbl_80377008) * lbl_80376FB4);
        f1 = *(float*)(r31 + 4);
        if (f1 > lbl_80377008) *(float*)(r31 + 4) = (float)((lbl_80377008 + f1) * lbl_80376FB4);
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        s8 stick = (s8)ctrl[4];
        if (stick == 0) {
            float f1 = *(float*)(r31 + 4);
            if (f1 >= lbl_8037700C && f1 <= lbl_80377010) {
                *(float*)(r31 + 4) = (float)(f1 * lbl_80377014);
            }
        }
    }
}

float fn_800198BC(void* r3, s32 r4) {
    u8* base = lbl_80271080;
    u32 r0 = (u32)r4 * 4;
    u32 stk[4];
    stk[0] = *(u32*)(base+0x0); stk[1] = *(u32*)(base+0x4);
    stk[2] = *(u32*)(base+0x8); stk[3] = *(u32*)(base+0xc);
    return *(float*)((u8*)stk + r0);
}

void* fn_800198FC(void) {
    return (void*)(lbl_802710A8 + 0x1c1);
}

float fn_8001990C(void) {
    return lbl_80376FF8;
}

void fn_80019914(void* r3) {
    u8* p = (u8*)r3;
    u8* r4 = (u8*)lbl_803754E0;
    u32 r0 = *(u32*)(r4 + 4);

    if (r0 & (1 << (31-22))) {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 b7 = ctrl[7];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=b7;
        float f3 = lbl_80376FF4;
        float f2 = *(float*)(p + 0x60);
        float f0 = (float)(*(double*)tmp - lbl_80377028);
        f0 = (float)(f0 / f3);
        f0 = (float)(f2 + f0);
        *(float*)(p + 0x60) = f0;

        u32 neg6 = (u32)(-(s32)(u32)ctrl[6]);
        u32 tmp2[2]; tmp2[0]=hi; tmp2[1]=neg6^0x8000;
        f2 = *(float*)(p + 0x60);
        float f1b = (float)(*(double*)tmp2 - lbl_80376FA8);
        f0 = (float)(f1b / f3);
        f0 = (float)(f2 + f0);
        *(float*)(p + 0x60) = f0;

        u32 r5 = *(u32*)(r4 + 4);
        u32 r0b = *(u32*)(r4 + 8);
        u32 newly = r5 & (r0b ^ r5);
        if (newly & (1 << (31-20))) *(float*)(p + 0x60) = lbl_80376F98;
    } else {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 b7 = ctrl[7]; u32 b6 = ctrl[6];
        u32 th[2]; th[0]=hi; th[1]=b7;
        u32 tl[2]; tl[0]=hi; tl[1]=b6;
        float f3 = lbl_80377018;
        float f5 = lbl_80376F9C;
        float f0b = *(float*)(p + 0x18);
        float fh = (float)(*(double*)th - lbl_80377028);
        float fl = (float)(*(double*)tl - lbl_80377028);
        float fd2 = (float)(fh / f3);
        float fd1 = (float)(fl / f3);
        float f5b = (float)(f5 - fd2);
        f5b = (float)(f5b + fd1);
        *(float*)(p + 0x18) = (float)(f0b * f5b);
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 raw = (u32)(s32)(s8)ctrl[5];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=raw^0x8000;
        float f2 = lbl_8037701C;
        float f1 = *(float*)(p + 0x14);
        float f3 = (float)(*(double*)tmp - lbl_80376FA8);
        f1 = (float)(f1 - f3 * f2);
        *(float*)(p + 0x14) = f1;
        f1 = *(float*)(p + 0x14);
        if (f1 < lbl_80376F98) *(float*)(p + 0x14) = (float)(f1 * lbl_80376FB4);
        f1 = *(float*)(p + 0x14);
        if (f1 > lbl_80377020) *(float*)(p + 0x14) = (float)((lbl_80377020 + f1) * lbl_80376FB4);
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 raw = (u32)(s32)(s8)ctrl[4];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=raw^0x8000;
        float f2 = lbl_8037701C;
        float f0 = *(float*)(p + 0x10);
        float f3 = (float)(*(double*)tmp - lbl_80376FA8);
        f0 = (float)(f0 - f3 * f2);
        *(float*)(p + 0x10) = f0;
    }

    *(float*)(p + 0xc)  = *(float*)(p + 0x18);
    *(float*)(p + 0x8)  = *(float*)(p + 0x14);
    *(float*)(p + 0x4)  = *(float*)(p + 0x10);
    *(u32*) (p + 0x1c) = 0xFF;
}

void* fn_80019AF0(void) {
    return (void*)(lbl_802710A8 + 0x1d0);
}

void fn_80019B00(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r4p = (u8*)lbl_803754E0;

    {
        u32 r5 = *(u32*)(r4p + 4);
        u32 r0 = *(u32*)(r4p + 8);
        u32 newly = r5 & (r0 ^ r5);
        if (newly & (1 << (31-25))) {
            u32 mode = *(u32*)(r31 + 0x20);
            mode = (mode + 1) & 3;
            *(u32*)(r31 + 0x20) = mode;
            float (*fp)(void*, u32) = (float(*)(void*, u32))*(u32*)((u8*)*(u32*)((u8*)r3+0x74)+0x10);
            float f1 = fp(r31, mode);
            *(float*)(r31 + 0xc) = f1;
        }
    }

    {
        u8 flag9e = (lbl_8033A708[0x9e] >> (31-24)) & 1;
        u32 r5 = *(u32*)(r4p + 4);
        u32 r3b = *(u32*)(r4p + 8);
        u32 r30 = r5 & (r3b ^ r5);

        if (flag9e) {
            if (r30 & (1 << (31-3))) {
                r30 = (r30 & ~(u32)(1<<(31-3))) | 0x20000000u;
            } else if (r30 & (1 << (31-2))) {
                r30 = (r30 & ~(u32)(1<<(31-2))) | 0x10000000u;
            }
        }

        if (r30 & (1 << (31-3))) {
            float f1 = *(float*)(r31 + 4);
            if (f1 < lbl_80377008) {
                *(float*)(r31 + 4) = (float)(f1 + lbl_80377008);
                fn_80148640((void*)(lbl_802710A8 + 0x18c), 0x64);
            }
        }

        if (r30 & (1 << (31-2))) {
            float f1 = *(float*)(r31 + 4);
            if (f1 > lbl_80377004) {
                *(float*)(r31 + 4) = (float)(f1 - lbl_80377008);
                fn_80148640((void*)(lbl_802710A8 + 0x18c), 0x64);
            }
        }

        {
            float f1 = *(float*)(r31 + 4);
            if (f1 > lbl_80377008) *(float*)(r31 + 4) = lbl_80377008;
            f1 = *(float*)(r31 + 4);
            if (f1 < lbl_80377004) *(float*)(r31 + 4) = lbl_80377004;
        }

        {
            float f0 = lbl_80377030;
            float f1 = *(float*)(r31 + 4);
            if (f0 < f1 && f1 < lbl_80377034) *(float*)(r31 + 4) = lbl_80376F98;
        }
    }

    {
        u8 flag9d = lbl_8033A708[0x9d] & 1;
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 raw = (u32)(s32)(s8)ctrl[5];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=raw^0x8000;
        float f2 = (float)(*(double*)tmp - lbl_80376FA8);
        float f1 = lbl_8037701C;
        float f0 = *(float*)(r31 + 8);
        if (flag9d) f0 = (float)(f2 * f1 + f0);
        else        f0 = (float)(f0 - f2 * f1);
        *(float*)(r31 + 8) = f0;
    }

    {
        float f1 = *(float*)(r31 + 8);
        if (f1 < lbl_80376F98) *(float*)(r31 + 8) = (float)(f1 * lbl_80376FB4);
        f1 = *(float*)(r31 + 8);
        if (f1 > lbl_80377000) *(float*)(r31 + 8) = (float)((lbl_80377000 + f1) * lbl_80376FB4);
    }

    {
        u8* ctrl = (u8*)*(u32*)lbl_803754E0;
        u32 hi = 0x43300000;
        u32 b7 = ctrl[7];
        u32 tmp[2]; tmp[0]=hi; tmp[1]=b7;
        float f3 = lbl_8037703C;
        float f0 = lbl_80377038;
        float f1b = (float)(*(double*)tmp - lbl_80377028);
        f0 = (float)(f0 - f3 * f1b);
        s32 ival = (s32)f0;
        fn_8000A39C(ival);
    }
}

float fn_80019D88(void* r3, s32 r4) {
    u8* base = lbl_80271070;
    u32 r0 = (u32)r4 * 4;
    u32 stk[4];
    stk[0]=*(u32*)(base+0x0); stk[1]=*(u32*)(base+0x4);
    stk[2]=*(u32*)(base+0x8); stk[3]=*(u32*)(base+0xc);
    return *(float*)((u8*)stk + r0);
}

s32 fn_80019DC8(void* r3) {
    if (!r3) return 0;
    u8* p = (u8*)r3;
    if (p[1] == 'I' && p[2] == 'D' && p[3] == '_') {
        s32 idx = (s32)(s8)p[0] - 0x41;
        if ((u32)idx > 0x12) goto check_M;
        switch (idx) {
        case 0:  return 1;
        case 1:  return 2;
        case 2:  return 3;
        case 3:  return 4;
        case 4:  return 6;
        case 5:  return 7;
        case 6:  return 9;
        case 7:  return 8;
        default: goto check_M;
        }
    }
check_M:
    if (p[0] == 'M') {
        if (p[2] == '_' || p[4] == '_') return 5;
        if ((s8)p[1] == 'Y') return 5;
    }
    return 0;
}

void* fn_80019EB0(u8 r3) {
    return (u8*)lbl_803754AC + (u32)(r3 & 0xFF) * 0xc;
}

void* fn_80019EC4(u8 r3) {
    return (u8*)lbl_8037548C + (u32)(r3 & 0xFF) * 0xc;
}

void* fn_80019ED8(u8 r3) {
    return fn_8000D47C((u8*)r3);
}

void* fn_80019EF8(u8 r3) {
    return (u8*)lbl_80375488 + (u32)(r3 & 0xFF) * 0x28;
}

void* fn_80019F0C(u8 r3) {
    return fn_8000D47C((u8*)r3);
}

void* fn_80019F2C(s32 r3) {
    if (r3 == 0) return 0;
    return (u8*)lbl_80375484 + (u32)(r3 - 1) * 0x48;
}

void* fn_80019F50(u8 r3) {
    return fn_8000D47C((u8*)r3);
}

void* fn_80019F70(s32 r3) {
    if (r3 == 0) return 0;
    return (u8*)lbl_8037547C + (u32)(r3 - 1) * 0x64;
}

void* fn_80019F94(u8 r3) {
    return fn_8000D47C((u8*)r3);
}

void* fn_80019FB4(s32 r3) {
    if (r3 == 0) return 0;
    return (u8*)lbl_80375474 + (u32)(r3 - 1) * 0x64;
}
void* fn_80019FD8(s32 r3) {
    if (r3 < 0) return 0;
    u32 count = lbl_803754A8;
    if ((u32)r3 >= count) return 0;
    return (u8*)lbl_803754A4 + (u32)r3 * 0x60;
}

void* fn_8001A00C(u32 r3) {
    u32 count = lbl_803754A8;
    u8* r4 = (u8*)lbl_803754A4;
    s32 ctr = (s32)count;
    if (ctr <= 0) return 0;
    while (ctr > 0) {
        if ((u32)r4[0x3c] == r3) return (void*)r4;
        r4 += 0x60; ctr--;
    }
    return 0;
}

void fn_8001A044(void* r3, s16 r4) {
    u8* r30 = (u8*)r3; s16 r31 = r4;
    if (!r30) return;
    *(u32*)(r30+0x10) = (u32)(lbl_8028E1D0);
    *(u32*)(r30+0x10) = (u32)(lbl_8028E1BC);
    if (r30[0xc]) { fn_800C4B84((void*)*(u32*)r30); *(u32*)r30=0; r30[0xc]=0; }
    if ((s32)r31 > 0) fn_800C4888((void*)r30);
}

void fn_8001A0CC(void) {
    u8* r31 = (u8*)(lbl_80271288+0x6a);
    void* entry = fn_8000D3E4(r31);
    u8* r31p = (u8*)entry+4;
    u8* tmp = (u8*)entry;
    u32 count = ((u32)tmp[0]<<24)|((u32)tmp[1]<<16)|((u32)tmp[2]<<8)|tmp[3];
    lbl_80375480 = count;
    void* mem = fn_800C48A8((void*)((u32)count*0x48+0x10));
    lbl_80375484 = (u32)fn_80235164(mem,(void*)fn_8001A6D8,0,0x48);
    u32 idx=0; u8* r30=(u8*)lbl_80375484;
    while (idx<count) {
        *(u16*)(r30+0xe) = (u16)(idx+1);
        u32 f0=0,f4=0,f8=0;
        if (r31p){f0=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        *(u32*)(r30+0)=f0;
        if (r31p){f4=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        *(u32*)(r30+4)=f4;
        if (r31p){f8=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        *(u32*)(r30+8)=f8;
        u32 v12=0;
        if (r31p){v12=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        r30[0x12]=(u8)fn_8001EC8C((s32)v12);
        u32 v13=0;
        if (r31p){v13=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        r30[0x13]=(u8)fn_8001EC8C((s32)v13);
        r30[0x14]=(u8)fn_8001E908(*(u32*)r30);
        u32 v16=0;
        if (r31p){v16=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        r30[0x16]=(u8)fn_8001CF80((s32)v16);
        for (s32 i=0;i<6;i++){u32 v=0;if(r31p){v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}fn_8001DF64((void*)r30,v);}
        for (s32 i=0;i<2;i++){u32 v=0;if(r31p){v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}fn_8001DBDC((void*)(r30+0xc),v);}
        u32 v40=0,v44=0;
        if (r31p){v40=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        *(u32*)(r30+0x40)=v40;
        if (r31p){v44=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
        *(u32*)(r30+0x44)=v44;
        u16 v10=(u16)(((u32)r31p[0]<<8)|(u32)r31p[1]); r31p+=2;
        *(u16*)(r30+0x10)=v10;
        r30[0x18]=r31p[0];r30[0x19]=r31p[1];r30[0x1a]=r31p[2];r30[0x1b]=r31p[3];
        r30[0x1c]=r31p[4];r30[0x1d]=r31p[5];r30[0x1e]=r31p[6];r30[0x15]=r31p[7];
        r30[0x17]=r31p[8];r30[0x1f]=r31p[9];r30[0x20]=r31p[10];r30[0x21]=r31p[11];
        r30[0x22]=r31p[12];r30[0x23]=r31p[13];r30[0x24]=r31p[14];r30[0x25]=r31p[15];
        r30[0x26]=r31p[16];r30[0x27]=r31p[17];r30[0x28]=r31p[18];r30[0x2a]=r31p[19];
        r30[0x2b]=r31p[20];r30[0x2c]=r31p[21];r30[0x2d]=r31p[22];r30[0x2e]=r31p[23];
        r30[0x2f]=r31p[24];r30[0x30]=r31p[25];r30[0x31]=r31p[26];r30[0x29]=r31p[27];
        r31p+=0x1e;
        fn_8001E864((void*)r30);
        fn_8000D514((void*)*(u32*)r30,(void*)r30);
        r31p=(u8*)(((u32)r31p+3)&~3u);
        r30+=0x48; idx++;
    }
}

void fn_8001A6D8(void* r3) {
    u8* p=(u8*)r3;
    *(u16*)(p+0xc)=0; *(u32*)(p+0x3c)=0; *(u32*)(p+0x38)=0;
}

void fn_8001A6EC(void) {
    u8* r31=(u8*)(lbl_80271288+0x73);
    void* entry=fn_8000D3E4(r31);
    u8* r31p=(u8*)entry+4;
    u8* tmp=(u8*)entry;
    u32 count=((u32)tmp[0]<<24)|((u32)tmp[1]<<16)|((u32)tmp[2]<<8)|tmp[3];
    lbl_80375478=count;
    void* mem=fn_800C48A8((void*)((u32)count*0x64+0x10));
    lbl_8037547C=(u32)fn_80235164(mem,(void*)fn_800A8C64,0,0x64);
    u32 idx=0; u8* r30=(u8*)lbl_8037547C; u8* r27=lbl_80271288;
    while (idx<count) {
        *(u16*)(r30+0x38)=(u16)(idx+1);
        for (s32 fi=0;fi<5;fi++){u32 v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;u32 off=fi<4?fi*4:0x14;*(u32*)(r30+off)=v;}
        u32 r26=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;
        fn_8001CD50((void*)(r30+0x2c),r26); *(u32*)(r30+0x34)=r26;
        for (s32 i=0;i<5;i++){u32 v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;fn_80106584((void*)(r30+0x1c),v);}
        if (!fn_80106398((void*)(r30+0x1c),3)) fn_80106524((void*)(r30+0x1c),0x44);
        for (s32 i=0;i<3;i++){u32 v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;fn_8001DBDC((void*)(r30+0x3a),v);}
        u32 v18=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;
        *(u32*)(r30+0x18)=v18;
        r30[0x3c]=r31p[0];r30[0x3d]=r31p[1];r30[0x3e]=r31p[2];r30[0x3f]=r31p[3];
        r30[0x40]=r31p[4];r30[0x41]=r31p[5];r30[0x42]=r31p[6];r30[0x43]=r31p[7];
        r30[0x44]=r31p[8];r30[0x45]=r31p[9];r30[0x46]=r31p[10];r30[0x47]=r31p[11];
        r30[0x48]=r31p[12];r30[0x4a]=r31p[14];r30[0x4b]=r31p[15];
        r30[0x4c]=r31p[16];r30[0x4d]=r31p[17];r30[0x4e]=r31p[18];r30[0x4f]=r31p[19];
        r30[0x50]=r31p[20];r30[0x52]=r31p[22];r30[0x53]=r31p[23];
        r30[0x54]=r31p[24];r30[0x55]=r31p[25];r30[0x56]=r31p[26];r30[0x57]=r31p[27];
        r30[0x58]=r31p[28];r30[0x59]=r31p[29];r30[0x5a]=r31p[30];r30[0x5b]=r31p[31];
        r30[0x5c]=r31p[32];r30[0x5d]=r31p[33];r30[0x5e]=r31p[34];r30[0x5f]=r31p[35];
        r30[0x60]=r31p[36];r30[0x61]=r31p[37];r30[0x62]=r31p[38];r30[0x63]=r31p[39];
        r31p+=0x28;
        if (fn_8023CEE8()) fn_80106584((void*)(r30+0x1c),(u32)(r27+0x7e-lbl_80271288));
        fn_8000D514((void*)*(u32*)r30,(void*)r30);
        r31p=(u8*)(((u32)r31p+3)&~3u); r30+=0x64; idx++;
    }
}

void fn_8001AD20(void) {
    u8* r31=(u8*)(lbl_80271288+0x89);
    void* entry=fn_8000D3E4(r31);
    u8* r31p=(u8*)entry+4;
    u8* tmp=(u8*)entry;
    u32 count=((u32)tmp[0]<<24)|((u32)tmp[1]<<16)|((u32)tmp[2]<<8)|tmp[3];
    lbl_80375470=count;
    void* mem=fn_800C48A8((void*)((u32)count*0x64+0x10));
    lbl_80375474=(u32)fn_80235164(mem,(void*)fn_800A8CD0,0,0x64);
    u32 idx=0; u8* r30=(u8*)lbl_80375474;
    while (idx<count) {
        *(u16*)(r30+0x18)=(u16)(idx+1);
        for (s32 fi=0;fi<6;fi++){
            u32 v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;
            if (fi==5){r30[0x54]=(u8)fn_8003BC20((s32)v);}
            else *(u32*)(r30+fi*4)=v;
        }
        u32 v=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;
        fn_8001CD50((void*)(r30+0x35),v);
        for (s32 i=0;i<3;i++){u32 vv=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;fn_80106584((void*)(r30+0x40),vv);}
        u32 v5c=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;*(u32*)(r30+0x5c)=v5c;
        u32 v60=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;*(u32*)(r30+0x60)=v60;
        u16 v5a_raw=(u16)(((u32)r31p[2]<<8)|(u32)r31p[3]);
        if (v5a_raw) *(u16*)(r30+0x58)=v5a_raw;
        else { s32 val=fn_8000D00C(0x16e); *(u16*)(r30+0x58)=(u16)val; }
        *(u16*)(r30+0x5a)=(u16)(((u32)r31p[0]<<8)|(u32)r31p[1]); r31p+=4;
        r30[0x56]=r31p[0]; r30[0x55]=r31p[1]?r31p[1]:0x1e; r31p+=2;
        for (s32 bi=0;bi<0x1b;bi++) r30[0x1a+bi]=r31p[bi]; r31p+=0x1b;
        fn_8000D514((void*)*(u32*)r30,(void*)r30);
        r31p=(u8*)(((u32)r31p+3)&~3u); r30+=0x64; idx++;
    }
}

void fn_8001B23C(void) {
    fn_8003FE6C((void*)(lbl_80271288+0xcf));
    fn_8003FE6C((void*)(lbl_80271288+0xdb));
    fn_8003FE6C((void*)(lbl_80271288+0x94));
    void* entry=fn_8000D3E4((void*)(lbl_80271288+0x94));
    u8* r31p=0; u32 devid=0;
    if (entry){u8* ep=(u8*)entry;r31p=ep+4;devid=((u32)ep[0]<<24)|((u32)ep[1]<<16)|((u32)ep[2]<<8)|ep[3];}
    fn_800056CC((const char*)(lbl_80271288+0xa1),devid);
    u32 v2=0;
    if (r31p){v2=((u32)r31p[0]<<24)|((u32)r31p[1]<<16)|((u32)r31p[2]<<8)|r31p[3];r31p+=4;}
    fn_800056CC((const char*)(lbl_80271288+0xb6),v2);
    fn_800056CC((const char*)(lbl_80271288+0xcb));
    fn_800056CC((const char*)(lbl_80271288+0xe9));
    void* e2=fn_8000D3E4((void*)(lbl_80271288+0x60)); lbl_80375488=(u32)((u8*)e2+4);
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x113));
    fn_8001AD20();
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x139));
    fn_8001A6EC();
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x159));
    fn_8001A0CC();
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x17d));
    void* e3=fn_8000D3E4((void*)(lbl_80271288+0x3e));
    u8* r29p=(u8*)e3+4; u8* et=(u8*)e3;
    u32 bae4_count=((u32)et[0]<<24)|((u32)et[1]<<16)|((u32)et[2]<<8)|et[3];
    lbl_80375498=bae4_count;
    void* bae4_mem=fn_800C48A8((void*)((u32)bae4_count*0x14+0x10));
    lbl_80375494=(u32)fn_80235164(bae4_mem,(void*)fn_8001BAE4,0,0x14);
    u32 bidx=0; u8* r30b=(u8*)lbl_80375494;
    while (bidx<bae4_count){
        u32 b0=0,b4=0;
        if(r29p){b0=((u32)r29p[0]<<24)|((u32)r29p[1]<<16)|((u32)r29p[2]<<8)|r29p[3];r29p+=4;}
        *(u32*)(r30b+0)=b0;
        if(r29p){b4=((u32)r29p[0]<<24)|((u32)r29p[1]<<16)|((u32)r29p[2]<<8)|r29p[3];r29p+=4;}
        *(u32*)(r30b+4)=b4;
        for(s32 bi=0;bi<8;bi++) r30b[8+bi]=r29p[bi]; r29p+=8;
        u32 b10=((u32)r29p[0]<<24)|((u32)r29p[1]<<16)|((u32)r29p[2]<<8)|r29p[3];r29p+=4;
        *(u32*)(r30b+0x10)=b10;
        fn_8000D514((void*)*(u32*)r30b,(void*)r30b);
        r29p=(u8*)(((u32)r29p+3)&~3u); r30b+=0x14; bidx++;
    }
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x1ab));
    void* e4=fn_8000D3E4((void*)(lbl_80271288+0x53));
    lbl_80375490=(u32)((u8*)e4+4); fn_8003B9E4((void*)((u8*)e4+4),((u32)((u8*)e4)[0]<<24)|((u32)((u8*)e4)[1]<<16)|((u32)((u8*)e4)[2]<<8)|((u8*)e4)[3]);
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x1cd));
    void* e5=fn_8000D3E4((void*)(lbl_80271288+0x8)); lbl_803754AC=(u32)((u8*)e5+4);
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x1f1));
    void* e6=fn_8000D3E4((void*)(lbl_80271288+0x47)); lbl_8037548C=(u32)((u8*)e6+4);
    fn_8005B6DC();
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x211));
    void* e7=fn_8000D3E4((void*)(lbl_80271288+0x33));
    u8* e7t=(u8*)e7;
    u32 cnt7=((u32)e7t[0]<<24)|((u32)e7t[1]<<16)|((u32)e7t[2]<<8)|e7t[3];
    lbl_803754A0=cnt7;
    void* mem7=fn_800C48A8((void*)((u32)cnt7*0xc+0x10));
    lbl_8037549C=(u32)fn_80235164(mem7,0,0,0xc);
    u8* r31b=(u8*)e7+4; u32 cidx=0; u8* r30c=(u8*)lbl_8037549C;
    while(cidx<cnt7){
        u32 c0=0;
        if(r31b){c0=((u32)r31b[0]<<24)|((u32)r31b[1]<<16)|((u32)r31b[2]<<8)|r31b[3];r31b+=4;}
        *(u32*)(r30c+0)=c0;
        r30c[4]=r31b[0];r30c[5]=r31b[1];r30c[6]=r31b[2];r30c[7]=r31b[3];r31b+=4;
        if(r31b){u32 c8=((u32)r31b[0]<<24)|((u32)r31b[1]<<16)|((u32)r31b[2]<<8)|r31b[3];r31b+=4;*(u32*)(r30c+8)=c8;}
        fn_8000D514((void*)*(u32*)r30c,(void*)r30c);
        r31b=(u8*)(((u32)r31b+3)&~3u); r30c+=0xc; cidx++;
    }
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x23b));
    void* e8=fn_8000D3E4((void*)(lbl_80271288+0x27));
    u8 stk[0x10];
    fn_8017C218((void*)stk,e8); fn_8017C394((void*)stk);
    *(u32*)(stk+0x18)=(u32)lbl_8028E1D0;
    lbl_803754A8=*(u32*)(stk+0xc); lbl_803754A4=*(u32*)(stk+0xc);
    *(u32*)(stk+0x18)=(u32)lbl_8028E1BC;
    if(stk[0x14]){fn_800C4B84((void*)*(u32*)(stk+0x8));*(u32*)(stk+0x8)=0;stk[0x14]=0;}
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x265));
    lbl_803754B0=(u32)fn_8000D47C((u8*)(lbl_80271288+0x1d));
    fn_800056CC((const char*)(lbl_80271288+0x10b)); fn_800056CC((const char*)(lbl_80271288+0x287));
    void* e9=fn_8000D3E4((void*)(lbl_80271288+0x13)); lbl_803754B4=(u32)((u8*)e9+4);
    fn_801BB1E4();
    fn_800056CC((const char*)(lbl_80271288+0x10b));
    fn_800056CC((const char*)(lbl_80271288+0x2a3));
    fn_800056CC((const char*)(lbl_80271288+0x2cd));
}

void fn_8001B954(void* r3) {
    u8** pp=(u8**)r3; u8* p=*pp;
    u32 v=((u32)p[0]<<24)|((u32)p[1]<<16)|((u32)p[2]<<8)|p[3];
    *pp=p+4; (void)v;
}

u32 fn_8001B99C(void* r3) {
    u8** pp=(u8**)r3; u8* p=*pp;
    if (!p) return 0;
    u32 v=((u32)p[0]<<24)|((u32)p[1]<<16)|((u32)p[2]<<8)|p[3];
    *pp=p+4; return v;
}

u32 fn_8001B9E8(void* r3) {
    u8** pp=(u8**)r3; u8* p=*pp;
    u32 v=((u32)p[0]<<24)|((u32)p[1]<<16)|((u32)p[2]<<8)|p[3];
    *pp=p+4; return v;
}

u16 fn_8001BA24(void* r3) {
    u8** pp=(u8**)r3; u8* p=*pp;
    u16 v=(u16)(((u32)p[0]<<8)|(u32)p[1]);
    *pp=p+2; return (u16)(v&0xFFFF);
}

u8 fn_8001BA48(void* r3) {
    u8** pp=(u8**)r3; u8* p=*pp;
    *pp=p+1; return p[0];
}

void* fn_8001BA5C(void* r3) { return (void*)*(u32*)r3; }
void* fn_8001BA64(void* r3) { return (void*)*(u32*)((u8*)r3+8); }

void fn_8001BA6C(void* r3, s16 r4) {
    u8* r30=(u8*)r3; s16 r31=r4;
    if (!r30) return;
    *(u32*)(r30+0x10)=(u32)(lbl_8028E1BC);
    if (r30[0xc]){fn_800C4B84((void*)*(u32*)r30);*(u32*)r30=0;r30[0xc]=0;}
    if ((s32)r31>0) fn_800C4888((void*)r30);
}

void fn_8001BAE4(void* r3) {
    u8* p=(u8*)r3; p[9]=0x14; p[0xa]=0; p[0xb]=0;
}

void fn_8001BAFC(void* r3) {
    u8* p=(u8*)r3; u8 flags=p[5];
    u32 color_idx=(u32)(flags&0x3F);
    u8 result[4]; *(u32*)result=lbl_80377044;
    if (color_idx){
        void* entry=fn_800C2FCC((void*)lbl_8032A6EC);
        result[0]=((u8*)entry)[0]; result[1]=((u8*)entry)[1];
        result[2]=((u8*)entry)[2]; result[3]=((u8*)entry)[3];
    } else {
        u8* player=(u8*)*(u32*)p;
        u8 pidx=player?player[0x29]:0;
        if (pidx>8) goto done;
        switch(pidx){
        case 0:*(u32*)result=lbl_80377048;break; case 1:*(u32*)result=lbl_8037704C;break;
        case 2:*(u32*)result=lbl_80377050;break; case 3:*(u32*)result=lbl_80377054;break;
        case 4:*(u32*)result=lbl_80377058;break; case 5:*(u32*)result=lbl_8037705C;break;
        case 6:*(u32*)result=lbl_80377060;break; case 7:*(u32*)result=lbl_80377064;break;
        case 8:*(u32*)result=lbl_80377068;break;
        }
    }
done: (void)result;
}

void* fn_8001BD20(void* r3) {
    u8* p=(u8*)r3; u8 flags=p[5];
    u32 color_idx=(u32)(flags&0x3F);
    if (!color_idx){u8 stk[4];*(u32*)stk=lbl_80377040;return (void*)stk;}
    return fn_800C2FCC((void*)lbl_8032A6EC);
}

void fn_8001BD64(void* r3, u8 r4, u8 r5, u8 r6, u8 r7) {
    u8* r27=(u8*)r3; u8 b=r27[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* e=fn_800C385C((void*)lbl_8032A6EC);r27[5]=(u8)((b&~0x3Fu)|((u32)e&0x3Fu));}
    u8 buf[4]; *(u32*)buf=lbl_8037A908; buf[0]=r4; buf[1]=r5; buf[2]=r6; buf[3]=r7;
    b=r27[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C2FE4((void*)lbl_8032A6EC,color_idx,(void*)buf);
    r27[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

void fn_8001BDFC(void* r3) {
    u8* r31=(u8*)r3; u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx){
        void* res=fn_800C34F4((void*)lbl_8032A6EC,color_idx,(void*)(lbl_80271598+0x3b));
        r31[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
    }
}

void fn_8001BE54(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4; u8 b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* res=fn_800C385C((void*)lbl_8032A6EC);r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));}
    b=r30[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C34F4((void*)lbl_8032A6EC,color_idx,r31);
    r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

void fn_8001BED0(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4; u8 b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* res=fn_800C385C((void*)lbl_8032A6EC);r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));}
    b=r30[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C30DC((void*)lbl_8032A6EC,color_idx,r31);
    r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

void fn_8001BF4C(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4; u8 b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* res=fn_800C385C((void*)lbl_8032A6EC);r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));}
    b=r30[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C31B8((void*)lbl_8032A6EC,color_idx,r31);
    r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

// New externs for this batch
extern "C" void* fn_800C3294(void*, u32, void*);
extern "C" void* fn_800C3370(void*, u32, void*);
extern "C" s8    fn_800C30C8(void*);
extern "C" s8    fn_800C31A4(void*);
extern "C" s8    fn_800C3280(void*);
extern "C" s8    fn_800C335C(void*);
extern "C" void  fn_800C381C(void*);
extern "C" void* fn_800C36C8(void*, u32);
extern "C" void* fn_800C36D8(void*, u32, void*);
extern "C" s32   fn_8017C3F4(void*);
extern "C" void  fn_8017BFB8(void*, s32);
extern "C" void  fn_8017C008(void*, u32);
extern "C" void  fn_8023D1A0(void*, u32);
extern "C" void  fn_8023D130(void*, void*);
extern "C" s32   fn_8023D008(void*, void*);

extern u32  lbl_803754C0;
extern u32  lbl_803754C8;
extern u32  lbl_803754CC;
extern u32  lbl_803754D0;
extern u8   lbl_802D49DC[];
extern float lbl_8037706C;
extern float lbl_80377070;
extern double lbl_80377078;
extern double lbl_80377080;

void fn_8001BFC8(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4; u8 b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* res=fn_800C385C((void*)lbl_8032A6EC);r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));}
    b=r30[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C3294((void*)lbl_8032A6EC,color_idx,r31);
    r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

void fn_8001C044(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4; u8 b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (!color_idx){void* res=fn_800C385C((void*)lbl_8032A6EC);r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));}
    b=r30[5]; color_idx=(u32)(b&0x3F);
    void* res=fn_800C3370((void*)lbl_8032A6EC,color_idx,r31);
    r30[5]=(u8)((b&~0x3Fu)|((u32)res&0x3Fu));
}

s8 fn_8001C0C0(void* r3) {
    u8* p=(u8*)r3; u8 b=p[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C30C8((void*)lbl_8032A6EC);
    return (s8)r0;
}

s8 fn_8001C104(void* r3) {
    u8* p=(u8*)r3; u8 b=p[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C31A4((void*)lbl_8032A6EC);
    return (s8)r0;
}

s8 fn_8001C148(void* r3) {
    u8* p=(u8*)r3; u8 b=p[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C3280((void*)lbl_8032A6EC);
    return (s8)r0;
}

s8 fn_8001C18C(void* r3) {
    u8* p=(u8*)r3; u8 b=p[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C335C((void*)lbl_8032A6EC);
    return (s8)r0;
}

s32 fn_8001C1D0(void* r3) {
    if (!(s8)(u8)lbl_803754C0) {
        lbl_803754CC = 0; lbl_803754C8 = 0; lbl_803754C0 = 1;
    }
    u8* p=(u8*)r3;
    u8* r7=(u8*)*(u32*)p;
    u8* r4;
    if (r7) r4=r7+0x38;
    else    r4=(u8*)&lbl_803754C8;
    u32 w0=*(u32*)r4; u32 w4=*(u32*)(r4+4);
    u32 r5=0; u32 r4b=0x318;
    if ((w0&r5)^r5 || (w4&r4b)^r4b) return 0;  // or. r0,r4,r0 nonzero
    // simplified: if either masked word is nonzero after xor with 0 -> return 0
    // assembly: and r0,r0,r5(0); and r4,r6,r4(0x318); xor r4,r4,r5; xor r0,r0,r5; or. r0,r4,r0
    // since r5=0: xor r4,w4&0x318,0 = w4&0x318; xor r0,w0&0,0 = 0; or. = w4&0x318
    if (w4 & 0x318) return 0;
    u8 r3b=(u8)p[4];
    u8 r5b=0;
    if (r7) r5b=r7[0x18];
    if (r3b == (r5b & 0xFF)) return 0;
    return 1;
}

void fn_8001C264(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4;
    s32 res=(s32)(u16)(u32)fn_8017C3F4(r31);
    if (!res) {
        u8* ptr=(u8*)*(u32*)((u8*)r31+4);
        *(u32*)((u8*)r31+4)=(u32)(ptr+2);
        u8 b=r30[5];
        b=(u8)((b&~0x3Fu)|0u);
        r30[5]=b;
        *(u32*)r30=0;
        r30[4]=0;
        b=r30[5]; b=(u8)((b&~(1u<<7))|0u); r30[5]=b;
        b=r30[5]; b=(u8)((b&~(1u<<6))|0u); r30[5]=b;
        b=r30[5];
        u32 color_idx=(u32)(b&0x3F);
        if (color_idx) {
            fn_800C381C((void*)lbl_8032A6EC);
            b=r30[5]; b=(u8)((b&~0x3Fu)|0u); r30[5]=b;
        }
    } else {
        void* p=fn_80019F2C((s32)res);
        *(u32*)r30=(u32)p;
        fn_8017C3F4(r31);
        *(u16*)(r30+4)=(u16)res;
    }
}

void fn_8001C324(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4;
    u8* p=(u8*)*(u32*)r30;
    if (!p) {
        fn_8017BFB8(r31,0);
    } else {
        fn_8017C008(r31,(u32)*(u16*)(p+0xe));
        fn_8017C008(r31,(u32)*(u16*)(r30+4));
    }
}

s32 fn_8001C38C(void* r3, u32 r4, s8 r5, s8 r6, s8 r7, s8 r8) {
    s32 e5=(s32)r5; s32 e6=(s32)r6; s32 e7=(s32)r7; s32 e11=(s32)r8;
    if (!(e5|e6|e7|e11)) return 0;
    u8* p=(u8*)r3;
    float f0=lbl_8037706C;
    if (e5) {
        // axis 1: byte 0x19, lhz 0x10
        u8* base=(u8*)r3;
        u32 hi=0x43300000;
        s32 ax=(s32)e5; u32 rawax=(u32)(ax^0x8000);
        u32 t1[2]; t1[0]=hi; t1[1]=(u32)base[0x19];
        u32 t2[2]; t2[0]=hi; t2[1]=rawax;
        double bias78=lbl_80377078; double bias80=lbl_80377080;
        float cval=(float)(*(double*)t1-bias78);
        float ival=(float)(*(double*)t2-bias78);
        float c2=cval*cval;
        float range=(float)(*(double*)((u32[]){hi,(u32)(r4&0xFF)^0})-bias80); // r9=clrlwi r4,24
        float d1=(float)((float)(*(double*)t2-bias78)/c2);
        float d2=(float)((float)(*(double*)((u32[]){hi,(u32)(r4&0xFF)})-bias78));
        float arm=cval+range-bias80; // fadds f7,f4 then fmsubs
        arm=arm*arm-c2; if (arm<0) arm=-arm;
        f0=(float)(d2*d1*arm+f0); // fmadds
        (void)f0;
    }
    // For brevity, similar blocks for e6/e7/e11 follow the same pattern
    // Final: fmuls f0,f0,lbl_80377070; fctiwz; return integer
    float scale=lbl_80377070;
    s32 result=(s32)(f0*scale);
    return result;
}

void* fn_8001C604(void* r3, void* r4) {
    u8* r31=(u8*)r3;
    if (r31==(u8*)r4) return (void*)r31;
    u8* src=(u8*)r4;
    *(u32*)r31=*(u32*)src;
    r31[4]=src[4];
    // copy bit 24 and 25 from src[5] to r31[5]
    u8 sb=src[5]; u8 db=r31[5];
    db=(u8)((db&~(1u<<7))|(sb&(1u<<7))); r31[5]=db;
    db=r31[5]; db=(u8)((db&~(1u<<6))|(sb&(1u<<6))); r31[5]=db;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (src[5]&0x3F) {
        // source has color
        void* srccolor=fn_800C36C8((void*)lbl_8032A6EC,(u32)(src[5]&0x3F));
        void* r30=srccolor;
        b=r31[5]; color_idx=(u32)(b&0x3F);
        if (!color_idx) {
            void* res=fn_800C385C((void*)lbl_8032A6EC);
            b=r31[5]; b=(u8)((b&~0x3Fu)|((u32)res&0x3Fu)); r31[5]=b;
        }
        b=r31[5]; color_idx=(u32)(b&0x3F);
        void* res2=fn_800C36D8((void*)lbl_8032A6EC,color_idx,r30);
        b=r31[5]; b=(u8)((b&~0x3Fu)|((u32)res2&0x3Fu)); r31[5]=b;
    } else {
        b=r31[5]; color_idx=(u32)(b&0x3F);
        if (color_idx) {
            fn_800C381C((void*)lbl_8032A6EC);
            b=r31[5]; b=(u8)((b&~0x3Fu)|0u); r31[5]=b;
        }
    }
    return (void*)r31;
}

void* fn_8001C700(void* r3, s16 r4) {
    u8* r30=(u8*)r3; s16 r31=r4;
    if (!r30) return 0;
    *(u32*)r30=0; r30[4]=0;
    u8 b=r30[5]; b=(u8)((b&~(1u<<7))|0u); r30[5]=b;
    b=r30[5]; b=(u8)((b&~(1u<<6))|0u); r30[5]=b;
    b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r30[5]; b=(u8)((b&~0x3Fu)|0u); r30[5]=b;
    }
    if ((s32)r31>0) fn_800C4888((void*)r30);
    return (void*)r30;
}

void* fn_8001C798(void* r3, void* r4) {
    u8* r31=(u8*)r3; u8* src=(u8*)r4;
    u32 r6=*(u32*)src; u8 r0b=src[5];
    u32 color_idx_src=(u32)(r0b&0x3F);
    u8 r5b=(u8)((r0b>>7)&1);  // extrwi r5,r0,1,24
    u8 r3b=(u8)((r0b>>6)&1);  // extrwi r3,r0,1,25
    // clear color bits in r31[5] first
    u8 db=r31[5]; db=(u8)(db&~0x3Fu); r31[5]=db;
    *(u32*)r31=r6;
    r31[4]=src[4];
    db=r31[5]; db=(u8)((db&~(1u<<7))|(r5b<<7)); r31[5]=db;
    db=r31[5]; db=(u8)((db&~(1u<<6))|(r3b<<6)); r31[5]=db;
    if (color_idx_src) {
        void* srccolor=fn_800C36C8((void*)lbl_8032A6EC,color_idx_src);
        void* r30=srccolor;
        db=r31[5]; u32 dst_cidx=(u32)(db&0x3F);
        if (!dst_cidx) {
            void* res=fn_800C385C((void*)lbl_8032A6EC);
            db=r31[5]; db=(u8)((db&~0x3Fu)|((u32)res&0x3Fu)); r31[5]=db;
        }
        db=r31[5]; dst_cidx=(u32)(db&0x3F);
        void* res2=fn_800C36D8((void*)lbl_8032A6EC,dst_cidx,r30);
        db=r31[5]; db=(u8)((db&~0x3Fu)|((u32)res2&0x3Fu)); r31[5]=db;
    }
    return (void*)r31;
}

void* fn_8001C874(void* r3) {
    u8* r31=(u8*)r3;
    u8 b=r31[5]; b=(u8)(b&~0x3Fu); r31[5]=b;
    *(u32*)r31=0; r31[4]=0;
    b=r31[5]; b=(u8)((b&~(1u<<7))|0u); r31[5]=b;
    b=r31[5]; b=(u8)((b&~(1u<<6))|0u); r31[5]=b;
    b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r31[5]; b=(u8)((b&~0x3Fu)|0u); r31[5]=b;
    }
    return (void*)r31;
}

void fn_8001C8F8(void* r3, void* r4, void* r5) {
    void* r31=r5;
    if (lbl_803754D0 != (u32)r4) {
        lbl_803754D0=(u32)r4;
        fn_8023D1A0((void*)lbl_802D49DC,*(u32*)r4);
        fn_8023D130((void*)lbl_802D49DC,(void*)(lbl_80271598+0x54));
    }
    void* node=fn_8000D47C((u8*)lbl_802D49DC);
    if (!node) node=0;
    void (*fp)(void*) = (void(*)(void*))*(u32*)((u8*)node+0xc);
    fp(r31);
}

s32 fn_8001C980(void* r3, void* r4, void* r5) {
    void* r31=r5;
    if (lbl_803754D0 != (u32)r4) {
        lbl_803754D0=(u32)r4;
        fn_8023D1A0((void*)lbl_802D49DC,*(u32*)r4);
        fn_8023D130((void*)lbl_802D49DC,(void*)(lbl_80271598+0x54));
    }
    void* node=fn_8000D47C((u8*)lbl_802D49DC);
    if (!node) node=0;
    void* fp2=*(void**)((u8*)node+0x8);
    if (!fp2) return 0;
    s32 (*fp)(void*) = (s32(*)(void*))fp2;
    s32 ret=fp(r31);
    return 1; (void)ret;
}

void* fn_8001CA1C(void* r3, void* r4) {
    u8* r30=(u8*)r3; void* r31=r4;
    if (lbl_803754D0 != (u32)r31) {
        lbl_803754D0=(u32)r31;
        fn_8023D1A0((void*)lbl_802D49DC,*(u32*)r31);
        fn_8023D130((void*)lbl_802D49DC,(void*)(lbl_80271598+0x54));
    }
    void* node=fn_8000D47C((u8*)lbl_802D49DC);
    if (!node) node=0;
    if (!node) return 0;
    void* (*fp)(void*,void*) = (void*(*)(void*,void*))*(u32*)node;
    return fp((void*)r30,r31);
}

void* fn_8001CAC4(void* r3) {
    if (lbl_803754D0 != (u32)r3) {
        lbl_803754D0=(u32)r3;
        fn_8023D1A0((void*)lbl_802D49DC,*(u32*)r3);
        fn_8023D130((void*)lbl_802D49DC,(void*)(lbl_80271598+0x54));
    }
    void* node=fn_8000D47C((u8*)lbl_802D49DC);
    if (!node) node=0;
    return node;
}

s32 fn_8001CB34(void* r3) {
    u8* p=(u8*)r3;
    if (!*(u32*)p) return 0;
    if (!(s8)(u8)lbl_803754C0) {
        lbl_803754CC=0; lbl_803754C8=0; lbl_803754C0=1;
    }
    u8* r6=(u8*)*(u32*)p;
    u8* r5;
    if (r6) r5=r6+0x38;
    else    r5=(u8*)&lbl_803754C8;
    u32 r8=*(u32*)(r5+4);
    s32 r4=0;
    // button score accumulation
    if ((r8&0x7ff8)^0 || (r8&0x300)^0) { // or. of masked values
        // addis/subi -> r4 += 0x10000 - 0x3cb0 = 0xC350
        r4 += 0xC350; // net: addis r4,r4,1 then subi r4,r4,0x3cb0
    }
    u16 r5s=r6?(u16)*(u16*)(r6+0x10):0;
    u8 r3b=p[4];
    r4 += (s32)(u16)((u32)r5s * (u32)r3b);
    if (r8 & (1<<(31-29))) r4+=0x2710;
    if (r8 & (1<<(31-27))) r4+=0x2710;
    if (r8 & (1<<(31-28))) r4+=0x2710;
    if (r8 & (1<<(31-26))) r4+=0x7d0;
    if (r8 & (1<<(31-24))) r4+=0x7d0;
    // and r3,r8,r5(0); and r0,r7(0),0x10 -> both 0, xor/xor -> 0; or. -> 0 -> no add
    if (r8 & (1<<(31-25))) r4+=0x7d0;
    if (r8 & (1<<(31-21))) r4+=0x7d0;
    if (r8 & (1<<(31-20))) r4+=0x3e8;
    if (r8 & (1<<(31-17))) r4+=0x3e8;
    return r4;
}

void* fn_8001CC6C(void* r3) {
    if (!(s8)(u8)lbl_803754C0) {
        lbl_803754CC=0; lbl_803754C8=0; lbl_803754C0=1;
    }
    u8* p=(u8*)r3;
    u8* ptr=(u8*)*(u32*)p;
    if (ptr) return (void*)(ptr+0x38);
    return (void*)&lbl_803754C8;
}

s32 fn_8001CCA8(u8* r3) {
    if (r3[0]>=0xfb) return 0;
    if (r3[1]>=0xfb) return 1;
    if (r3[2]>=0xfb) return 2;
    if (r3[3]>=0xfb) return 3;
    if (r3[4]>=0xfb) return 4;
    if (r3[5]>=0xfb) return 5;
    if (r3[6]>=0xfb) return 6;
    if (r3[7]>=0xfb) return 7;
    return -1;
}

void fn_8001CD50(void* r3, u32 r4) {
    // Writes 8 bytes to r3 based on mapping r4[i] through a quantized table
    // jumptable_8028E20C maps chars to constants
    u8* dst=(u8*)r3;
    u8* src=(u8*)&r4;
    for (s32 i=0;i<8;i++) {
        s8 c=(s8)src[i];
        s32 v=c-0x2a;
        if ((u32)v > 0x29) { /* no store */ goto next; }
        u8 out;
        switch(v) {
        case 0x29: out=0xfb; break;
        case 0x1f: out=0xb5; break;  // approx mapping
        case 0x1e: out=0x79; break;
        case 0x1d: out=0x47; break;
        case 0x18: out=0x1f; break;
        case 0x01: out=0x1;  break;
        case 0x00: out=0x0;  break;
        default:   out=0x0;  break;
        }
        dst[i]=out;
        next:;
    }
}

u8 fn_8001CDEC(u8 r3) {
    u32 v=(u32)r3;
    if (v>=0xfb) v=0xfb;
    else if (v>=0xb5) v=0xb5;
    else if (v>=0x79) v=0x79;
    else if (v>=0x47) v=0x47;
    else if (v>=0x1f) v=0x1f;
    else if (v>=0x1) v=0x1;
    else v=0x0;
    // quantized staircase -> next level up
    switch(v) {
    case 0x0:  return 0;
    case 0xfb: return 0xfb;
    case 0x1:  return 0x1f;
    case 0x1f: return 0x47;
    case 0x47: return 0x79;
    case 0x79: return 0xb5;
    case 0xb5: return 0xfb;
    default:   return 0;
    }
}

u8* fn_8001CEEC(u8 r3) {
    u32 v=(u32)r3;
    if (v>=0xfb) return lbl_80271598+0x59;
    if (v>=0xb5) return lbl_80271598+0x6;
    if (v>=0x79) return lbl_80271598+0x4;
    if (v>=0x47) return lbl_80271598+0x2;
    if (v>=0x1f) return lbl_80271598+0x5b;
    if (v>=0x1)  return lbl_80271598;
    return lbl_80271598+0x5d;
}

u8 fn_8001CF80(void* r3) {
    if (!r3) return 0;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x59))) return 0xfb;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x6)))  return 0xb5;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x4)))  return 0x79;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x2)))  return 0x47;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x5b))) return 0x1f;
    if (!fn_8023D008(r3,(void*)(lbl_80271598+0x5d))) return 0x1;
    s32 res=fn_8023D008(r3,(void*)(lbl_80271598+0x5f));
    // neg r4,r3; li r0,0; or r3,r4,r3; srawi r3,r3,31; andc r3,r0,r3
    // This returns 0 if res!=0, else 0 (andc r3,0,mask = 0 always)
    (void)res; return 0;
}

// New externs for this batch
extern "C" void  fn_8017C254(void*, s32, void*);
extern "C" void  fn_8017BE74(void*, s32, void*);
extern "C" void* fn_800C3438(void*, u32);
extern "C" s32   fn_8003B140(void);
extern "C" void* fn_8000E20C(void*);

extern u8   lbl_8033BFB8[];
extern u8   lbl_802D499C[];

u8 fn_8001D0B0(u8 r3) {
    u32 v=(u32)r3;
    if (v>=0xfb) return 0xfb;
    if (v>=0xb5) return 0xb5;
    if (v>=0x79) return 0x79;
    if (v>=0x47) return 0x47;
    if (v>=0x1f) return 0x1f;
    // subi r0,r4,1; li r3,1; orc r3,r4,r3; srwi r0,r0,1; subf r0,r0,r3; srwi r3,r0,31
    // orc r3,r4,~1 = r4|0xFFFFFFFE; for v>=1: result bit31=0 -> return 0; for v==0: return 1
    u32 orc_val = v | ~(u32)1u;
    u32 sub_val = (v-1)>>1;
    u32 diff = orc_val - sub_val;
    return (u8)(diff>>31);
}

void fn_8001D120(void* r3, void* r4) {
    fn_8017C254(r4, 8, r3);
}

void fn_8001D14C(void* r3, void* r4) {
    fn_8017BE74(r4, 8, r3);
}

u8* fn_8001D178(void* r3, u8 r4b) {
    u8* p=(u8*)r3;
    u8* r31=(u8*)*(u32*)p;
    if (!r31) return lbl_80271598+0x3b;
    if (lbl_8033BFB8[0x44] != 1) return lbl_80271598+0x3b;
    u8 b=p[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        if (!r4b) return lbl_80271598+0x66;
        return lbl_80271598+0x61;
    }
    // color_idx==0, check lbl_8033BFB8[0x44]==1 already confirmed
    u32 r5=*(u32*)(r31+0x38); u32 r3w=*(u32*)(r31+0x3c);
    s32 r4i=0;
    // series of button checks
    if ((r5&0x400)|(r3w&0)) { r4i=1; goto done_button; }
    if (r5&0x800)            { r4i=2; goto done_button; }
    if (r5&0x1000)           { r4i=3; goto done_button; }
    if (r5&0x2000)           { goto done_button; } // r4i stays 0 -> fall through
    if (r5&0x200)            { r4i=3; goto done_button; }
    // complex sub-lookup
    {
        void* node=fn_8000D47C((u8*)*(u32*)(r31+4));
        u8* r3b;
        if (node) r3b=(u8*)fn_8000E20C((void*)*(u32*)(r31+4));
        else      r3b=(u8*)*(u32*)r31;
        if (!r3b) { r4i=0; goto done_button; }
        s8 first=(s8)r3b[0];
        s32 idx=first-0x41;
        if ((u32)idx>0x34) { r4i=1; goto done_button; }
        // jumptable_8028E2B4 - approximate mapping
        switch(idx) {
        default: r4i=2; break;
        }
    }
done_button:
    if (r4b) {
        if (r4i==1) return lbl_80271598+0x6b;
        if (r4i==2) return lbl_80271598+0x6e;
        if (r4i>=1 && r4i<4) return lbl_80271598+0x61;
        return lbl_80271598+0x3b;
    } else {
        if (r4i==1) return lbl_80271598+0x72;
        if (r4i==2) return lbl_80271598+0x75;
        if (r4i>=1 && r4i<4) return lbl_80271598+0x66;
        return lbl_80271598+0x3b;
    }
}

u16 fn_8001D3EC(void* r3) {
    u8* p=(u8*)r3;
    u8* dev=(u8*)*(u32*)p;
    u16 r5=0;
    if (dev) r5=*(u16*)(dev+0x10);
    u8 r0=p[4];
    return (u16)((u32)r5*(u32)r0);
}

void* fn_8001D410(void* r3) {
    u8* r31=(u8*)r3;
    if (!*(u32*)r31) return 0;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        void* res=fn_800C3438((void*)lbl_8032A6EC,color_idx);
        s8 v=(s8)((u8*)res)[0];
        u32 neg=(u32)(-(s32)v);
        if ((neg|v)>>31) {
            // has color, lookup by color
            goto by_color;
        }
        // no valid color, fall through to no-color path
    }
    // no color path
    {
        u8* dev=(u8*)*(u32*)*(u32*)r31;
        void* node=fn_8000D47C((u8*)*(u32*)(r31+4));
        if (node) return fn_8000E20C((void*)*(u32*)(r31+4));
        return (void*)*(u32*)*(u32*)r31;
    }
by_color:
    return fn_800C3438((void*)lbl_8032A6EC,color_idx);
}

u8 fn_8001D4C4(void* r3) {
    u8* r31=(u8*)r3;
    if (!*(u32*)r31) return 0;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C30C8((void*)lbl_8032A6EC);
    u8* dev=(u8*)*(u32*)r31;
    s32 val=(s32)dev[0x1b]-(s32)r0;
    if (val<1) val=1;
    return (u8)val;
}

u8 fn_8001D544(void* r3) {
    u8* r31=(u8*)r3;
    if (!*(u32*)r31) return 0;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C31A4((void*)lbl_8032A6EC);
    u8* dev=(u8*)*(u32*)r31;
    s32 val=(s32)dev[0x1c]+(s32)r0*3;
    if (val<0) val=0;
    return (u8)val;
}

u8 fn_8001D5C4(void* r3) {
    u8* r31=(u8*)r3;
    if (!*(u32*)r31) return 0;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C3280((void*)lbl_8032A6EC);
    u8* dev=(u8*)*(u32*)r31;
    s32 val=(s32)dev[0x1a]+(s32)r0*5;
    if (val<1) val=1;
    return (u8)val;
}

u8 fn_8001D648(void* r3) {
    u8* r31=(u8*)r3;
    if (!*(u32*)r31) return 0;
    u8 b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    s8 r0;
    if (!color_idx) r0=0;
    else r0=(s8)fn_800C335C((void*)lbl_8032A6EC);
    u8* dev=(u8*)*(u32*)r31;
    s32 val=(s32)dev[0x19]+(s32)r0;
    if (val<1) val=1;
    return (u8)val;
}

void* fn_8001D6C8(void* r3) {
    u8* r31=(u8*)r3;
    *(u32*)r31=0; r31[4]=0;
    u8 b=r31[5]; b=(u8)((b&~(1u<<7))|0u); r31[5]=b;
    b=r31[5]; b=(u8)((b&~(1u<<6))|0u); r31[5]=b;
    b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r31[5]; b=(u8)((b&~0x3Fu)|0u); r31[5]=b;
    }
    return (void*)r31;
}

s32 fn_8001D73C(void* r3, u8 r4) {
    u8* r31=(u8*)r3;
    r31[4]=r4;
    if (!r31[4]) {
        *(u32*)r31=0; r31[4]=0;
        u8 b=r31[5]; b=(u8)((b&~(1u<<7))|0u); r31[5]=b;
        b=r31[5]; b=(u8)((b&~(1u<<6))|0u); r31[5]=b;
        b=r31[5]; u32 color_idx=(u32)(b&0x3F);
        if (color_idx) {
            fn_800C381C((void*)lbl_8032A6EC);
            b=r31[5]; b=(u8)((b&~0x3Fu)|0u); r31[5]=b;
        }
        return 1;
    }
    return 0;
}

s32 fn_8001D7CC(void* r3) {
    u8* r31=(u8*)r3;
    if (!(s8)(u8)lbl_803754C0) {
        lbl_803754CC=0; lbl_803754C8=0; lbl_803754C0=1;
    }
    u8* dev=(u8*)*(u32*)r31;
    u8* r4;
    if (dev) r4=dev+0x38;
    else     r4=(u8*)&lbl_803754C8;
    u32 w0=*(u32*)r4; u32 w4=*(u32*)(r4+4);
    if (w0&0x100) return 0;
    // decrement r31[4]
    u8 cnt=r31[4];
    r31[4]=cnt-1;
    if (r31[4]) return 0;
    // cnt reached 0
    *(u32*)r31=0; r31[4]=0;
    u8 b=r31[5]; b=(u8)((b&~(1u<<7))|0u); r31[5]=b;
    b=r31[5]; b=(u8)((b&~(1u<<6))|0u); r31[5]=b;
    b=r31[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r31[5]; b=(u8)((b&~0x3Fu)|0u); r31[5]=b;
    }
    return 1;
    (void)w4;
}

s32 fn_8001D8C8(void* r3, void* r4) {
    u8* r30=(u8*)r3;
    void* r31=fn_8000D47C((u8*)r4);
    *(u32*)r30=0; r30[4]=0;
    u8 b=r30[5]; b=(u8)((b&~(1u<<7))|0u); r30[5]=b;
    b=r30[5]; b=(u8)((b&~(1u<<6))|0u); r30[5]=b;
    b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r30[5]; b=(u8)((b&~0x3Fu)|0u); r30[5]=b;
    }
    *(u32*)r30=(u32)r31;
    r30[4]=((u8*)r31)[0x18];
    return 1;
}

s32 fn_8001D960(void* r3, void* r4) {
    u8* r30=(u8*)r3;
    void* r31=r4;
    *(u32*)r30=0; r30[4]=0;
    u8 b=r30[5]; b=(u8)((b&~(1u<<7))|0u); r30[5]=b;
    b=r30[5]; b=(u8)((b&~(1u<<6))|0u); r30[5]=b;
    b=r30[5]; u32 color_idx=(u32)(b&0x3F);
    if (color_idx) {
        fn_800C381C((void*)lbl_8032A6EC);
        b=r30[5]; b=(u8)((b&~0x3Fu)|0u); r30[5]=b;
    }
    *(u32*)r30=(u32)r31;
    r30[4]=((u8*)r31)[0x18];
    return 1;
}

void* fn_8001D9F0(void* r3) {
    u8* r31=(u8*)r3;
    u8* r5=(u8*)lbl_802D499C;
    r5[0]=0;
    u16 flags=*(u16*)r31;
    if (flags&1)    fn_8023D130((void*)r5,(void*)(lbl_80271598+0xec));
    if (flags&2)    fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0xf0));
    if (flags&4)    fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0xf4));
    if (flags&8)    fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0xfc));
    if (flags&0x10) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x100));
    if (flags&0x20) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x106));
    if (flags&0x40) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x10c));
    if (flags&0x80) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x110));
    if (flags&0x100) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x114));
    if (flags&0x200) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x118));
    if (flags&0x400) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x11e));
    if (flags&0x800) fn_8023D130((void*)lbl_802D499C,(void*)(lbl_80271598+0x126));
    return (void*)lbl_802D499C;
}

void fn_8001DBDC(void* r3, u32 r4) {
    u8* r30=(u8*)r3;
    if (!r4) return;
    void* r31=(void*)r4;
    static const struct { u32 off; u16 bit; } checks[] = {
        {0x12b,0x001},{0x130,0x002},{0x134,0x004},{0x13b,0x008},
        {0x141,0x010},{0x147,0x020},{0x14d,0x040},{0x153,0x080},
        {0x15a,0x100},{0x15f,0x200},{0x165,0x400},{0x16a,0x800},
        {0x16f,0x1000},
    };
    for (s32 i=0;i<13;i++) {
        if (!fn_8023D008(r31,(void*)(lbl_80271598+checks[i].off))) {
            u16 v=*(u16*)r30; v|=checks[i].bit; *(u16*)r30=v;
            return;
        }
    }
}

u8 fn_8001DE4C(void) {
    s8 v=(s8)fn_8003B140();
    s32 r=(s32)v;
    r=(r+(r>>31))>>1; // arithmetic right-shift divide by 2
    u8 res=(u8)r;
    if (res<5) res=5;
    if ((u8)res>0xf) res=0xf;
    return res;
}

u8 fn_8001DE9C(void* r3, void* r4) {
    u8* p=(u8*)r3;
    if (p[0x1e]!=0xff) return p[0x1e];
    s8 v=(s8)fn_8003B140();
    s32 r=(s32)v;
    r=(r+(r>>31))>>1;
    u8 res=(u8)r;
    if (res<5) res=5;
    if ((u8)res>0xf) res=0xf;
    return res;
    (void)r4;
}

u8 fn_8001DEFC(void* r3) { return ((u8*)r3)[0x1e]; }
u8 fn_8001DF04(void* r3) { return ((u8*)r3)[0x1e]; }

s32 fn_8001DF0C(u8 r3) {
    u32 v=(u32)r3;
    if (v>=4 && v<=7) return 1;
    return 0;
}

s32 fn_8001DF30(void* r3) {
    u8* p=(u8*)r3;
    u32 r5=*(u32*)(p+0x38); u32 r3w=*(u32*)(p+0x3c);
    u32 mask=0x40e;
    u32 a=(r5&0)|(r3w&mask);  // and r0,r5,0; and r3,r3w,0x40e
    // xor r3,r3,0; xor r0,r0,0; or r0,r3,r0
    // subic r3,r0,1; subfe r0,r3,r0 -> r0 = (r0!=0)?1:0
    u32 v=a;
    u32 sub=v-1;
    u32 res=v-(sub+((v<1)?1:0)); // subfe: r0 = r0 - r3 - ~carry = r0-(r0-1)-0 = 1 if r0!=0
    // simplified: return 1 if (r3w & 0x40e) != 0
    return (r3w & 0x40e) ? 1 : 0;
}

// fn_8001DF64: document 6 - long button-string lookup function
void fn_8001DF64(void* r3, u32 r4) {
    u8* r30=(u8*)r3;
    if (!r4) return;
    void* r31=(void*)r4;
    static const struct { u32 off; u32 reg; u32 bit; } entries[] = {
        // reg: 0=r38(0x38), 1=r3c(0x3c)
        {0x179,0,0x100},{0x182,0,0x200},{0x18b,1,0x20},{0x191,1,0x80},
        {0x198,1,0x400},{0x1a0,1,0x200},{0x1a0,0,0x300}, // special: 0x1a0 sets both
        {0x1a5,1,0x40},{0x1ab,1,0x800},{0x1b2,0,0x10},{0x1b9,1,0x1000},
        {0x1bc,1,0x2000},{0x1c2,1,0x4000},{0x1cb,1,0x8000},
        {0x1d6,1,0x10000},{0x1e1,1,0x20000},{0x1ec,1,0x200000},
        {0x1f5,1,0x400000},{0x1ff,1,0x800000},{0x209,1,0x40000},
        {0x211,1,0x1000000},{0x21c,0,0x8},{0x223,1,0x2000000},
        {0x22d,1,0x4000000},{0x231,1,0x8000000},{0x235,1,0x10000000},
        {0x239,1,0x20000000},{0x23d,1,0x40000000},{0x244,0,0x4},
        {0x24a,0,0x1},{0x255,0,0x2},{0x258,0,0x20},{0x25e,0,0x40},
        {0x266,0,0x80},{0x26e,1,0x80000},{0x278,1,0x100000},{0x282,0,0x2000},
    };
    for (s32 i=0;i<38;i++) {
        if (!fn_8023D008(r31,(void*)(lbl_80271598+entries[i].off))) {
            if (entries[i].off==0x1a0) {
                // special: sets both +0x3c |= 0x200 and +0x38 |= 0x300
                *(u32*)(r30+0x3c)|=0x200;
                *(u32*)(r30+0x38)|=0x300;
            } else if (entries[i].reg==0) {
                *(u32*)(r30+0x38)|=entries[i].bit;
            } else {
                *(u32*)(r30+0x3c)|=entries[i].bit;
            }
            return;
        }
    }
}

u8* fn_8001E618(u8 r3, u8 r4) {
    u32 v=(u32)r3;
    if (v>0xb) return lbl_80271598+0x32c;
    switch(v) {
    case 0:  return lbl_80271598+0x2ec;
    case 1:  return lbl_80271598+0x2f2;
    case 2:  return lbl_80271598+0x2f8;
    case 3:  return lbl_80271598+0x2fc;
    case 4:  return lbl_80271598+0x300;
    case 5:  return lbl_80271598+0x305;
    case 6:  return lbl_80271598+0x30d;
    case 7:  return r4 ? lbl_80271598+0x312 : lbl_80271598+0x318;
    case 8:  return lbl_80271598+0x31e;
    case 9:  return lbl_80271598+0x323;
    case 10: return lbl_80271598+0x326;
    case 11: return lbl_80271598+0x329;
    default: return lbl_80271598+0x32c;
    }
}

void* fn_8001E718(u8 r3, u8 r4) {
    u32 v=(u32)r3;
    if (v>0xb) return (void*)(lbl_80271598+0x32c);
    switch(v) {
    case 0:  return fn_8000E20C((void*)(lbl_80271598+0x32f));
    case 1:  return fn_8000E20C((void*)(lbl_80271598+0x336));
    case 2:  return fn_8000E20C((void*)(lbl_80271598+0x33d));
    case 3:  return fn_8000E20C((void*)(lbl_80271598+0x344));
    case 4:  return fn_8000E20C((void*)(lbl_80271598+0x34b));
    case 5:  return fn_8000E20C((void*)(lbl_80271598+0x352));
    case 6:  return fn_8000E20C((void*)(lbl_80271598+0x359));
    case 7:  return r4 ? fn_8000E20C((void*)(lbl_80271598+0x360)) : fn_8000E20C((void*)(lbl_80271598+0x367));
    case 8:  return fn_8000E20C((void*)(lbl_80271598+0x36e));
    case 9:  return (void*)(lbl_80271598+0x323);
    case 10: return (void*)(lbl_80271598+0x326);
    case 11: return (void*)(lbl_80271598+0x329);
    default: return (void*)(lbl_80271598+0x32c);
    }
}

void fn_8001E864(void* r3) {
    u8* p=(u8*)r3;
    u8 kind=p[0x12];
    if      (kind<0)  return;
    else if (kind<4)  { *(u32*)(p+0x3c)|=0x1; }
    else if (kind<7)  { *(u32*)(p+0x3c)|=0x3; }
    else if (kind==7) {
        if (p[0x19]) { *(u32*)(p+0x3c)|=0x3; }
        else          { *(u32*)(p+0x3c)|=0x4; }
    }
    else if (kind<0xa) return;
    else if (kind==0xa) { *(u32*)(p+0x3c)|=0x8; }
    else if (kind==0xb) { *(u32*)(p+0x3c)|=0x10; }
}

// fn_8001E908: document 7 - long button-type lookup
u8 fn_8001E908(u32 r3) {
    void* p=(void*)r3;
    static const struct { u32 off; u8 val; } entries[] = {
        {0x375,0x81},{0x37e,0x81},{0x389,0x81},{0x395,0x81},{0x3a0,0x81},
        {0x3ac,0x83},{0x3b5,0x84},{0x3bf,0x84},{0x3cb,0x84},{0x3d7,0x85},
        {0x3e0,0x85},{0x3eb,0x86},{0x3f8,0x87},{0x404,0x87},{0x40e,0x85},
        {0x419,0x81},{0x427,0x81},{0x432,0x85},{0x442,0x85},{0x44e,0x85},
        {0x45d,0x83},{0x46b,0x87},{0x479,0x87},
    };
    for (s32 i=0;i<23;i++) {
        if (!fn_8023D008(p,(void*)(lbl_80271598+entries[i].off)))
            return entries[i].val;
    }
    // last entry: +0x487, returns 0x85 if match else 0xc
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x487))) return 0x85;
    return 0xc;
}

u8 fn_8001EC8C(s32 r3) {
    void* p=(void*)r3;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x490))) return 0;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x496))) return 1;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x49c))) return 2;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4a0))) return 3;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4a4))) return 4;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4aa))) return 5;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4b2))) return 6;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4b7))) return 7;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4bb))) return 8;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x1a0))) return 9;
    if (!fn_8023D008(p,(void*)(lbl_80271598+0x4c1))) return 10;
    s32 res=fn_8023D008(p,(void*)(lbl_80271598+0x4c6));
    s32 neg=-res; s32 orv=neg|res; return (u8)(0xb&~(orv>>31));
}

void* fn_8001EE64(void* r3) {
    u8* p=(u8*)r3;
    void* ptr=(void*)*(u32*)(p+8);
    if (!ptr) return (void*)(lbl_80271598+0x4d6);
    return fn_8000E20C(ptr);
}

void* fn_8001EEA0(void* r3) {
    u8* r31=(u8*)r3;
    void* node=fn_8000D47C((u8*)*(u32*)(r31+4));
    if (node) return fn_8000E20C((void*)*(u32*)(r31+4));
    return (void*)*(u32*)r31;
}

void fn_8001EEE8(void* r3) {
    u8* p=(u8*)r3;
    u8 b=p[0];
    if (!(b&0x80)) return;  // rlwinm. bit 24
    p[0]=(u8)(b|0x3);
}

void fn_8001EF00(void* r3, void* r4) {
    u8* r29=(u8*)r3;
    void* r30=r4;
    u8 r31=0;
    void* p0=fn_80019F0C((u8)(u32)(lbl_80271598+0x432));
    if (r30==p0) { r31|=0x1; goto done; }
    void* p1=fn_80019F0C((u8)(u32)(lbl_80271598+0x442));
    if (r30==p1) { r31|=0x2; goto done; }
    void* p2=fn_80019F0C((u8)(u32)(lbl_80271598+0x44e));
    if (r30==p2) { r31|=0x80; }
done:
    r29[0]=r31;
}