#include <dolphin/types.h>

extern "C" void fn_80011324();
extern "C" u32 fn_80104FA8();
extern "C" void fn_8000CC18(void*, int);
extern "C" void* fn_800C4C34(void*, int, int, int);

extern u8* lbl_803753A0;
extern u32 lbl_803753A8;
extern u8 lbl_8028D214[];
extern u8 lbl_802708C0[];

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