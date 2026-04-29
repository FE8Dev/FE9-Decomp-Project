// auto_03_8014B250_text
#include <dolphin/types.h>

extern "C" void fn_8014811C(void);
extern "C" void fn_8000CBC8(u8*, s16);
extern "C" void fn_801097F8(s32);
extern "C" void fn_8000C188(void*, s32);
extern "C" void fn_800C4868(void*);
extern "C" void fn_80147AC4(void);
extern "C" void fn_80147AD4(void);
extern "C" void fn_80109958(void*, void*);
extern "C" void fn_80109898(void*);
extern "C" void fn_8010A424(void*, s32);
extern "C" void fn_8010A488(void*, s32);
extern "C" void fn_800AA4E4(void);
extern "C" void fn_80024464(void*, void*, u8);
extern "C" void fn_800102C4(s32, s32, void*, s32, void*, s32, ...);
extern "C" void fn_8000A380(void);
extern "C" void fn_8000A370(void);
extern "C" void fn_8000A29C(s32, s32);
extern "C" void fn_80009E9C(float, float, float, float);
extern "C" void fn_800C4868(void*);

extern u8  lbl_80375DBA;
extern u8  lbl_80375DB9;
extern u8  lbl_80375DBC;
extern u8  lbl_80375DBB;
extern u8  lbl_803759CD;
extern u8  lbl_803759C8;
extern u8  lbl_803759C9;
extern u8  lbl_80375DB0;
extern float lbl_80378B50;
extern float lbl_80378B54;
extern u8  lbl_80375E10;
extern u8  lbl_8029C910[];
extern u8  lbl_80280600[];

// vtable table objects
extern u8 lbl_8029C85C[];
extern u8 lbl_8029C7C4[];
extern u8 lbl_8029C660[];
extern u8 lbl_8029C834[];
extern u8 lbl_8029C848[];

// =============================================================
// fn_8014B250: init r3 vtable slots with lbl_8029C85C, lbl_8029C7C4, lbl_8029C660
// =============================================================
void fn_8014B250(void* r3) {
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C85C;
    *(u32*)((u8*)r3 + 0x8)  = (u32)lbl_8029C7C4;
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C660;
}

// =============================================================
// fn_8014B278: init r3 vtable slots with lbl_8029C85C, lbl_8029C7C4, lbl_8029C834
// =============================================================
void fn_8014B278(void* r3) {
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C85C;
    *(u32*)((u8*)r3 + 0x8)  = (u32)lbl_8029C7C4;
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C834;
}

// =============================================================
// fn_8014B2A0: init r3 vtable slots with lbl_8029C85C, lbl_8029C7C4, lbl_8029C848
// =============================================================
void fn_8014B2A0(void* r3) {
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C85C;
    *(u32*)((u8*)r3 + 0x8)  = (u32)lbl_8029C7C4;
    *(u32*)((u8*)r3 + 0x18) = (u32)lbl_8029C848;
}

// =============================================================
// fn_8014B2C8: clear 4 SDA byte flags, call fn_8014811C,
//              then fn_8000CBC8 with lbl_8029C910 and r3 arg
// =============================================================
void fn_8014B2C8(void* r3) {
    void* r31 = r3;
    lbl_80375DBA = 0;
    lbl_80375DB9 = 0;
    lbl_80375DBC = 0;
    lbl_80375DBB = 0;
    fn_8014811C();
    fn_8000CBC8((u8*)lbl_8029C910, (s16)(u32)r31);
}

// =============================================================
// fn_8014B31C: fn_801097F8(0), fn_8000C188(r3, 0),
//              fn_800C4868(lbl_80375DB0), clear lbl_80375DB0,
//              fn_80147AC4
// =============================================================
void fn_8014B31C(void* r3) {
    void* r31 = r3;
    fn_801097F8(0);
    fn_8000C188(r31, 0);
    fn_800C4868((void*)(u32)lbl_80375DB0);
    lbl_80375DB0 = 0;
    fn_80147AC4();
}

// =============================================================
// fn_8014B36C: setup two fn_80109958 text objects from lbl_80280600,
//              call fn_800AA4E4, init SDA flags, fn_80024464,
//              fn_80147AD4, zero r31[0x30]
// =============================================================
void fn_8014B36C(void* r3) {
    void* r31 = r3;
    fn_80109958((void*)((u8*)lbl_80280600 + 0xd), r31);
    fn_80109958((void*)((u8*)lbl_80280600 + 0x16), r31);
    ((u8*)r31)[0x60] = 0;
    fn_800AA4E4();
    lbl_803759CD = 1;
    lbl_803759C8 = 0;
    lbl_803759C9 = 0;
    fn_80024464(r31, (void*)&lbl_80375E10, 0);
    fn_80147AD4();
    *(u32*)((u8*)r31 + 0x30) = 0;
}

// =============================================================
// fn_8014B3F8: per-frame update — camera, timer fn_800102C4,
//              increment r31[0x30] counter, check 0xe10 and 0x1c20
//              thresholds to swap scroll direction on two text objects
// =============================================================
void fn_8014B3F8(void* r3) {
    void* r31 = r3;
    fn_8000A380();
    float f1 = lbl_80378B50;
    float f4 = lbl_80378B54;
    float f2 = f1;
    float f3 = f1;
    fn_80009E9C(f1, f2, f3, f4);
    fn_8000A29C(0, 0x13);
    fn_8000A370();
    fn_800102C4(0x20, 0x1a4, (void*)((u8*)lbl_80280600 + 0x2b), 1, (void*)1, 1);
    *(u32*)((u8*)r31 + 0x30) = *(u32*)((u8*)r31 + 0x30) + 1;
    if (*(u32*)((u8*)r31 + 0x30) == 0xe10) {
        fn_80109898((void*)((u8*)lbl_80280600 + 0xd));
        fn_8010A424((void*)0xff, 0);
        fn_80109898((void*)((u8*)lbl_80280600 + 0x16));
        fn_8010A488((void*)0xff, 0);
    }
    if (*(u32*)((u8*)r31 + 0x30) == 0x1c20) {
        fn_80109898((void*)((u8*)lbl_80280600 + 0xd));
        fn_8010A488((void*)0xff, 0);
        fn_80109898((void*)((u8*)lbl_80280600 + 0x16));
        fn_8010A424((void*)0xff, 0);
        *(u32*)((u8*)r31 + 0x30) = 0;
    }
}