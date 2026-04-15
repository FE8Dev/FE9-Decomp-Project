#include <dolphin/types.h>

extern "C" void fn_80011324();
extern "C" u32 fn_80104FA8();
extern "C" void fn_8000CC18(void*, int);
extern "C" void* fn_800C4C34(void*, int, int, int);

extern u8* lbl_803753A0;
extern u32 lbl_803753A8;
extern u8 lbl_8028D214[];
extern u8 lbl_802708C0[];

extern "C" void fn_800C4C60(int);
extern "C" void fn_8005C6E4(void*);
extern "C" void fn_800C2D4C();
extern "C" void fn_8006819C(int);
extern "C" void fn_80066E94();
extern "C" void fn_800673B0();
extern "C" void fn_8001B23C(void*);
extern "C" void fn_800FCE5C();
extern "C" void fn_800A654C();
extern "C" void fn_801A4EFC();
extern "C" void fn_8007D020();
extern "C" void fn_8007CF64();
extern "C" void fn_8020491C();
extern "C" void fn_8005BB44();
extern "C" void fn_800111E0();
extern "C" void fn_8008E370();
extern "C" void fn_8005AE48(void*);
extern "C" void fn_8003FE6C(void*);
extern "C" void fn_8023ABC4(void*, int, int, void*, int, ...);
extern "C" void fn_8014811C(int);
extern "C" void fn_80147AC4();
extern "C" void fn_8019BC04(void*);
extern "C" void fn_8019BB6C(void*);
extern "C" void fn_800068D8(u64*);
extern "C" void fn_800C5188();
extern "C" void fn_800C56F8(void*, int);
extern "C" void fn_801F0A50();
extern "C" void fn_80121F64();
extern "C" void fn_801E69D8(void*);
extern "C" void fn_8014E638(void*, int);
extern "C" void fn_8014E7A4(void*);
extern "C" void fn_801E5694(void*);
extern "C" void* fn_8000C1E8(void*);
extern "C" void fn_8002D6E8();
extern "C" void fn_8014ECA8();
extern "C" void fn_8016A8F8();
extern "C" void fn_80016D34();
extern "C" void fn_8014DF60(float, float);
extern "C" void fn_800188F8();
extern "C" void fn_80016EBC();
extern "C" void fn_8000C198(void*, int);
extern "C" int OSGetResetCode();

extern u8 lbl_802708E0[];
extern u8 lbl_802FA7E8[];
extern u8 lbl_802FA830[];
extern u8 lbl_8033BFB8[];
extern u8 lbl_8028D1FC[];
extern u8 lbl_8033A708[];
extern u8 lbl_80375D9C;
extern u8 lbl_80375D9E;
extern u8 lbl_80375DA6;
extern void* lbl_803765A0;
extern double lbl_80376E60;
extern u8 lbl_8028D660[];


void fn_80005C8C() {
    fn_800C4C60(0x100000);
    fn_8005C6E4(lbl_802708E0 + 0xb4);
    fn_800C4C60(0xfff00000);
    fn_800C2D4C();
    fn_8006819C(0x200);
    fn_80066E94();
    fn_800673B0();
    fn_8001B23C(lbl_802708E0 + 0xbf);
    fn_800FCE5C();
    fn_800A654C();
    fn_801A4EFC();
    fn_8007D020();
    fn_8007CF64();
    fn_8020491C();
    fn_8005BB44();
    fn_800111E0();
    fn_8008E370();
    fn_8005AE48(lbl_802FA7E8);
    fn_8005AE48(lbl_802FA830);
    fn_8003FE6C(lbl_802708E0 + 0xcb);
    fn_8003FE6C(lbl_802708E0 + 0xd6);
    u8 idx = *(u8*)(lbl_8033BFB8 + 0x44);
    u32 shifted = (u32)(idx & 0xFF) << 2;
    u32* table = (u32*)lbl_8028D1FC;
    u32 val = table[shifted / 4];
    char buf[0x48];
    fn_8023ABC4(buf, 0x40, 0, lbl_802708E0 + 0xea, val, 0);
    fn_8003FE6C(buf);
    fn_8014811C(0);
    lbl_80375D9C = 0x64;
    lbl_80375D9E = 0x64;
    lbl_80375DA6 = 0;
    fn_80147AC4();
    *(u8*)(lbl_8033A708 + 0xa1) = 0x40;
}

void fn_80005DB8() {
    u8* p = lbl_8033A708 + 0x9c;
    fn_8019BC04(p);
    fn_8019BB6C(p);
}

void fn_80005DF8() {
    u64 val1;
    fn_800068D8(&val1);
    u32* p = (u32*)lbl_8033A708;
    u32 lo = *(u32*)(p + 0x5c/4);
    u32 hi = *(u32*)(p + 0x58/4);
    u64 sum = ((u64)hi << 32 | lo) + val1;
    *(u32*)(p + 0x5c/4) = (u32)sum;
    *(u32*)(p + 0x58/4) = (u32)(sum >> 32);
    u64 val2;
    fn_800068D8(&val2);
    lo = *(u32*)(p + 0x64/4);
    hi = *(u32*)(p + 0x60/4);
    sum = ((u64)hi << 32 | lo) + val2;
    *(u32*)(p + 0x64/4) = (u32)sum;
    *(u32*)(p + 0x60/4) = (u32)(sum >> 32);
}

int fn_80005E5C() {
    int code = OSGetResetCode();
    if (!(code >> 31)) return 0;
    code = OSGetResetCode();
    u32 bit = code & 0x10000;
    u32 lz = __cntlzw(bit);
    return (int)(lz >> 5) & 0xFF;
}

int fn_80005E9C() {
    u8* p = lbl_8033A708;
    u8 val = *(u8*)(p + 0x10);
    u32 sub = 0x1d - val;
    u32 lz = __cntlzw(sub);
    return (int)(lz >> 5);
}

void fn_80005EB8() {
    fn_800C5188();
}

void fn_80005ED8() {
    fn_800C56F8(lbl_802708E0 + 0xfa, 0xb00000);
}

void fn_80005F08() {
    void* r31 = *(void**)((u8*)&lbl_803765A0 + 4);
    fn_801F0A50();
    fn_80121F64();
    fn_801E69D8(r31);
    u8 state = *(u8*)((u8*)r31 + 0x65);
    if (state > 0xa) goto done;
    u32* jt = (u32*)lbl_8028D660;
    void (*fn)() = (void(*)())jt[state];
    fn();
    goto done;
done:;
}

void fn_800060FC() {
    fn_80016EBC();
}

void fn_8000611C() {
    void* r31 = *(void**)((u8*)&lbl_803765A0 + 4);
    void* p = fn_8000C1E8(lbl_8028D214);
    u8 val = *(u8*)((u8*)p + 0x64);
    *(u8*)((u8*)r31 + 0x64) = val;
    *(u8*)((u8*)r31 + 0x65) = 0xa;
}

void fn_80006164(void* r3) {
    void* p = fn_8000C1E8(lbl_8028D214);
    *(u32*)((u8*)p + 0x64) = (u32)r3;
}

void fn_8000619C() {
    void* p = fn_8000C1E8(lbl_8028D214);
    u32 val = *(u32*)((u8*)p + 0x60);
    fn_8000C198(p, val & 0xFF);
}

void fn_800061D0(void* r3) {
    u32 val = *(u32*)((u8*)r3 + 0x60);
    fn_8000C198(r3, val & 0xFF);
}

u32 fn_800061F8() {
    void* p = fn_8000C1E8(lbl_8028D214);
    return *(u32*)((u8*)p + 0x60);
}

void fn_80006224(void* r3) {
    void* p = fn_8000C1E8(lbl_8028D214);
    *(u32*)((u8*)p + 0x60) = (u32)r3;
}

void fn_800056A0(u8 value) {
    lbl_803753A0[0x18] = value;
}

void fn_80005A84(s32 r3, s16 r4) {
    s32 r29 = r3;
    s16 r30 = r4;
    if (r29 == 0) r29 = 0x34;
    if (r30 == 0) r30 = 0x200;

    u8* r31 = (u8*)fn_800C4C34(lbl_802708C0 + 0x1c, 0x40, 0, 0);
    lbl_803753A0 = r31;

    s16 tmp = (s16)((r29 + 8) & ~0x3F);
    *(s16*)(r31 + 0x4) = tmp;
    *(s16*)(r31 + 0x6) = r30;
    *(s16*)(r31 + 0x34) = 8;
    *(s16*)(r31 + 0x36) = 0;
    *(u8*)(r31 + 0x16) = 0;
    *(u8*)(r31 + 0x17) = 0;
    *(u8*)(r31 + 0x18) = 1;
    *(s16*)(r31 + 0x3c) = 0;

    s16 cols = *(s16*)(r31 + 0x6);
    s16 rows = *(s16*)(r31 + 0x4);
    s32 r30b = (s32)cols << 2;
    s32 size = r30b + (s32)rows * (s32)cols;
    u32* arr = (u32*)fn_800C4C34(lbl_802708C0 + 0x1c, size, 0, 0);
    *(u32**)r31 = arr;

    s32 r5 = 0;
    s32 r6 = 0;
    u8 r4b = 0;
    u32* base = *(u32**)r31;
    *(u32*)base = (u32)base + r30b;
    goto check;
loop:
    {
        s16 width = *(s16*)(r31 + 0x4);
        u32* arr2 = *(u32**)r31;
        s32 off = width * r5;
        r5++;
        u32* row = *(u32**)arr2;
        *(u32*)((u8*)arr2 + r6) = (u32)row + off;
        u32* ptr = *(u32**)r31;
        u8* cell = (u8*)*(u32*)((u8*)ptr + r6);
        r6 += 4;
        *cell = r4b;
    }
check:
    if (r5 < *(s16*)(r31 + 0x6)) goto loop;

    u8* p = (u8*)lbl_803753A0;
    *(s16*)(p + 0x8) = 0;
    *(s16*)(p + 0xa) = 0x10;
    *(s16*)(p + 0xc) = 0x260;
    *(s16*)(p + 0xe) = 0x1a0;
    *(s16*)(p + 0x12) = 0x10;
    p = (u8*)lbl_803753A0;
    s16 x = *(s16*)(p + 0x8);
    s16 w = *(s16*)(p + 0xc);
    if (x + w > 0x280) *(s16*)(p + 0xc) = 0x27f - x;
    p = (u8*)lbl_803753A0;
    *(s16*)(p + 0x14) = 0x1a;
    *(s16*)(r31 + 0x10) = *(s16*)(r31 + 0xe) - 0x41;
}

void fn_80005C60() {
    fn_8000CC18(lbl_8028D214, 3);
}

void fn_800056AC() {
    s16 val = *(s16*)((u8*)lbl_803753A0 + 0xe);
    *(s16*)((u8*)lbl_803753A0 + 0x10) = val - 0x10;
    *(u8*)((u8*)lbl_803753A0 + 0x18) = 0;
}

int fn_800056CC(int a, int b, int c, int d, int e, int f, int g, int h, ...) {
    return 0;
}

void fn_80005720(u16 r3, s8 r4) {
    u16 r0 = r3 & 0xFFFF;
    u32 flag1 = r3 & 0x10;
    if (flag1) {
        u8* p = (u8*)lbl_803753A0;
        u8 val = *(u8*)(p + 0x18);
        u32 lz = __cntlzw(val);
        *(u8*)(p + 0x18) = lz >> 5;
    }
    u8* p = (u8*)lbl_803753A0;
    if (*(u8*)(p + 0x16) != 0) {
        s8 ext = r4;
        s16 cur = *(s16*)(p + 0x10);
        s32 adj = (s32)ext >> 3;
        adj += ((u32)(s32)ext >> 31);
        *(s16*)(p + 0x10) = cur - (s16)adj;
        if ((s8)r4 < 0) adj++;
        *(s16*)(p + 0x10) -= adj;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x10) < 0x10)
            *(s16*)(p + 0x10) = 0x10;
        p = (u8*)lbl_803753A0;
        s16 lha_e = *(s16*)(p + 0xe);
        s16 lha_10 = *(s16*)(p + 0x10);
        s16 max = lha_e - 0x10;
        if (lha_10 > max)
            *(s16*)(p + 0x10) = max;
    }
    if (!(r0 & 0xF)) return;
    p = (u8*)lbl_803753A0;
    u8 active = *(u8*)(p + 0x16);
    if (active == 0) {
        if (r0 & 0x8) {
            *(u8*)(p + 0x16) = 1;
            *(s16*)(p + 0x3a) = *(s16*)(p + 0x38) - 1;
        }
        return;
    }
    s16 cur = *(s16*)(p + 0x3a);
    s16 target = *(s16*)(p + 0x14);
    s16 max2 = *(s16*)(p + 0x38);
    s16 r5 = cur - target;
    s16 r8 = *(s16*)(p + 0x6) - max2;
    if (r5 < 0) r5 = 0;
    if (r0 & 0x8) {
        if (r5 > 0 && r5 > r8)
            *(s16*)(p + 0x3a) -= 1;
    }
    if (r0 & 0x4) {
        *(s16*)(p + 0x3a) += 1;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x3a) == *(s16*)(p + 0x38))
            *(u8*)(p + 0x16) = 0;
    }
    if (r0 & 0x1) {
        for (int i = 0; i < 2; i++) {
            if (r5 > 0 && r5 > r8) { p = (u8*)lbl_803753A0; *(s16*)(p + 0x3a) -= 1; }
            if (r5 > 0 && r5 > r8) { p = (u8*)lbl_803753A0; *(s16*)(p + 0x3a) -= 1; }
            if (r5 > 0 && r5 > r8) { p = (u8*)lbl_803753A0; *(s16*)(p + 0x3a) -= 1; }
            if (r5 > 0 && r5 > r8) { p = (u8*)lbl_803753A0; *(s16*)(p + 0x3a) -= 1; }
        }
        return;
    }
    if (!(r0 & 0x2)) return;
    s16 zero = 0;
    for (int i = 0; i < 2; i++) {
        p = (u8*)lbl_803753A0;
        *(s16*)(p + 0x3a) += 1;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x3a) == *(s16*)(p + 0x38))
            *(u8*)(p + 0x16) = zero;
        p = (u8*)lbl_803753A0;
        *(s16*)(p + 0x3a) += 1;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x3a) == *(s16*)(p + 0x38))
            *(u8*)(p + 0x16) = zero;
        p = (u8*)lbl_803753A0;
        *(s16*)(p + 0x3a) += 1;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x3a) == *(s16*)(p + 0x38))
            *(u8*)(p + 0x16) = zero;
        p = (u8*)lbl_803753A0;
        *(s16*)(p + 0x3a) += 1;
        p = (u8*)lbl_803753A0;
        if (*(s16*)(p + 0x3a) == *(s16*)(p + 0x38))
            *(u8*)(p + 0x16) = zero;
    }
}

void fn_800059B0() {}

void fn_800059B4() {
    s32 offset = 0;
    s32 i = 0;
    s32 val = offset;
    goto check;
loop:
    {
        u32* arr = *(u32**)lbl_803753A0;
        i++;
        u32* ptr = (u32*)((u8*)arr + offset);
        offset += 4;
        *(u8*)*ptr = val;
    }
check:
    u8* p = (u8*)lbl_803753A0;
    if (i < *(s16*)(p + 0x6)) goto loop;
    *(u32*)(p + 0x2c) = 0;
    *(u32*)((u8*)lbl_803753A0 + 0x30) = 0;
}

void fn_800059FC(s16 r3, s16 r4, s16 r5, s16 r6, s16 r7) {
    if (r3 >= 0) {
        u8* p8 = (u8*)lbl_803753A0;
        *(s16*)(p8 + 0x8) = r3;
    }
    if (r4 >= 0) {
        u8* p = (u8*)lbl_803753A0;
        *(s16*)(p + 0xa) = r4;
    }
    if (r5 >= 0) {
        u8* p = (u8*)lbl_803753A0;
        *(s16*)(p + 0xc) = r5;
    }
    if (r6 >= 0) {
        u8* p = (u8*)lbl_803753A0;
        *(s16*)(p + 0xe) = r6;
    }
    if (r7 >= 0) {
        u8* p = (u8*)lbl_803753A0;
        *(s16*)(p + 0x12) = r7;
    }
    u8* p = (u8*)lbl_803753A0;
    s16 x = *(s16*)(p + 0x8);
    if (x + *(s16*)(p + 0xc) > 0x280) *(s16*)(p + 0xc) = 0x27f - x;
    s16 div = (s16)r6 / (s16)r7;
    u8* p2 = (u8*)lbl_803753A0;
    *(s16*)(p2 + 0x14) = div;
}

void fn_80005C18() {
    fn_80011324();
    lbl_803753A8 = fn_80104FA8();
}

void fn_80005C40() {
    fn_80104FA8();
}