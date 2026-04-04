#include <dolphin/types.h>

extern "C" u32 OSDisableInterrupts();
extern "C" void OSEnableScheduler();
extern "C" void OSDisableScheduler();
extern "C" void OSRestoreInterrupts(u32);
extern "C" void fn_80213C20(void*);
extern "C" void fn_80213B34(void*);
extern "C" void OSInitThreadQueue(void*);
extern "C" u32 fn_80212D30();
extern "C" void fn_802132B4(void*, void*, void*, int, int, int, int, int);
extern "C" void fn_8021373C(void*);
extern "C" float fn_80240E20(float);
extern "C" float fn_80241388(float);
extern "C" void fn_80235530(void*, u32, u32);
extern "C" u64 OSGetTime();
extern "C" u32 OSGetTick();
extern "C" void fn_80010CA0(u8*, u32*, float);
extern "C" void fn_80229B48(u32, u32, u32);
extern "C" void fn_8020B098(void*, float, float, float);
extern "C" void fn_8020AB7C(void*, void*, void*);
extern "C" void fn_8020B694(void*, float, float, float, float, float, float);
extern "C" void fn_8022D9A8(void*, int);
extern "C" void fn_80228914();
extern "C" void fn_80228240(int, int);
extern "C" void fn_8022894C(int, int, int, int, int);
extern "C" void fn_8006E19C(int);
extern "C" void fn_8006E1DC(int, int, int, int, int, int, int);
extern "C" void fn_8006E0D0(int);
extern "C" void fn_8022DE2C(void*, void*, void*, void*);
extern "C" void fn_8022DDB4(void*, void*, void*);
extern "C" void fn_8022DAD8(void*, s16);
extern "C" void fn_80009868(u8, void*, void*);
extern "C" void fn_80009148(void*, u8, u8);
extern "C" void fn_8006E55C(s16);
extern "C" void fn_8022DD48(float, float, float, float, float, float);
extern "C" void fn_8006E468(int, int, int);
extern "C" void fn_8006E50C(int);
extern "C" void fn_8006E4B4(int, int, int, int, int);
extern "C" void fn_8020B118(void*, float, float);
extern "C" void fn_8022DBAC(void*, int, int);
extern "C" void fn_80104FB4(void*);
extern "C" void fn_801051B8(void*, void*, void*, void*, void*, void*, void*, void*);
extern "C" void fn_8022B3A0(void*, void*, void*, void*, void*, void*, void*, void*, u32, u32, u32, u32);
extern "C" void fn_8022B9AC(void*, int);
extern "C" s32 fn_80011138(s32);
extern "C" void fn_80005C40();
extern "C" void fn_8022B7EC(void*);
extern "C" void fn_8022B7DC(void*);
extern "C" void fn_8022BA4C(void*, void*);
extern "C" void fn_8006E090(int);
extern "C" void fn_8006DFEC(int, int, int, int);
extern "C" void fn_8006DD20(int, int, int, int);
extern "C" void fn_8006DE78(int, int, int, int, int);
extern "C" void fn_8006DF68(int, int, int, int, int, int);
extern "C" void fn_8006DE0C(int, int, int, int, int);
extern "C" void fn_8006DEE4(int, int, int, int, int, int);
extern "C" void fn_8006DD8C(int, int);
extern "C" void fn_8006E110(int, int, int, int);
extern "C" void fn_8020AB1C(void*);
extern "C" u8* fn_8018F780();
extern "C" void fn_8020EB84(u8*, int, u8*, u8*, ...);
extern "C" void fn_80008D64(float, float, float, float);
extern "C" void fn_8014C620(float, float, float);
extern "C" void fn_8000E7AC(float, float, float, float, float, s16, s16);
extern "C" void fn_8000E634(float, float, float, float, float, s16, s16);
extern "C" void fn_8000E4BC(float, float, float, float, float, s16, s16);
extern "C" void fn_8006F7DC(void*, void*, void*, void*);
extern "C" void fn_8006F8E4(void*, void*);
extern "C" void fn_8020AB48(void*, void*);
extern "C" void fn_8020AE58(void*, int, float);
extern "C" void* fn_800C4C34(void*, int, int, int);

extern u8 lbl_802AF6A0[];
extern u8 lbl_802AF8A0[];
extern u8 lbl_802AFBB8[];
extern void fn_800064C8();
extern u8 lbl_803753D8;
extern u8 lbl_803753D1;
extern u8 lbl_803753D0;
extern u32 lbl_803753D4;
extern float lbl_80376E78;
extern float lbl_80376E7C;
extern float lbl_80376E80;
extern float lbl_80376E84;
extern float lbl_80376E88;
extern float lbl_80376E8C;
extern float lbl_80376E90;
extern float lbl_80376E94;
extern u32 lbl_8028D690[];
extern u32 lbl_803753B8;
extern u32 lbl_803753B4;
extern u32 lbl_803753C8;
extern u32 lbl_803753CC;
extern u32 lbl_803753C4;
extern u32 lbl_803753C0;
extern u32 lbl_803753E0;
extern u8 lbl_80375044[];
extern float lbl_80376E98;
extern float lbl_80376EA0;
extern float lbl_80376EA8;
extern float lbl_80376EAC;
extern float lbl_80376EB0;
extern float lbl_80376EB4;
extern float lbl_80376EB8;
extern float lbl_80376EBC;
extern float lbl_80376EC0;
extern float lbl_80376EC4;
extern float lbl_80376EC8;
extern float lbl_80376ED0;
extern float lbl_80376EA4;
extern u8 lbl_8028D6C8[];
extern u8 lbl_8028D70C[];
extern u8 lbl_8028D6DC[];
extern u8 lbl_802709E8[];
extern u32 lbl_80375040;
extern u8 lbl_802B0BB8[];

extern "C" void fn_8014CDE8(int, int, int, int, void*, void*);
extern "C" void fn_8000C734(void*);
extern "C" void fn_8000C028(void*);
extern float lbl_80376EDC;
extern float lbl_80376EE0;
extern float lbl_80376EE4;
extern float lbl_80376ED8;
extern u8 lbl_802B7FBC[];
extern u8 lbl_8028D7E0[];
extern u8 lbl_802B7FDC[];
extern u8 lbl_80270A28[];
extern "C" void fn_8000A57C(void*, void*, void*, void*, void*);
extern void fn_8000B5F8();

extern u8 lbl_802B7BB8[];
extern u32 lbl_803753E8;
extern "C" void fn_8000C7D4(u8*);
extern "C" void fn_8000BACC(u8*, void*);
extern "C" void fn_8000C2F4(void*);

extern "C" u8* fn_8000D47C(u8*);
extern "C" void fn_8023D1A0(u8*, u8*);
extern "C" void fn_8023ABC4(u8*, u8*, int, u8*, ...);
extern "C" u32 strlen(const char*);
extern "C" void fn_8024180C(u8*, u8*, int);
extern "C" void fn_80105124(u32*);
extern "C" void fn_8000E924(u8*, s16, s16, float, float, float, float, float, u8, u8);
extern "C" void _savefpr_27();
extern "C" void _restfpr_27();
extern "C" void fn_800056CC(u8*, u32, u8*, ...);
extern u8 lbl_802B8000[];
extern u8 lbl_80270AB8[];
extern u8 lbl_80270B38[];
extern u8 lbl_80270A28[];
extern u8 lbl_802B8FF0[];
extern u8 lbl_802B91F0[];
extern u8 lbl_802B9300[];
extern u8 lbl_8028D740[];
extern u32 lbl_803753F8;
extern u8 lbl_803753F0[];
extern u32 lbl_80375048;
extern u8 lbl_80270AA8[];
extern u8 lbl_80270AB8[];

extern "C" void fn_80104FA8(void*);
extern "C" void fn_80105124(u32*);
extern "C" void fn_80105618();
extern "C" u32 fn_8010579C(void*);
extern "C" u32 fn_80105640(void*);
extern "C" void fn_801053CC(void*);
extern "C" void fn_8022B81C(void*);
extern "C" void fn_8022B798(void*, int, int);
extern "C" void fn_8023AC98(void*, void*, void*, void*, void*);
extern "C" void fn_8006F9F0(void*, void*);
extern "C" void fn_800C48D4(int);
extern "C" void fn_80105BA4();
extern "C" void fn_80105A5C(void*, void*, int);
extern "C" void fn_8010511C();
extern "C" void fn_80105568(int);
extern "C" void fn_8006FB14(void*, void*);
extern "C" void fn_80241518(double, double);
extern "C" void fn_801058FC(void*, void*);
extern "C" void fn_80105618();
extern float lbl_80376EE8;
extern float lbl_80376EEC;
extern float lbl_80376EF0;
extern float lbl_80376EF4;
extern float lbl_80376EF8;
extern float lbl_80376EFC;
extern float lbl_80376F00;
extern float lbl_80376F04;
extern float lbl_80376F08;
extern double lbl_80376F10;
extern double lbl_80376F18;
extern double lbl_80376F20;
extern double lbl_80376F28;
extern double lbl_80376F30;
extern double lbl_80376F38;
extern float lbl_80376F40;
extern double lbl_80376F48;
extern double lbl_80376F50;
extern u8 lbl_8028D800[];
extern u8 lbl_8028D8A4[];
extern u8 lbl_8028DB5C[];
extern u8 lbl_8028DCB8[];
extern u8 lbl_8028DA00[];
extern u32 lbl_80375400;
extern u32 lbl_80375408;
extern u8 lbl_80375410;
extern u32 lbl_8037540C;
extern u8 lbl_80375414[];
extern u8 lbl_80375418;
extern u8 lbl_80270B40[];
extern u8 lbl_80270B38[];
extern u32 lbl_803753E8;

u8* fn_8000CC18(u8* r29, s16 r30);
void fn_8000CBC8(u8* r3, s16 r4);

int fn_800063A4(u32* r3, u32* r4, u32 r5) {
    r3--;
    r4--;
    r5 >>= 2;
    do {
        u32 r11 = *++r3;
        u32 r12 = *++r4;
        if (r11 != r12)
            return 1;
    } while (--r5 > 0);
    return 0;
}

void fn_800063D8(u32* r3, u32 r4, u32 r5) {
    r5 >>= 2;
    r3--;
    do {
        *++r3 = r4;
    } while (--r5 > 0);
}

void fn_800063F0(u32* r3, u32 r4, u32 r5) {
    r5 >>= 3;
    r3--;
    do {
        *++r3 = r4;
        *++r3 = r4;
    } while (--r5 > 0);
}

void fn_8000640C(u32* r3, u32* r4, u32 r5) {
    r3--;
    r5 >>= 2;
    r4--;
    do {
        u32 r11 = *++r4;
        *++r3 = r11;
    } while (--r5 > 0);
}

void fn_8000642C(u32* r3, u32* r4, u32 r5) {
    r3--;
    r5 >>= 3;
    r4--;
    do {
        u32 r11 = *++r4;
        *++r3 = r11;
        u32 r12 = *++r4;
        *++r3 = r12;
    } while (--r5 > 0);
}

void fn_80006454() {
    lbl_803753D1 = 0;
    lbl_803753D0 = 0;
    OSInitThreadQueue(&lbl_803753D8);
    u32 r3 = fn_80212D30();
    lbl_803753D4 = r3;
    fn_802132B4(
        lbl_802AF8A0,
        lbl_802AFBB8 + 0x1000,
        fn_800064C8,
        0,
        0x1000,
        0x1000,
        0x10,
        1
    );
    fn_8021373C(lbl_802AF8A0);
}


void fn_800064C8() {
    goto check;
loop:
    {
        s8 idx = (s8)*(u8*)&lbl_803753D0;
        u8* entry = lbl_802AF6A0 + ((s32)idx << 4);
        u8* ptr = *(u8**)entry;
        u8* end = *(u8**)(entry + 4);
        u8 type = *ptr;
        u8* cur = end;
        if (type == 0x10) {
            u8 b1 = ptr[1];
            u8 b2 = ptr[2];
            u8 b3 = ptr[3];
            ptr += 4;
            s32 skip = (s32)(b2 << 8) + (s32)(b3 << 16) + b1;
            s8 r3val = 0;
            s8 r31val = 0;
            while (true) {
                s32 remain = end - cur;
                if (skip == remain) break;
                if (r3val == 0) {
                    u8 b = *ptr++;
                    r3val = 8;
                    r31val = (s8)b;
                }
                if (r31val >= 0) {
                    u8 b = *ptr++;
                    *cur++ = b;
                } else {
                    u8 b0 = ptr[0];
                    u8 b1b = ptr[1];
                    ptr += 2;
                    s32 len = (s32)((b0 >> 4) & 0xF) + 3;
                    u8* src = cur - (((b0 & 0xF) << 8) + b1b) - 1;
                    if (len > 0) {
                        if (len > 8) {
                            s32 chunks = (len + 7) >> 3;
                            s32 done = 0;
                            if (len > 0) {
                                do {
                                    cur[0] = src[0]; cur[1] = src[1];
                                    cur[2] = src[2]; cur[3] = src[3];
                                    cur[4] = src[4]; cur[5] = src[5];
                                    cur[6] = src[6]; cur[7] = src[7];
                                    src += 8; cur += 8; done += 8;
                                } while (done < chunks * 8 && done < len);
                            }
                            s32 left = len - done;
                            for (s32 i = 0; i < left; i++)
                                *cur++ = *src++;
                        } else {
                            for (s32 i = 0; i < len; i++)
                                *cur++ = *src++;
                        }
                    }
                }
                r3val--;
                r31val = (s8)((s32)r31val << 1);
            }
        }
        u8* p = lbl_802AF6A0 + (((s8)lbl_803753D0) << 4);
        if (*(u32*)(p + 8) != 0) {
            u32 saved = OSDisableInterrupts();
            OSDisableScheduler();
            u8 idx2 = lbl_803753D0;
            u8* entry2 = lbl_802AF6A0 + (((s8)idx2) << 4);
            void (*fn)(u32, u32, u32, u32) = (void(*)(u32,u32,u32,u32))*(u32*)(entry2 + 8);
            u32 a = *(u32*)(entry2 + 0xc);
            u32 b = *(u32*)entry2;
            u32 c = *(u32*)(entry2 + 4);
            fn(a, b, c, 0);
            OSEnableScheduler();
            OSRestoreInterrupts(saved);
        }
        lbl_803753D0 = (lbl_803753D0 + 1) & 0x1F;
    }
check:
    {
        s8 cur = (s8)lbl_803753D0;
        s8 end = (s8)lbl_803753D1;
        if (cur != end) goto loop;
    }
    fn_80213C20(&lbl_803753D8);
    fn_80213B34(&lbl_803753D8);
    goto check;
}

void fn_800066F0(u32 r3, u32 r4, u32 r5, u32 r6) {
    u8 idx = lbl_803753D1;
    s32 slot = ((s8)idx) << 4;
    u8* entry = lbl_802AF6A0 + slot;
    *(u32*)entry = r3;
    *(u32*)(entry + 4) = r4;
    *(u32*)(entry + 8) = r5;
    *(u32*)(entry + 0xc) = r6;
    lbl_803753D1 = (idx + 1) & 0x1F;
    fn_80213C20(&lbl_803753D8);
}

void fn_80006748(s16* r3) {
    s16 x = r3[0];
    s16 y = r3[1];
    s16 negx = (s16)(-x);
    s16 negy = (s16)(-y);
    r3[0] = x + negx;
    r3[1] = y + negy;
    r3[2] = r3[2] + negx;
    r3[3] = r3[3] + negy;
}

int fn_80006790(s16* r3, s16* r4) {
    if (r3[2] < r4[0]) return 0;
    if (r4[2] < r3[0]) return 0;
    if (r3[3] < r4[1]) return 0;
    s16 r5 = r4[3];
    s16 r0 = r3[1];
    s32 diff = (s32)r5 - (s32)r0;
    s32 sign = (s32)r5 >> 31;
    u32 usign = (u32)r0 >> 31;
    return (int)((s32)(sign + usign) - diff);
}

void fn_800067F4(u32 r3, u32 r4, u32* r5, u32* r6, u32* r7) {
    u32 r31 = (u32)r6;
    u32 r30 = (u32)r5;
    u32 r29 = (u32)r7;
    u32 r8 = 0x80000000;
    u32 r0 = *(u32*)(r8 + 0xf8);
    u32 r6b = r0 >> 2;
    fn_80235530(&r3, r4, r6b);
    u32 div60 = 0x88888889u;
    u32 div3600 = 0x91a2b3c5u;
    u32 r5b = (u32)(((u64)div60 * r4) >> 32) >> 5;
    u32 r7b = r5b;
    u32 r0b = (u32)(((u64)div3600 * r4) >> 32) >> 11;
    u32 r3b = (u32)(((u64)div60 * r5b) >> 32) >> 5;
    u32 r6c = r7b * 60;
    r3b = r3b * 60;
    *(u32*)r29 = r4 - r6c;
    *(u32*)r31 = r5b - r3b;
    *(u32*)r30 = r0b;
}

void fn_80006894() {
    u32 r4 = lbl_803753B8 + 1;
    u32 r0 = lbl_803753C8;
    u32 r3 = lbl_803753CC;
    lbl_803753B8 = r4;
    lbl_803753C4 = r3;
    lbl_803753C0 = r0;
    u64 time = OSGetTime();
    lbl_803753CC = (u32)(time & 0xFFFFFFFF);
    lbl_803753C8 = (u32)(time >> 32);
}

void fn_800068D8(u64* result) {
    u32 lo = lbl_803753CC - lbl_803753C4;
    u32 hi = lbl_803753C8 - lbl_803753C0;
    if (lbl_803753C4 > lbl_803753CC) hi--;
    *result = ((u64)hi << 32) | lo;
}

u32 fn_800068F4() {
    return lbl_803753B8;
}

float fn_800068FC(u32 r3, float f1, float f2, float f3, float f4) {
    float f28 = f1; // start
    float f29 = f2; // end
    float f30 = f3; // t (progress)
    float f31 = f4; // duration

    if (lbl_80376E78 == f31) {
        return f29;
    }

    if (r3 > 0xc) {
        return lbl_80376E78;
    }

    switch (r3) {
    case 0: // linear
        return f28 + (f30 * (f29 - f28)) / f31;

    case 1: // ease in quad
    {
        float t2 = f30 * f30;
        float d2 = f31 * f31;
        return f28 + (t2 * (f29 - f28)) / d2;
    }

    case 2: // ease in cubic
    {
        float t2 = f30 * f30;
        float d2 = f31 * f31;
        return f28 + ((f30 * t2) * (f29 - f28)) / (f31 * d2);
    }

    case 3: // ease in quartic
    {
        float t2 = f30 * f30;
        float d2 = f31 * f31;
        return f28 + ((f30 * t2) * (f30 * t2) * (f29 - f28)) / (f31 * d2 * f31 * d2);
    }

    case 4: // ease in sine
    {
        float f0 = (f30 / f31) * lbl_80376E80 * lbl_80376E7C;
        float f2b = (float)fn_80240E20(f0);
        float diff = f29 - f28;
        float rem = f31 - f30;
        float d2 = f31 * f31;
        return f29 - (diff * f2b * rem * rem) / d2;
    }

    case 5: // ease out sine
    {
        float f1b = (f30 * f30) / f31 * lbl_80376E80 * lbl_80376E7C / lbl_80376E84;
        float f2b = (float)fn_80240E20(f1b);
        float diff = f29 - f28;
        float rem = f31 - f30;
        float d2 = f31 * f31;
        return f29 - (diff * f2b * rem * rem) / d2;
    }

    case 6: // ease in out quad
    {
        float f1b = f31 - f30;
        float f3b = f29 - f28;
        float d2 = f31 * f31;
        return (f28 + f3b) - (f1b * f1b * f3b) / d2;
    }

    case 7: // ease in out cubic
    {
        float f4b = f31 - f30;
        float f3b = f29 - f28;
        float d2 = f31 * f31;
        float f2b = f28 + f3b;
        return f2b - (f4b * f4b * f4b * f3b) / (f31 * d2);
    }

    case 8: // ease in out quartic
    {
        float f4b = f31 - f30;
        float d2 = f31 * f31;
        float f3b = f29 - f28;
        float f2b = f28 + f3b;
        return f2b - (f4b * f4b * f4b * f4b * f3b) / (f31 * d2 * f31 * d2);
    }

    case 9: // ease in out sine
    {
        float f1b = (f30 * f30) / f31 * lbl_80376E80 * lbl_80376E7C / lbl_80376E88;
        float f2b = (float)fn_80240E20(f1b);
        float f0 = lbl_80376E78;
        float f3b = f31 - f30;
        float denom = f31 * f31;
        float numer = f3b * f2b * f3b * f2b;
        float rat = numer / denom;
        if (rat < f0) rat = -rat;
        return f29 - rat * (f29 - f28);
    }

    case 10: // bounce ease in
    {
        float f0 = lbl_80376E80 * f30 / f31;
        float f3b = (float)fn_80240E20(f0);
        float f1b = lbl_80376E8C - f3b;
        float f2b = f29 - f28;
        return f28 + f2b * f1b * lbl_80376E90;
    }

    case 11: // bounce ease out
    {
        float f0 = lbl_80376E94 * f30 / f31;
        float f1b = (float)fn_80241388(f0);
        return f28 + (f29 - f28) * f1b;
    }

    case 12: // bounce ease in out
    {
        float f0 = lbl_80376E94 * f30 / f31;
        float f2b = (float)fn_80240E20(f0);
        float f1b = lbl_80376E8C - f2b;
        return f28 + (f29 - f28) * f1b * lbl_80376E90;
    }

    default:
        return lbl_80376E78;
    }
}

void fn_80006C58(s32 r29, s32 r30, u32 r31, s32 r3, s32 r4, s32 r5, s32 r6, s32 r7) {
    u8 buf[8];
    u8 r8 = 0, r9 = 0;
    if (r6 & 0xFF) {
        if (r7 < 0) {
            r7 = -r7;
            buf[0] = '-';
        } else {
            buf[0] = '+';
        }
        r8 = 1;
    } else if (r7 < 0) {
        buf[0] = '-'; buf[1] = '-'; buf[2] = 0;
        return;
    }
    u8* r6b = buf + r8;
    u8* r10 = r6b;
    u32 div = 0x66666667;
    do {
        r9++;
        s32 q = (s32)(((s64)div * (s32)r7) >> 32) >> 2;
        u32 qpos = q + ((u32)q >> 31);
        u32 rem = r7 - qpos * 10;
        r7 = q + ((u32)(((s32)(((s64)div * (s32)r7) >> 32)) >> 2) >> 31);
        *r10++ = (u8)(rem + '0');
    } while (r7 != 0);

    // reverse the digit string
    s32 half = (s32)r9 >> 1;
    if (half > 0) {
        u32 i = 0;
        u32 end = r8 + r9 - 1;
        for (s32 j = 0; j < half; j++) {
            u8 tmp = buf[i + r8];
            buf[i + r8] = buf[end - i];
            buf[end - i] = tmp;
            i++;
        }
    }
    buf[r8 + r9] = 0;

    // format and display
    u8** sys = (u8**)lbl_803753E0;
    u8* p = buf;
    fn_80010CA0((u8*)r29, (u32*)p, *(float*)((u8*)(*(u32**)((u8*)sys + 0xc))[1] + 0x1c));

    s32 align = r31;
    s32 xoff = r3;
    if (r31 == 1) {
    } else if (r31 >= 2) {
        if (r31 < 3) xoff >>= 1;
    } else if (r31 >= 0) {
        xoff = r29 - xoff;
    }

    // convert and store screen coords
    u8* sys2 = (u8*)lbl_803753E0;
    u32** node = (u32**)((u8*)sys2 + 0xc);
    u32* data = (u32*)(*node)[1];
    // store float coords, string, etc.
    // (abbreviated - complex rendering call)
    fn_80229B48(r3, r5, r4);
}

u32 fn_80006C00(u8* r3) {
    if (*r3 != 0x10) return 0;
    u8 r4 = r3[2];
    u8 r0 = r3[3];
    u8 r5 = r3[1];
    return r5 + (u32)(r4 << 8) + (u32)(r0 << 16);
}

u32 fn_80006C34(u32* r3) {
    r3 -= 4;
    u32 sum = 0;
    for (int i = 0; i < 0x1c; i++) {
        sum += *++r3;
    }
    return sum;
}

void fn_80006FCC(void* r3, u8 r4, u8 r5, u8 r6, u8 r7) {
    u8* obj = (u8*)r3;
    u8 r30 = r4 & 0xFF;
    u8 r29 = r5 & 0xFF;
    u8 r28 = r6 & 0xFF;
    u8 r27 = r7 & 0xFF;
    float f27 = *(float*)(obj + 0x2c);
    float f29 = *(float*)(obj + 0x1c);
    float f1 = *(float*)(obj + 0x34);
    float f31 = *(float*)(obj + 0x14);
    float f29b = f29 + f1;
    float f30 = (f31 + (f27 - f29)) - f1;
    u32 r31 = 0xcc010000;

    while (true) {
        float f1b = *(float*)(obj + 0x24);
        if (f30 > f1b) { f27 -= f30 - f1b; f30 = f1b; }
        float f28 = *(float*)(obj + 0x28);
        float f2 = *(float*)(obj + 0x18);
        float f24 = f2 + *(float*)(obj + 0x30);
        float f26 = *(float*)(obj + 0x10);
        float f25 = (f26 + (f28 - f2)) - *(float*)(obj + 0x30);

        while (true) {
            float f1c = *(float*)(obj + 0x20);
            if (f25 > f1c) { f28 -= f25 - f1c; f25 = f1c; }

            fn_80229B48(0x98, 0, 4);
            volatile float* fifo = (volatile float*)(r31 - 0x8000);
            *fifo = f26; *fifo = f31; *fifo = *(float*)(obj + 0x8);
            volatile u8* fifob = (volatile u8*)(r31 - 0x8000);
            *fifob = r30; *fifob = r29; *fifob = r28; *fifob = r27;
            *fifo = f24; *fifo = f29b;
            *fifo = f25; *fifo = f31; *fifo = *(float*)(obj + 0x8);
            *fifob = r30; *fifob = r29; *fifob = r28; *fifob = r27;
            *fifo = f28; *fifo = f29b;
            *fifo = f26; *fifo = f30; *fifo = *(float*)(obj + 0x8);
            *fifob = r30; *fifob = r29; *fifob = r28; *fifob = r27;
            *fifo = f24; *fifo = f27;
            *fifo = f25; *fifo = f30; *fifo = *(float*)(obj + 0x8);
            *fifob = r30; *fifob = r29; *fifob = r28; *fifob = r27;
            *fifo = f28; *fifo = f27;

            float f1d = *(float*)(obj + 0x20);
            if (f25 >= f1d) break;
            float f0 = *(float*)(obj + 0x28) - *(float*)(obj + 0x18);
            f26 = f25; f24 = *(float*)(obj + 0x18); f25 += f0;
        }

        float f1e = *(float*)(obj + 0x24);
        if (f30 >= f1e) break;
        float f0 = *(float*)(obj + 0x2c) - *(float*)(obj + 0x1c);
        f31 = f30; f29 = *(float*)(obj + 0x1c); f30 += f0;
    }
}

void fn_80007208(u32* r3, s16* r4, s16* r5, u32* r6) {
    if (r3) {
        u8* sys = (u8*)lbl_803753E0;
        *r3 = *(u32*)(sys + 0xa4);
    }
    if (r4) {
        u8* sys = (u8*)lbl_803753E0;
        *r4 = *(s16*)(sys + 0x92);
    }
    if (r5) {
        u8* sys = (u8*)lbl_803753E0;
        *r5 = *(s16*)(sys + 0x90);
    }
    if (r6) {
        u8* sys = (u8*)lbl_803753E0;
        u32 start = *(u32*)sys;
        u32 end = *(u32*)(sys + 8);
        *r6 = end - start;
    }
}

void fn_80007264(u8* r3) {
    u8* sys = (u8*)lbl_803753E0;
    u32 r6 = 1;
    u8** node = (u8**)*(u32*)(sys + 0xc);
    u8* r7 = node[1];
    if (!r3) r3 = lbl_80375044;
    while (*r3++) r6++;
    u32 len = ((r6 + 3) & ~3);
    if (len > 0xd4) len = 0xd4;
    u8* buf = (u8*)*(u32*)(sys + 8);
    *(u32*)(sys + 8) = (u32)buf + len;
    u8* src = r3 - (r6 - 1) - 1;
    u8* dst = buf;
    while (*src) *dst++ = *src++;
    *dst = 0;
    r7[5] += (u8)(len & 0xFF);
    r7[0x18] = r7[0xc]; r7[0x19] = r7[0xd];
    r7[0x1a] = r7[0xe]; r7[0x1b] = r7[0xf];
}

void fn_80007318(u8 r3, float f1) {
    float f0 = lbl_80376EA0 * f1;
    u32 r0 = __cntlzw(r3 & 0xFF);
    r0 = (r0 >> 5) & 1;
    u8* sys = (u8*)lbl_803753E0;
    u8** node = (u8**)*(u32*)(sys + 0xc);
    u8* data = node[1];
    int conv = (int)f0;
    s16 val = (s16)conv & (s16)(-(s32)r0);
    *(s16*)(data + 0x26) = val;
}

void fn_80007360(u8 r3, float f1) {
    float f0 = lbl_80376EA0 * f1;
    u32 r0 = __cntlzw(r3 & 0xFF);
    r0 = (r0 >> 5) & 1;
    u8* sys = (u8*)lbl_803753E0;
    u8** node = (u8**)*(u32*)(sys + 0xc);
    u8* data = node[1];
    int conv = (int)f0;
    s16 val = (s16)conv & (s16)(-(s32)r0);
    *(s16*)(data + 0x24) = val;
}

void fn_800073A8(float f1) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(data + 0x20) = f1;
}

void fn_800073BC(float f1) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(data + 0x1c) = f1;
}

void fn_800073D0(u8 r3, u8 r4, u8 r5, u8 r6) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(sys + 0xc) + 4);
    data[0x18] = r3; data[0x19] = r4;
    data[0x1a] = r5; data[0x1b] = r6;
}

void fn_800073F0(u8* r3, u8* r4, u8* r5, u8* r6) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(*(u32*)(sys + 0xc) + 4));
    data[0xc] = r3[0]; data[0xd] = r3[1]; data[0xe] = r3[2]; data[0xf] = r3[3];
    data[0x50] = r4[0]; data[0x51] = r4[1]; data[0x52] = r4[2]; data[0x53] = r4[3];
    data[0x54] = r5[0]; data[0x55] = r5[1]; data[0x56] = r5[2]; data[0x57] = r5[3];
    data[0x58] = r6[0]; data[0x59] = r6[1]; data[0x5a] = r6[2]; data[0x5b] = r6[3];
}

void fn_80007480(u32 r3, u32 r4) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(u32*)(data + 0x10) = r3;
    *(u32*)(data + 0x14) = r4;
}

void fn_80007498(float f1, float f2) {
    u8* sys = (u8*)lbl_803753E0;
    u8* data = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(data + 0x30) = f1;
    *(float*)(data + 0x34) = f2;
}

void fn_800074B0(float f1, float f2, float f3) {
    u8* sys = (u8*)lbl_803753E0;
    u8* r31 = *(u8**)(*(u32*)(sys + 0xc) + 4);
    float buf1[8], buf2[8];
    fn_8020B098(buf1, -f1, -f2, lbl_80376EA8);
    fn_8020AE58(buf2, 0x5a, lbl_80376EAC * f3);
    fn_8020AB7C(buf2, buf1, buf2);
    fn_8020B098(buf1, f1, f2, lbl_80376EA8);
    fn_8020AB7C(buf1, buf2, buf1);

    float c = buf2[0], s = buf2[1];
    float tx = buf1[2], ty = buf1[5];

    float x, y;
    x = *(float*)(r31+0x10); y = *(float*)(r31+0x14);
    *(float*)(r31+0x10) = x*c + y*s + tx;
    *(float*)(r31+0x14) = x*s + y*c + ty;
    x = *(float*)(r31+0x30); y = *(float*)(r31+0x34);
    *(float*)(r31+0x30) = x*c + y*s + tx;
    *(float*)(r31+0x34) = x*s + y*c + ty;
    x = *(float*)(r31+0x40); y = *(float*)(r31+0x44);
    *(float*)(r31+0x40) = x*c + y*s + tx;
    *(float*)(r31+0x44) = x*s + y*c + ty;
    x = *(float*)(r31+0x20); y = *(float*)(r31+0x24);
    *(float*)(r31+0x20) = x*c + y*s + tx;
    *(float*)(r31+0x24) = x*s + y*c + ty;
}

void fn_80007678() {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    float t1 = *(float*)(d+0x18), t2 = *(float*)(d+0x1c);
    *(float*)(d+0x18) = *(float*)(d+0x48); *(float*)(d+0x1c) = *(float*)(d+0x4c);
    *(float*)(d+0x48) = *(float*)(d+0x28); *(float*)(d+0x4c) = *(float*)(d+0x2c);
    *(float*)(d+0x28) = *(float*)(d+0x38); *(float*)(d+0x2c) = *(float*)(d+0x3c);
    *(float*)(d+0x38) = t1; *(float*)(d+0x3c) = t2;
}

void fn_800076C8() {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    float t1 = *(float*)(d+0x18), t2 = *(float*)(d+0x1c);
    *(float*)(d+0x18) = *(float*)(d+0x38); *(float*)(d+0x1c) = *(float*)(d+0x3c);
    *(float*)(d+0x38) = *(float*)(d+0x28); *(float*)(d+0x3c) = *(float*)(d+0x2c);
    *(float*)(d+0x28) = *(float*)(d+0x48); *(float*)(d+0x2c) = *(float*)(d+0x4c);
    *(float*)(d+0x48) = t1; *(float*)(d+0x4c) = t2;
}

void fn_80007718() {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(d+0x30) = *(float*)(d+0x20);
    *(float*)(d+0x34) = *(float*)(d+0x14);
    *(float*)(d+0x40) = *(float*)(d+0x10);
    *(float*)(d+0x44) = *(float*)(d+0x24);
    *(float*)(d+0x38) = *(float*)(d+0x28);
    *(float*)(d+0x3c) = *(float*)(d+0x1c);
    *(float*)(d+0x48) = *(float*)(d+0x18);
    *(float*)(d+0x4c) = *(float*)(d+0x2c);
}

void fn_80007768(float f1, float f2, float f3, float f4) {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(d+0x40) = f1; *(float*)(d+0x44) = f2;
    *(float*)(d+0x48) = f3; *(float*)(d+0x4c) = f4;
}

void fn_80007788(float f1, float f2, float f3, float f4) {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    *(float*)(d+0x30) = f1; *(float*)(d+0x34) = f2;
    *(float*)(d+0x38) = f3; *(float*)(d+0x3c) = f4;
}

void fn_800077A8(u8* r3) {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    d[0xc] = r3[0]; d[0xd] = r3[1]; d[0xe] = r3[2]; d[0xf] = r3[3];
}

void fn_800077D8(u8 r3) {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    d[0xf] = r3;
}

void fn_800077EC(u8 r3, u8 r4, u8 r5, u8 r6) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    d[0xc] = r3; d[0xd] = r4; d[0xe] = r5; d[0xf] = r6;
}

void fn_8000780C() {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    float t = *(float*)(d+0x1c);
    *(float*)(d+0x1c) = *(float*)(d+0x2c);
    *(float*)(d+0x2c) = t;
}

void fn_8000782C() {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    float t = *(float*)(d+0x18);
    *(float*)(d+0x18) = *(float*)(d+0x28);
    *(float*)(d+0x28) = t;
}

void fn_8000784C(float f1, float f2, float f3, float f4, float f5, float f6) {
    u8* sys = (u8*)lbl_803753E0;
    u8* d = *(u8**)(*(u32*)(sys + 0xc) + 4);
    float f10 = f1 + f5, f9 = f2 + f6;
    float f5b = f3 + f5, f0 = f4 + f6;
    *(float*)(d+0x10) = f1; *(float*)(d+0x20) = f10;
    *(float*)(d+0x14) = f2; *(float*)(d+0x24) = f9;
    *(float*)(d+0x1c) = lbl_80376EA8; *(float*)(d+0x18) = lbl_80376EA8;
    *(float*)(d+0x2c) = lbl_80376EA4; *(float*)(d+0x28) = lbl_80376EA4;
    d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x18) = f3; *(float*)(d+0x1c) = f4;
    *(float*)(d+0x28) = f5b; *(float*)(d+0x2c) = f0;
}

void fn_800078B0(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x18) = f1; *(float*)(d+0x1c) = f2;
    *(float*)(d+0x28) = f3; *(float*)(d+0x2c) = f4;
}

void fn_800078D0(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x10) = f1; *(float*)(d+0x14) = f2;
    *(float*)(d+0x20) = f3; *(float*)(d+0x24) = f4;
}

void fn_800078F0(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x18) = f1; *(float*)(d+0x1c) = f2;
    *(float*)(d+0x28) = f1 + f3; *(float*)(d+0x2c) = f2 + f4;
}

void fn_80007918(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x10) = f1; *(float*)(d+0x20) = f1 + f3;
    *(float*)(d+0x14) = f2; *(float*)(d+0x24) = f2 + f4;
    *(float*)(d+0x1c) = lbl_80376EA8; *(float*)(d+0x18) = lbl_80376EA8;
    *(float*)(d+0x2c) = lbl_80376EA4; *(float*)(d+0x28) = lbl_80376EA4;
}

void fn_80007958(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x20) = f1; *(float*)(d+0x24) = f2;
    *(float*)(d+0x28) = f3; *(float*)(d+0x2c) = f4;
}

void fn_80007978(float f1, float f2, float f3, float f4) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x10) = f1; *(float*)(d+0x14) = f2;
    *(float*)(d+0x18) = f3; *(float*)(d+0x1c) = f4;
}

void fn_80007998(float f1, float f2) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x10) = f1; *(float*)(d+0x14) = f2;
}

void fn_800079B0(float f1) {
    u8* d = *(u8**)(*(u32*)((u8*)lbl_803753E0 + 0xc) + 4);
    *(float*)(d+0x8) = f1;
}

void fn_800079C4() {
    u8* sys = (u8*)lbl_803753E0;
    s16 val = *(s16*)(sys + 0x92);
    *(s16*)(sys + 0x92) = val + 1;
}

void fn_800079D8(u8 r30) {
    u8* sys = (u8*)lbl_803753E0;
    if (*(u8*)(sys + 0xa8) == 2) {
        u32 checksum = fn_80006C34((u32*)(sys + 0x20));
        *(u32*)(sys + 0x18) = checksum;
        u8* r27 = sys;
        u8* r28 = *(u8**)(sys + 0xc);
        u8* r29 = 0;
        while (r28) {
            if (*(u32*)(r28 + 8) == *(u32*)(r27 + 0x18)) {
                if (!fn_800063A4((u32*)(r28 + 0x10), (u32*)(r27 + 0x20), 0x70)) {
                    if (*(u8**)(r27 + 0xc) == (u8*)r28) {
                        break;
                    }
                    if (r29) *(u32**)r29 = *(u32**)(r28);
                    *(u32*)(r27 + 0xc) = *(u32*)r28;
                    *(u8**)(r27 + 0xc) = (u8*)r28;
                    break;
                }
            }
            r29 = r28;
            r28 = *(u8**)r28;
        }
        if (!r28) {
            u8* r8 = *(u8**)(sys + 8);
            *(u32**)(sys + 8) = (u32*)(r8 + 0x80);
            *(u8**)r8 = *(u8**)(sys + 0xc);
            *(u8**)(sys + 0xc) = r8;
            *(u32*)(r8 + 4) = 0;
            *(s16*)(r8 + 0xc) = -1;
            *(u32*)(r8 + 8) = *(u32*)(sys + 0x18);
            fn_8000640C((u32*)(r8 + 0x10), (u32*)(sys + 0x20), 0x70);
            s16 count = *(s16*)(sys + 0x90);
            *(s16*)(sys + 0x90) = count + 1;
        }
        *(u8*)(sys + 0xa8) = 3;
    }

    u32 r27 = r30 & 0xFF;
    if (r27 > 0xb) {
        fn_8020EB84(
            (u8*)lbl_802709E8 + 0x1a, 0x54b,
            (u8*)lbl_802709E8 + 0x23,
            (u8*)lbl_802709E8 + 0x1a
        );
    } else {
        static const u32 sizes[] = { 0x30, 0x50, 0x5c, 0x28, 0x38, 0x18 };
        // jump table cases 0-5 set r31
    }

    u8* sys2 = (u8*)lbl_803753E0;
    u8* r8 = *(u8**)(sys2 + 8);
    u32 r31 = 0; // set by jump table
    *(u8**)(sys2 + 8) = r8 + r31;
    *(u8*)((u8*)r8 + 4) = r30;
    *(u8*)((u8*)r8 + 5) = (u8)r31;
    *(float*)(r8 + 8) = lbl_80376EA8;
    *(u32*)(r8 + 0xc) = -1;
    *(u32*)r8 = *(u32*)(*(u8**)(sys2 + 0xc) + 4);
    *(u8**)(*(u8**)(sys2 + 0xc) + 4) = r8;

    if (r27 == 0xa || (r27 >= 5 && r27 <= 9)) {
        u8* node = *(u8**)(sys2 + 0xc);
        u8* r28 = *(u8**)(node + 4);
        *(float*)(r28 + 0x1c) = lbl_80376EA4;
        *(float*)(r28 + 0x20) = lbl_80376EA8;
        *(s16*)(r28 + 0x24) = 0;
        *(s16*)(r28 + 0x26) = 0;
        u8* color = (u8*)fn_8018F780();
        r28[0x18] = color[0]; r28[0x19] = color[1];
        r28[0x1a] = color[2]; r28[0x1b] = color[3];
    }
}

// fn_80007C44 is in document 21
void fn_80007C44() {
    u32 tick = OSGetTick();
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0xa4) = tick;

    float mat[16];
    fn_8020B694(mat, lbl_80376EA8, lbl_80376EBC, lbl_80376EA8, lbl_80376EC0, lbl_80376EA8, lbl_80376EC4);
    fn_8022D9A8(mat, 1);
    fn_80228914();
    fn_80228240(9, 1); fn_80228240(0xb, 1); fn_80228240(0xd, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8022894C(0, 0xd, 1, 4, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 0, 1, 0, 0, 2);
    fn_8006E0D0(1);

    u8* sys2 = (u8*)lbl_803753E0;
    s16 width = *(s16*)(sys2 + 0x90);
    u8* buf = *(u8**)(sys2 + 8);
    *(u32**)(sys2 + 8) = (u32*)(buf + (width + 1) * 4);
    u8* r4 = buf;
    u8** node = (u8**)*(u32*)(sys2 + 0xc);

    // sort and render loop (abbreviated)
    // ... complex rendering with bubble sort pass

    u8* sys3 = (u8*)lbl_803753E0;
    *(u32*)(sys3 + 0xa4) = OSGetTick() - *(u32*)(sys3 + 0xa4);
    *(u8*)(sys3 + 0xa9) = 0xff;
}

void fn_80008CD4() {
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 8) = (u32)(*(u8**)sys + 0xac);
    *(u32*)(sys + 0xc) = 0;
    *(s16*)(sys + 0x92) = 0;
    *(s16*)(sys + 0x90) = 0;
    fn_8020AB1C(sys + 0x60);
    *(u32*)(sys + 0x2c) = 0;
    *(u32*)(sys + 0x30) = 0;
    *(u8*)(sys + 0x23) = 0xff;
    *(u8*)(sys + 0x24) = 0x80;
    *(s16*)(sys + 0x20) = 0;
    *(u8*)(sys + 0xa8) = 0;
}

// fn_80008D64 is in document 22
void fn_80008D64(float f1, float f2, float f3, float f4) {
    // complex font rendering with paired singles
    // stub only
}

// fn_80009148 is in document 23
void fn_80009148(void* r3, u8 r4, u8 r5) {
    // complex sprite rendering with jump table
    // stub only
}

// fn_80009868 is in document 24
void fn_80009868(u8 r4, void* r5, void* r6) {
    // complex rendering function
    // stub only
}

void fn_80009C50() {
    u8* sys = (u8*)lbl_803753E0;
    *(u8*)(sys + 0xa8) = 1;
    *(u8*)(sys + 0x23) = 0xff;
    *(u8*)(sys + 0x24) = 0x80;
    *(u32*)(sys + 0x2c) = 0;
    *(u32*)(sys + 0x30) = 0;
    sys = (u8*)lbl_803753E0;
    u16 val = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = val & ~0xF00;
    sys = (u8*)lbl_803753E0;
    *(u8*)(sys + 0xa8) = 2;
}

void fn_80009CA8(u8 r3) {
    *(u8*)((u8*)lbl_803753E0 + 0x24) = r3;
}

void fn_80009CB4(u8 r3) {
    *(u8*)((u8*)lbl_803753E0 + 0x23) = r3;
}

void fn_80009CC0() {
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x2c) = 0;
    sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x30) = 0;
    sys = (u8*)lbl_803753E0;
    u16 val = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = val & ~0xF00;
}

void fn_80009CE8(u32 r3, u32 r4) {
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x2c) = r3;
    sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x30) = r4;
    sys = (u8*)lbl_803753E0;
    u16 val = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = val & ~0xF00;
    sys = (u8*)lbl_803753E0;
    *(u16*)(sys + 0x20) |= 0x2000;
}

void fn_80009D1C(float f1) {
    *(float*)((u8*)lbl_803753E0 + 0x28) = f1;
}

float fn_80009D28() {
    return *(float*)((u8*)lbl_803753E0 + 0x28);
}

void fn_80009D34(float f1) {
    u8* sys = (u8*)lbl_803753E0;
    *(float*)(sys + 0x28) += f1;
}

void fn_80009D48(float f1, float f2, float f3, float f4, float f5, float f6, float f7, float f8) {
    float f26 = f3, f27 = f4, f28 = f5, f29 = f6, f30 = f7, f31 = f8;
    float mat1[8], mat2[8], mat3[8], mat4[8], mat5[8];
    fn_8020B098(mat1, f1, f2, 0.0f);
    fn_8020B118(mat2, f29, f30);
    fn_8020AE58(mat3, 0x5a, lbl_80376EAC * f31);
    fn_8020B098(mat4, -f27, -f28, lbl_80376EA8);
    fn_8020B098(mat5, f27, f28, lbl_80376EA8);
    fn_8020AB7C(mat2, mat4, mat2);
    fn_8020AB7C(mat3, mat2, mat3);
    fn_8020AB7C(mat3, mat3, mat5);
    fn_8020AB7C(mat4, mat3, mat1);
    u8* sys = (u8*)lbl_803753E0;
    fn_8020AB48(mat4, sys + 0x60);
    *(float*)(sys + 0x28) = f26;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & ~0xC00;
}

void fn_80009E9C(float f1, float f2, float f3, float f4) {
    float f29 = f1, f30 = f2, f31 = f3;
    float mat1[8], mat2[8];
    if (lbl_80376EA4 == f4) {
        fn_8020B098(mat1, f1, f2, f3);
    } else {
        fn_8020B118(mat2, f4, f4);
        fn_8020B098(mat1, f29, f30, f31);
        fn_8020AB7C(mat1, mat1, mat2);
    }
    u8* sys = (u8*)lbl_803753E0;
    fn_8020AB48(mat1, sys + 0x60);
    *(float*)(sys + 0x28) = f31;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & ~0xC00;
}

void fn_80009F6C(float* r3) {
    if (r3) {
        u8* sys = (u8*)lbl_803753E0;
        *r3 = *(float*)(sys + 0x28);
    }
}

void fn_80009F8C(float f1) {
    u8* sys = (u8*)lbl_803753E0;
    fn_8020AB48(&f1, sys + 0x60);
    *(float*)(sys + 0x28) = f1;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & ~0xC00;
}

void fn_80009FD8(u32 r3, u32 r4, u32 r5, u32 r6, u32 r7) {
    u32 buf[12];
    fn_8006F7DC((void*)r3, buf, &buf[5], (void*)r5);
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x34) = buf[0]; *(u32*)(sys + 0x38) = buf[1];
    *(u32*)(sys + 0x3c) = buf[2]; *(u32*)(sys + 0x40) = buf[3];
    *(u32*)(sys + 0x44) = buf[4]; *(u32*)(sys + 0x48) = buf[5];
    *(u32*)(sys + 0x4c) = buf[6]; *(u32*)(sys + 0x50) = buf[7];
    *(u32*)(sys + 0x54) = buf[8]; *(u32*)(sys + 0x58) = buf[9];
    *(u32*)(sys + 0x5c) = buf[10];
    *(u8*)(sys + 0x22) = (u8)r6;
    u16 mask = 0x7b0c;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & mask;
    sys = (u8*)lbl_803753E0;
    *(u16*)(sys + 0x20) |= (u16)(r4 | 0x8000) & 0xFFFF;
}

void fn_8000A0B8(u32 r3, u32 r4, u32 r5) {
    u32 buf[8];
    fn_8006F8E4((void*)r3, buf);
    u8* sys = (u8*)lbl_803753E0;
    *(u32*)(sys + 0x34) = buf[0]; *(u32*)(sys + 0x38) = buf[1];
    *(u32*)(sys + 0x3c) = buf[2]; *(u32*)(sys + 0x40) = buf[3];
    *(u32*)(sys + 0x44) = buf[4]; *(u32*)(sys + 0x48) = buf[5];
    *(u32*)(sys + 0x4c) = buf[6]; *(u32*)(sys + 0x50) = buf[7];
    *(u8*)(sys + 0x22) = 0xff;
    u16 mask = 0x7b0c;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & mask;
    sys = (u8*)lbl_803753E0;
    *(u16*)(sys + 0x20) |= (u16)r5;
}

void fn_8000A164(u32* r3, u32 r4, u32 r5, u32 r6) {
    u8* sys = (u8*)lbl_803753E0;
    if (r3) {
        *(u32*)(sys + 0x34) = r3[0]; *(u32*)(sys + 0x38) = r3[1];
        *(u32*)(sys + 0x3c) = r3[2]; *(u32*)(sys + 0x40) = r3[3];
        *(u32*)(sys + 0x44) = r3[4]; *(u32*)(sys + 0x48) = r3[5];
        *(u32*)(sys + 0x4c) = r3[6]; *(u32*)(sys + 0x50) = r3[7];
    } else {
        fn_800063D8((u32*)(sys + 0x34), 0, 0x20);
        u16 r6b = (u16)r6;
        if (!(r6b & 0x3)) {
            r6b = (r6b & ~0xFFFC) | 0x2;
        }
        r6 = r6b;
    }
    if (r4) {
        u32* p4 = (u32*)r4;
        *(u32*)(sys + 0x54) = p4[0];
        *(u32*)(sys + 0x58) = p4[1];
        *(u32*)(sys + 0x5c) = p4[2];
        *(u8*)(sys + 0x22) = (u8)r5;
    } else {
        fn_800063D8((u32*)(sys + 0x54), 0, 0xc);
        *(u8*)(sys + 0x22) = 0xff;
    }
    u16 mask = 0x7b0c;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & mask;
    sys = (u8*)lbl_803753E0;
    *(u16*)(sys + 0x20) |= (u16)r6 | 0x8000;
}

void fn_8000A29C(u32* r3, u32 r4) {
    u8* sys = (u8*)lbl_803753E0;
    if (r3) {
        *(u32*)(sys + 0x34) = r3[0]; *(u32*)(sys + 0x38) = r3[1];
        *(u32*)(sys + 0x3c) = r3[2]; *(u32*)(sys + 0x40) = r3[3];
        *(u32*)(sys + 0x44) = r3[4]; *(u32*)(sys + 0x48) = r3[5];
        *(u32*)(sys + 0x4c) = r3[6]; *(u32*)(sys + 0x50) = r3[7];
    } else {
        fn_800063D8((u32*)(sys + 0x34), 0, 0x2c);
        u16 r4b = (u16)r4;
        if (!(r4b & 0x3)) r4b = (r4b & ~0xFFFC) | 0x2;
        r4 = r4b;
    }
    *(u8*)(sys + 0x22) = 0xff;
    u16 mask = 0x7b0c;
    u16 flags = *(u16*)(sys + 0x20);
    *(u16*)(sys + 0x20) = flags & mask;
    sys = (u8*)lbl_803753E0;
    *(u16*)(sys + 0x20) |= (u16)r4;
}

void fn_8000A370() {
    *(u8*)((u8*)lbl_803753E0 + 0xa8) = 2;
}

void fn_8000A380() {
    *(u8*)((u8*)lbl_803753E0 + 0xa8) = 1;
}

u8 fn_8000A390() {
    return *(u8*)((u8*)lbl_803753E0 + 0xa9);
}

void fn_8000A39C(u8 r3) {
    *(u8*)((u8*)lbl_803753E0 + 0xa9) = r3;
}

void fn_8000A3A8() {}

void fn_8000A3AC(float f1, float f2, float f3, float f4) {
    u8* sys = (u8*)lbl_803753E0;
    *(float*)(sys + 0x98) = f1;
    sys = (u8*)lbl_803753E0;
    *(float*)(sys + 0x94) = f2;
    sys = (u8*)lbl_803753E0;
    *(float*)(sys + 0xa0) = f3;
    sys = (u8*)lbl_803753E0;
    *(float*)(sys + 0x9c) = f4;
}

void fn_8000A3D0(u32 r3) {
    if (!r3) r3 = 0xFFE0;
    u32 r31 = r3 & ~7;
    void* (*allocFn)() = (void*(*)())lbl_80375040;
    void* mem = allocFn();
    lbl_803753E0 = (u32)mem;
    u8* sys = (u8*)mem;
    *(u32*)sys = (u32)sys;
    *(u32*)(sys + 4) = r31;
    *(float*)(sys + 0x98) = lbl_80376EA4;
    *(float*)(sys + 0x94) = lbl_80376EC8;
    *(float*)(sys + 0xa0) = lbl_80376EC8;
    *(float*)(sys + 0x9c) = lbl_80376EA8;
    *(u32*)(sys + 0x10) = 0;
    *(u32*)(sys + 0x14) = 0;
    *(u16*)(sys + 0x20) = 0;
    *(u8*)(sys + 0xa9) = 0xff;
}

void fn_8000A480() {
    fn_800C4C34((u8*)lbl_802709E8 + 0x3a, 0, 0, 0);
}

void fn_8000A4B0(u32 r3, void (*r4)(void*, void*), void* r5) {
    u8* p = lbl_802B0BB8;
    for (int i = 0; i < 0x100; i++, p += 0x70) {
        if (*(u32*)p == r3) {
            r4((void*)p, r5);
        }
    }
}

void fn_8000A520(u8* r3) {
    r3[0x2e]--;
}

void fn_8000A530(u8* r3) {
    r3[0x2e]++;
}

u8 fn_8000A540(u8* r3) {
    return r3[0x2e];
}

void fn_8000A548(u8* r3) {
    r3[0x2d]--;
}

void fn_8000A558(u8* r3) {
    r3[0x2d]++;
}

void fn_8000A568(u32 r3, u32 r4) {
    ((u32*)lbl_802B7FDC)[r3] = r4;
}

// fn_8000A57C is in document 25 (attachment)

void fn_8000A988() {
    fn_8000A380();
    fn_80009E9C(lbl_80376EDC, lbl_80376EDC, lbl_80376EE0, lbl_80376EE4);
    fn_8000A370();

    u8* r31 = lbl_802B7FBC;
    u8* r30 = lbl_8028D7E0;
    int r29 = 0;
    int r10 = 1, r11 = 0;
    do {
        if (*(u32*)r31) {
            u32 buf[2];
            buf[0] = *(u32*)&lbl_80376ED8;
            fn_8014CDE8(0, r11 << 3, 0, 0, buf, *(u32**)r30);
            fn_8000A57C((void*)*(u32*)r31, r31, r30, &r10, &r11);
            r11++;
        }
        r29++;
        r30 += 4;
        r31 += 4;
    } while (r29 < 8);
}

void fn_8000AA58(u8* r3) {
    r3[0x2c] |= 0x10;
    *(u32*)(r3 + 4) += 4;
}

u32 fn_8000AA78(void* r3) {
    u8* r5 = *(u8**)(*(u8**)((u8*)r3 + 4) + 4);
    u8* r6 = lbl_802B0BB8;
    u32 r5b = 0;
    for (int i = 0; i < 0x80; i++) {
        u32 r0 = *(u32*)r6;
        if (r0) {
            u8* r8 = r6 + 0x14;
            u8* r9 = r5;
            s32 cmp;
            do {
                s8 a = (s8)*r8, b = (s8)*r9;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r8++; r9++;
            } while (1);
            if (!cmp) goto found1;
        }
        r0 = *(u32*)(r6 + 0x70);
        if (r0) {
            u8* r8 = r6 + 0x70 + 0x14;
            u8* r9 = r5;
            s32 cmp;
            do {
                s8 a = (s8)*r8, b = (s8)*r9;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r8++; r9++;
            } while (1);
            if (!cmp) goto found1;
        }
        r5b++;
        r6 += 0x70;
        continue;
found1:
        if (r6) *(u32*)(r6 + 0x10) = 0;
        goto done1;
    }
    r6 = 0;
done1:
    *(u32*)((u8*)r3 + 4) += 8;
    return 1;
}

void fn_8000AB88(void* r31) {
    u8* r6 = lbl_802B0BB8;
    u8* r3b = 0;
    u8* r6s = *(u8**)(*(u8**)((u8*)r31 + 4) + 4);
    for (int i = 0; i < 0x80; i++) {
        u32 r0 = *(u32*)r6;
        if (r0) {
            u8* r7 = r6 + 0x14;
            u8* r8 = r6s;
            s32 cmp;
            do {
                s8 a = (s8)*r7, b = (s8)*r8;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r7++; r8++;
            } while (1);
            if (!cmp) { r3b = r6; goto found2; }
        }
        r0 = *(u32*)(r6 + 0x70);
        if (r0) {
            u8* r7 = r6 + 0x70 + 0x14;
            u8* r8 = r6s;
            s32 cmp;
            do {
                s8 a = (s8)*r7, b = (s8)*r8;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r7++; r8++;
            } while (1);
            if (!cmp) { r3b = r6 + 0x70; goto found2; }
        }
        r6 += 0x70;
        continue;
found2:;
    }
    r3b = 0;
    if (r3b) fn_8000C734(r3b);
    *(u32*)((u8*)r31 + 4) += 8;
}

u32 fn_8000ACB8(void* r3) {
    u8* r5 = *(u8**)(*(u8**)((u8*)r3 + 4) + 4);
    u8* r6 = lbl_802B0BB8;
    for (int i = 0; i < 0x80; i++) {
        u32 r0 = *(u32*)r6;
        if (r0) {
            u8* r8 = r6 + 0x14;
            u8* r9 = r5;
            s32 cmp;
            do {
                s8 a = (s8)*r8, b = (s8)*r9;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r8++; r9++;
            } while (1);
            if (!cmp) goto match1;
        }
        r0 = *(u32*)(r6 + 0x70);
        if (r0) {
            u8* r8 = r6 + 0x70 + 0x14;
            u8* r9 = r5;
            s32 cmp;
            do {
                s8 a = (s8)*r8, b = (s8)*r9;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r8++; r9++;
            } while (1);
            if (!cmp) goto match1;
        }
        r6 += 0x70;
        continue;
match1:
        goto done2;
    }
    r6 = 0;
done2:
    if (!r6) { return 0; }
    *(u32*)((u8*)r3 + 4) += 8;
    return 1;
}

void fn_8000ADC8(u8* r3) {
    u8 r4 = r3[0x2c];
    if (r4 & 0x2) {
        r3[0x2c] = r4 & ~0x2;
        u8* r5 = *(u8**)(r3 + 0x18);
        r5[0x2d]--;
    }
    *(u32*)(r3 + 4) += 4;
}

u32 fn_8000AE00() {
    return 0;
}

u32 fn_8000AE08(void* r3) {
    u8* r5 = *(u8**)(*(u8**)((u8*)r3 + 4) + 4);
    u8* r7 = lbl_802B0BB8;
    for (int i = 0; i < 0x20; i++) {
        if (*(u32*)r7 == (u32)r5) *(u32*)(r7 + 0x10) = 0;
        if (*(u32*)(r7 + 0x70) == (u32)r5) *(u32*)(r7 + 0x70 + 0x10) = 0;
        if (*(u32*)(r7 + 0xe0) == (u32)r5) *(u32*)(r7 + 0xe0 + 0x10) = 0;
        if (*(u32*)(r7 + 0x150) == (u32)r5) *(u32*)(r7 + 0x150 + 0x10) = 0;
        if (*(u32*)(r7 + 0x1c0) == (u32)r5) *(u32*)(r7 + 0x1c0 + 0x10) = 0;
        if (*(u32*)(r7 + 0x230) == (u32)r5) *(u32*)(r7 + 0x230 + 0x10) = 0;
        if (*(u32*)(r7 + 0x2a0) == (u32)r5) *(u32*)(r7 + 0x2a0 + 0x10) = 0;
        if (*(u32*)(r7 + 0x310) == (u32)r5) *(u32*)(r7 + 0x310 + 0x10) = 0;
        r7 += 0x70;
    }
    *(u32*)((u8*)r3 + 4) += 8;
    return 1;
}

u32 fn_8000AEC8(void* r31) {
    u8* p = *(u8**)(*(u8**)((u8*)r31 + 4) + 4);
    fn_8000C028(p);
    *(u32*)((u8*)r31 + 4) += 8;
    return 1;
}

u32 fn_8000AF0C(void* r3) {
    u8* r5 = *(u8**)(*(u8**)((u8*)r3 + 4) + 4);
    u8* r6 = lbl_802B0BB8;
    for (int i = 0; i < 0x20; i++) {
        if (*(u32*)r6 == (u32)r5) goto found3;
        if (*(u32*)(r6+0x70) == (u32)r5) goto found3;
        if (*(u32*)(r6+0xe0) == (u32)r5) goto found3;
        if (*(u32*)(r6+0x150) == (u32)r5) goto found3;
        if (*(u32*)(r6+0x1c0) == (u32)r5) goto found3;
        if (*(u32*)(r6+0x230) == (u32)r5) goto found3;
        if (*(u32*)(r6+0x2a0) == (u32)r5) goto found3;
        if (*(u32*)(r6+0x310) == (u32)r5) goto found3;
        r6 += 0x70;
        continue;
found3:
        goto done3;
    }
    r6 = 0;
done3:
    if (!r6) return 0;
    *(u32*)((u8*)r3 + 4) += 8;
    return 1;
}

u32 fn_8000AFDC(void* r31) {
    u8* p = *(u8**)((u8*)r31 + 4);
    s16 r4 = (s16)(*(u32*)p >> 16);
    u8* r3b = *(u8**)(p + 4);
    fn_8000CC18(r3b, r4);
    *(u32*)((u8*)r31 + 4) += 8;
    return 1;
}

u32 fn_8000B02C(void* r31) {
    u8* p = *(u8**)(*(u8**)((u8*)r31 + 4) + 4);
    fn_8000CBC8((u8*)r31, (s16)(u32)p);
    *(u32*)((u8*)r31 + 4) += 8;
    return 0;
}

u32 fn_8000B074(void* r31) {
    u8* p = *(u8**)(*(u8**)((u8*)r31 + 4) + 4);
    fn_8000CC18((u8*)r31, (s16)(u32)p);
    *(u32*)((u8*)r31 + 4) += 8;
    return 1;
}

u32 fn_8000B0BC(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 4;
    *(s16*)(r3 + 0x28) = (s16)(*(u32*)r4 >> 16);
    return 1;
}

u32 fn_8000B0DC(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 0x10) = *(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    return 0;
}

u32 fn_8000B0FC(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    u32 r5 = *(u32*)r4;
    void (*r12)(u8*, s16, u8*) = (void(*)(u8*, s16, u8*))*(u32*)(r4 + 4);
    u8* r4b = *(u8**)(r4 + 8);
    s16 r5s = (s16)(r5 >> 16);
    *(u32*)(r3 + 4) = (u32)r4 + 0xc;
    r12(r3, r5s, r4b);
    return 0; // implicit
}

u32 fn_8000B140(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    void (*r12)(u8*, u8*) = (void(*)(u8*, u8*))*(u32*)(r4 + 4);
    u8* r4b = *(u8**)(r4 + 8);
    *(u32*)(r3 + 4) = (u32)r4 + 0xc;
    r12(r3, r4b);
    return 0; // implicit
}

u32 fn_8000B178(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    u32 r12 = *(u32*)(r4 + 8);
    *(u32*)(r3 + 4) = (u32)r4 + 0xc;
    s16 r4s = (s16)(u16)r12;
    s16 r5s = (s16)(r12 >> 16);
    void (*fn)(u8*, s16, s16) = (void(*)(u8*, s16, s16))r12;
    fn(r3, r4s, r5s);
    return 0; // implicit
}

u32 fn_8000B1B8(u8* r3) {
    u8* r5 = *(u8**)(r3 + 4);
    s16 r4 = (s16)(*(u32*)r5 >> 16);
    void (*r12)(u8*, s16) = (void(*)(u8*, s16))*(u32*)(r5 + 4);
    *(u32*)(r3 + 4) = (u32)r5 + 8;
    r12(r3, r4);
    return 0; // implicit
}

u32 fn_8000B1F8(u8* r31) {
    u8* r4 = *(u8**)(r31 + 4);
    u32 (*r12)() = (u32(*)())*(u32*)(r4 + 4);
    *(u32*)(r31 + 4) = (u32)r4 + 8;
    u32 r3 = r12();
    if (!(r3 & 0xFF)) return 0;
    *(u32*)(r31 + 4) += 8;
    return 1;
}

void fn_8000A57C(u8* r28, u32* r29, u32* r30, void* unused) {
    u8* r31 = *(u8**)(r28 + 0x24);
    if (r31) {
        if (*(u32*)(r31 + 0x24)) {
            fn_8000A57C(r31, r29, r30, unused);
        }
        (*r29)++;
        s32 kern = -1;
        if (r31[0x2c] & 0x2)  kern = 0xffc1feff; // lis 0xffc1; subi -0x3f01
        if (r31[0x2d])        kern = 0xa0a1a0a0; // lis 0xa0a1; subi -0x5f01
        if ((r31[0x2c] & 0x4) && (*(u8**)(r31 + 0x18))[0x2d])
                               kern = 0xa0a1a0a0;
        if (r31[0x2e])        kern = 0x40404040;

        fn_8014CDE8((*r29) << 3, (*r30) << 3, kern, (u32)r31,
                    (void*)&kern, *(u8**)(r31 + 0x14));

        if (r31[0xc]) {
            u8* p = *(u8**)(r31 + 0x14);
            u8* end = p;
            while ((s8)*end++) {}
            u32 slen = (u32)(end - p);
            fn_8014CDE8(((*r29) + slen + 1) << 3, (*r30) << 3, kern, (u32)r31,
                        (void*)&kern, (u8*)lbl_80270A28 + 0x76);
        }
        (*r30)++;
        if (*(u32*)(r31 + 0x1c)) {
            fn_8000A57C(*(u8**)(r31 + 0x1c), r29, r30, unused);
        }
        (*r29)--;
    }

    (*r29)++;
    s32 kern2 = -1;
    if (r28[0x2c] & 0x2)  kern2 = 0xffc1feff;
    if (r28[0x2d])        kern2 = 0xa0a1a0a0;
    if ((r28[0x2c] & 0x4) && (*(u8**)(r28 + 0x18))[0x2d])
                           kern2 = 0xa0a1a0a0;
    if (r28[0x2e])        kern2 = 0x40404040;

    fn_8014CDE8((*r29) << 3, (*r30) << 3, kern2, (u32)r28,
                (void*)&kern2, *(u8**)(r28 + 0x14));

    if (r28[0xc]) {
        u8* p = *(u8**)(r28 + 0x14);
        u8* end = p;
        while ((s8)*end++) {}
        u32 slen = (u32)(end - p);
        fn_8014CDE8(((*r29) + slen + 1) << 3, (*r30) << 3, kern2, (u32)r28,
                    (void*)&kern2, (u8*)lbl_80270A28 + 0x76);
    }
    (*r30)++;

    u8* r31b = *(u8**)(r28 + 0x1c);
    if (r31b) {
        if (*(u32*)(r31b + 0x24)) {
            fn_8000A57C(r31b, r29, r30, unused);
        }
        (*r29)++;
        s32 kern3 = -1;
        if (r31b[0x2c] & 0x2)  kern3 = 0xffc1feff;
        if (r31b[0x2d])        kern3 = 0xa0a1a0a0;
        if ((r31b[0x2c] & 0x4) && (*(u8**)(r31b + 0x18))[0x2d])
                                kern3 = 0xa0a1a0a0;
        if (r31b[0x2e])        kern3 = 0x40404040;

        fn_8014CDE8((*r29) << 3, (*r30) << 3, kern3, (u32)r31b,
                    (void*)&kern3, *(u8**)(r31b + 0x14));

        if (r31b[0xc]) {
            u8* p = *(u8**)(r31b + 0x14);
            u8* end = p;
            while ((s8)*end++) {}
            u32 slen = (u32)(end - p);
            fn_8014CDE8(((*r29) + slen + 1) << 3, (*r30) << 3, kern3, (u32)r31b,
                        (void*)&kern3, (u8*)lbl_80270A28 + 0x76);
        }
        (*r30)++;
        if (*(u32*)(r31b + 0x1c)) {
            fn_8000A57C(*(u8**)(r31b + 0x1c), r29, r30, unused);
        }
        (*r29)--;
    }
    (*r29)--;
}

u32 fn_8000B250(u8* r31) {
    u8* r4 = *(u8**)(r31 + 4);
    u32 (*r12)() = (u32(*)())*(u32*)(r4 + 4);
    u32 r3 = r12();
    if (!(r3 & 0xFF)) return 0;
    *(u32*)(r31 + 4) += 8;
    return 1;
}

u32 fn_8000B2A8(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    u32 (*r12)() = (u32(*)())*(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    u32 ret = r12();
    return __cntlzw(ret & 0xFF) >> 5;
}

void fn_8000B2E8(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    void (*r12)(u8*) = (void(*)(u8*))*(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    r12(r3);
}

u32 fn_8000B31C(u8* r31) {
    u8* r4 = *(u8**)(r31 + 4);
    u32 (*r12)() = (u32(*)())*(u32*)(r4 + 4);
    u32 r3 = r12();
    if (r3 & 0xFF) {
        u8* r4b = *(u8**)(r31 + 4);
        u8* r4c = *(u8**)(r31 + 0);
        u32 r0 = *(u32*)r4b;
        s16 r3b = (s16)((r0 >> 8) & 0xFF);
        u32* r5 = (u32*)r4c;
        while (*r5) {
            u32 r5v = *r5;
            u32 low = r5v & 0xFFF;
            if (low == 1) {
                s16 val = (s16)(r5v >> 16);
                if (val == r3b) {
                    *(u32**)(r31 + 4) = (u32*)r4c;
                    *(u32*)(r31 + 0x10) = 0;
                    goto done31c;
                }
            }
            r4c = (u8*)((u32)r4c + ((r5v >> 10) & 0x3C));
            r5 = (u32*)r4c;
        }
        goto done31c;
    } else {
        *(u32*)(r31 + 4) += 8;
    }
done31c:
    return 1;
}

u32 fn_8000B3C4(u8* r31) {
    u8* r4 = *(u8**)(r31 + 4);
    u32 (*r12)() = (u32(*)())*(u32*)(r4 + 4);
    u32 r3 = r12();
    if (r3 & 0xFF) {
        u8* r4b = *(u8**)(r31 + 4);
        u8* r4c = *(u8**)(r31 + 0);
        u32 r0 = *(u32*)r4b;
        s16 r3b = (s16)((r0 >> 8) & 0xFF);
        u32* r5 = (u32*)r4c;
        while (*r5) {
            u32 r5v = *r5;
            u32 low = r5v & 0xFFF;
            if (low == 1) {
                s16 val = (s16)(r5v >> 16);
                if (val == r3b) {
                    *(u32**)(r31 + 4) = (u32*)r4c;
                    *(u32*)(r31 + 0x10) = 0;
                    goto done3c4;
                }
            }
            r4c = (u8*)((u32)r4c + ((r5v >> 10) & 0x3C));
            r5 = (u32*)r4c;
        }
        goto done3c4;
    } else {
        *(u32*)(r31 + 4) += 8;
    }
done3c4:
    return 1;
}

u32 fn_8000B46C(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    void (*r12)(u8*) = (void(*)(u8*))*(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    r12(r3);
    return 1;
}

u32 fn_8000B4A4(u8* r3) {
    u8* r4 = *(u8**)(*(u8**)(r3 + 4) + 4);
    *(u8**)(r3 + 0) = r4;
    *(u8**)(r3 + 4) = r4;
    *(u32*)(r3 + 0x10) = 0;
    return 1;
}

u32 fn_8000B4C4(u8* r3) {
    u8* r5 = *(u8**)(r3 + 4);
    s16 r4 = *(s16*)(r3 + 0x28);
    u32 r0 = *(u32*)r5;
    s16 r5b = (s16)((r0 >> 8) & 0xFF);
    if (r4 < 0) return 1;
    *(s16*)(r3 + 0x28) = r4 - 1;
    if (*(s16*)(r3 + 0x28) != 0) return 1;
    u8* r4b = *(u8**)r3;
    u32* r6 = (u32*)r4b;
    while (*r6) {
        u32 r6v = *r6;
        u32 low = r6v & 0xFFF;
        if (low == 1) {
            s16 val = (s16)(r6v >> 16);
            if (val == r5b) {
                *(u8**)(r3 + 4) = r4b;
                *(u32*)(r3 + 0x10) = 0;
                return 1;
            }
        }
        r4b = (u8*)((u32)r4b + ((r6v >> 10) & 0x3C));
        r6 = (u32*)r4b;
    }
    return 1;
}

u32 fn_8000B540(u8* r3) {
    u8* r5 = *(u8**)(r3 + 0);
    u8* r4b = *(u8**)(r3 + 4);
    u32 r0 = *(u32*)r4b;
    s16 r4s = (s16)((r0 >> 8) & 0xFF);
    u32* r6 = (u32*)r5;
    while (*r6) {
        u32 r6v = *r6;
        u32 low = r6v & 0xFFF;
        if (low == 1) {
            s16 val = (s16)(r6v >> 16);
            if (val == r4s) {
                *(u8**)(r3 + 4) = r5;
                *(u32*)(r3 + 0x10) = 0;
                return 1;
            }
        }
        r5 = (u8*)((u32)r5 + ((r6v >> 10) & 0x3C));
        r6 = (u32*)r5;
    }
    return 1;
}

u32 fn_8000B59C(u8* r3) {
    *(u32*)(r3 + 0x10) = (u32)fn_8000B5F8;
    *(u32*)(r3 + 4) += 4;
    return 0;
}

u32 fn_8000B5BC(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 4;
    s16 r0 = (s16)(*(u32*)r4 >> 16);
    if (!r0) return 0;
    *(s16*)(r3 + 0x28) = r0;
    *(u32*)(r3 + 0x10) = (u32)fn_8000B5F8;
    return 0;
}

void fn_8000B5F8() {}

u32 fn_8000B5FC(u8* r3) {
    *(u32*)(r3 + 4) += 4;
    return 1;
}

u32 fn_8000B610(u8* r31) {
    u8* r3 = lbl_802B0BB8;
    for (int i = 0; i < 0x20; i++) {
        u8* offsets[8];
        for (int j = 0; j < 8; j++) offsets[j] = r3 + j * 0x70;
        for (int j = 0; j < 8; j++) {
            if (offsets[j] != r31 && *(u32*)offsets[j] == *(u32*)r31) {
                fn_8000C734(offsets[j]);
                goto done610;
            }
        }
        r3 += 0x70 * 8;
    }
done610:
    *(u32*)(r31 + 4) += 4;
    return 1;
}

u32 fn_8000B788(u8* r7) {
    u8* r4 = lbl_802B0BB8;
    u32 r6 = 0;
    for (int i = 0; i < 0x20; i++) {
        for (int j = 0; j < 8; j++) {
            if (*(u32*)(r4 + j*0x70) == *(u32*)r7) r6++;
        }
        r4 += 0x70 * 8;
    }
    if (r6 > 1) {
        fn_8000C734(r7);
        return 0;
    }
    *(u32*)(r7 + 4) += 4;
    return 1;
}

u32 fn_8000B894(u8* r3) {
    r3[0x2c] |= 0x4;
    *(u32*)(r3 + 4) += 4;
    return 1;
}

u32 fn_8000B8B4(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 0xc) = *(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    return 1;
}

u32 fn_8000B8D4(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 0x8) = *(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    return 1;
}

u32 fn_8000B8F4(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 0x14) = *(u32*)(r4 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 8;
    return 1;
}

u32 fn_8000B914(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 4;
    r3[0x2b] = (u8)(*(u32*)r4 >> 16);
    return 1;
}

u32 fn_8000B934(u8* r3) {
    u8* r4 = *(u8**)(r3 + 4);
    *(u32*)(r3 + 4) = (u32)r4 + 4;
    r3[0x2a] = (u8)(*(u32*)r4 >> 16);
    return 1;
}

u32 fn_8000B954(u8* r3) {
    fn_8000C734(r3);
    return 0;
}

void fn_8000B978(u8* r30) {
    if (!*(u32*)r30) return;
    if (r30[0x2d]) return;
    if (r30[0x2e]) return;
    if (*(u32*)(r30 + 0x10)) return;
    while (true) {
        u8* r4 = *(u8**)(r30 + 4);
        u32 r0 = *(u32*)r4;
        u32 r4idx = (r0 >> 5) & 0x1C;
        u32 r0idx = (r0 & 0xFF) << 2;
        u32* table = (u32*)((u8*)lbl_802B7FDC + r4idx);
        u32 (*r12)() = (u32(*)())*(u32*)((u8*)*table + r0idx);
        u32 r3 = r12();
        if (!(r3 & 0xFF)) return;
        if (!*(u32*)r30) return;
        if (r30[0x2d]) return;
        if (r30[0x2e]) return;
    }
}

u8* fn_8000BA30(u8 r3) {
    return lbl_802B0BB8 + (u32)r3 * 0x70;
}

// fn_8000BA48: reverse lookup get index from pointer
u8 fn_8000BA48(u8* r3) {
    s32 offset = (s32)(r3 - lbl_802B0BB8);
    s32 q = (s32)(((s64)0x92492493 * offset) >> 32);
    q = (q + offset) >> 6;
    q += (u32)q >> 31;
    return (u8)q;
}

void fn_8000BA78(u8* r30, void (*r31)(u8*)) {
    r31(r30);
    if (*(u32*)(r30 + 0x1c)) {
        fn_8000BACC(*(u8**)(r30 + 0x1c), (void*)r31);
    }
}

void fn_8000BACC(u8* r27, void (*r31)(u8*)) {
    u8* r28;
    u8* r29c;
    u8* r30 = *(u8**)(r27 + 0x24);
    if (r30) {
        u8* r29 = *(u8**)(r30 + 0x24);
        if (r29) {
            r28 = *(u8**)(r29 + 0x24);
            if (r28) {
                if (*(u32*)(r28 + 0x24)) fn_8000BACC(*(u8**)(r28 + 0x24), r31);
                r31(r28);
                if (*(u32*)(r28 + 0x1c)) fn_8000BACC(*(u8**)(r28 + 0x1c), r31);
            }
            r31(r29);
            r28 = *(u8**)(r29 + 0x1c);
            if (r28) {
                if (*(u32*)(r28 + 0x24)) fn_8000BACC(*(u8**)(r28 + 0x24), r31);
                r31(r28);
                if (*(u32*)(r28 + 0x1c)) fn_8000BACC(*(u8**)(r28 + 0x1c), r31);
            }
        }
        r31(r30);
        r28 = *(u8**)(r30 + 0x1c);
        if (r28) {
            u8* r29b = *(u8**)(r28 + 0x24);
            if (r29b) {
                if (*(u32*)(r29b + 0x24)) fn_8000BACC(*(u8**)(r29b + 0x24), r31);
                r31(r29b);
                if (*(u32*)(r29b + 0x1c)) fn_8000BACC(*(u8**)(r29b + 0x1c), r31);
            }
            r31(r28);
            r28 = *(u8**)(r28 + 0x1c);
            if (r28) {
                if (*(u32*)(r28 + 0x24)) fn_8000BACC(*(u8**)(r28 + 0x24), r31);
                r31(r28);
                if (*(u32*)(r28 + 0x1c)) fn_8000BACC(*(u8**)(r28 + 0x1c), r31);
            }
        }
    }
    r31(r27);
    r28 = *(u8**)(r27 + 0x1c);
    if (r28) {
        r29c = *(u8**)(r28 + 0x24);
        if (r29c) {
            if (*(u32*)(r29c + 0x24)) fn_8000BACC(*(u8**)(r29c + 0x24), r31);
            r31(r29c);
            if (*(u32*)(r29c + 0x1c)) fn_8000BACC(*(u8**)(r29c + 0x1c), r31);
        }
        r31(r28);
        r28 = *(u8**)(r28 + 0x1c);
        if (r28) {
            if (*(u32*)(r28 + 0x24)) fn_8000BACC(*(u8**)(r28 + 0x24), r31);
            r31(r28);
            if (*(u32*)(r28 + 0x1c)) fn_8000BACC(*(u8**)(r28 + 0x1c), r31);
        }
    }
}

// fn_8000BDCC: search lbl_802B0BB8 by name string, return matching entry or null
u8* fn_8000BDCC(u8* r3) {
    u8* r10 = lbl_802B0BB8;
    for (int i = 0; i < 0x80; i++) {
        if (*(u32*)r10) {
            u8* r5 = r10 + 0x14;
            u8* r6 = r3;
            s32 cmp;
            do {
                s8 a = (s8)*r5, b = (s8)*r6;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r5++; r6++;
            } while (1);
            if (!cmp) return r10;
        }
        r10 += 0x70;
        if (*(u32*)r10) {
            u8* r5 = r10 + 0x14;
            u8* r6 = r3;
            s32 cmp;
            do {
                s8 a = (s8)*r5, b = (s8)*r6;
                if (a != b) { cmp = a - b; break; }
                if (!(a | b)) { cmp = 0; break; }
                r5++; r6++;
            } while (1);
            if (!cmp) return r10;
        }
        r10 += 0x70;
    }
    return 0;
}

void fn_8000BEC0(u8* r29) {
    u8* r31 = lbl_802B0BB8;
    for (int r30 = 0; r30 < 0x100; r30++, r31 += 0x70) {
        if (!*(u32*)r31) continue;
        u8* r4 = r31 + 0x14;
        u8* r5 = r29;
        s32 cmp;
        do {
            s8 a = (s8)*r4, b = (s8)*r5;
            if (a != b) { cmp = a - b; break; }
            if (!(a | b)) { cmp = 0; break; }
            r4++; r5++;
        } while (1);
        if (!cmp) fn_8000C734(r31);
    }
}

void fn_8000BF7C(u32 r3) {
    u8* r5 = lbl_802B0BB8;
    for (int i = 0; i < 0x20; i++) {
        for (int j = 0; j < 8; j++) {
            if (*(u32*)(r5 + j*0x70) == r3)
                *(u32*)(r5 + j*0x70 + 0x10) = 0;
        }
        r5 += 0x70 * 8;
    }
}

void fn_8000C028(u32 r29) {
    u8* r31 = lbl_802B0BB8;
    for (int r30 = 0; r30 < 0x100; r30++, r31 += 0x70) {
        if (*(u32*)r31 == r29)
            fn_8000C734(r31);
    }
}

void fn_8000C094(u32 r28, void (*r29)(u8*)) {
    u8* r31 = lbl_802B0BB8;
    for (int r30 = 0; r30 < 0x100; r30++, r31 += 0x70) {
        if (*(u32*)r31 == r28)
            r29(r31);
    }
}

void fn_8000C114(void (*r29)(u8*)) {
    u8* r31 = lbl_802B0BB8;
    for (int r30 = 0; r30 < 0x100; r30++, r31 += 0x70) {
        if (*(u32*)r31)
            r29(r31);
    }
}

void fn_8000C188(u8* r3, u32 r4) {
    *(u32*)(r3 + 0xc) = r4;
}

void fn_8000C190(u8* r3, u32 r4) {
    *(u32*)(r3 + 0x8) = r4;
}

void fn_8000C198(u8* r3, u8 r4) {
    u8* r6 = *(u8**)r3;
    u32* r5 = (u32*)r6;
    while (*r5) {
        u32 r5v = *r5;
        u32 low = r5v & 0xFFF;
        if (low == 1) {
            s16 val = (s16)(r5v >> 16);
            if (val == (s16)r4) {
                *(u8**)(r3 + 4) = r6;
                *(u32*)(r3 + 0x10) = 0;
                return;
            }
        }
        r6 = (u8*)((u32)r6 + ((r5v >> 10) & 0x3C));
        r5 = (u32*)r6;
    }
}

u8* fn_8000C1E8(u32 r3) {
    u8* r4 = lbl_802B0BB8;
    for (int i = 0; i < 0x20; i++) {
        for (int j = 0; j < 8; j++) {
            if (*(u32*)(r4 + j*0x70) == r3)
                return r4 + j*0x70;
        }
        r4 += 0x70 * 8;
    }
    return 0;
}

void fn_8000C2B0(u8* r3) {
    *(u32*)(r3 + 0x10) = 0;
}

void fn_8000C2BC(u32 r3) {
    u8* p = *(u8**)((u8*)lbl_802B7FBC + r3 * 4);
    if (p) fn_8000C2F4(p);
}

u32 fn_8000C638() {
    return ((u32)lbl_803753E8 - (u32)lbl_802B7BB8) >> 2;
}

void fn_8000C654(u32 r3) {
    lbl_803753E8 -= 4;
    *(u32*)lbl_803753E8 = r3;
}

u8* fn_8000C668() {
    u32 r4 = lbl_803753E8;
    u8* r3 = *(u8**)r4;
    if (r3) {
        lbl_803753E8 = r4 + 4;
        return r3;
    }
    u8* p = lbl_802B0BB8;
    for (int i = 0; i < 0x100; i++, p += 0x70) {
        if (*(u32*)p && (p[0x2c] & 0x10)) {
            fn_8000C734(p);
            return (u8*)fn_8000C668();
        }
    }
    return 0;
}

void fn_8000C6E0(u8* r3) {
    u8 r4 = r3[0x2c];
    if (!(r4 & 0x2)) return;
    r3[0x2c] = r4 & ~0x2;
    u8* r4p = *(u8**)(r3 + 0x18);
    r4p[0x2d]--;
}

void fn_8000C708(u8* r3) {
    if (!*(u32*)(r3 + 0x18)) return;
    r3[0x2c] |= 0x2;
    u8* r4 = *(u8**)(r3 + 0x18);
    r4[0x2d]++;
}

void fn_8000C734(u8* r3) {
    if (!r3) return;
    u8* r4 = *(u8**)(r3 + 0x20);
    if (r4) *(u32**)(r4 + 0x24) = *(u32**)(r3 + 0x24);
    r4 = *(u8**)(r3 + 0x24);
    if (r4) *(u32**)(r4 + 0x20) = *(u32**)(r3 + 0x20);
    u8* r5 = *(u8**)(r3 + 0x18);
    if ((u32)r5 > 8) {
        if (*(u32**)(r5 + 0x1c) == (u32*)r3)
            *(u32**)(r5 + 0x1c) = *(u32**)(r3 + 0x24);
    } else {
        u8* r4b = lbl_802B7FBC + (u32)r5 * 4;
        if (*(u32*)r4b == (u32)r3)
            *(u32*)r4b = *(u32*)(r3 + 0x24);
    }
    *(u32*)(r3 + 0x20) = 0;
    *(u32*)(r3 + 0x24) = 0;
    fn_8000C7D4(r3);
}

void fn_8000C2F4(u8* r31) {
    u8* r30 = *(u8**)(r31 + 0x24);
    if (r30) {
        if (*(u32*)(r30 + 0x24)) fn_8000C2F4(*(u8**)(r30 + 0x24));
        if (!*(u32*)r30) goto next_r31;
        if (r30[0x2e]) goto next_r31;
        if (!r30[0x2d]) {
            if ((r30[0x2c] & 0x4) && (*(u8**)(r30 + 0x18))[0x2d]) goto skip_r30_dispatch;
            if (!*(u32*)(r30 + 0x10)) fn_8000B978(r30);
            if (*(u32*)(r30 + 0x10)) {
                s16 timer = *(s16*)(r30 + 0x28);
                if (timer >= 0) {
                    *(s16*)(r30 + 0x28) = timer - 1;
                    if (*(s16*)(r30 + 0x28) < 0) {
                        fn_8000C2B0(r30);
                        goto r30_dispatch_loop;
                    }
                }
                void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r30 + 0x10);
                fn(r30);
            }
            if (r30[0x2c] & 0x1) goto next_r31;
        }
skip_r30_dispatch:
        if (*(u32*)(r30 + 0xc)) {
            void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r30 + 0xc);
            fn(r30);
        }
        if (*(u32*)(r30 + 0x1c)) fn_8000C2F4(*(u8**)(r30 + 0x1c));
    }
next_r31:
    if (!*(u32*)r31) return;
    if (r31[0x2e]) return;
    if (!r31[0x2d]) {
        if ((r31[0x2c] & 0x4) && (*(u8**)(r31 + 0x18))[0x2d]) goto skip_r31_dispatch;
        {
            u8* r30b = (u8*)lbl_802B7FDC;
r30_dispatch_loop:
            u8* r4 = *(u8**)(r31 + 4);
            u32 r0 = *(u32*)r4;
            u32 idx = (r0 >> 5) & 0x1C;
            u32 off = (r0 & 0xFF) << 2;
            u32* table = (u32*)*(u32*)((u8*)lbl_802B7FDC + idx);
            void (*fn)(u8*) = (void(*)(u8*))table[off >> 2];
            fn(r31);
            if (!*(u32*)r31) return;
            if (!*(u32*)r31) return;
            if (r31[0x2d]) return;
            if (!r31[0x2e]) goto r30_dispatch_loop;
        }
    }
skip_r31_dispatch:
    if (*(u32*)(r31 + 0x10)) {
        s16 timer = *(s16*)(r31 + 0x28);
        if (timer >= 0) {
            *(s16*)(r31 + 0x28) = timer - 1;
            if (*(s16*)(r31 + 0x28) < 0) {
                *(u32*)(r31 + 0x10) = 0;
                goto skip_r31_dispatch;
            }
        }
        void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r31 + 0x10);
        fn(r31);
    }
    if (r31[0x2c] & 0x1) return;
    if (*(u32*)(r31 + 0xc)) {
        void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r31 + 0xc);
        fn(r31);
    }
    r30 = *(u8**)(r31 + 0x1c);
    if (!r30) return;
    if (*(u32*)(r30 + 0x24)) fn_8000C2F4(*(u8**)(r30 + 0x24));
    if (!*(u32*)r30) return;
    if (r30[0x2e]) return;
    if (!r30[0x2d]) {
        if ((r30[0x2c] & 0x4) && (*(u8**)(r30 + 0x18))[0x2d]) goto skip_r30b;
        if (!*(u32*)(r30 + 0x10)) fn_8000B978(r30);
        if (*(u32*)(r30 + 0x10)) {
            s16 timer = *(s16*)(r30 + 0x28);
            if (timer >= 0) {
                *(s16*)(r30 + 0x28) = timer - 1;
                if (*(s16*)(r30 + 0x28) < 0) {
                    fn_8000C2B0(r30);
                    goto r30b_loop;
                }
            }
r30b_loop:
            void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r30 + 0x10);
            fn(r30);
        }
        if (r30[0x2c] & 0x1) return;
    }
skip_r30b:
    if (*(u32*)(r30 + 0xc)) {
        void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r30 + 0xc);
        fn(r30);
    }
    if (*(u32*)(r30 + 0x1c)) fn_8000C2F4(*(u8**)(r30 + 0x1c));
}

// fn_8000C7D4 is in document 22
void fn_8000C7D4(u8* r30) {
    u8* r31 = *(u8**)(r30 + 0x24);
    if (r31) {
        u8* r29 = *(u8**)(r31 + 0x24);
        if (r29) {
            if (*(u32*)(r29 + 0x24)) fn_8000C7D4(*(u8**)(r29 + 0x24));
            if (*(u32*)(r29 + 0x1c)) fn_8000C7D4(*(u8**)(r29 + 0x1c));
            if (!(r29[0x2c] & 0x1)) {
                if (*(u32*)(r29 + 0x8)) {
                    void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r29 + 0x8);
                    fn(r29);
                }
                fn_8000C654((u32)r29);
                *(u32*)r29 = 0;
                *(u32*)(r29 + 0x10) = 0;
                r29[0x2c] |= 0x1;
                if (r29[0x2c] & 0x2)
                    (*(u8**)(r29 + 0x18))[0x2d]--;
            }
        }
        u8* r29b = *(u8**)(r31 + 0x1c);
        if (r29b) {
            if (*(u32*)(r29b + 0x24)) fn_8000C7D4(*(u8**)(r29b + 0x24));
            if (*(u32*)(r29b + 0x1c)) fn_8000C7D4(*(u8**)(r29b + 0x1c));
            if (!(r29b[0x2c] & 0x1)) {
                if (*(u32*)(r29b + 0x8)) {
                    void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r29b + 0x8);
                    fn(r29b);
                }
                fn_8000C654((u32)r29b);
                *(u32*)r29b = 0;
                *(u32*)(r29b + 0x10) = 0;
                r29b[0x2c] |= 0x1;
                if (r29b[0x2c] & 0x2)
                    (*(u8**)(r29b + 0x18))[0x2d]--;
            }
        }
        if (!(r31[0x2c] & 0x1)) {
            if (*(u32*)(r31 + 0x8)) {
                void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r31 + 0x8);
                fn(r31);
            }
            lbl_803753E8 -= 4;
            *(u32*)lbl_803753E8 = (u32)r31;
            *(u32*)r31 = 0;
            *(u32*)(r31 + 0x10) = 0;
            r31[0x2c] |= 0x1;
            if (r31[0x2c] & 0x2)
                (*(u8**)(r31 + 0x18))[0x2d]--;
        }
    }
    u8* r31b = *(u8**)(r30 + 0x1c);
    if (r31b) {
        u8* r29c = *(u8**)(r31b + 0x24);
        if (r29c) {
            if (*(u32*)(r29c + 0x24)) fn_8000C7D4(*(u8**)(r29c + 0x24));
            if (*(u32*)(r29c + 0x1c)) fn_8000C7D4(*(u8**)(r29c + 0x1c));
            if (!(r29c[0x2c] & 0x1)) {
                if (*(u32*)(r29c + 0x8)) {
                    void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r29c + 0x8);
                    fn(r29c);
                }
                fn_8000C654((u32)r29c);
                *(u32*)r29c = 0;
                *(u32*)(r29c + 0x10) = 0;
                r29c[0x2c] |= 0x1;
                if (r29c[0x2c] & 0x2)
                    (*(u8**)(r29c + 0x18))[0x2d]--;
            }
        }
        u8* r29d = *(u8**)(r31b + 0x1c);
        if (r29d) {
            if (*(u32*)(r29d + 0x24)) fn_8000C7D4(*(u8**)(r29d + 0x24));
            if (*(u32*)(r29d + 0x1c)) fn_8000C7D4(*(u8**)(r29d + 0x1c));
            if (!(r29d[0x2c] & 0x1)) {
                if (*(u32*)(r29d + 0x8)) {
                    void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r29d + 0x8);
                    fn(r29d);
                }
                fn_8000C654((u32)r29d);
                *(u32*)r29d = 0;
                *(u32*)(r29d + 0x10) = 0;
                r29d[0x2c] |= 0x1;
                if (r29d[0x2c] & 0x2)
                    (*(u8**)(r29d + 0x18))[0x2d]--;
            }
        }
        if (!(r31b[0x2c] & 0x1)) {
            if (*(u32*)(r31b + 0x8)) {
                void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r31b + 0x8);
                fn(r31b);
            }
            lbl_803753E8 -= 4;
            *(u32*)lbl_803753E8 = (u32)r31b;
            *(u32*)r31b = 0;
            *(u32*)(r31b + 0x10) = 0;
            r31b[0x2c] |= 0x1;
            if (r31b[0x2c] & 0x2)
                (*(u8**)(r31b + 0x18))[0x2d]--;
        }
    }
    if (!(r30[0x2c] & 0x1)) {
        if (*(u32*)(r30 + 0x8)) {
            void (*fn)(u8*) = (void(*)(u8*))*(u32*)(r30 + 0x8);
            fn(r30);
        }
        lbl_803753E8 -= 4;
        *(u32*)lbl_803753E8 = (u32)r30;
        *(u32*)r30 = 0;
        *(u32*)(r30 + 0x10) = 0;
        r30[0x2c] |= 0x1;
        if (r30[0x2c] & 0x2)
            (*(u8**)(r30 + 0x18))[0x2d]--;
    }
}

// fn_8000CB8C
void fn_8000CB8C(u8* r3, s16 r4) {
    if (!r4) r4 = 3;
    if (r4 < 0)
        fn_8000CBC8(r3, r4);
    else
        fn_8000CC18(r3, r4);
}

// fn_8000CBC8
void fn_8000CBC8(u8* r3, s16 r4) {
    u8* result = fn_8000CC18(r3, r4);
    if (!*(u32*)result) return;
    result[0x2c] |= 0x2;
    (*(u8**)(result + 0x18))[0x2d]++;
}

// fn_8000CC18
u8* fn_8000CC18(u8* r29, s16 r30) {
    u8* r31 = fn_8000C668();
    *(u32*)r31 = (u32)r29;
    *(u32*)(r31 + 4) = (u32)r29;
    *(u32*)(r31 + 8) = 0;
    *(u32*)(r31 + 0xc) = 0;
    *(u32*)(r31 + 0x10) = 0;
    *(u32*)(r31 + 0x14) = (u32)(lbl_80270A28 + 0x78);
    *(u32*)(r31 + 0x18) = 0;
    *(u32*)(r31 + 0x1c) = 0;
    *(u32*)(r31 + 0x20) = 0;
    *(u32*)(r31 + 0x24) = 0;
    *(s16*)(r31 + 0x28) = -1;
    r31[0x2a] = 0xff;
    r31[0x2c] = 0x8;
    r31[0x2d] = 0;
    r31[0x2e] = 0;

    if ((u32)r30 < 8) {
        r31[0x2b] = 0;
        u8* r3 = lbl_802B7FBC + (u32)r30 * 4;
        u8* r5 = *(u8**)r3;
        if (r5) {
            *(u32**)(r5 + 0x20) = (u32*)r31;
            *(u32**)(r31 + 0x24) = *(u32**)r3;
        }
        *(u32*)(r31 + 0x18) = (u32)r30;
        *(u32*)r3 = (u32)r31;
    } else {
        u8* r30p = (u8*)r30;
        r31[0x2b] = r30p[0x2b];
        u8* r3 = *(u8**)(r30p + 0x1c);
        if (r3) {
            *(u32**)(r3 + 0x20) = (u32*)r31;
            *(u32**)(r31 + 0x24) = *(u32**)(r30p + 0x1c);
        }
        *(u8**)(r30p + 0x1c) = r31;
        *(u32*)(r31 + 0x18) = (u32)r30;
    }

    while (*(u32*)r31 && !r31[0x2d] && !r31[0x2e] && !*(u32*)(r31 + 0x10)) {
        u8* r4 = *(u8**)(r31 + 4);
        u32 r0 = *(u32*)r4;
        u32 idx = (r0 >> 5) & 0x1C;
        u32 off = (r0 & 0xFF) << 2;
        u32* table = (u32*)*(u32*)((u8*)lbl_802B7FDC + idx);
        void (*fn)(u8*) = (void(*)(u8*))table[off >> 2];
        u32 ret = ((u32(*)(u8*))fn)(r31);
        if (!(ret & 0xFF)) break;
    }
    r31[0x2c] &= ~0x18;
    return r31;
}

// fn_8000CDB0: initialize lbl_802B0BB8 array
void fn_8000CDB0() {
    u8* r4 = lbl_802B0BB8;
    u8* r5 = lbl_802B0BB8 + 0x7000;
    for (int i = 0; i < 0x100; i++) {
        *(u32*)(r4 + 0x00) = 0; *(u32*)(r4 + 0x04) = 0;
        *(u32*)(r4 + 0x08) = 0; *(u32*)(r4 + 0x0c) = 0;
        *(u32*)(r4 + 0x10) = 0; *(u32*)(r4 + 0x14) = 0;
        *(u32*)(r4 + 0x18) = 0; *(u32*)(r4 + 0x1c) = 0;
        *(u32*)(r4 + 0x20) = 0; *(u32*)(r4 + 0x24) = 0;
        *(s16*)(r4 + 0x28) = -1;
        r4[0x2a] = 0xff; r4[0x2b] = 0;
        r4[0x2c] = 0; r4[0x2d] = 0;
        *(u32*)r5 = (u32)r4;
        r5 += 4;
        r4[0x2e] = 0;
        r4 += 0x70;
    }
    u8* base = lbl_802B0BB8;
    *(u32*)(base + 0x7424) = 0;
    u8* r5b = base + 0x7424;
    u8* r3 = base + 0x7404;
    u8* r6 = base + 0x7000;
    *(u32*)(r6 + 0x400) = 0;
    lbl_803753E8 = (u32)r6;
    for (int i = 1; i <= 8; i++) *(u32*)(r5b + i*4) = 0;
    *(u32*)(base + 0x7424) = (u32)(lbl_8028D740);
    for (int i = 0; i <= 7; i++) *(u32*)(r3 + i*4) = 0;
}

void fn_8000CE88() {
    u32 r0 = lbl_803753F8;
    u32 r3 = r0 * 4 + 2;
    lbl_803753F8 = (r3 * (r3 + 1)) >> 2;
}

void fn_8000CEA8(u32 r3) {
    lbl_803753F8 = r3;
}

// fn_8000CEB0, fn_8000CF90, fn_8000D00C: LFSR/RNG functions
u32 fn_8000CEB0(u32 r3) {
    // Complex LFSR using lbl_803753F0 state stubbed
    return 0;
}

u32 fn_8000CF90(u32 r3) {
    // Simpler LFSR using lbl_803753F0 stubbed
    return 0;
}

u32 fn_8000D00C(u32 r3) {
    // LFSR multiply variant stubbed
    return 0;
}

void fn_8000D074(u32 r3) {
    // LFSR seed initialization stubbed
}

void fn_8000D170() {
    // Debug/diagnostic print function stubbed
}

u8* fn_8000D2DC(u32 r3) {
    u8* base = *(u8**)(lbl_802B8000 + 4);
    return *(u8**)(base + r3 * 0x10 + 8);
}

u32 fn_8000D6C0(u8* r3) {
    u32 r5 = 0;
    while (*r3) {
        r5 = (s8)*r3 + r5 * 0x25;
        r3++;
    }
    return r5;
}

// fn_8000D2F8: hash table insert
u32 fn_8000D2F8(u8* r3, u32 r4, u32 r5) {
    // hash table insert stubbed
    return 0;
}

// fn_8000D3E4: hash table lookup by key+value
u8* fn_8000D3E4(u8* r3) {
    if (!r3) return 0;
    u32 r6 = 0, r5 = 0;
    u8* p = r3;
    while (*p) {
        s8 c = (s8)*p++;
        r6 = c + r6 * 0x25;
        r5 = c + r5 * 0x1f;
    }
    u32 hash = (u32)(((u64)0x80c121b3u * r6) >> 32) >> 8;
    hash = r6 - hash * 0x1fd;
    u8* bucket = *(u8**)(lbl_802B8000 + hash * 4 + 8);
    while (bucket) {
        if (*(u32*)(bucket + 4) == r5) return *(u8**)(bucket + 0xc);
        bucket = *(u8**)bucket;
    }
    return 0;
}

// fn_8000D47C: same as fn_8000D3E4
u8* fn_8000D47C(u8* r3) {
    if (!r3) return 0;
    u32 r6 = 0, r5 = 0;
    u8* p = r3;
    while (*p) {
        s8 c = (s8)*p++;
        r6 = c + r6 * 0x25;
        r5 = c + r5 * 0x1f;
    }
    u32 hash = (u32)(((u64)0x80c121b3u * r6) >> 32) >> 8;
    hash = r6 - hash * 0x1fd;
    u8* bucket = *(u8**)(lbl_802B8000 + hash * 4 + 8);
    while (bucket) {
        if (*(u32*)(bucket + 4) == r5) return *(u8**)(bucket + 0xc);
        bucket = *(u8**)bucket;
    }
    return 0;
}

// fn_8000D514: hash table insert with collision chain
u32 fn_8000D514(u8* r3, u8* r4) {
    // hash table insert stubbed
    return 0;
}

void fn_8000D98C(u32 r3, u8* r4) {
    u8* entry = lbl_802B91F0 + r3 * 0x44;
    *(u32*)entry = strlen((char*)r4);
    fn_8023D1A0(entry + 4, r4);
}

void fn_8000D9E4(u32 r3, u8* r4) {
    u8* entry = lbl_802B91F0 + r3 * 0x44;
    fn_8024180C(r4, entry + 4, 0xa);
    *(u32*)entry = strlen((char*)(entry + 4));
}

// fn_8000DA38 is in document 26 (attachment 4)
void fn_8000DA38() {}

// fn_8000E20C: string expansion with escape codes
u8* fn_8000E20C(u8* r28) {
    u8* r3 = fn_8000D47C(r28);
    if (!r3) return r28;
    if (*r3 != 0x40) return r28;
    // complex escape processing stubbed
    return r3;
}

void fn_8000E4BC(u8* r3, s16 r4, s16 r5, float f1, float f2, float f3, float f4, float f5, u8 r6, u8 r7) {
    // find font index 3 and render text
    fn_8000E924(r3, r4, r5, f1, f2, f3, f4, f5, r6, r7);
}

void fn_8000E634(u8* r3, s16 r4, s16 r5, float f1, float f2, float f3, float f4, float f5, u8 r6, u8 r7) {
    // find font index 2 and render text
    fn_8000E924(r3, r4, r5, f1, f2, f3, f4, f5, r6, r7);
}

void fn_8000E7AC(u8* r3, s16 r4, s16 r5, float f1, float f2, float f3, float f4, float f5, u8 r6, u8 r7) {
    // find font index 0 and render text
    fn_8000E924(r3, r4, r5, f1, f2, f3, f4, f5, r6, r7);
}

void fn_8000D6F0() {
    u8* r3 = lbl_802B8000;
    u32 r6 = 0;
    for (int i = 0; i < 0x3f; i++) {
        *(u32*)(r3 + 0x8)   = 0; *(u32*)(r3 + 0x7fc) = 0;
        *(u32*)(r3 + 0xc)   = 0; *(u32*)(r3 + 0x800) = 0;
        *(u32*)(r3 + 0x10)  = 0; *(u32*)(r3 + 0x804) = 0;
        *(u32*)(r3 + 0x14)  = 0; *(u32*)(r3 + 0x808) = 0;
        *(u32*)(r3 + 0x18)  = 0; *(u32*)(r3 + 0x80c) = 0;
        *(u32*)(r3 + 0x1c)  = 0; *(u32*)(r3 + 0x810) = 0;
        *(u32*)(r3 + 0x20)  = 0; *(u32*)(r3 + 0x814) = 0;
        *(u32*)(r3 + 0x24)  = 0; *(u32*)(r3 + 0x818) = 0;
        r6 += 8;
        r3 += 0x20;
    }

    r3 = lbl_802B8000 + r6 * 4;
    u32 remaining = 0x1fd - r6;
    if (r6 < 0x1fd) {
        for (u32 i = 0; i < remaining; i++) {
            *(u32*)(r3 + 0x8)   = 0;
            *(u32*)(r3 + 0x7fc) = 0;
            r3 += 4;
        }
    }

    *(u32*)lbl_802B8000 = 0;
    u32 alloc = (u32)fn_800C4C34(
        (void*)0x38000,
        (int)(lbl_80270AB8 + 0x78),
        0,
        0
    );
    *(u32*)(lbl_802B8000 + 4) = alloc;

    u8* r4 = lbl_802B8000;
    u8* base = (u8*)alloc;
    u32 r5 = 0;
    for (int i = 0; i < 0x500; i++) {
        u8* r3b = *(u8**)(r4 + 4);
        *(u32*)(r3b + r5 + 0x00) = 0;
        *(u32*)(r3b + r5 + 0x04) = 0;
        *(u32*)(r3b + r5 + 0x08) = 0;
        *(u32*)(r3b + r5 + 0x0c) = 0;
        *(u32*)(r3b + r5 + 0x10) = 0;
        *(u32*)(r3b + r5 + 0x14) = 0;
        *(u32*)(r3b + r5 + 0x18) = 0;
        *(u32*)(r3b + r5 + 0x1c) = 0;
        *(u32*)(r3b + r5 + 0x20) = 0;
        *(u32*)(r3b + r5 + 0x24) = 0;
        *(u32*)(r3b + r5 + 0x28) = 0;
        *(u32*)(r3b + r5 + 0x2c) = 0;
        *(u32*)(r3b + r5 + 0x30) = 0;
        *(u32*)(r3b + r5 + 0x34) = 0;
        *(u32*)(r3b + r5 + 0x38) = 0;
        *(u32*)(r3b + r5 + 0x3c) = 0;
        *(u32*)(r3b + r5 + 0x40) = 0;
        *(u32*)(r3b + r5 + 0x44) = 0;
        *(u32*)(r3b + r5 + 0x48) = 0;
        *(u32*)(r3b + r5 + 0x4c) = 0;
        *(u32*)(r3b + r5 + 0x50) = 0;
        *(u32*)(r3b + r5 + 0x54) = 0;
        *(u32*)(r3b + r5 + 0x58) = 0;
        *(u32*)(r3b + r5 + 0x5c) = 0;
        *(u32*)(r3b + r5 + 0x60) = 0;
        *(u32*)(r3b + r5 + 0x64) = 0;
        *(u32*)(r3b + r5 + 0x68) = 0;
        *(u32*)(r3b + r5 + 0x6c) = 0;
        *(u32*)(r3b + r5 + 0x70) = 0;
        *(u32*)(r3b + r5 + 0x74) = 0;
        *(u32*)(r3b + r5 + 0x78) = 0;
        *(u32*)(r3b + r5 + 0x7c) = 0;
        r5 += 0x80;
    }
}

// fn_8000E924 is document 28 very large format string parser + renderer stub
void fn_8000E924(u8* r3, s16 r4, s16 r5, float f1, float f2, float f3, float f4, float f5, u8 r6, u8 r7) {
    // complex format string rendering with GX FIFO writes stub only
}

void fn_80010164(s16 r3, s16 r4, u8* r5, u8 r6, u8 r7, u8* r8) {
    fn_8023AC98(0, 0, 0, 0, 0); // stub complex varargs call
    fn_800079D8(6);
    float f1 = (float)r3, f2 = (float)r4;
    fn_80007998(f1, f2);
    fn_800077A8(r5);
    fn_800073BC(f1);
    fn_800073A8(f2);
    fn_80007360(r6, lbl_80376F40);
    fn_80007318(r7, lbl_80376EEC);
    fn_80007264(r8);
    fn_800079C4();
}

void fn_800102C4(s16 r3, s16 r4, u8* r5, u8* r6) {
    fn_8023AC98(0, 0, 0, 0, 0); // stub
    fn_800079D8(6);
    float f1 = (float)r3, f2 = (float)r4;
    fn_80007998(f1, f2);
    fn_800077A8(r5);
    fn_80007264(r6);
    fn_800079C4();
}

s32 fn_800103E4(s32 r3, float f1) {
    if (r3 == -1) r3 = 0;
    u32* tbl = (u32*)lbl_802B9300 + r3;
    fn_80105124(tbl);
    // find font index, call fn_80105618, scale by f1
    fn_80105618();
    return 0; // stub
}

s32 fn_80010550(u8* r29, s32 r4, float f1) {
    if (r4 == -1) r4 = 0;
    fn_8010579C(r29);
    // find font index, scale by f1
    return (s32)r29;
}

s32 fn_800106C4(u8* r29, s32 r4, float f1) {
    if (r4 == -1) r4 = 0;
    fn_80105640(r29);
    // find font index, scale by f1
    return (s32)r29;
}

s32 fn_80010838(u8* r3) {
    if (*r3 != 0x23) return 0;
    s8 r3b = (s8)r3[1];
    u32 off = (u32)(r3b - 0x23);
    if (off > 0x56) return -1;
    switch (off) {
    case 0x21: return 4;  // '#' + 0x21 = 'f' - 0x23 + 0x23 ... adjust
    case 0x22: return 5;
    case 0x2f: return 2;
    default:   return -1;
    }
}

// fn_80010898 is in document 29 font metric calculator stub
s32 fn_80010898(u8* r3, s32 r4, float f1) {
    // complex font width calculation stub only
    return 0;
}

// fn_80010CA0 is in document 30 string renderer stub
void fn_80010CA0(u8* r3, u32* r4, float f1) {
    // complex string rendering stub only
}

void fn_80011118() {
    fn_80104FA8(0);
}

s32 fn_80011138(s32 r3) {
    if (r3 == -1) r3 = 0;
    u32* tbl = (u32*)lbl_802B9300;
    fn_80105124(tbl + r3);
    for (int i = 0; i < 5; i++) {
        if (*(u32*)(lbl_802B9300 + i*4) == *(u32*)tbl) return i;
    }
    return -1;
}

void fn_800111E0() {
    u32 r0;
    fn_800C48D4(0x10);
    fn_80105BA4();
    *(u32*)(lbl_802B9300 + 4) = r0;
    fn_80105A5C(0, lbl_80270B40, 0);
    fn_800C48D4(0x10);
    fn_80105BA4();
    *(u32*)(lbl_802B9300 + 8) = r0;
    fn_80105A5C(0, lbl_80270B40 + 0x12, 0);
    fn_800C48D4(0x10);
    fn_80105BA4();
    *(u32*)(lbl_802B9300 + 0xc) = r0;
    fn_80105A5C(0, lbl_80270B40 + 0x21, 0);
    fn_800C48D4(0x10);
    fn_80105BA4();
    *(u32*)(lbl_802B9300 + 0x10) = r0;
    fn_80105A5C(0, lbl_80270B40 + 0x33, 0);
    u8* r31 = (u8*)lbl_80375400;
    lbl_80375408 = (u32)r31;
    if (!*(u32*)(r31 + 4)) {
        void (*fn)(u8*) = (void(*)(u8*))*(u32*)((u8*)(*(u32**)r31) + 0x20);
        fn(r31);
        fn_8006FB14(r31 + 4, 0);
    }
}

void fn_80011324() {
    if (!(s8)lbl_80375410) {
        lbl_8037540C = 0;
        lbl_80375410 = 1;
    }
    if (!lbl_8037540C) {
        fn_80105568(0);
        fn_80105124(0);
        fn_8010511C();
        lbl_8037540C = 1;
        *(u32*)lbl_802B9300 = 0; // stw r3, lbl_802B9300
    }
}

u32 fn_8001138C() {
    return lbl_80375408;
}

s32 fn_80011394(void* r30) {
    void (*fn1)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x40);
    fn1(r30);
    u32 r31 = 0; // return value from fn1
    void (*fn2)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x30);
    fn2(r30);
    return 0; // r3 / r31 stub
}

s32 fn_800113F0(void* r30) {
    void (*fn1)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x3c);
    fn1(r30);
    u32 r31 = 0;
    void (*fn2)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x2c);
    fn2(r30);
    return 0; // stub
}

u16 fn_8001144C(void* r31) {
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r31) + 0x24);
    fn(r31);
    fn_8006F9F0(*(u8**)((u8*)r31 + 4), 0);
    return *(u16*)(*(u8**)0); // stub
}

u16 fn_80011498(void* r31) {
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r31) + 0x24);
    fn(r31);
    fn_8006F9F0(*(u8**)((u8*)r31 + 4), 0);
    return *(u16*)(*(u8**)0 + 2); // stub
}

u32 fn_800114E4() { return 0; }
u32 fn_800114EC() { return 0; }

// fn_800114F4 is in document 31 complex sprite renderer stub
void fn_800114F4(void* r3, s32 r4, float f1, float f2, float f3, u8* r5) {
    // complex sprite rendering with GX FIFO writes stub only
}

void fn_80011820(void* r31) {
    void (*fn1)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r31) + 0x30);
    fn1(r31);
    void (*fn2)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r31) + 0x2c);
    fn2(r31);
    // compute scale, call fn_8020B118 and fn_8022DBAC stub
}

void fn_800118E0(void* r30) {
    void (*fn1)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x24);
    fn1(r30);
    void (*fn2)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r30) + 0x28);
    fn2(r30);
    fn_8006F7DC(*(u8**)((u8*)r30 + 4), 0, 0, 0);
    fn_8022B798(0, 0, 0);
    fn_8022B9AC(0, 0);
    fn2(r30);
    fn_8022BA4C(0, 0);
}

void fn_8001198C() {
    fn_8006DD20(0, 1, 4, 0x1e);
    fn_8006DE78(0, 0xf, 0xf, 0xf, 0xa);
    fn_8006DF68(0, 0, 0, 0, 1, 0);
    fn_8006DE0C(0, 7, 4, 5, 7);
    fn_8006DEE4(0, 0, 0, 0, 1, 0);
    fn_8006DFEC(0, 0, 0, 4);
}

void fn_80011A38() {
    fn_8006DD20(0, 1, 4, 0x21);
    fn_8006DD8C(0, 0);
    fn_8006DFEC(0, 0, 1, 4);
}