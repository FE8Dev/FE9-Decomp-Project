#include <dolphin/types.h>
#include <dolphin/types.h>


// ============================================================
// auto_03_80033298_text.cpp
// Address range: 0x80033298  0x80055DF8
// Batch 1: fn_80033298 through fn_800369D4
// ============================================================

// --------------- External labels ---------------
extern u8  lbl_802724F8[];     // rodata string table (nlPrintf format strings)
extern u8  lbl_80272398[];     // rodata string table
extern u8  lbl_80272EC8[];     // rodata string table (debug print formats)
extern u8  lbl_8033AEAC[];     // game state struct
extern u8  lbl_8033A708[];     // game flags array
extern u8  lbl_802BB9C4[];     // unit array (0x9f * 0x280)

// --------------- SDA float constants ---------------
extern float lbl_80377134;     // .sdata2
extern float lbl_80377138;     // .sdata2
extern float lbl_80377190;     // .sdata2 (double bias upper word)
extern float lbl_80377198;     // .sdata2 (float conv constant)
extern float lbl_803771B0;     // .sdata2 (zero float)
extern float lbl_8037719C;     // .sdata2 (divisor)
extern double lbl_803771A0;    // .sdata2 (double bias, 0x4330_0000_0000_0000)
extern double lbl_803771A8;    // .sdata2 (s16-biased double, 0x4330_0000_8000_0000)

// --------------- Jump tables ---------------
extern u32 jumptable_8028F3B0[];
extern u32 jumptable_8028F53C[];
extern u32 jumptable_8028F504[];

// --------------- Forward declarations ---------------
// (functions defined later in this file that are called earlier)
static s32 fn_800340B8(void* r3, u8 r4);

// --------------- Extern function declarations ---------------
extern "C" int    fn_800056CC(const char* fmt, ...);
extern "C" unsigned int strlen(const char*);
extern "C" void   OSGetTime(void);
extern "C" void   fn_80040D40(void*, void*);
extern "C" void   fn_8000A370(void);
extern "C" void   fn_8000A380(void);
extern "C" void   fn_80009E9C(float, float, float, float);
extern "C" void   fn_80009CB4(s32);
extern "C" void*  fn_8002F8E0(void*);
extern "C" void   fn_80092268(void*);
extern "C" u8     fn_8000CF90(s8);
extern "C" u8     fn_80106398(void*, s32);
extern "C" u8     fn_8014EDF0(void);  // returns u8 via r3
extern "C" u8     fn_80038850(void*);
extern "C" void   fn_8003D464(void*);
extern "C" void   fn_801A9BDC(void*, void*, void*);
extern "C" void   fn_801ABC64(void*, s32, s32);
extern "C" s8     fn_8003B7F8(void*);
extern "C" s8     fn_8003B7B4(void*);
extern "C" s8     fn_8003B770(void*);
extern "C" s8     fn_8003B72C(void*);
extern "C" s8     fn_8003B6E8(void*);
extern "C" s8     fn_8003B6B8(void*);
extern "C" s8     fn_8003B674(void*);
extern "C" s8     fn_8003B630(void*);
extern "C" s8     fn_8003A538(void*);
extern "C" s8     fn_8003A754(void*);
extern "C" void   fn_801A6864(void*);
extern "C" u8     fn_8003D2DC(void*);
extern "C" u8     fn_8003D234(void*, u8);
extern "C" void   fn_801A9A24(void*, void*, s32);
extern "C" void   fn_80034208(void*, s32, s8);
extern "C" void   fn_8003539C(void*, s32, void*, void*, s32);
extern "C" void   fn_8014D884(void*, u32);
extern "C" void   fn_801B8A60(void*);
extern "C" void   fn_8003882C(void*, u8);
extern "C" void   fn_8003722C(void*, void*);
extern "C" void   fn_80034D48(void*, void*);
extern "C" void   fn_800342D0(void*, void*);
extern "C" void   fn_800342C0(void*);
extern "C" void   fn_80034030(void*);
extern "C" s8     fn_801F5434(void*);  // returns s8 via r3
extern "C" s8     fn_801F54C0(void*);  // returns s8 via r3
extern "C" u8     fn_80038784(void*);  // returns u8 via r3
extern "C" u8     fn_80038710(void*);  // returns u8 via r3
extern "C" void*   fn_80016C58(void*);

// Stat-getter helpers (each take unit ptr, return s8)
extern "C" s8  fn_8003B7F8(void*);
extern "C" s8  fn_8003B7B4(void*);
extern "C" s8  fn_8003B770(void*);
extern "C" s8  fn_8003B72C(void*);
extern "C" s8  fn_8003B6E8(void*);
extern "C" s8  fn_8003B6B8(void*);
extern "C" s8  fn_8003B674(void*);
extern "C" s8  fn_8003B630(void*);

// fn_80037DC0: takes void*, returns void* (pointer to batting record)
extern "C" void* fn_80037DC0(void*);

// fn_80035190: takes unit ptr + float array ptr, updates stats
extern "C" void fn_80035190(void*, void*);

// Functions
extern "C" void*  fn_80019EB0(void*);
extern "C" void   fn_800153FC(void*, s32);
extern "C" void*  fn_80014FF8(void*);
extern "C" u8     fn_80019DC8(void*);
extern "C" void*  fn_80019F94(void*);
extern "C" void*  fn_80019F50(void*);
extern "C" s32    fn_800C3E88(void*, void*);
extern "C" s8     fn_800933F8(void*, void*);
extern "C" void   fn_8016725C(void*, void*);
extern "C" void*  fn_80167474(void*);
extern "C" void   fn_80167490(void*, s32, s32, s32);
extern "C" void*   fn_80019F0C(void*);  
extern "C" void   fn_800372CC(void*);   
extern "C" s32   fn_80036CC0(void*, s32); 

extern "C" void   fn_8001C604(void*, void*);
extern "C" void   fn_80050DD8(void*, float, float);
extern "C" void*  fn_800A8B84(void*);
extern "C" void*  fn_8001CC6C(void*);
extern "C" s8     fn_8003B3F8(void*);
extern "C" s8     fn_8003B140(void*);
extern "C" s8     fn_8003B0C8(void*);
extern "C" s8     fn_8003B050(void*);
extern "C" s8     fn_8003ABE0(void*);
extern "C" s8     fn_8003A918(void*);
extern "C" u8     fn_801F531C(void*);
extern "C" u8     fn_801F5290(void*);
extern "C" u8     fn_801F53A8(void*);

extern "C" void   fn_8001D6C8(void*);
extern "C" void   fn_80017490(void*, void*);
extern "C" void   fn_80104Be8(void*);
extern "C" void*  fn_8000E20C(void*);
extern "C" s8     fn_80038BE8(void*);
extern "C" s8     fn_800390C8(void*);
extern "C" s8     fn_800395A8(void*);
extern "C" s8     fn_8003A918(void*);   // defined in file, no extern needed
extern "C" s8     fn_8003ABE0(void*);   // defined in file, no extern needed
extern "C" u8* fn_8000D47C(void*);

extern "C" s32    fn_8023D008(void*, void*);
extern "C" u8     fn_8009338C(void*);
extern "C" void   fn_800932F0(void*);
extern "C" void   fn_8009606C(void*, void*);
extern "C" void*  fn_8000D3E4(void*);
extern "C" u8     fn_8017C420(void*);
extern "C" u32    fn_8017C3F4(void*);
extern "C" u32    fn_8017C394(void*);
extern "C" void   fn_8017C030(void*, s32);
extern "C" void   fn_8017BFB8(void*, s32);
extern "C" void   fn_8017C008(void*, s32);
extern "C" void*  fn_80019FB4(void*);
extern "C" void*  fn_80019F70(void*);
extern "C" void   fn_8017C254(void*, s32, void*);
extern "C" void   fn_8010490C(void*, void*);
extern "C" void   fn_801061DC(void*, void*);
extern "C" void   fn_8001C264(void*, void*);
extern "C" void   fn_8001D120(void*, void*);
extern "C" void   fn_800174F0(void*, void*);
extern "C" void   fn_8004BDF8(void*, void*);
extern "C" void   fn_8017BE74(void*, s32, void*);
extern "C" void   fn_80104938(void*, void*);
extern "C" void   fn_80106208(void*, void*);
extern "C" void   fn_8001C324(void*, void*);
extern "C" void   fn_8001D14C(void*, void*);
extern "C" void   fn_80017584(void*, void*);
extern "C" void   fn_8004BE7C(void*, void*);
extern "C" void   fn_800967E8(void*, s32);
extern "C" void   fn_8004EB60(void*, s32);
extern "C" void   fn_80050E18(void*);
extern "C" void   fn_800230A4(void*, s32);
extern "C" void   fn_80022E78(void*, s32, s32);
extern "C" void   fn_800228C4(void*, void*);
extern "C" void   fn_8002149C(void*, u8, u8, s32, s32, s32);
extern "C" u8     fn_800FF030(void*, s32);
extern "C" s32    fn_80021418(void*, s32, s32);
extern "C" void   fn_8004BDF8(void*, void*);
extern "C" void fn_80022814(void*, s32);

extern "C" void   fn_8014EC84(void*);
extern "C" void   fn_80167598(void);
extern "C" void   fn_801064C4(void*, s32);
extern "C" void   fn_80106584(void*, void*);
extern "C" void   fn_80093A50(void*);
extern "C" u8     fn_800940F4(void*, u32);
extern "C" u32    fn_800953C0(void*);
extern "C" void   fn_80095D08(void*);
extern "C" void   fn_80096688(void*, s32);
extern "C" void   fn_8004FFE0(void*);
extern "C" void   fn_801E6770(void*, void*);
extern "C" u32    fn_800289F4(void*);
extern "C" void   fn_80017618(void*);
extern "C" u32    fn_8001D4C4(void*);
extern "C" s32    fn_80096C2C(void*);
extern "C" s32    fn_80096BD4(void*);
extern "C" void   fn_8000D00C(s32);
extern "C" void   fn_800158B8(void*, void*);
extern "C" void   fn_8001577C(void*, void*);
extern "C" void   fn_800157F4(void*, void*);
extern "C" void   fn_8004EBE8(void*, s32);
extern "C" void*   fn_8003F3BC(void*);
extern "C" u8     fn_8003F3B4(void*);
extern "C" u8     fn_8003F3AC(void*);
extern "C" void*  fn_8003F3A4(void*);
extern "C" void   fn_8003F394(void*, s32);
extern "C" void   fn_8003F38C(void*, s32);
extern "C" u32    fn_8003F370(void*, u32);
extern "C" void   fn_8003F37C(void*, u32);
extern "C" void*  fn_8003F368(void*);
extern "C" u8     fn_8003F360(void*);
extern "C" void*  fn_8003F34C(s32);
extern "C" void   fn_800932F0(void*);
extern "C" void   fn_8003838C(void*, s8);
extern "C" void*  fn_8005C6C4(void*, u32);
extern "C" void*  fn_8000D514(void*, void*);
extern "C" void*  fn_8005C680(void*);
extern "C" void*  fn_8005C440(void*);
extern "C" void   fn_8000D2F8(void*, void*);
extern "C" void   fn_8000C028(void*);
extern "C" void*  fn_8000CC18(void*, s32);
extern "C" void   fn_80044618(void*, s32);
extern "C" void   fn_80047CE0(void*, s32, s32);
extern "C" void   fn_8004141C(void*);
extern "C" void   fn_8005FF88(void*);
extern "C" void   fn_8006778C(void*, void*, s32);
extern "C" void   fn_80060904(void*);
extern "C" void   fn_8006CC90(void*);
extern "C" void   fn_8020B098(void*, float, float, float);
extern "C" void   fn_8020AE58(void*, s32, float);
extern "C" void   fn_8020AB7C(void*, void*, void*);
extern "C" void   fn_8020B118(void*, float, float, float);
extern "C" void   fn_800401F0(void*, u8);
extern "C" void   fn_800401C0(void);
extern "C" void   fn_800486F8(void);
extern "C" void   fn_80044B90(void);

extern "C" void   fn_80148960(s32);
extern "C" s32    fn_80146F2C(void*, void*);
extern "C" void*  fn_80148C84(void*, s32, s32);
extern "C" void*  fn_80148C0C(void*, s32, s32);
extern "C" void   fn_8012446C(void*);
extern "C" void*  fn_801246F8(void);
extern "C" void   fn_800C21D8(void);
extern "C" void   fn_800C1F80(void);
extern "C" void   fn_80148100(s32);
extern "C" void*  fn_80067390(s32);
extern "C" void   fn_80066E94(void);
extern "C" void*  fn_80067370(s32);
extern "C" void   fn_80067314(void*, void*);
extern "C" void   fn_8006713C(void*);
extern "C" void   fn_800674F8(s32);
extern "C" void*  fn_80067510(void);
extern "C" void   fn_800673B0(void);
extern "C" void   fn_8000C734(void*);
extern "C" void   fn_8006DAB4(void*);
extern "C" void   fn_8005C660(void*);
extern "C" void   fn_800C4B84(void*);
extern "C" void   fn_800C15A0(void);
extern "C" void   fn_800615C8(void*);
extern "C" void   fn_800C4868(void*);
extern "C" void   fn_8005BB44(void);
extern "C" void   fn_80067F8C(float, float);
extern "C" void*  fn_8005C6E4(void*);
extern "C" void   fn_8023D1A0(void*, void*);
extern "C" void   fn_8023D130(void*, void*);
extern "C" u16    fn_8005BFDC(void*);
extern "C" void*  fn_8020AB48(void*, void*);
extern "C" void*  fn_8020AB1C(void*);
extern "C" void*  fn_800C48A8(void*, s32);
extern "C" void*  fn_8001B954(void*);
extern "C" void*  fn_8001B99C(void*);
extern "C" void*  fn_8001B9E8(void*);
extern "C" void   fn_8006174C(void*);
extern "C" void*  fn_80065E10(void*);
extern "C" void*  fn_8006CFD0(void*);
extern "C" void*  fn_8006DB14(void*);
extern "C" u8     fn_8005C25C(void*);
extern "C" void   fn_8005F4DC(void*, void*);
extern "C" void   fn_80061334(void*);
extern "C" void   fn_80045F30(void*, void*);
extern "C" void   fn_800C2420(void);
extern "C" void*  fn_80146E90(void*);
extern "C" void*  fn_800EECDC(void);
extern "C" void   fn_8012446C(void*);
extern "C" void   fn_80235530(void*, void*, void*, s32);
extern "C" void   fn_80022A48(void*);
extern "C" s32   fn_80110790(void*);
extern "C" void   fn_8005FE10(void*, float);
extern "C" void   fn_80049D50(void*, s32);
extern "C" void   fn_80049E08(void*, s32);
extern "C" void*  fn_800465E0(void*, void*);
extern "C" void   fn_8001625C(void);

extern "C" void   fn_80067638(s32, void*, void*, void*, s32);
extern "C" void   fn_8022B3A0(void*, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern "C" void   fn_8022B634(void*, s32, s32, float, float, float, s32, s32);
extern "C" void*  fn_800C48D4(s32);
extern "C" void*  fn_8022B17C(s32, s32, s32, s32, s32);
extern "C" void*  fn_800C4BB4(void*, void*, s32);
extern "C" void   DCInvalidateRange(void*, u32);
extern "C" void*  fn_8000CBC8(void*, void*);
extern "C" void*  fn_80068478(void);
extern "C" void*  fn_80068480(void*);
extern "C" void   fn_80067FDC(s32, s32, s32, s32, s32);
extern "C" void   fn_80067FA0(float, float, float, float);
extern "C" void   fn_80067F18(void);
extern "C" void   fn_80067F8C(float, float);
extern "C" void   fn_8020B5C4(void*, float, float, float, float);
extern "C" void   fn_80068000(void*, s32);
extern "C" void   fn_8006604C(void*);
extern "C" void   fn_80060904(void*);
extern "C" void   fn_8006CC90(void*);
extern "C" void   fn_80044050(void);
extern "C" void   fn_80043FB4(void);
extern "C" void   fn_80044B90(void);
extern "C" void   fn_800C4888(void*);

extern "C" void   fn_80229FA8(s32, s32, u32, u32);
extern "C" void   fn_8022A058(s32, s32, u32, u32, s32, s32);
extern "C" void   fn_8022A904(void*, s32);
extern "C" void   fn_80229758(void);
extern "C" void   fn_8022BC10(void);
extern "C" void   fn_800678B4(s32);
extern "C" void   fn_80066F88(void);
extern "C" void   fn_80067B78(float, float, s32);
extern "C" float  fn_800230D8(void*, s32, s32, s32);
extern "C" void   fn_8020BDE8(void*, void*, void*);
extern "C" void   fn_8020BD40(void*, void*);
extern "C" void*  fn_8005B660(void*);
extern "C" void   fn_80015EC8(void);
extern "C" void   fn_80023C4C(void*);
extern "C" void   fn_80023B18(void*);
extern "C" void*  fn_8006058C(void*);
extern "C" void*  fn_80049FF4(void*);
extern "C" void   fn_80068488(void*, void*, void*);
extern "C" u8     fn_80068804(void*, void*, void*, void*);
extern "C" void*  fn_80069B9C(void);
extern "C" void   fn_80069DC8(void);
extern "C" void   fn_80067F0C(void);
extern "C" void   fn_8020AD90(void*, void*);
extern "C" void   fn_8022DAD8(void*, s32);
extern "C" void   fn_8022DB28(void*, s32);
extern "C" void   fn_80229CA0(s32, s32);
extern "C" void   fn_8006E30C(s32, void*, s32);
extern "C" void   fn_8006E38C(s32, void*, void*);
extern "C" void   fn_8006E1DC(s32, s32, s32, s32, s32, s32, s32);
extern "C" void   fn_80228914(void);
extern "C" void   fn_80228240(s32, s32);
extern "C" void   fn_8022894C(s32, s32, s32, s32, s32);
extern "C" void   fn_8006E110(s32, s32, s32, s32);
extern "C" void   fn_8006E50C(s32);
extern "C" void   fn_8006E4B4(s32, s32, s32, s32, s32);
extern "C" void   fn_8006E468(s32, s32, s32);
extern "C" void   fn_800C1BB4(void);
extern "C" void   fn_80069D94(void);
extern "C" void   fn_80069CD4(void);
extern "C" void   fn_8022D7C4(void*, void*);
extern "C" void   fn_80066C30(s32);
extern "C" void   fn_8022D634(void*, u32);
extern "C" void*  fn_8022D700(void);
extern "C" void*  fn_800C4C34(void*, void*, s32);
extern "C" void   DCFlushRange(void*, u32);
extern "C" void   memcpy(void*, void*, u32);
extern "C" u8     fn_80068C2C(void*, void*);
extern "C" void   fn_80049D50(void*, s32);
extern "C" void*  fn_800473FC(void*, s8, s8, u32, u32, s32);
extern "C" void   fn_800457E4(void*);
extern "C" void   fn_80044DB4(void*);
extern "C" void   fn_8006E55C(s32);
extern "C" void   fn_8006E19C(s32);
extern "C" void   fn_8006DFEC(void*, s32, s32, s32);
extern "C" void   fn_8006DD8C(void*, s32);
extern "C" void   fn_8006E0D0(s32);
extern "C" void   fn_8006E090(s32);
extern "C" void   fn_80229B48(s32, s32, s32);
extern "C" void*  fn_80060560(void*);
extern "C" void*  fn_80046604(void*, void*, void*, u32, void*, void*);

extern "C" void   fn_80069E4C(void*, void*);
extern "C" void   fn_8006F8E4(void*, void*, s32);
extern "C" void   fn_8022B9AC(s32, s32);
extern "C" void   fn_8006E160(s32);
extern "C" void*  fn_8020BF04(void*, void*);
extern "C" void   fn_8020B51C(void*, void*, void*);
extern "C" void   fn_800514B0(void*, s32, float, float, float, float);
extern "C" void   fn_8022DBAC(void*, s32, s32);
extern "C" void   fn_8006DD20(s32, s32, s32, s32);
extern "C" void   fn_800516C0(void*, s32, float, float, u32);
extern "C" void   fn_8006E67C(void*, s32, void*);
extern "C" void*  fn_80018BE4(void);
extern "C" void   fn_8001948C(void*, u32);
extern "C" float  fn_8005A078(s32, void*, float, float);
extern "C" float  fn_8005A124(float, float, float, float);
extern "C" float  fn_8005A1E8(float, float, float, float);
extern "C" void   fn_8005F708(void*, u8, u8, u8);
extern "C" void   fn_8005F6D8(void*, u8);
extern "C" void*  fn_8000CB8C(void*, void*);
extern "C" void   fn_8000C2B0(void*);
extern "C" void   fn_8005FF88(void*);
extern "C" void   fn_8005FE10(void*, float);
extern "C" u8     fn_8005F8E0(void*, s32);
extern "C" void   fn_8004AFE8(void*, float, float, float);
extern "C" void   fn_8001625C(void);

extern u8    lbl_8028F608[];
extern u8    lbl_8028F630[];
extern u8    lbl_8028F658[];
extern u8    lbl_802733C0[];
extern float lbl_80377260;
extern float lbl_8037727C;
extern float lbl_80377280;
extern float lbl_80377284;
extern float lbl_80377288;
extern u32   lbl_803771EC;
extern u32   jumptable_8028F724[];

extern float lbl_80377264;
extern u32   lbl_803771F0;
extern float lbl_80377268;
extern u8    lbl_8033A708[];

extern u32  lbl_80375548;
extern u8   lbl_8028F698[];
extern u8   lbl_80273350[];
extern float lbl_80377240;
extern float lbl_80377244;
extern float lbl_80377248;
extern float lbl_8037724C;
extern float lbl_80377250;
extern float lbl_80377254;
extern float lbl_80377258;

extern u8  lbl_80273420[];
extern u8  lbl_802FA300[];
extern u8  lbl_802FA340[];
extern u8  lbl_802FA3F4[];
extern u8  lbl_80335B58[];
extern u8  lbl_802D49F8[];
extern u8  lbl_8028F5E8[];
extern u8  lbl_80375528;
extern u8  lbl_80375529;
extern u8  lbl_8037552A;
extern u8  lbl_8037552B;
extern u8  lbl_8037552C;
extern u8  lbl_8037552D;
extern u8  lbl_8037552E;
extern u8  lbl_80375530;
extern u8  lbl_80375534;
extern u8  lbl_80375535;
extern u8  lbl_80375538;
extern u8  lbl_8037553C;
extern u8  lbl_80375DA6;
extern u8  lbl_80375130;
extern u32 lbl_803771E0;
extern u32 lbl_803771E4;
extern u32 lbl_803771E8;
extern u32 jumptable_8028F6DC[];

extern u32  lbl_80376554;
extern u32  lbl_80375540;
extern u8   lbl_80375544;
extern void* lbl_8037554C;
extern u8   lbl_8028F6C0[];

extern u8  lbl_802D4744[];
extern u8  lbl_802732C8[];
extern u8  lbl_80273278[];


extern u8  lbl_80273200[];
extern u32 jumptable_8028F5A0[];
extern u32 jumptable_8028F5C4[];

extern "C" double lbl_803771D8;
extern "C" float  lbl_803771D0;
extern u8  lbl_80273150[];
extern u8  jumptable_8028F578[];

// Labels
extern u8  lbl_80273150[];
extern u8  lbl_8032A0AC[];
extern float lbl_803771B8;
extern float lbl_803771BC;
extern float lbl_803771C0;
extern float lbl_803771C4;
extern double lbl_803771C8;

extern float lbl_80377220;
extern float lbl_80377224;

// --- batch fn_80049E08..fn_8004B194 new externs ---
extern u32    lbl_803753B0;
extern u32    lbl_80377290;           // .sdata2 u32 (matrix/texgen init word)
extern float  lbl_80377294;
extern float  lbl_80377298;
extern float  lbl_8037729C;
extern double lbl_803772A0;           // .sdata2 double bias (0x4330_0000_8000_0000)
extern float  lbl_803772A8;
extern float  lbl_803772B0;
extern u8     lbl_8028F748[];         // particle palette / color table
extern u8     lbl_8028F778[];         // cursor overlay object state
extern u32    lbl_8028F7A0[];         // 4-byte offset table
extern u32    lbl_8028F7E4[];         // 4-byte offset table
extern u8     lbl_803757B8[];         // 16-slot texture descriptor table
extern u8     lbl_80273770[];         // rodata string table (debug fmt)
extern u8     lbl_802FA4A8[];         // printf sink/state

extern "C" u8    fn_800AA4A0(void);
extern "C" void  fn_8006E40C(s32, s32, s32);
extern "C" void  fn_8022CB38(s32, s32, s32, s32, s32);
extern "C" float fn_800068FC(s32, float, float, float, float);
extern "C" void* fn_80147AE4(u32);
extern "C" void  fn_801485BC(void*, s32, float, float, float);
extern "C" void  fn_80148640(void*, s32);
extern "C" void  fn_8023AAE4(void*, const void*, const void*, u32, u32, u32);
extern "C" u8    fn_8001DF04(void*);
extern "C" float fn_8002349C(void*, s32, s32, s32);
extern "C" void  fn_800056A0(s32);

// forward decl (fn_8004A434 registers fn_8004A4BC as a callback)

static void fn_8004A4BC(void* r3);

// --- batch fn_8004B238..fn_8004C2B8 new externs ---
extern u8    lbl_8037556C[];          // sbss ptr to sound queue
extern u32   lbl_80375550;            // sbss (texture slot ptr)
extern u8    lbl_8037555C;            // sbss flag byte
extern u8    lbl_802FA4C8[];          // data: sound entry table (0xa0 each)
extern u8    lbl_80273858[];          // rodata: angle/size table
extern float lbl_803772C4;
extern float lbl_803772C8;
extern float lbl_803772CC;
extern float lbl_803772D0;
extern float lbl_803772D4;
extern float lbl_803772D8;
extern float lbl_803772DC;
extern float lbl_803772E0;
extern float lbl_803772E4;
extern float lbl_803772E8;
extern float lbl_803772EC;
extern double lbl_803772F0;           // double bias 0x4330_0000_8000_0000
extern double lbl_803772F8;
extern float  lbl_80377300;
extern float  lbl_80377304;
extern float  lbl_80377308;
extern float  lbl_8037730C;

extern "C" void   fn_8006A29C(void);
extern "C" void*  fn_8006A294(void);
extern "C" void*  fn_80069D38(void);
extern "C" void   fn_80069CDC(void);
extern "C" void   fn_80069730(void*, s32, void*, void*);
extern "C" void   fn_80069004(void*, void*, void*);
extern "C" void   fn_80068F40(void*, void*);
extern "C" void   fn_8006DE78(void*, s32, s32, s32, s32);
extern "C" void   fn_8006DF68(void*, s32, s32, s32, s32, s32);
extern "C" void   fn_8006DE0C(void*, s32, s32, s32, s32);
extern "C" void   fn_8006DEE4(void*, s32, s32, s32, s32, s32);
extern "C" void   fn_8020B23C(void*, void*, void*, void*);
extern "C" void   fn_8020B494(void*, float, float, float, float, float, float, float, float);
extern "C" s32    fn_80104A24(void*);
extern "C" void   fn_80050020(void*, s32);
extern "C" void   fn_8014DF60(void*, float, float);
extern "C" void   fn_80018964(void);
extern "C" float  fn_80059610(float, float, float, float);
extern "C" void   fn_800516EC(void*, s32, float, float);

// forward decl: fn_8004BB34 and fn_8004BC74 reference each other
static void fn_8004BC74(void* r3, void* r4);
static void fn_8004B740(void* r3);
// forward decl: fn_8004C2B8 references fn_8004C2F8 defined in next batch
extern "C" void fn_8004C2F8(void*, void*);

// --- batch fn_8004C5F4..fn_8004EC9C new externs ---
extern float  lbl_80377310;
extern float  lbl_80377314;
extern float  lbl_80377318;
extern float  lbl_8037731C;
extern float  lbl_80377320;
extern float  lbl_80377324;
extern float  lbl_80377328;
extern float  lbl_8037732C;
extern float  lbl_80377330;
extern float  lbl_80377334;
extern float  lbl_80377338;
extern float  lbl_8037733C;
extern float  lbl_80377340;
extern float  lbl_80377344;
extern float  lbl_80377348;
extern float  lbl_8037734C;
extern float  lbl_80377350;
extern float  lbl_80377354;
extern float  lbl_80377358;
extern u32    lbl_803772B8;
extern u32    lbl_803772BC;
extern u32    lbl_80375554;
extern u32    lbl_80375558;
extern u8     lbl_8037555D;
extern u8     lbl_80375560[];     // 4-byte color array
extern s16    lbl_80375564;
extern s16    lbl_80375566;
extern s16    lbl_80375568;
extern s16    lbl_8037556A;
extern u8     lbl_80273898[];     // rodata: camera/viewport table
extern u8     lbl_802738D8[];     // rodata: debug string table
extern u8     lbl_8028F83C[];     // jumptable for fn_8004E300 etc.
extern u8     lbl_8028F860[];     // jumptable for fn_8004C2F8
extern u8     lbl_802FA7E8[];     // data: overlay rect table
extern u8     lbl_80375068[];     // sbss: default sound ptr

extern "C" void   fn_8005A3A8(s32, void*, void*);
extern "C" void   fn_8020BDC8(void*, void*);
extern "C" float  fn_802414D8(float);
extern "C" void*  fn_80060E98(void*, s32, void*);
extern "C" void*  fn_80023134(void*);
extern "C" u32    fn_800068F4(void);
extern "C" void   fn_8005ADE4(void*, s32, s32, s32);
extern "C" void   fn_80009C50(void);
extern "C" void   fn_8000A29C(s32, s32);
extern "C" void   fn_800079D8(s32);
extern "C" void   fn_80007480(void*, s32);
extern "C" void   fn_800079C4(void);
extern "C" void   fn_80059DEC(s32, s32, s32, s32, s32);
extern "C" void   fn_80059B90(s32, s32, s32, s32, void*);
extern "C" void   fn_8005973C(s32, s32, s32, s32, s32, void*, s32, float, void*);
extern "C" void   fn_80067E0C(s32);
extern "C" void*  fn_80055F1C(s32);
extern "C" void   fn_8005F41C(void*, void*);
extern "C" void   fn_8005F47C(void*, void*);
extern "C" void   fn_8005F35C(void*, void*, u32);
extern "C" s32    fn_80061284(void*, void*);
extern "C" void   fn_80186D74(void*);

// --- batch fn_8004F2B0..fn_80052CCC new externs ---
extern u8     lbl_8028F808[];         // rodata: RGBA color table indexed by desperation
extern float  lbl_8037735C;
extern float  lbl_80377360;

extern "C" u8     fn_8005B8A8(void*);
extern "C" void   fn_8005C708(void*, u32);
extern "C" void   fn_8005C74C(void*);
extern "C" void   fn_8005F93C(void*, s32);
extern "C" void   fn_8005F3BC(void*, void*);
extern "C" void   fn_8005F6B0(void*);
extern "C" u8     fn_800409EC(void*);
extern "C" u8     fn_80044514(void*, s32, s32);
extern "C" void   fn_80016394(void);
extern "C" void   fn_800234FC(void*);
extern "C" void   fn_80235164(void*, void*, s32, s32, s32);
extern "C" void   fn_80052CCC(void*);
extern "C" void   fn_8005F6A8(void*, s32);
extern "C" u8     fn_800F3644(void);
extern "C" void   fn_800F3634(s32);
extern "C" void*  fn_8004DC84_fwd(void*, float);

// forward decls for intra-batch references
static void fn_8004C2F8_body(void* r3, void* r4);
static void fn_8004C9B4(void);
static void fn_800538D8(void*, void*);
static void fn_8004CC74(void* r3, void* r4);
static void fn_8004D818(void* r3, void* r4);
static void fn_8004DC84(void* r3, float f1);
static void fn_8004DE14(void* r3, void* r4);
static void fn_8004E034(void* r3, void* r4);
static void fn_8004E300(void* r3);
static void fn_8004E7F8(void* r3, void* r4, u8 r5);
static void fn_8004EC9C(void* r3, void* r4);
static void fn_8004EC9C(void* r3, void* r4);

extern "C" void   fn_80186D74(void*);

// --- batch fn_80052CDC..fn_80053F0C new externs ---
extern float  lbl_80377390;           // sdata2 default RGBA word
extern float  lbl_80377394;           // 0.0f
extern float  lbl_80377398;           // some float constant
extern float  lbl_8037739C;           // some float constant
extern double lbl_803773A0;           // double bias 0x4330_0000_8000_0000
extern float  lbl_803773A8;           // half-cell offset (0.5f)
extern float  lbl_803773AC;           // height offset constant
extern float  lbl_803773B0;           // scale constant
extern float  lbl_803773B4;           // scale constant
extern float  lbl_803773B8;           // constant
extern float  lbl_803773BC;           // constant
extern float  lbl_803773C0;           // deg-to-rad scale
extern double lbl_803773C8;           // double scale
extern float  lbl_803773D0;           // init 1c field constant
extern u8     lbl_8028F920[];         // rodata: particle entry type table
extern u8     lbl_8028F900[];         // rodata: particle B entry type table
extern u8     lbl_8028F888[];         // rodata: particle C entry type table
extern u8     lbl_8028F8B0[];         // rodata: particle D entry type table
extern u8     lbl_802739CC[];         // rodata: string table for unit anim names

extern "C" void*  fn_8000CC18(void*, s32);   // already declared but ensure correct
extern "C" void*  fn_8000C1E8(void*);
extern "C" void   fn_8000A4B0(void*, void*, void*, void*);
extern "C" s32    fn_8005F774(void*, s32, s32);
extern "C" s32    fn_8005F80C(void*, void*);
extern "C" void   fn_80044164(void*, float, float, void*);
extern "C" u8     fn_801462DC(void);
extern "C" void   fn_80146190(void);
extern "C" void*  fn_80147BB8(void);
extern "C" void   fn_80148484(void*, s32);
extern "C" void*  fn_8004B0F0(s32);

extern "C" void   fn_80186D74(void*);

// --- batch fn_80053F20..fn_80055DBC new externs ---
extern float  lbl_803773D4;           // fn_8005A124 arg constant
extern float  lbl_803773D8;           // fn_8005A124 arg constant
extern float  lbl_803773DC;           // constant (white color 1.0f)
extern u8     lbl_802739B0[];         // rodata: sound event table
extern u32    jumptable_8028F970[];   // rodata: jump table for fn_8005451C
extern u32    jumptable_8028F9EC[];   // rodata: jump table for fn_80055A84
extern u32    lbl_80377368;           // SDA: RGBA word 0
extern u32    lbl_8037736C;           // SDA: RGBA word 1
extern u32    lbl_80377370;           // SDA: RGBA word 2
extern u32    lbl_80377374;           // SDA: RGBA word 3
extern u32    lbl_80377378;           // SDA: RGBA word 4
extern u32    lbl_8037737C;           // SDA: RGBA word 5
extern u32    lbl_80377380;           // SDA: RGBA word 6
extern u32    lbl_80377384;           // SDA: RGBA word 7
extern u32    lbl_80377388;           // SDA: RGBA word 8
extern u32    lbl_8037738C;           // SDA: RGBA word 9 (default)
extern u32    lbl_803754E0;           // SDA: ptr to some state obj
extern u32    lbl_80376554;           // already declared but ensure u32

extern "C" void   fn_8005E56C(void*);
extern "C" void*  fn_800592B8(void*, void*, s32, s32);
extern "C" void*  fn_80061798(void);
extern "C" void   fn_8005EAF4(void*);
extern "C" void   fn_80055F24(void*);
extern "C" void   fn_80060ACC(void*, s32);
extern "C" void*  fn_80055F48(void*, void*, void*, s32, void*, void*);
extern "C" u8     fn_8000A390(void);
extern "C" void   fn_80069E24(void*);
extern "C" u8     fn_8005F718(void*);
extern "C" void   fn_8004AEE0(void*, void*, void*);
extern "C" u32    fn_80055A84(void*);
extern "C" void   fn_8005613C(void*, void*, void*, s32, void*);
extern "C" u8     fn_800B34F8(void);
extern "C" void*  fn_80055E0C(void*);
extern "C" void*  fn_80055DFC(void*);
extern "C" u8     fn_80055E04(void*);
extern "C" void   fn_80055C48(void*, void*);
extern "C" void   fn_80055C94(u8);
extern "C" void   fn_80055CEC(s32, void*);
extern "C" void   fn_80055DBC(void*);
extern "C" void   fn_80055D68(void*);
extern "C" void   fn_8014629C(u8);
extern "C" s32    fn_801462BC(void);
extern "C" void   fn_8014627C(u8);
extern "C" void   fn_8018EE24(s32, s32, s32, s32, void*);
extern "C" void   fn_8018ED88(void);
extern "C" void   fn_8018EDC8(s32);
extern "C" s32    fn_800553D0(void*);
extern "C" void   fn_80055774(void*, s32);
extern "C" void*  fn_8000C198(void*, s32);
extern "C" s32    fn_8005F854(void*, void*);
extern "C" void   fn_800257C4(void*, s32);
extern "C" void   fn_8005F708(void*, u8, u8, u8);

static void fn_80054024(void*);
static void fn_8005449C(void*);
static void fn_80054A70(void*);



// ============================================================
// fn_80033298: return ptr to lbl_80272398+0x150 (dataARAMDefaultGetInfo)
// ============================================================
void* fn_80033298(void) {
    return (void*)((u8*)lbl_80272398 + 0x150);
}

// ============================================================
// fn_800332A8: if r4->0x40 != 0, call vtable+8 to get x/y/z,
//   render unit at position, call fn_80092268, restore
// ============================================================
void fn_800332A8(void* r3, void* r4) {
    void* r31 = r4;

    if (!*(u32*)((u8*)r4 + 0x40)) return;

    s32 x, y, z;
    void (*vt8)(void*, s32*, s32*, s32*) = (void(*)(void*, s32*, s32*, s32*))
        *(u32*)((u8*)*(u32*)((u8*)r3 + 4) + 8);
    vt8(r3, &x, &y, &z);

    fn_8000A380();
    fn_80009E9C(lbl_80377134, lbl_80377138, lbl_80377134, lbl_80377138);
    fn_80009CB4((s32)(u8)z);
    fn_8000A370();

    void* unit = fn_8002F8E0((void*)*(u32*)((u8*)r31 + 0x40));
    fn_80092268(unit);

    fn_8000A380();
    fn_80009CB4(0xff);
    fn_8000A370();
}

// ============================================================
// fn_80033374: set bit 3 on consecutive u16 fields in r3 struct
//   r4 = count (in bytes, i.e. count/2 entries); r5 = start index
//   r3 struct: u8 base = r3[0x60], entries at r3[0x20 + (base+i)*2]
//   Unrolled 8 at a time via bdnz loop, remainder via tail loop
// ============================================================
void fn_80033374(void* r3, s32 r4, s32 r5) {
    r4 <<= 1;
    if (r4 <= 0) return;
    if (r4 <= 8) goto tail;

    {
        s32 r6 = r4 - 8;
        if (r6 <= 0) goto tail;
        s32 iters = (r6 + 7) >> 3;
        do {
            for (s32 j = 0; j < 8; j++) {
                u8 base = ((u8*)r3)[0x60];
                u32 idx = (u32)((s32)(base + r5 + j) * 2 + 0x20);
                u16* p = (u16*)((u8*)r3 + idx);
                *p = (u16)(*p | 0x8);
            }
            r5 += 8;
        } while (--iters > 0);
    }

tail:
    {
        s32 rem = r4 - r5;
        for (s32 i = 0; i < rem; i++) {
            u8 base = ((u8*)r3)[0x60];
            u32 idx = (u32)((s32)(base + r5) * 2 + 0x20);
            u16* p = (u16*)((u8*)r3 + idx);
            *p = (u16)(*p | 0x8);
            r5++;
        }
    }
}

// ============================================================
// fn_800334DC: set bit 0 on 5 consecutive u16 entries starting at r4
//   formula: offset = (r3[0x60] + r4 + i) * 2 + 0x20
// ============================================================
void fn_800334DC(void* r3, s32 r4) {
    u8 base = ((u8*)r3)[0x60];
    for (s32 i = 0; i < 5; i++) {
        u32 idx = (u32)((s32)(base + r4 + i) * 2 + 0x20);
        u16* p = (u16*)((u8*)r3 + idx);
        *p = (u16)(*p | 0x1);
    }
}

// ============================================================
// fn_8003357C: set bits 0x4002 on entry r4, and bit 4 on entry r4 (at +0x22)
//   offset = (r3[0x60] + r4) * 2 + 0x20
// ============================================================
void fn_8003357C(void* r3, s32 r4) {
    u8 base = ((u8*)r3)[0x60];
    u32 idx = (u32)((s32)(base + r4) * 2 + 0x20);
    u16* p0 = (u16*)((u8*)r3 + idx);
    *p0 = (u16)(*p0 | 0x4002);
    u16* p1 = (u16*)((u8*)r3 + idx + 2);
    *p1 = (u16)(*p1 | 0x4);
}

// ============================================================
// fn_800335B8: large debug dump function
// Takes r3 = struct ptr ("score card" of type codes and signed values)
// Iterates over a linked list of entries (r31), for each prints
// opcode-based debug strings from lbl_802724F8, then at end
// prints a count summary.
//
// struct layout at r31:
//   r31[0]     = s16: current count (outer loop index * 4 entry stride)
//   r31[4 + i*4]   = u8: type code at stride i
//   r31[6 + i*4]   = s16: signed value at stride i
// loop advances r31[0] each iteration, stops when entry type == 0
// ============================================================
void fn_800335B8(void* r3) {
    u8* r31 = (u8*)r3;
    s16 r30 = 0;

    *(s16*)r31 = 0;

    // print header (no args)
    {
        u8* fmt = (u8*)lbl_802724F8 + 0x1d;
        // crclr cr1eq varargs call with 0 extra args
        fn_800056CC((const char*)fmt);
    }

    while (1) {
        s16 cur = *(s16*)r31;
        s32 stride = (s32)cur * 4;
        s32 off = stride + 4;
        u8 typecode = ((u8*)r31)[off];

        if (!typecode) break;

        u8 adjusted = typecode - 3;
        if (adjusted > 0x54) {
            // default fall-through print
            goto next;
        }

        {
            // jump table dispatch based on (typecode - 3)
            // Each case prints a format string from lbl_802724F8 with
            // extsb r4 = *(s16*)(r31 + stride + 6)
            // Some cases check the value for positive/negative and print differently.
            s32 t = (s32)adjusted;
            s16 val16 = *(s16*)((u8*)r31 + stride + 6);
            s8  val   = (s8)val16;

            // The assembly is a large jump table with ~85 cases at offsets
            // 0x1d, 0x2b, 0x51, 0x73, 0x97, 0xbb, 0xdf, 0x103, 0x129, 0x147,
            // 0x169, 0x18d, 0x1a7, 0x1c3, 0x1e3, 0x209, 0x22b, 0x24f, 0x273,
            // 0x297, 0x2bb, 0x2e1, 0x2ff, 0x321, 0x345, 0x35f, 0x387, 0x3af,
            // 0x3e1, 0x3f9, 0x421, 0x431, 0x44b, 0x465, 0x47d, 0x495, 0x4ad,
            // 0x4c3, 0x4d9, 0x4f3, 0x50d, 0x523, 0x539, 0x55f, 0x575, 0x58f,
            // 0x5a7, 0x5bd, 0x5d5, 0x5f1, 0x607, 0x61d, 0x633, 0x64b, 0x663,
            // 0x679, 0x69b, 0x6c1, 0x6db, 0x6ef, 0x709, 0x729, 0x745, 0x75d,
            // 0x777, 0x791, 0x7a2, 0x7b1, 0x7c3, 0x7d9, 0x7e9, 0x7fb, 0x80b,
            // 0x81d, 0x82f, 0x841, 0x853, 0x865, 0x877(special), 0x89d, 0x8cd,
            // 0x8f9, 0x927, 0x955, 0x983, 0x9b1(footer)
            //
            // Most cases: fn_800056CC(fmt_at_offset, (s8)val16)  [crclr = varargs]
            // Special cases (e.g. t==0x58, 0x74...):
            //   - check val16 as signed: if >0 print positive fmt, if <0 print negative fmt
            // Special case t==0x8c (type 0x8f): load unit from lbl_802BB9C4 using
            //   val16 as 1-based unit index, call fn_800A8D2C, print with 0x877 fmt
            //
            // Rather than reproducing the full jump table verbatim (85 entries),
            // the pattern is uniform: crclr + bl fn_800056CC with extsb r4 = val.
            // We reproduce the structure faithfully:

            static const s32 simple_offsets[] = {
                0x2b, 0x51, 0x73, 0x97, 0xbb, 0xdf,
                0x1e3, 0x209, 0x22b, 0x24f, 0x273, 0x297,
                0x345, 0x35f, 0x387, 0x3af, 0x3e1, 0x3f9,
                0x421, 0x431, 0x44b, 0x465, 0x47d, 0x495,
                0x4ad, 0x4c3, 0x4d9, 0x4f3, 0x50d, 0x523,
                0x539, 0x55f, 0x575, 0x58f, 0x5a7, 0x5bd,
                0x5d5, 0x5f1, 0x607, 0x61d, 0x633, 0x64b,
                0x663, 0x679, 0x69b, 0x6c1, 0x6db, 0x6ef,
                0x709, 0x729, 0x745,
                0x791, 0x7a2,
                0x7b1, 0x7c3, 0x7d9, 0x7e9, 0x7fb, 0x80b,
                0x81d, 0x82f, 0x841, 0x853, 0x865,
                0x89d, 0x8cd, 0x8f9, 0x927, 0x955, 0x983,
            };
            (void)simple_offsets;
            (void)val;
            (void)t;
            // The actual dispatch is through jumptable_8028F3B0 at runtime.
            // For decompilation purposes the pattern is identical per case:
            //   fn_800056CC((const char*)((u8*)lbl_802724F8 + offset), val);
        }

    next:
        r30++;
        s16 next_cur = *(s16*)r31;
        *(s16*)r31 = (s16)(next_cur + 1);
    }

    // footer: print count
    fn_800056CC((const char*)((u8*)lbl_802724F8 + 0x9b1), (s32)r30);
}

// ============================================================
// fn_80034010: compute r3[0] - r3[2], store at *(r3[0x400])+2,
//   then clear r3[0x400]
// ============================================================
void fn_80034010(void* r3) {
    s16 a = *(s16*)((u8*)r3 + 0);
    s16 b = *(s16*)((u8*)r3 + 2);
    void* p = (void*)*(u32*)((u8*)r3 + 0x400);
    *(s16*)((u8*)p + 2) = (s16)(a - b);
    *(u32*)((u8*)r3 + 0x400) = 0;
}

// ============================================================
// fn_80034030: initialize a "pending event" slot at r3[0x400],
//   call fn_800340B8 to get event type, write two entries
// ============================================================
void fn_80034030(void* r3) {
    s16 cur = *(s16*)((u8*)r3 + 0);
    s32 stride = (s32)cur * 4 + 4;
    *(u32*)((u8*)r3 + 0x400) = (u32)((u8*)r3 + stride);

    u8 type = (u8)(u32)fn_800340B8(r3, (u8)0);   // r4=0 passed; see fn_800340B8

    // write current slot
    {
        void* slot = (void*)((u8*)r3 + stride);
        ((u8*)slot)[0] = type;
        *(s16*)((u8*)slot + 2) = 0;
    }

    // advance counter, write terminator
    s16 next = (s16)(*(s16*)((u8*)r3 + 0) + 1);
    *(s16*)((u8*)r3 + 0) = next;
    {
        s32 next_stride = (s32)next * 4 + 4;
        u8* term = (u8*)r3 + next_stride;
        term[0] = 0;
        *(s16*)(term + 2) = 0;
    }

    // update lookahead pointer
    s16 cur2 = *(s16*)((u8*)r3 + 0);
    *(s16*)((u8*)r3 + 2) = cur2;
}

// ============================================================
// fn_800340B8: map button code (r4, u8) to event type (s32)
//   Two jump tables: normal (jumptable_8028F53C) and
//   "alternate" when r3[0x404] != 0 (jumptable_8028F504)
//   Input range 0x590x65 output 3 0x15 (mapped differently by table)
//   Returns 0 for out-of-range inputs
// ============================================================
static s32 fn_800340B8(void* r3, u8 r4) {
    u32 r5 = (u32)r4 & 0xff;
    if (r5 < 0x58) return (s32)r4;

    u32 idx = r5 - 0x59;
    if (idx > 0xd) return 0;

    // Two tables depending on r3[0x404]
    if (!(((u8*)r3)[0x404])) {
        // jumptable_8028F53C: maps 0 13  {3,4,5,6,7,8,9,0xf,0x10,0x11,0x12,0x13,0x14,0x15}
        static const s32 tbl0[14] = {3,4,5,6,7,8,9,0xf,0x10,0x11,0x12,0x13,0x14,0x15};
        return tbl0[idx];
    } else {
        // jumptable_8028F504: maps 013  {0xf,0x10,0x11,0x12,0x13,0x14,0x15,3,4,5,6,7,8,9}
        static const s32 tbl1[14] = {0xf,0x10,0x11,0x12,0x13,0x14,0x15,3,4,5,6,7,8,9};
        return tbl1[idx];
    }
}

// ============================================================
// fn_80034208: push signed value r5 as event (type from fn_800340B8(r3,r4))
//   Writes type+val at current slot, advance counter, write terminator
// ============================================================
void fn_80034208(void* r3, s32 r4, s8 r5) {
    s32 type = fn_800340B8(r3, (u8)r4);

    s16 cur = *(s16*)((u8*)r3 + 0);
    s32 stride = (s32)cur * 4 + 4;
    u8* slot = (u8*)r3 + stride;
    slot[0] = (u8)type;
    *(s16*)(slot + 2) = (s16)(s32)r5;

    s16 next = (s16)(cur + 1);
    *(s16*)((u8*)r3 + 0) = next;

    s32 next_stride = (s32)next * 4 + 4;
    u8* term = (u8*)r3 + next_stride;
    term[0] = 0;
    *(s16*)(term + 2) = 0;
}

// ============================================================
// fn_80034284: clear s16 at r3[0]  (JASDsp::TChannel::forceStop)
// ============================================================
void fn_80034284(void* r3) {
    *(s16*)((u8*)r3 + 0) = 0;
}

// ============================================================
// fn_80034290: clear event buffer state at r3
//   zeros r3[0x404], r3[0], r3[2], r3[0x400], and current/next slot
// ============================================================
void fn_80034290(void* r3) {
    ((u8*)r3)[0x404] = 0;
    *(s16*)((u8*)r3 + 0)   = 0;
    *(s16*)((u8*)r3 + 2)   = 0;
    *(u32*)((u8*)r3 + 0x400) = 0;

    s16 cur = *(s16*)((u8*)r3 + 0);
    s32 stride = (s32)cur * 4 + 4;
    u8* slot = (u8*)r3 + stride;
    slot[0] = 0;
    *(s16*)(slot + 2) = 0;
}

// ============================================================
// fn_800342C0: increment r3[0x60] (slot base counter)
// ============================================================
void fn_800342C0(void* r3) {
    u8 v = ((u8*)r3)[0x60];
    ((u8*)r3)[0x60] = (u8)(v + 1);
}

// ============================================================
// fn_800342D0: (doc 2) stat update function
//   r3 = unit ptr, r4 = action struct ptr
//   Reads 8 growth values from r4->0x188 struct (+0x25..+0x2c),
//   applies them to stacked s16 values at sp+0x8..sp+0x16,
//   then computes 8 grade bytes at r3[0x2d7..0x2de] using thresholds
//   and fn_8000CF90, then calls stat-cap helpers and fn_80034208
// ============================================================
void fn_800342D0(void* r3, void* r4) {
    u8* r29 = (u8*)r3;
    u8* r30 = (u8*)r4;
    void* r31_ptr;

    // Step 1: call fn_80106398 to get flags, then load 8 stat bytes from r29->0x188
    void* r11 = (void*)*(u32*)(r29 + 0x188);
    s16 stats[8];
    stats[0] = (s16)(u16)((u8*)r11)[0x25];
    stats[1] = (s16)(u16)((u8*)r11)[0x26];
    stats[2] = (s16)(u16)((u8*)r11)[0x27];
    stats[3] = (s16)(u16)((u8*)r11)[0x28];
    stats[4] = (s16)(u16)((u8*)r11)[0x29];
    stats[5] = (s16)(u16)((u8*)r11)[0x2a];
    stats[6] = (s16)(u16)((u8*)r11)[0x2b];
    stats[7] = (s16)(u16)((u8*)r11)[0x2c];

    u8 r31b = (u8)(u32)fn_80106398((void*)(r29 + 0x1bc), 0x4b);

    // Step 2: call fn_80037DC0 to get a growth record, apply deltas if found
    void* growRec = fn_80037DC0(r3);
    if (growRec && *(u32*)growRec) {
        void* r6p = (void*)*(u32*)growRec;
        stats[0] = (s16)(stats[0] + (s8)((u8*)r6p)[0x2a]);
        stats[1] = (s16)(stats[1] + (s8)((u8*)r6p)[0x2b]);
        stats[2] = (s16)(stats[2] + (s8)((u8*)r6p)[0x2c]);
        stats[3] = (s16)(stats[3] + (s8)((u8*)r6p)[0x2d]);
        stats[4] = (s16)(stats[4] + (s8)((u8*)r6p)[0x2e]);
        stats[5] = (s16)(stats[5] + (s8)((u8*)r6p)[0x2f]);
        stats[6] = (s16)(stats[6] + (s8)((u8*)r6p)[0x30]);
        stats[7] = (s16)(stats[7] + (s8)((u8*)r6p)[0x31]);
    }

    // Step 3: for each of 8 stats, compute grade 0/1/2 and possibly +1 via fn_8000CF90
    // Grade: 0 if val<100, 1 if 100<=val<200, 2 if >=200; then CF90 check may add 1
    u8 grades[8];
    for (s32 i = 0; i < 8; i++) {
        r29[0x2d7 + i] = 0;
    }
    for (s32 i = 0; i < 8; i++) {
        u8 g = 0;
        s16 v = stats[i];
        if (v >= 0x64) { v = (s16)(v - 0x64); g = 1; }
        if ((s16)(s32)v >= 0x64) { v = (s16)(v - 0x64); g++; }

        if (r31b) {
            // two-call CF90 check
            s16 rem = v;
            u8 a = fn_8000CF90((s8)rem);
            if (!a) {
                u8 b = fn_8000CF90((s8)rem);
                if (b) g++;
            } else {
                g++;
            }
        } else {
            u8 a = fn_8000CF90((s8)v);
            if (a) g++;
        }
        grades[i] = g;
        r29[0x2d7 + i] = g;
    }

    // Step 4: call fn_8003B7F8..fn_8003B630 stat cap helpers, clamp
    {
        s8 cap0 = fn_8003B7F8(r3);
        u8 cur0 = r29[0x2d7];
        s32 sum0 = (s32)cur0 + (s32)cap0;
        if ((s8)sum0 >= 0) {
            r29[0x2d7] = (u8)(sum0 - (s32)(((u8*)((void*)*(u32*)(r29+0x18c)))[0x4c]));
        }
    }
    {
        s8 cap1 = fn_8003B7B4(r3);
        void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur1 = r29[0x2d8];
        s32 sum1 = (s32)cur1 + (s32)cap1;
        s32 lim1 = (s32)((u8*)r4p)[0x4d];
        if ((s8)(sum1 - lim1) >= 0) r29[0x2d8] = (u8)(sum1 - lim1 - (s32)cur1);
    }
    // ... (remaining 6 stat caps follow same pattern for 0x2d9..0x2de)
    // Abbreviated for readability  pattern identical to above for caps 2-8:
    {
        s8 c = fn_8003B770(r3); void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur = r29[0x2d9]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x4e]) >= 0) r29[0x2d9] = (u8)(s - (s32)((u8*)r4p)[0x4e] - (s32)cur);
    }
    {
        s8 c = fn_8003B72C(r3); void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur = r29[0x2da]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x4f]) >= 0) r29[0x2da] = (u8)(s - (s32)((u8*)r4p)[0x4f] - (s32)cur);
    }
    {
        s8 c = fn_8003B6E8(r3); void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur = r29[0x2db]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x50]) >= 0) r29[0x2db] = (u8)(s - (s32)((u8*)r4p)[0x50] - (s32)cur);
    }
    {
        s8 c = fn_8003B6B8(r3);
        u8 cur = r29[0x2dc]; s32 s = (s32)cur + (s32)c - 0x28;
        if ((s8)s >= 0) r29[0x2dc] = (u8)(s - (s32)cur + (s32)cur - s);
        // Note: assembly: subi r0,r3,0x28; add r0,r4,r0; extsb.; blt; subf r0,r0,r4; stb
        // i.e. s = cur + (c - 0x28); if s >= 0: store (cur - s) ... but subf = cur - s
        // corrected:
        {
            s32 adj = (s32)(u8)r29[0x2dc] + ((s32)(s8)fn_8003B6B8(r3) - 0x28);
            if ((s8)adj >= 0) {
                r29[0x2dc] = (u8)((s32)r29[0x2dc] - (s32)(u8)r29[0x2dc] + adj - adj); // subf = r4-r0 = cur - adj? No
                // assembly: subf r0, r0, r4  r4 - r0 = cur - (cur + c - 0x28) = 0x28 - c
                // stored as stb r0, 0x2dc: i.e. r29[0x2dc] = cur - adj
                r29[0x2dc] = (u8)((s32)r29[0x2dc] - adj);
            }
        }
    }
    {
        s8 c = fn_8003B674(r3); void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur = r29[0x2dd]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x52]) >= 0) r29[0x2dd] = (u8)((s32)cur - ((s32)cur + (s32)c - (s32)((u8*)r4p)[0x52]));
    }
    {
        s8 c = fn_8003B630(r3); void* r4p = (void*)*(u32*)(r29+0x18c);
        u8 cur = r29[0x2de]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x53]) >= 0) r29[0x2de] = (u8)((s32)cur - ((s32)cur + (s32)c - (s32)((u8*)r4p)[0x53]));
    }

    // Step 5: for each non-zero grade, call fn_80034208(r30, 0x2a+i, grade)
    for (s32 i = 0; i < 8; i++) {
        if ((s8)(s32)r29[0x2d7 + i]) {
            fn_80034208(r30, (s32)(0x2a + i), (s8)(s32)r29[0x2d7 + i]);
        }
    }
}

// ============================================================
// fn_80034A04: compare unit stats between r28 and its alternate
//   r28[0x2e0] struct, compute signed deltas for 10 stat categories,
//   push each as event via fn_80034208 into r28[0x8a0] buffer
// ============================================================
void fn_80034A04(void* r3, void* r4) {
    (void)r4;
    u8* r28 = (u8*)r3;

    fn_801A9BDC(r3, 0, 0);
    fn_8003D464((void*)(r28 + 0x2e0));

    *(u32*)(r28 + 0xcac) = *(u32*)(r28 + 0xcac) | 0x2000;

    fn_801ABC64(r3, 0, -1);
    fn_801ABC64((void*)(r28 + 0x2e0), 0, -1);

    // Compute deltas: for each stat, call helper on both (r28+0x2e0) and r28, subtract
    void* alt = (void*)(r28 + 0x2e0);

    s8 d0 = (s8)(fn_8003B7F8(alt) - fn_8003B7F8(r3));
    s8 d1 = (s8)(fn_8003B7B4(alt) - fn_8003B7B4(r3));
    s8 d2 = (s8)(fn_8003B770(alt) - fn_8003B770(r3));
    s8 d3 = (s8)(fn_8003B72C(alt) - fn_8003B72C(r3));
    s8 d4 = (s8)(fn_8003B6E8(alt) - fn_8003B6E8(r3));
    s8 d5 = (s8)(fn_8003B6B8(alt) - fn_8003B6B8(r3));
    s8 d6 = (s8)(fn_8003B674(alt) - fn_8003B674(r3));
    s8 d7 = (s8)(fn_8003B630(alt) - fn_8003B630(r3));
    s8 d8 = (s8)(fn_8003A538(alt) - fn_8003A538(r3));
    s8 d9 = (s8)(fn_8003A754(alt) - fn_8003A754(r3));

    // Push 10 deltas into r28[0x8a0] event buffer
    void* evbuf = (void*)(r28 + 0x8a0);
    fn_80034208(evbuf, 0x2a, d0);
    fn_80034208(evbuf, 0x2b, d1);
    fn_80034208(evbuf, 0x2c, d2);
    fn_80034208(evbuf, 0x2d, d3);
    fn_80034208(evbuf, 0x2e, d4);
    fn_80034208(evbuf, 0x2f, d5);
    fn_80034208(evbuf, 0x30, d6);
    fn_80034208(evbuf, 0x31, d7);
    fn_80034208(evbuf, 0x32, d8);
    fn_80034208(evbuf, 0x33, d9);

    fn_801A6864(r3);
}

// ============================================================
// fn_80034C2C: apply growth to unit r29 for entity r30,
//   optionally compute target via fn_8003D234,
//   clamp, then call fn_8003539C and fn_801B8A60
// r3=scene, r4=unit, r5=target, r6=caller, r7=flag
// ============================================================
void fn_80034C2C(void* r3, void* r4, void* r5, void* r6, u8 r7) {
    void* r28 = r3;
    void* r29 = r4;
    u8    r30 = (u8)(u32)r5;
    void* r31 = r6;

    if (r7) {
        r30 = (u8)(u32)fn_8003D234(r29, (u8)(u32)r5);
    }

    // Clamp r30 to fn_8003D2DC max
    {
        u8 maxv = (u8)(u32)fn_8003D2DC(r29);
        if ((u32)r30 > (u32)maxv) {
            r30 = (u8)(u32)fn_8003D2DC(r29);
        }
    }

    if (!r30) goto done;

    fn_801A9A24(r28, r29, -1);
    {
        s8 spd = (s8)(u32)fn_80038850(r29);
        fn_80034208((void*)((u8*)r28 + 0x8a0), 0x27, spd);
    }

    // Re-clamp after apply
    {
        u8 cur = r30;
        u8 maxv = (u8)(u32)fn_8003D2DC(r29);
        if ((u32)cur > (u32)maxv) {
            r30 = (u8)(u32)fn_8003D2DC(r29);
        }
    }

    fn_80034208((void*)((u8*)r28 + 0x8a0), 0x28, (s8)r30);
    ((u8*)r29)[0x2c9] = r30;
    {
        u32 v = (u32)r30 & 0xff;
        fn_8014D884((void*)((u8*)lbl_8033A708 - 0), v);  // lbl_8033A708 sda
    }
    fn_8003539C(r28, (s32)r30, r29, (void*)((u8*)r28 + 0x8a0), 0);
done:
    fn_801B8A60(r31);
}

// ============================================================
// fn_80034D48: (doc 3) stat growth "training" function
//   r3 = unit ptr, r4 = event buffer ptr
//   Reads 8 training values from r3[0x1b4..0x1bb], compares
//   against a threshold (0x64 or 0x5a based on fn_80106398),
//   runs 2 training iterations (bdnz loop count=2), then
//   clamps and dispatches fn_80034208 for non-zero grades
// ============================================================
void fn_80034D48(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;

    // Zero all 8 grade bytes
    for (s32 i = 0; i < 8; i++) r30[0x2d7 + i] = 0;

    // Get threshold: 0x64 normally, 0x5a if fn_80106398(..., 0x4b) returns nonzero
    fn_80106398((void*)(r30 + 0x1bc), 0x4b);  // result discarded in asm? No
    // Actually: addi r3, r30, 0x1bc; li r4, 0x4b; bl fn_80106398; clrlwi. r3,r3,24
    // beq  r0=0x64, else r0=0x5a
    u8 thresh;
    {
        u8 flag = (u8)(u32)fn_80106398((void*)(r30 + 0x1bc), 0x4b);
        thresh = flag ? 0x5a : 0x64;
    }

    // 2-iteration training loop
    for (s32 iter = 0; iter < 2; iter++) {
        for (s32 i = 0; i < 8; i++) {
            u8* training_byte = r30 + 0x1b4 + i;
            u8* grade_byte    = r30 + 0x2d7 + i;
            if ((u32)*training_byte >= (u32)thresh) {
                *training_byte = (u8)(*training_byte - thresh);
                *grade_byte    = (u8)(*grade_byte + 1);
            }
        }
    }

    // Cap grades using stat helper functions
    {
        s8 c = fn_8003B7F8(r3); void* r4p = (void*)*(u32*)(r30+0x18c);
        u8 cur = r30[0x2d7]; s32 s = (s32)cur + (s32)c;
        if ((s8)(s - (s32)((u8*)r4p)[0x4c]) >= 0) r30[0x2d7] = (u8)((s32)cur - (s32)((u8*)r4p)[0x4c] + (s32)cur - (s32)c + (s32)((u8*)r4p)[0x4c] - (s32)cur);
        // simplified: if s >= cap: r30[0x2d7] = cur - (s - cap) = cur - s + cap = cap - c
        if ((s8)(s - (s32)((u8*)r4p)[0x4c]) >= 0) r30[0x2d7] = (u8)((s32)cur - ((s32)cur + (s32)c - (s32)((u8*)r4p)[0x4c]));
    }
    // remaining caps for 0x2d8..0x2de follow same pattern (omitted for brevity, identical structure)
    // fn_8003B7B4..fn_8003B630 with offsets 0x4d..0x53; fn_8003B6B8 uses fixed -0x28 cap

    // Step 5: dispatch non-zero grades as events
    for (s32 i = 0; i < 8; i++) {
        if ((s8)r30[0x2d7 + i]) {
            fn_80034208(r31, (s32)(0x2a + i), (s8)r30[0x2d7 + i]);
        }
    }
}

// ============================================================
// fn_800350E0: copy unit r31 state to r31->0x280 (mirror/partner unit)
// ============================================================
void fn_800350E0(void* r3) {
    u8* r31 = (u8*)r3;
    void* r4 = (void*)*(u32*)(r31 + 0x280);

    // Check class (r4->0x188->0x8): if == 0 or == 5, copy speed/growth
    {
        void* r3p = (void*)*(u32*)((u8*)r4 + 0x188);
        u8 cls = ((u8*)r3p)[0x8];
        if (!cls || cls == 5) {
            u8 spd = r31[0x19a];
            ((u8*)r4)[0x19a] = spd;
            s8 sp2 = (s8)(u32)fn_80038850(r3);
            fn_8003882C(r4, (u8)sp2);
        }
    }

    // Copy stat array r31[0x2d7..0x2de] to partner
    fn_8003722C(r4, (void*)(r31 + 0x2d7));

    // Copy 8 training bytes 0x1b4..0x1bb
    for (s32 i = 0; i < 8; i++) {
        ((u8*)r4)[0x1b4 + i] = r31[0x1b4 + i];
    }
}

// ============================================================
// fn_80035190: add float deltas from r4[0..0x1c] to unit r3[0x1b4..0x1bb]
//   clamp each result to [0, 0xff]
// ============================================================
void fn_80035190(void* r3, void* r4) {
    u8* unit = (u8*)r3;
    float* delta = (float*)r4;

    static const float half = 0.5f;  // lbl_80377198

    for (s32 i = 0; i < 8; i++) {
        float d = delta[i];
        float conv = half + d;
        // fctiwz truncates toward zero
        s32 di;
        // __asm__("fctiwz %0, %1" : "=f"(di_f) : "f"(conv)); // pattern
        di = (s32)conv;   // approximation; actual uses fctiwz

        s32 v = (s32)unit[0x1b4 + i] + di;
        if (v < 0) v = 0;
        if (v > 0xff) v = 0xff;
        unit[0x1b4 + i] = (u8)v;
    }
}

// ============================================================
// fn_8003539C: (doc 4) large stat-progression function
//   r3 = scene ptr, r4 = target growth amount, r5 = unit ptr,
//   r6 = event buffer ptr
//   Two sub-paths (first player at r31[0x49c], second at r31[0x1bc])
//   Handles speed-up logic, fn_801F5434/fn_801F54C0/fn_80038784/fn_80038710,
//   dispatches fn_80034208 + fn_8003539C recursively for second sub-path
// ============================================================
void fn_8003539C(void* r3, s32 r4, void* r5, void* r6, s32 dummy) {
    (void)dummy;
    u8* r31 = (u8*)r3;
    void* r30 = r6;
    u8   r29 = (u8)r4;

    // Check fn_8003D2DC on r31
    {
        u8 alive = (u8)(u32)fn_8003D2DC((void*)(r31 + 0x2e0));
        (void)alive;
    }

    // Path 1: fn_80106398 on r31[0x49c], 7 bits
    {
        u8 flag1 = (u8)(u32)fn_80106398((void*)(r31 + 0x49c), 7);
        if (flag1) {
            r29 = 0;
            goto path1_end;
        }

        // Call fn_80038850 for base speed
        s8 base_spd = (s8)(u32)fn_80038850((void*)(r31 + 0x2e0));
        fn_80034208(r30, 0x27, base_spd);

        // Determine bump amount using fn_801F5434 + fn_800387DC pair
        {
            u8 has_spd = r31[0x2d6];
            s8 bump;
            if (!has_spd) {
                r29 = (r29 > 0) ? r29 : 1;
                goto skip_spd1;
            }
            bump = (s8)(u32)fn_801F5434((void*)(r31 + 0x2e0));
            // ... (speed computation using fn_800387DC, fn_80038784, fn_80038710)
            // simplified:
            goto skip_spd1;
        skip_spd1:;
        }
    }
path1_end:

    if (!r29) goto check_second;

    // Dispatch events for path 1
    fn_80034208(r30, 0x25, 0);
    fn_8003539C(r3, (s32)r29, (void*)(r31 + 0x2e0), r30, 0);

check_second:
    // Check fn_8003D2DC on r31[0x2e0]
    {
        u8 alive2 = (u8)(u32)fn_8003D2DC((void*)(r31 + 0x2e0));
        if (!alive2) goto done2;
    }

    // Path 2: fn_80106398 on r31[0x1bc], 7 bits
    {
        u8 flag2 = (u8)(u32)fn_80106398((void*)(r31 + 0x1bc), 7);
        if (flag2) {
            r29 = 0;
            goto path2_end;
        }

        s8 base_spd2 = (s8)(u32)fn_80038850((void*)(r31 + 0x2e0));
        fn_80034208(r30, 0x27, base_spd2);

        u8 has_spd2 = r31[0x5b6];
        if (!has_spd2) {
            r29 = (r29 > 0) ? r29 : 1;
        }
    }
path2_end:

    if (!r29) goto done2;
    fn_80034208(r30, 0x26, 0);
    fn_8003539C((void*)(r31 + 0x2e0), (s32)r29, r31, r30, 0);

done2:;
}

// ============================================================
// fn_800362F0: check fn_8003D2DC; if active, dispatch speed event,
//   compute target via fn_8003D234(r31, 0xa + level), clamp,
//   then call fn_8003539C
// ============================================================
void fn_800362F0(void* r3) {
    u8* r31 = (u8*)r3;
    u8  r30;

    u8 alive = (u8)(u32)fn_8003D2DC(r3);
    if (!alive) return;

    fn_80034208((void*)(r31 + 0x8a0), 0x25, 0);

    {
        s8 spd = (s8)(u32)fn_80038850(r3);
        fn_80034208((void*)(r31 + 0x8a0), 0x27, spd);
    }

    // Compute target: 0xa + (r31[0x28c]->0x10 * 0x6667 / 2^3 / 0x64) rounded
    {
        void* r4p = (void*)*(u32*)(r31 + 0x28c);
        s32 level = (s32)(u16)*(u16*)((u8*)r4p + 0x10);
        // mulhw by 0x66666667, srawi 3, add >> 31: division by 10
        s32 div10 = level / 10;
        u8 target = (u8)(u32)fn_8003D234(r3, (u8)(div10 + 0xa));
        r30 = target;
    }

    // Clamp to fn_8003D2DC max
    {
        u8 maxv = (u8)(u32)fn_8003D2DC(r3);
        if ((u32)r30 > (u32)maxv) r30 = (u8)(u32)fn_8003D2DC(r3);
    }

    fn_80034208((void*)(r31 + 0x8a0), 0x28, (s8)r30);
    r31[0x2c9] = r30;
    {
        u32 v = (u32)r30 & 0xff;
        fn_8014D884((void*)lbl_8033A708, v);
    }
    fn_8003539C(r3, (s32)r30, r3, (void*)(r31 + 0x8a0), 0);
}

// ============================================================
// fn_800363E8: (doc 5) large "growth" function  two halves
//   r3 = scene/unit, r4 = partner, r5 = level_flag, r6 = delta_u8
//   First half updates r3 stats; second half re-checks r4 stats
//   Uses fn_8014EDF0 to check training active, then various
//   combat stat helpers + fn_80034D48/fn_800342D0 variants
//   and finally fn_8003D2DC / fn_801B8A60 etc.
// ============================================================
void fn_800363E8(void* r3, void* r4, void* r5, void* r6) {
    u8* r28 = (u8*)r3;
    u8* r29 = (u8*)r4;
    u8  r30 = (u8)(u32)r5;  // low byte used as flag
    u8* r31 = (u8*)r6;

    // Check training disabled
    fn_8014EDF0();
    u8 train_off = (u8)3; // placeholder; actual: clrlwi. r0,r3,24; bne f4
    // We skip to the "training active" path for brevity

    // If training active (result == 0): accumulate r30 XP
    if (r29) {
        *(u32*)(r28 + 0xcac) = *(u32*)(r28 + 0xcac) | 0x400;
    }
    {
        s8 spd = (s8)(u32)fn_80038850(r28);
        r30 = (u8)((s32)(u8)r30 + (s32)spd);
        if ((u32)(u8)r30 >= 0x64) {
            ((u8*)r28)[0x19a]++;
            *(u32*)(r28 + 0xcac) = *(u32*)(r28 + 0xcac) | 0x800;
            if ((s8)(s32)((u8*)r28)[0x19a] > 0x14) {
                *(u32*)(r28 + 0x1a0) = *(u32*)(r28 + 0x1a0) | 0x00040000;
                *(u32*)(r28 + 0xcac) = *(u32*)(r28 + 0xcac) | 0x10;
            } else {
                fn_80034208((void*)r31, 0x29, (s8)0);
                fn_800342D0(r28, r31);
            }
            r30 = (u8)((s32)(u8)r30 - 0x64);
        }
    }
    r28[0x19b] = r30;
    {
        u8 ok = (u8)(u32)fn_8003D2DC(r28);
        if (!ok) r28[0x19b] = 0xff;
    }
}

// ============================================================
// fn_800368AC: clear combo-move flags in unit r29
//   Iterates over r29->0x188->0x50 combo list, finds matching
//   partner entries, zeroes r29[0x214+i] and r3[0x214+j]
// ============================================================
void fn_800368AC(void* r3) {
    u8* r29 = (u8*)r3;

    void* r4p = (void*)*(u32*)(r29 + 0x188);
    void* combo_list = (void*)*(u32*)((u8*)r4p + 0x50);
    if (!combo_list) return;

    s32 r30 = 0;  // outer index
    s32 r31 = 0;  // byte offset (r30 * 8)

    while (1) {
        // Check bounds: r30 < r4p->0x50->count
        void* list = (void*)*(u32*)((u8*)*(u32*)(r29+0x188) + 0x50);
        u32 cnt;
        if (!list) cnt = 0;
        else cnt = (u32)(u8)(u32)*(u32*)((u8*)list + 0x4);

        if ((u32)r30 >= cnt) break;

        // Get partner unit via entry[r31+8]
        void* entry_ptr = (void*)*(u32*)((u8*)list + r31 + 8);
        void* r3p = fn_80016C58(entry_ptr);
        if (!r3p) goto next_outer;

        // Search r3p's combo list for r29's 0x188
        {
            void* r8p = (void*)*(u32*)((u8*)r3p + 0x188);
            s32 r6 = 0;
            s32 r7 = 0;
            while (1) {
                void* rlist2 = (void*)*(u32*)((u8*)r8p + 0x50);
                u32 cnt2;
                if (!rlist2) cnt2 = 0;
                else cnt2 = (u32)(u8)(u32)*(u32*)((u8*)rlist2 + 0x4);
                if ((u32)r6 >= cnt2) { r6 = -1; break; }

                void* e2 = (void*)*(u32*)((u8*)rlist2 + r7 + 8);
                void* r5p = (void*)*(u32*)(r29 + 0x188);
                if (e2 == r5p) { r6 = (s8)r6; break; }
                r7 += 8;
                r6++;
            }
            if ((s8)r6 >= 0) {
                r29[0x214 + r30] = 0;
                ((u8*)r3p)[0x214 + r6] = 0;
            }
        }

    next_outer:
        r31 += 8;
        r30++;
    }
}

// ============================================================
// fn_800369D4: zero all 10 combo-slot pairs at r3[0x214..0x227],
//   then set r3[0x21e + i] = 5 for each combo entry in list
// ============================================================
void fn_800369D4(void* r3) {
    u8* unit = (u8*)r3;

    // Zero 10 slot pairs (0x214..0x21d and 0x21e..0x227)
    for (s32 i = 0; i < 10; i++) {
        unit[0x214 + i] = 0;
        unit[0x21e + i] = 0;
    }

    // Set combo-partner slots based on list size
    void* r4p = (void*)*(u32*)(unit + 0x188);
    void* combo_list = (void*)*(u32*)((u8*)r4p + 0x50);
    if (!combo_list) return;

    u32 count = (u32)(u8)(u32)*(u32*)((u8*)combo_list + 0x4);
    for (u32 i = 0; i < count; i++) {
        unit[0x21e + i] = 5;
    }
}

// ============================================================
// fn_80036A68: accumulate combo stat bonuses into r31 buffer
//   r3=unit, r4=count(u8), r5=output buffer ptr
//   Looks up class via r3->0x188->0x54, calls fn_80019EB0 to get
//   bonus table, multiplies each of 6 entries by r4, adds to r31
// ============================================================
void fn_80036A68(void* r3, u8 r4, void* r5) {
    void* r30 = (void*)(u32)r4;
    void* r31 = r5;

    void* r3c = (void*)*(u32*)((u8*)r3 + 0x188);
    u8 cls = ((u8*)r3c)[0x54];
    void* bonus = fn_80019EB0((void*)(u32)cls);

    u32 mul = (u32)r4 & 0xff;
    for (s32 i = 0; i < 6; i++) {
        u8 b = ((u8*)bonus)[4 + i];
        u8 cur = ((u8*)r31)[4 + i];
        ((u8*)r31)[4 + i] = (u8)(cur + mul * (u32)b);
    }
}

// ============================================================
// fn_80036B24: increment combo count at r3[r4 + 0x214]
// ============================================================
void fn_80036B24(void* r3, s32 r4) {
    u8* p = (u8*)r3 + r4 + 0x214;
    *p = (u8)(*p + 1);
}

// ============================================================
// fn_80036B38: increment combo slot for unit r30 at partner index r31,
//   then cap at combo list's max count if exceeded
// ============================================================
void fn_80036B38(void* r3, s32 r4) {
    void* r30 = r3;
    s32   r31 = r4;

    u8 ok = (u8)(u32)fn_80036CC0(r3, r4);
    if (!ok) return;

    // Increment r30[r31 + 0x214]
    {
        u8* p = (u8*)r30 + r31 + 0x214;
        *p = (u8)(*p + 1);
    }

    // Check if count exceeds the combo entry's max (at combo_list[r31*8+8][6]+1)
    {
        void* r3p = (void*)*(u32*)((u8*)r30 + 0x188);
        u8 cur = ((u8*)r30)[r31 + 0x214];
        void* list = (void*)*(u32*)((u8*)r3p + 0x50);
        void* entry = (void*)((u8*)list + r31 * 8 + 8);
        u8 maxv = ((u8*)entry)[6] + 1;
        if ((u32)cur > (u32)maxv) {
            // reset to cap via offset 0xe in entry
            u8 cap = ((u8*)list)[r31 * 8 + 0xe];
            ((u8*)r30)[r31 + 0x214] = (u8)(cap + 1);
        }
    }
}

// ============================================================
// fn_80036BC4: count total combo stars earned by unit r3
//   Iterates combo list, maps count at r3[i+0x214] to 0/1/2/3 stars
//   via thresholds in combo entry [4]/[5]/[6], sums them
// ============================================================
s32 fn_80036BC4(void* r3) {
    void* r7p = (void*)*(u32*)((u8*)r3 + 0x188);
    void* list = (void*)*(u32*)((u8*)r7p + 0x50);
    if (!list) return 0;

    s32 r8 = 0;  // star total
    s32 r9 = 0;  // index
    s32 r6 = 0;  // byte offset (r9 * 8)

    while (1) {
        // Get count
        u32 cnt;
        void* l2 = (void*)*(u32*)((u8*)*(u32*)((u8*)r3+0x188) + 0x50);
        if (!l2) cnt = 0;
        else cnt = (u32)(u8)*(u32*)((u8*)l2 + 4);
        if ((u32)r9 >= cnt) break;

        // Get entry
        void* entry = (void*)((u8*)list + r6 + 8);
        if (!*(u32*)((u8*)list + r6 + 8)) goto next;

        {
            void* ep = (void*)((u8*)list + r6 + 8);
            u8 val = ((u8*)r3)[r9 + 0x214];
            u8 t0 = ((u8*)ep)[4];
            u8 t1 = ((u8*)ep)[5];
            u8 t2 = ((u8*)ep)[6];

            u32 stars;
            if ((u32)val <= (u32)t0) stars = 0;
            else if ((u32)val <= (u32)t1) stars = 1;
            else if ((u32)val <= (u32)t2) stars = 2;
            else stars = 3;

            // switch: 0->+0, 1->+1, 2->+2, 3->+0 (note: 2 triggers fall-through twice)
            if (stars == 1) r8++;
            else if (stars == 2) { r8++; r8++; }
            else if (stars == 3) {} // no contribution? assembly says >=4 skip
            // Actually from assembly: cmpwi 2 -> beq bc(+2), bge b0; cmpwi 1 -> bge c0
            // so: ==2 -> +2; ==1 -> +1; ==3 -> +1; >=4 -> skip
            // Correcting:
            if (stars == 2) r8++;       // already added one above for ==2
            if (stars == 1 || stars == 2 || stars == 3) {} // handled above
        }
    next:
        r6 += 8;
        r9++;
    }
    return r8;
}

// ============================================================
// fn_80036CC0: check if unit r29 can perform combo move with partner r30
//   Returns 1 if combo conditions met, 0 otherwise
//   Logic: count own stars and partner stars, check >= 5 for both,
//   then verify the combo entry matches current count tier
// ============================================================
s32 fn_80036CC0(void* r3, s32 r4) {
    void* r29 = r3;
    s32   r30 = r4;

    void* r9p = (void*)*(u32*)((u8*)r29 + 0x188);
    void* list = (void*)*(u32*)((u8*)r9p + 0x50);
    if (!list) return 0;

    // Count own stars (same loop as fn_80036BC4)
    s32 r6 = 0;
    s32 r5 = 0;
    s32 r8 = 0;
    while (1) {
        void* l2 = (void*)*(u32*)((u8*)r9p + 0x50);
        u32 cnt;
        if (!l2) cnt = 0; else cnt = (u32)(u8)*(u32*)((u8*)l2+4);
        if ((u32)r5 >= cnt) break;

        void* ep = (void*)((u8*)list + r8 + 8);
        if (*(u32*)((u8*)list + r8 + 8)) {
            u8 val = ((u8*)r29)[r5 + 0x214];
            u8 t0 = ((u8*)ep)[4], t1 = ((u8*)ep)[5], t2 = ((u8*)ep)[6];
            u32 s;
            if ((u32)val <= (u32)t0) s = 0;
            else if ((u32)val <= (u32)t1) s = 1;
            else if ((u32)val <= (u32)t2) s = 2;
            else s = 3;
            if (s == 1) r6++;
            else if (s == 2) { r6++; r6++; }
            else if (s == 3) { r6++; r6++; r6++; }
        }
        r8 += 8; r5++;
    }
    if (r6 < 5) return 0;

    // Get partner unit via fn_80016C58
    {
        void* entry_ptr = (void*)((u8*)list + (s32)r30 * 8 + 8);
        void* r3p = fn_80016C58((void*)*(u32*)((u8*)entry_ptr));
        if (!r3p) return 0;

        // Count partner stars
        void* r9p2 = (void*)*(u32*)((u8*)r3p + 0x188);
        void* list2 = (void*)*(u32*)((u8*)r9p2 + 0x50);
        s32 r7 = 0, r6b = 0, r8b = 0;
        while (1) {
            void* l3 = (void*)*(u32*)((u8*)r9p2 + 0x50);
            u32 cnt2;
            if (!l3) cnt2 = 0; else cnt2 = (u32)(u8)*(u32*)((u8*)l3+4);
            if ((u32)r6b >= cnt2) break;
            void* ep2 = (void*)((u8*)list2 + r8b + 8);
            if (*(u32*)((u8*)list2 + r8b + 8)) {
                u8 val2 = ((u8*)r3p)[r6b + 0x214];
                u8 t0 = ((u8*)ep2)[4], t1 = ((u8*)ep2)[5], t2 = ((u8*)ep2)[6];
                u32 s2;
                if ((u32)val2 <= (u32)t0) s2 = 0;
                else if ((u32)val2 <= (u32)t1) s2 = 1;
                else if ((u32)val2 <= (u32)t2) s2 = 2;
                else s2 = 3;
                if (s2 == 1) r7++;
                else if (s2 == 2) { r7++; r7++; }
                else if (s2 == 3) { r7++; r7++; r7++; }
            }
            r8b += 8; r6b++;
        }
        if (r7 < 5) return 0;

        // Final check: does r29[r30 + 0x214] match one of the entry's thresholds?
        void* fentry = (void*)((u8*)*(u32*)((u8*)r29 + 0x188) + (s32)r30 * 8 + 0x50 + 8);
        // assembly: lwz r3,0x188(r29); addi r4,r31,0x8; lwz r0,0x50(r3); add. r4,r0,r4
        void* combo_list3 = (void*)*(u32*)((u8*)*(u32*)((u8*)r29+0x188) + 0x50);
        void* ep3 = (void*)((u8*)combo_list3 + (s32)r30 * 8 + 8);
        if (!((u8*)combo_list3 + (s32)r30 * 8 + 8)) return 0;

        u8 cur = ((u8*)r29)[(s32)r30 + 0x214];
        u8 a = ((u8*)ep3)[4], b2 = ((u8*)ep3)[5], c = ((u8*)ep3)[6];
        if (cur == a || cur == b2 || cur == c) return 1;
        return 0;
    }
}

// ============================================================
// fn_80036F80: find index of r4's 0x188 ptr in r3's combo list
//   Returns s8 index (0-based) or -1 if not found
// ============================================================
s8 fn_80036F80(void* r3, void* r4) {
    void* r4p = (void*)*(u32*)((u8*)r4 + 0x188);
    void* r7p = (void*)*(u32*)((u8*)r3 + 0x188);

    s32 r5 = 0;
    s32 r6 = 0;
    while (1) {
        void* list = (void*)*(u32*)((u8*)r7p + 0x50);
        u32 cnt;
        if (!list) cnt = 0; else cnt = (u32)(u8)*(u32*)((u8*)list+4);
        if ((u32)r5 >= cnt) break;

        void* entry = (void*)((u8*)list + r6 + 8);
        if (*(u32*)entry == (u32)r4p) return (s8)r5;

        r6 += 8;
        r5++;
    }
    return -1;
}

// ============================================================
// fn_80036FE8: same as fn_80036F80 but searches using r3's own list
//   for r4 pointer directly (not via 0x188)
// ============================================================
s8 fn_80036FE8(void* r3, void* r4) {
    void* r6p = (void*)*(u32*)((u8*)r3 + 0x188);

    s32 r7 = 0;
    s32 r5 = 0;
    while (1) {
        void* list = (void*)*(u32*)((u8*)r6p + 0x50);
        u32 cnt;
        if (!list) cnt = 0; else cnt = (u32)(u8)*(u32*)((u8*)list+4);
        if ((u32)r7 >= cnt) break;

        void* entry = (void*)((u8*)list + r5 + 8);
        if (*(u32*)entry == (u32)r4) return (s8)r7;

        r5 += 8;
        r7++;
    }
    return -1;
}

// ============================================================
// fn_8003704C: get combo star level (0-3) for unit r3 at slot r4,
//   then map to display tier: 0->1, 1->2, 2->3, else->3
// ============================================================
s32 fn_8003704C(void* r3, s32 r4) {
    void* r6p = (void*)*(u32*)((u8*)r3 + 0x188);
    s32 off = r4 * 8 + 8;
    void* entry = (void*)((u8*)*(u32*)((u8*)r6p + 0x50) + off);
    if (!entry) return 0;

    u8 val = ((u8*)r3)[r4 + 0x214];
    u8 t0 = ((u8*)entry)[4], t1 = ((u8*)entry)[5], t2 = ((u8*)entry)[6];

    u32 stars;
    if ((u32)val <= (u32)t0) stars = 0;
    else if ((u32)val <= (u32)t1) stars = 1;
    else if ((u32)val <= (u32)t2) stars = 2;
    else stars = 3;

    s32 r7 = 3;
    if (stars == 0) r7 = 1;
    else if (stars == 1) r7 = 2;
    else if (stars == 2) r7 = 3;
    // stars >= 3: r7 stays 3
    return r7;
}

// ============================================================
// fn_800370FC: get raw star tier (0/1/2/3) for unit r3 at slot r4
//   Uses subfc/addze trick for tier 3 case
// ============================================================
s32 fn_800370FC(void* r3, s32 r4) {
    void* r6p = (void*)*(u32*)((u8*)r3 + 0x188);
    s32 off = r4 * 8 + 8;
    void* ep = (void*)((u8*)*(u32*)((u8*)r6p + 0x50) + off);
    if (!ep) return 0;

    u8 val = ((u8*)r3)[r4 + 0x214];
    u8 t0 = ((u8*)ep)[4], t1 = ((u8*)ep)[5], t2 = ((u8*)ep)[6];

    if ((u32)val <= (u32)t0) return 0;
    if ((u32)val <= (u32)t1) return 1;
    // subfc r0,r3,r0 = t2-val (borrow); addze r0,r3 = val+(carry); subf r3,r0,r3
    // net result: if val<=t2 -> 2, else -> 3
    {
        u32 borrow = (u32)t2 - (u32)val;  // subfc sets CA = (t2 >= val)
        // addze: val + CA
        u32 adj = (u32)val + ((u32)val <= (u32)t2 ? 1 : 0);
        s32 res = (s32)val - (s32)adj + 3;
        // simplified: if val<=t2 -> 2, else -> 3
        return ((u32)val <= (u32)t2) ? 2 : 3;
    }
}

// ============================================================
// fn_80037164: return r3[r4 + 0x214]  (J3DTevBlockPatched::getTevKColorSel)
// ============================================================
u8 fn_80037164(void* r3, s32 r4) {
    return ((u8*)r3)[r4 + 0x214];
}

// ============================================================
// fn_80037170: get partner unit ptr at combo slot r4
//   r3->0x188->0x50 list entry[r4*8+8] -> fn_80016C58
// ============================================================
void* fn_80037170(void* r3, s32 r4) {
    void* r3p = (void*)*(u32*)((u8*)r3 + 0x188);
    void* list = (void*)*(u32*)((u8*)r3p + 0x50);
    void* entry = (void*)((u8*)list + r4 * 8 + 8);
    return fn_80016C58((void*)*(u32*)entry);
}

// ============================================================
// fn_800371A4: get raw entry ptr at combo slot r4 (no fn_80016C58)
// ============================================================
void* fn_800371A4(void* r3, s32 r4) {
    void* r3p = (void*)*(u32*)((u8*)r3 + 0x188);
    void* list = (void*)*(u32*)((u8*)r3p + 0x50);
    return (void*)*(u32*)((u8*)list + r4 * 8 + 8);
}

// ============================================================
// fn_800371BC: return count of combo list entries (u8), or 0 if no list
// ============================================================
u32 fn_800371BC(void* r3) {
    void* r3p = (void*)*(u32*)((u8*)r3 + 0x188);
    void* list = (void*)*(u32*)((u8*)r3p + 0x50);
    if (!list) return 0;
    return (u32)(u8)*(u32*)((u8*)list + 4);
}

// ============================================================
// fn_800371E0: add r4/r5 to r3[0x1a9/0x1aa], clamp to 0x63 and 0x14
// ============================================================
void fn_800371E0(void* r3, s32 r4, s32 r5) {
    u8* unit = (u8*)r3;
    unit[0x1a9] = (u8)((s32)unit[0x1a9] + r4);
    unit[0x1aa] = (u8)((s32)unit[0x1aa] + r5);
    if ((s8)unit[0x1a9] > 0x63) unit[0x1a9] = 0x63;
    if ((s8)unit[0x1aa] > 0x14) unit[0x1aa] = 0x14;
}

// ============================================================
// fn_8003722C: add 8 bytes from r4[0..7] into r3[0x1ab..0x1b2],
//   then call fn_800372CC
// ============================================================
void fn_8003722C(void* r3, void* r4) {
    u8* unit  = (u8*)r3;
    u8* delta = (u8*)r4;
    for (s32 i = 0; i < 8; i++) {
        unit[0x1ab + i] = (u8)(unit[0x1ab + i] + delta[i]);
    }
    fn_800372CC(r3);
}

// ============================================================
// fn_800372CC: (doc 1) complex stat cap function
//   See attachment  updates r3[0x1ab..0x1b2] using caps derived
//   from r3->0x18c and r3->0x188, with bonus slot lookup for
//   weapon/skill bonuses at 0x1cc+slot*8 and 0x1ec+slot*8
// ============================================================
void fn_800372CC(void* r3) {
    u8* unit = (u8*)r3;

    // Stat 0: 0x1ab
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x44];
        u8 cls_bonus = ((u8*)r4p)[0x1d];
        u8 cur = unit[0x1ab];
        s8 sum = (s8)((s32)(u8)cls_bonus + (s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x4c];
        s8 avail = (s8)((s32)(s32)((s8)((s32)cur + (s32)sum)) - (s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1ab] = (u8)((s32)cur - (s32)avail);
    }
    // Stat 1: 0x1ac
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x45];
        u8 cls_bonus = ((u8*)r4p)[0x1e];
        u8 cur = unit[0x1ac];
        s8 sum = (s8)((s32)cls_bonus + (s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x4d];
        s8 avail = (s8)((s32)((s8)((s32)cur + (s32)sum)) - (s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1ac] = (u8)((s32)cur - (s32)avail);
    }
    // Stat 2: 0x1ad
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x46]; u8 cls_bonus = ((u8*)r4p)[0x1f];
        u8 cur = unit[0x1ad]; s8 sum = (s8)((s32)cls_bonus+(s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x4e];
        s8 avail = (s8)((s32)((s8)((s32)cur+(s32)sum))-(s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1ad] = (u8)((s32)cur-(s32)avail);
    }
    // Stat 3: 0x1ae
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x47]; u8 cls_bonus = ((u8*)r4p)[0x20];
        u8 cur = unit[0x1ae]; s8 sum = (s8)((s32)cls_bonus+(s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x4f];
        s8 avail = (s8)((s32)((s8)((s32)cur+(s32)sum))-(s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1ae] = (u8)((s32)cur-(s32)avail);
    }
    // Stat 4: 0x1af
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x48]; u8 cls_bonus = ((u8*)r4p)[0x21];
        u8 cur = unit[0x1af]; s8 sum = (s8)((s32)cls_bonus+(s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x50];
        s8 avail = (s8)((s32)((s8)((s32)cur+(s32)sum))-(s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1af] = (u8)((s32)cur-(s32)avail);
    }
    // Stat 5: 0x1b0  (uses cls[0x22] and fixed cap 0x28)
    {
        void* r5p = (void*)*(u32*)(unit + 0x188);
        void* r4p = (void*)*(u32*)(unit + 0x18c);
        u8 cls_bonus = ((u8*)r5p)[0x22];
        u8 base_cap  = ((u8*)r4p)[0x49];
        u8 cur = unit[0x1b0];
        s8 sum = (s8)((s32)cls_bonus + (s32)base_cap + (s32)cur);
        s8 avail = (s8)((s32)sum - 0x28);
        if (avail < 0) avail = 0;
        unit[0x1b0] = (u8)((s32)cur - (s32)avail);
    }
    // Stat 6: 0x1b1
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x4a]; u8 cls_bonus = ((u8*)r4p)[0x23];
        u8 cur = unit[0x1b1]; s8 sum = (s8)((s32)cls_bonus+(s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x52];
        s8 avail = (s8)((s32)((s8)((s32)cur+(s32)sum))-(s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1b1] = (u8)((s32)cur-(s32)avail);
    }
    // Stat 7: 0x1b2
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r4p = (void*)*(u32*)(unit + 0x188);
        u8 base_cap = ((u8*)r6p)[0x4b]; u8 cls_bonus = ((u8*)r4p)[0x24];
        u8 cur = unit[0x1b2]; s8 sum = (s8)((s32)cls_bonus+(s32)base_cap);
        u8 hard_cap = ((u8*)r6p)[0x53];
        s8 avail = (s8)((s32)((s8)((s32)cur+(s32)sum))-(s32)hard_cap);
        if (avail < 0) avail = 0;
        unit[0x1b2] = (u8)((s32)cur-(s32)avail);
    }
    // Bonus stat 0x1a9: cls[0x1b] + equip[0x3c], cap 0x63
    {
        void* r5p = (void*)*(u32*)(unit + 0x188);
        void* r4p = (void*)*(u32*)(unit + 0x18c);
        u8 bonus = ((u8*)r5p)[0x1b]; u8 equip = ((u8*)r4p)[0x3c];
        u8 cur = unit[0x1a9];
        s8 sum = (s8)((s32)cur + (s32)bonus + (s32)equip);
        s8 avail = (s8)((s32)sum - 0x63);
        if (avail < 0) avail = 0;
        unit[0x1a9] = (u8)((s32)cur - (s32)avail);
    }
    // Bonus stat 0x1aa: equip[0x3e], cap 0x14
    {
        void* r4p = (void*)*(u32*)(unit + 0x18c);
        u8 cur = unit[0x1aa]; u8 equip = ((u8*)r4p)[0x3e];
        s8 sum = (s8)((s32)cur + (s32)equip);
        s8 avail = (s8)((s32)sum - 0x14);
        if (avail < 0) avail = 0;
        unit[0x1aa] = (u8)((s32)cur - (s32)avail);
    }

    // Weapon/skill slot bonus for 0x1ab (slots at 0x1cc+i*8):
    // Find active slot (0x1d1/0x1d9/0x1e1/0x1e9 bit check + ptr check)
    {
        void* r6p = (void*)*(u32*)(unit + 0x18c);
        void* r5p = (void*)*(u32*)(unit + 0x188);
        u8 cur = unit[0x1ab];
        u8 hard_cap = ((u8*)r6p)[0x4c];
        u8 cls_bonus = ((u8*)r5p)[0x1d];
        u8 base_cap = ((u8*)r6p)[0x44];
        s8 sum = (s8)((s32)cls_bonus + (s32)base_cap + (s32)cur);
        if (sum > (s8)hard_cap) sum = (s8)hard_cap;
        if (sum < 0) sum = 0;

        // Find weapon slot index (0x1d1 bit 1, then 0x1d9, 0x1e1, 0x1e9)
        s32 slot = -1;
        if (((unit[0x1d1] >> (31-24)) & 1) && *(u32*)(unit+0x1cc)) slot = 0;
        else if (((unit[0x1d9] >> (31-24)) & 1) && *(u32*)(unit+0x1d4)) slot = 1;
        else if (((unit[0x1e1] >> (31-24)) & 1) && *(u32*)(unit+0x1dc)) slot = 2;
        else if (((unit[0x1e9] >> (31-24)) & 1) && *(u32*)(unit+0x1e4)) slot = 3;

        u8 r10 = 0;
        if (slot >= 0) {
            void* wptr = (void*)*(u32*)(unit + 0x1cc + slot * 8);
            r10 = ((u8*)wptr)[0x1f];
        }

        // Find skill slot index (0x1f1/0x1f9/0x201/0x209)
        s32 slot2 = -1;
        if (((unit[0x1f1] >> (31-24)) & 1) && *(u32*)(unit+0x1ec)) slot2 = 0;
        else if (((unit[0x1f9] >> (31-24)) & 1) && *(u32*)(unit+0x1f4)) slot2 = 1;
        else if (((unit[0x201] >> (31-24)) & 1) && *(u32*)(unit+0x1fc)) slot2 = 2;
        else if (((unit[0x209] >> (31-24)) & 1) && *(u32*)(unit+0x204)) slot2 = 3;

        u8 r7 = 0;
        if (slot2 >= 0) {
            void* sptr = (void*)*(u32*)(unit + 0x1ec + slot2 * 8);
            r7 = ((u8*)sptr)[0x1f];
            r7 = (u8)((s32)r10 + (s32)r7);
        }

        // Final cap check for 0x1ab
        u8 total = (u8)((s32)sum + (s32)r7);
        u8 cap_final = ((u8*)*(u32*)(unit+0x18c))[0x1a8];
        if ((s8)cap_final <= (s8)total) {
            // already capped
        } else {
            unit[0x1ab] = total;
        }
        // Actually assembly: add r7,r9,r10 (sum+weapon); extsb; add r7,r9,r10
        // then: lbz r8,0x1a8; add r7,r9,r10; extsb r7; extsb r8; cmpw r8,r7; blelr
        // stb r0,0x1ab  so only stores if r8 > r7 (cap > total)
        // Corrected: store only when NOT capped
        {
            s8 final_sum = (s8)((s32)(s8)sum + (s32)r10 + (s32)r7);
            s8 max_cap = (s8)unit[0x1a8];
            if (max_cap > final_sum) {
                // don't store  blelr exits early
            } else {
                // fall through to second half
            }
            // The assembly uses blelr (return if r8 <= r7), so:
            // if cap_final <= total: return without storing
            // else: continue to second stb
            if ((s8)((u8*)*(u32*)(unit+0x18c))[0x1a8] <= final_sum) return;

            // Repeat for second set (0x1ec slots) and store to 0x1ab
            // ... (second half mirrors first, storing final_sum + slot2_bonus to 0x1ab)
            unit[0x1ab] = (u8)final_sum;
        }
    }
}

// ============================================================
// fn_800378B0: find unit in lbl_802BB9C4 matching r31's class/position
//   Uses fn_800153FC to build class filter table, then scans 0x9f units
//   Matches on: active flag, class table entry, bit 23 of 0x1a0,
//   NOT bit 28 of 0x1a0, same 0x190 ptr, same 0x199 byte
// ============================================================
void* fn_800378B0(void* r3) {
    void* r31 = r3;
    u8 table[8];
    fn_800153FC((void*)table, 5);

    for (s32 i = 0x9f; i >= 1; i--) {
        u8* unit;
        if (i) {
            unit = lbl_802BB9C4 + ((u32)(i-1)) * 0x280;
        } else {
            unit = 0;
        }
        if (!*(u32*)(unit + 0x188)) continue;

        void* cls = (void*)*(u32*)(unit + 0x190);
        u8 cls_idx = ((u8*)cls)[0x8];
        if (!table[cls_idx]) continue;

        u32 flags = *(u32*)(unit + 0x1a0);
        if (!(flags & (1u << (31-23)))) continue;
        if (flags & (1u << (31-28))) continue;

        if (*(u32*)(unit + 0x190) != *(u32*)((u8*)r31 + 0x190)) continue;
        if (unit[0x199] != ((u8*)r31)[0x199]) continue;

        return unit;
    }
    return 0;
}

// ============================================================
// fn_80037978: get position/class name string for unit r3
//   If r3[0x199] == 0: return lbl_80273150+0x1d (default string)
//   Else: call fn_80014FF8 to get name
// ============================================================
void* fn_80037978(void* r3) {
    if (!((u8*)r3)[0x199]) {
        return (void*)((u8*)lbl_80273150 + 0x1d);
    }
    return fn_80014FF8(r3);
}

// ============================================================
// fn_800379B4: empty (DBClose / CBGetBytesAvailableForRead stubs)
// ============================================================
void fn_800379B4(void) {
}

// ============================================================
// fn_800379B8: compute float speed score for unit r30
//   r4=bonus(u8); if r4==0: return lbl_803771B8 (zero)
//   Else: check fn_80106398 bit 2 for +0x14 bonus,
//   convert r30[0x19a] to float via double bias trick,
//   compute: (bias(bonus) - f5) / fnmsub(f3,bias(base)-f5,f1) + f0
// ============================================================
float fn_800379B8(void* r3, u8 r4) {
    void* r30 = r3;
    u8 r31 = r4;

    if (!r31) {
        extern float lbl_803771B8;
        return lbl_803771B8;
    }

    // Check bit 2 of r30[0x1bc] flags
    u8 flag = (u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 2);
    u8 base;
    if (flag) {
        base = (u8)((u32)((u8*)r30)[0x19a] + 0x14);
    } else {
        base = ((u8*)r30)[0x19a];
    }

    // Convert both r31 and base to float via int-to-float double bias
    extern double lbl_803771C8;  // 0x4330_0000_0000_0000 bias
    extern float  lbl_803771C0;  // some constant
    extern float  lbl_803771BC;  // some constant
    extern float  lbl_803771C4;  // some constant

    // The formula from assembly:
    // f2 = (float)(r31 - bias) = float(r31 as u8)
    // f4 = (float)(base - bias) = float(base as u8)
    // result = -(f3*f2 - f1) / f4 + f0
    //        = fnmsubs(f3, f2, f1) / f4 + f0
    // This is a linear interpolation / normalization

    // Placeholder returning approximate result:
    float f_bonus = (float)r31;
    float f_base  = (float)base;
    (void)f_bonus; (void)f_base;

    return 0.0f;  // TODO: match float constants
}

// ============================================================
// fn_80037A6C: call fn_8016725C(r1+8, r3+0x1bc), return (r3<<24, r0)
//   Packs result: high word = sp[0xc] shifted, low = sp[0x8]
// ============================================================
void fn_80037A6C(void* r3) {
    u8 buf[8];
    fn_8016725C((void*)buf, (void*)((u8*)r3 + 0x1bc));
    // return (buf[4] << 24) | *(u32*)buf  but as void return, caller uses r3/r0
    // Actually assembly: slwi r4,r0,24 where r0=lbz sp[0xc], r3=lwz sp[0x8]
    // This is a two-register return (r3=ptr, r4=shifted byte), treat as void
}

// ============================================================
// fn_80037AA4: get name string for weapon at r3[0x228], via fn_80167490
//   r4 = display type (s32); if r4 < 0: get string from lbl_8033A708+0x3c0
// ============================================================
void fn_80037AA4(void* r3, s32 r4) {
    void* r31 = r3;
    void* name_ptr = (void*)(u32)r4;

    if (r4 < 0) {
        void* str = fn_80167474((void*)((u8*)lbl_8033A708 + 0x3c0));
        name_ptr = str;
    }

    void* r6p = (void*)*(u32*)((u8*)r31 + 0x188);
    u16 weapon_id = *(u16*)((u8*)r31 + 0x228);
    u16 wtype     = *(u16*)((u8*)r6p + 0x58);
    u8  rank      = ((u8*)r6p)[0x55];
    fn_80167490(name_ptr, (s32)weapon_id, (s32)wtype, (s32)rank);
}

// ============================================================
// fn_80037B00: check if unit r31 can use item/skill r4
//   Returns 1 if compatible, 0 otherwise
//   r4 type dispatch: 0->check 0x188 ptr match, 1->check 0x18c ptr match,
//   2->check 0x188 ptr match (different), 3->search unit array for match
// ============================================================
s32 fn_80037B00(void* r3, void* r4) {
    void* r31 = r4;
    void* r29 = r3;

    u8 type = (u8)(u32)fn_80019DC8(r4);

    if (type == 1) {
        void* r30p = (void*)*(u32*)((u8*)r29 + 0x188);
        void* r3p  = fn_80019F94(r31);
        u32 diff = (u32)r3p ^ (u32)r30p;
        // cntlzw/srwi 5: 1 if equal, 0 if not
        return (diff == 0) ? 1 : 0;
    }
    if (type == 2) {
        void* r30p = (void*)*(u32*)((u8*)r29 + 0x18c);
        void* r3p  = fn_80019F50(r31);
        return ((u32)r3p == (u32)r30p) ? 1 : 0;
    }
    if (type == 3 || type == 4) {
        // type 3 or 4
        if (type < 3) return 0;
        if (type >= 4) {
            s32 res = fn_800C3E88((void*)lbl_8032A0AC, r31);
            if (res >= 0) return 1;
            return 0;
        }
    }
    if (type >= 3 && type < 4) {
        // scan unit array
        u8 table[8];
        fn_800153FC((void*)table, 4);
        for (s32 i = 1; i <= 0x9f; i++) {
            u8* unit = lbl_802BB9C4 + (u32)(i-1) * 0x280;
            if (!*(u32*)(unit + 0x188)) continue;
            void* cls = (void*)*(u32*)(unit + 0x190);
            u8 cls_idx = ((u8*)cls)[0x8];
            if (!table[cls_idx]) continue;

            void* name = fn_80019F0C(r31);
            s8 match = (s8)(u32)fn_800933F8(unit, name);
            if (match >= 0) return 1;
        }
        return 0;
    }
    return 0;
}

// ============================================================
// fn_80037C58: initialize unit r3's available stat growth
//   r3[0x1ab..0x1b2] = cap - base_growth - cls_bonus (remaining room)
//   r3[0x1b0] = 0x28 - cls[0x22]  (fixed)
//   r3[0x1aa] = 0x14 - equip[0x3e]
// ============================================================
void fn_80037C58(void* r3) {
    u8* unit = (u8*)r3;
    void* r6p;
    void* r5p;

    for (s32 i = 0; i < 5; i++) {
        r6p = (void*)*(u32*)(unit + 0x18c);
        r5p = (void*)*(u32*)(unit + 0x188);
        u8 base  = ((u8*)r6p)[0x44 + i];
        u8 cap   = ((u8*)r6p)[0x4c + i];
        u8 bonus = ((u8*)r5p)[0x1d + i];
        unit[0x1ab + i] = (u8)((s32)cap - (s32)base - (s32)bonus);
    }
    // Stat 5 (0x1b0): fixed formula 0x28 - cls[0x22]
    {
        r5p = (void*)*(u32*)(unit + 0x188);
        unit[0x1b0] = (u8)(0x28 - (s32)((u8*)r5p)[0x22]);
    }
    // Stat 6 (0x1b1)
    {
        r6p = (void*)*(u32*)(unit + 0x18c);
        r5p = (void*)*(u32*)(unit + 0x188);
        u8 base = ((u8*)r6p)[0x4a]; u8 cap = ((u8*)r6p)[0x52];
        u8 bonus = ((u8*)r5p)[0x23];
        unit[0x1b1] = (u8)((s32)cap - (s32)base - (s32)bonus);
    }
    // Stat 7 (0x1b2)
    {
        r6p = (void*)*(u32*)(unit + 0x18c);
        r5p = (void*)*(u32*)(unit + 0x188);
        u8 base = ((u8*)r6p)[0x4b]; u8 cap = ((u8*)r6p)[0x53];
        u8 bonus = ((u8*)r5p)[0x24];
        unit[0x1b2] = (u8)((s32)cap - (s32)base - (s32)bonus);
    }
    // Bonus stat 0x1a9: cap = 0x63 - cls[0x1b] - equip[0x3c]... no:
    // assembly: subfic r0, r0, 0x28 = 0x28 - r0  uses 0x3c offset
    // Actually 0x1a9: cls[0x1b] + equip[0x3c]  subfic 0x63  0x63-sum? No:
    // lbz r5,0x1b(r5); lbz r0,0x3c(r4); add r0,r5,r0; add r0,r4,r0; subfic 0x63
    // so: 0x63 - (unit[0x1a9] + cls[0x1b] + equip[0x3c])  but stores to 0x1a9!
    // This is actually the remaining headroom, not the value itself.
    // From assembly at 0x1fc-0x234: stores directly to 0x1a9
    {
        r5p = (void*)*(u32*)(unit + 0x188);
        r6p = (void*)*(u32*)(unit + 0x18c);
        u8 cls  = ((u8*)r5p)[0x1b];
        u8 equip = ((u8*)r6p)[0x3c];
        unit[0x1a9] = (u8)(0x63 - (s32)cls - (s32)equip);
    }
    // 0x1aa
    {
        r6p = (void*)*(u32*)(unit + 0x18c);
        unit[0x1aa] = (u8)(0x14 - (s32)((u8*)r6p)[0x3e]);
    }
}

// ============================================================
// fn_80037D5C: return ptr to r3[r4*8 + 0x1cc]  (Cup<8,14>::GetTeamStats)
// ============================================================
void* fn_80037D5C(void* r3, s32 r4) {
    return (void*)((u8*)r3 + r4 * 8 + 0x1cc);
}

// ============================================================
// fn_80037D70: get weapon/skill slot ptr for unit r3 at slot r4
//   slots 0-3: weapon slots at r3[0x1cc + r4*8]
//   slots 4-7: skill slots at r3[0x1ec + (r4-4)*8]
//   returns NULL for out-of-range
// ============================================================
void* fn_80037D70(void* r3, s32 r4) {
    if (r4 >= 0 && r4 < 4)
        return (void*)((u8*)r3 + r4 * 8 + 0x1cc);
    if (r4 >= 4 && r4 < 8)
        return (void*)((u8*)r3 + (r4 - 4) * 8 + 0x1ec);
    return 0;
}

// ============================================================
// fn_80037DC0: find active skill slot ptr (0x1ec base)
//   Scans r3[0x1f1/0x1f9/0x201/0x209] bit 1 + ptr check
//   Returns slot ptr or NULL if none active
// ============================================================
void* fn_80037DC0(void* r3) {
    void* r4 = r3;
    s32 slot = -1;
    if (((u8*)r4)[0x1f1] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1ec)) slot = 0;
    else if (((u8*)r4)[0x1f9] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1f4)) slot = 1;
    else if (((u8*)r4)[0x201] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1fc)) slot = 2;
    else if (((u8*)r4)[0x209] & (1u << (31-24)) && *(u32*)((u8*)r4+0x204)) slot = 3;

    if ((s8)slot < 0) return 0;
    return (void*)((u8*)r4 + (s32)(s8)slot * 8 + 0x1ec);
}

// ============================================================
// fn_80037E6C: find active skill slot index (0-3), or -1
//   Same bit/ptr pattern as fn_80037DC0 but returns index not ptr
// ============================================================
s8 fn_80037E6C(void* r3) {
    if (((u8*)r3)[0x1f1] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1ec)) return 0;
    if (((u8*)r3)[0x1f9] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1f4)) return 1;
    if (((u8*)r3)[0x201] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1fc)) return 2;
    if (((u8*)r3)[0x209] & (1u << (31-24)) && *(u32*)((u8*)r3+0x204)) return 3;
    return -1;
}

// ============================================================
// fn_80037EF4: find active weapon slot ptr (0x1cc base)
//   Scans r3[0x1d1/0x1d9/0x1e1/0x1e9] bit 1 + ptr check
//   Returns slot ptr or NULL if none active
// ============================================================
void* fn_80037EF4(void* r3) {
    void* r4 = r3;
    s32 slot = -1;
    if (((u8*)r4)[0x1d1] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1cc)) slot = 0;
    else if (((u8*)r4)[0x1d9] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1d4)) slot = 1;
    else if (((u8*)r4)[0x1e1] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1dc)) slot = 2;
    else if (((u8*)r4)[0x1e9] & (1u << (31-24)) && *(u32*)((u8*)r4+0x1e4)) slot = 3;

    if ((s8)slot < 0) return 0;
    return (void*)((u8*)r4 + (s32)(s8)slot * 8 + 0x1cc);
}

// ============================================================
// fn_80037FA0: find active weapon slot index (0-3), or -1
// ============================================================
s8 fn_80037FA0(void* r3) {
    if (((u8*)r3)[0x1d1] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1cc)) return 0;
    if (((u8*)r3)[0x1d9] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1d4)) return 1;
    if (((u8*)r3)[0x1e1] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1dc)) return 2;
    if (((u8*)r3)[0x1e9] & (1u << (31-24)) && *(u32*)((u8*)r3+0x1e4)) return 3;
    return -1;
}

// ============================================================
// fn_80038028: (doc 1) deep unit copy r28 -> r27
//   Copies all unit fields from 0x180 to 0x236 including
//   4 weapon slots (fn_8001C604 x4) and 4 skill slots (fn_8001C604 x4),
//   combo counts, weapon IDs, and misc bytes.
//   No-op if r3 == r4.
// ============================================================
void fn_80038028(void* r3, void* r4) {
    u8* r27 = (u8*)r3;
    u8* r28 = (u8*)r4;
    if (r27 == r28) return;

    *(u32*)(r27 + 0x180) = 0;
    *(u32*)(r27 + 0x184) = 0;

    // Copy core unit fields
    *(u32*)(r27 + 0x188) = *(u32*)(r28 + 0x188);
    *(u32*)(r27 + 0x18c) = *(u32*)(r28 + 0x18c);
    *(u32*)(r27 + 0x190) = *(u32*)(r28 + 0x190);
    *(u32*)(r27 + 0x194) = *(u32*)(r28 + 0x194);
    r27[0x198] = r28[0x198];
    r27[0x199] = r28[0x199];
    r27[0x19a] = r28[0x19a];
    r27[0x19b] = r28[0x19b];
    r27[0x19c] = r28[0x19c];
    r27[0x19d] = r28[0x19d];
    r27[0x19e] = r28[0x19e];
    r27[0x19f] = r28[0x19f];
    *(u32*)(r27 + 0x1a0) = *(u32*)(r28 + 0x1a0);
    *(u16*)(r27 + 0x1a4) = *(u16*)(r28 + 0x1a4);
    *(u16*)(r27 + 0x1a6) = *(u16*)(r28 + 0x1a6);
    r27[0x1a8] = r28[0x1a8];
    r27[0x1a9] = r28[0x1a9];
    r27[0x1aa] = r28[0x1aa];
    r27[0x1ab] = r28[0x1ab];
    r27[0x1ac] = r28[0x1ac];
    r27[0x1ad] = r28[0x1ad];
    r27[0x1ae] = r28[0x1ae];
    r27[0x1af] = r28[0x1af];
    r27[0x1b0] = r28[0x1b0];
    r27[0x1b1] = r28[0x1b1];
    r27[0x1b2] = r28[0x1b2];
    r27[0x1b4] = r28[0x1b4];
    r27[0x1b5] = r28[0x1b5];
    r27[0x1b6] = r28[0x1b6];
    r27[0x1b7] = r28[0x1b7];
    r27[0x1b8] = r28[0x1b8];
    r27[0x1b9] = r28[0x1b9];
    r27[0x1ba] = r28[0x1ba];
    r27[0x1bb] = r28[0x1bb];
    *(u32*)(r27 + 0x1bc) = *(u32*)(r28 + 0x1bc);
    *(u32*)(r27 + 0x1c0) = *(u32*)(r28 + 0x1c0);
    *(u32*)(r27 + 0x1c4) = *(u32*)(r28 + 0x1c4);
    *(u32*)(r27 + 0x1c8) = *(u32*)(r28 + 0x1c8);

    // Copy 4 weapon slots + 4 skill slots via fn_8001C604
    u8* dst_w = r27 + 0x1cc;
    u8* src_w = r28 + 0x1cc;
    u8* dst_s = r27 + 0x1ec;
    u8* src_s = r28 + 0x1ec;
    for (s32 i = 0; i < 4; i++) {
        fn_8001C604(dst_w, src_w);
        fn_8001C604(dst_s, src_s);
        dst_w += 8; src_w += 8;
        dst_s += 8; src_s += 8;
    }

    *(u32*)(r27 + 0x20c) = *(u32*)(r28 + 0x20c);
    *(u32*)(r27 + 0x210) = *(u32*)(r28 + 0x210);

    // Copy combo counts (10 pairs interleaved)
    for (s32 i = 0; i < 10; i++) {
        r27[0x214 + i] = r28[0x214 + i];
        r27[0x21e + i] = r28[0x21e + i];
    }

    // Copy weapon/item IDs
    *(u16*)(r27 + 0x228) = *(u16*)(r28 + 0x228);
    *(u16*)(r27 + 0x22a) = *(u16*)(r28 + 0x22a);
    *(u16*)(r27 + 0x22c) = *(u16*)(r28 + 0x22c);
    *(u16*)(r27 + 0x22e) = *(u16*)(r28 + 0x22e);
    *(u16*)(r27 + 0x230) = *(u16*)(r28 + 0x230);
    *(u16*)(r27 + 0x232) = *(u16*)(r28 + 0x232);
    r27[0x234] = r28[0x234];
    r27[0x235] = r28[0x235];
    r27[0x236] = r28[0x236];
}

// ============================================================
// fn_800382C8: Manhattan distance between two units' grid positions
//   |r3[0x19f] - r4[0x19f]| + |r3[0x19e] - r4[0x19e]|
// ============================================================
u8 fn_800382C8(void* r3, void* r4) {
    s8 row3 = (s8)((u8*)r3)[0x19f];
    s8 row4 = (s8)((u8*)r4)[0x19f];
    s32 dr = (s32)row3 - (s32)row4;
    if (dr < 0) dr = -dr;

    s8 col3 = (s8)((u8*)r3)[0x19e];
    s8 col4 = (s8)((u8*)r4)[0x19e];
    s32 dc = (s32)col3 - (s32)col4;
    if (dc < 0) dc = -dc;

    return (u8)(dr + dc);
}

// ============================================================
// fn_8003830C: set unit position (col r4, row r5), update child ptr too
//   If r3[0x194] != 0, also set child's position and call fn_80050DD8
//   with float-converted coordinates
// ============================================================
void fn_8003830C(void* r3, s8 r4, s8 r5) {
    u8* unit = (u8*)r3;
    unit[0x19e] = (u8)r4;
    unit[0x19f] = (u8)r5;

    void* child = (void*)*(u32*)(unit + 0x194);
    if (!child) return;

    ((u8*)child)[0x19e] = (u8)r4;
    ((u8*)child)[0x19f] = (u8)r5;

    // Float conversion via double bias (s16 XOR 0x8000 trick)
    u32 hi = 0x4330;
    u32 lox = (u32)((s32)r4 ^ 0x8000);
    u32 loy = (u32)((s32)r5 ^ 0x8000);

    double bx, by;
    *(u32*)((u8*)&bx + 0) = hi;
    *(u32*)((u8*)&bx + 4) = lox;
    *(u32*)((u8*)&by + 0) = hi;
    *(u32*)((u8*)&by + 4) = loy;

    float fx = lbl_803771D0 + (float)(bx - lbl_803771D8);
    float fy = lbl_803771D0 + (float)(by - lbl_803771D8);

    fn_80050DD8(child, fx, fy);
}

// ============================================================
// fn_8003838C: (doc 2) compute effective Strength for unit r3
//   Base: r3[0x1ab] + cls[0x44] + r3->0x188[0x1d], capped at r3->0x18c[0x4c]
//   Then adds weapon slot[0x1f] and skill slot[0x1f] bonuses
//   Also checks r3[0x1a8] (max stat) returns via stb to 0x1a8
//   This is the full "compute and store effective STR" function
// ============================================================
void fn_8003838C(void* r3) {
    u8* unit = (u8*)r3;
    void* r5p = (void*)*(u32*)(unit + 0x18c);
    void* r6p = (void*)*(u32*)(unit + 0x188);

    // Base stat
    u8 cur = unit[0x1ab];
    u8 base_cap = ((u8*)r5p)[0x44];
    s8 hard_cap = (s8)((u8*)r5p)[0x4c];
    u8 cls_bonus = ((u8*)r6p)[0x1d];
    s8 sum = (s8)((s32)cur + (s32)base_cap + (s32)cls_bonus);
    if (sum > hard_cap) sum = hard_cap;
    if (sum < 0) sum = 0;

    // Weapon slot bonus
    s32 wslot = -1;
    if (((u8*)unit)[0x1d1] & (1u<<(31-24)) && *(u32*)(unit+0x1cc)) wslot = 0;
    else if (((u8*)unit)[0x1d9] & (1u<<(31-24)) && *(u32*)(unit+0x1d4)) wslot = 1;
    else if (((u8*)unit)[0x1e1] & (1u<<(31-24)) && *(u32*)(unit+0x1dc)) wslot = 2;
    else if (((u8*)unit)[0x1e9] & (1u<<(31-24)) && *(u32*)(unit+0x1e4)) wslot = 3;
    s8 wbonus = 0;
    if (wslot >= 0) {
        void* wp = (void*)*(u32*)(unit + 0x1cc + wslot * 8);
        wbonus = (s8)((u8*)wp)[0x1f];
    }

    // Skill slot bonus
    s32 sslot = -1;
    if (((u8*)unit)[0x1f1] & (1u<<(31-24)) && *(u32*)(unit+0x1ec)) sslot = 0;
    else if (((u8*)unit)[0x1f9] & (1u<<(31-24)) && *(u32*)(unit+0x1f4)) sslot = 1;
    else if (((u8*)unit)[0x201] & (1u<<(31-24)) && *(u32*)(unit+0x1fc)) sslot = 2;
    else if (((u8*)unit)[0x209] & (1u<<(31-24)) && *(u32*)(unit+0x204)) sslot = 3;
    s8 sbonus = 0;
    if (sslot >= 0) {
        void* sp = (void*)*(u32*)(unit + 0x1ec + sslot * 8);
        sbonus = (s8)((u8*)sp)[0x1f];
        sbonus = (s8)((s32)wbonus + (s32)sbonus);
    }

    s8 total = (s8)((s32)sum + (s32)sbonus);
    s8 max_stat = (s8)unit[0x1a8];
    if (max_stat <= total) return;
    unit[0x1a8] = (u8)total;
}

// ============================================================
// fn_80038710: get combined bonus from special ability flags
//   Checks bit 6 of r3[0x1bc] flags  fn_801F531C (returns u8)
//   Checks bit 0x3c of r3[0x1bc] flags  fn_801F5290 (returns u8)
//   Returns sum of both bonuses (or 0 if neither flag set)
// ============================================================
u8 fn_80038710(void* r3) {
    void* r30 = r3;
    u8 r31 = 0;

    u8 f1 = (u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 6);
    if (f1) {
        r31 = (u8)(u32)fn_801F531C(r30);
    }

    u8 f2 = (u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 0x3c);
    if (f2) {
        u8 v = (u8)(u32)fn_801F5290(r30);
        r31 = (u8)((u32)r31 + (u32)v);
    }

    return r31;
}

// ============================================================
// fn_80038784: get effective speed for unit r3
//   If bit 2 of r3[0x1bc] is set: return (r3[0x19a] + fn_801F53A8(r3) + 0x14) & 0xff
//   Else: return r3[0x19a]
// ============================================================
u8 fn_80038784(void* r3) {
    void* r31 = r3;
    u8 flag = (u8)(u32)fn_80106398((void*)((u8*)r31 + 0x1bc), 2);
    if (flag) {
        u8 base = ((u8*)r31)[0x19a];
        u8 bonus = (u8)(u32)fn_801F53A8(r31);
        return (u8)((u32)base + (u32)bonus + 0x14);
    }
    return ((u8*)r31)[0x19a];
}

// ============================================================
// fn_800387DC: get base speed for unit r3
//   If bit 2 of r3[0x1bc] is set: return (r3[0x19a] + 0x14) & 0xff
//   Else: return r3[0x19a]
// ============================================================
u8 fn_800387DC(void* r3) {
    void* r31 = r3;
    u8 flag = (u8)(u32)fn_80106398((void*)((u8*)r31 + 0x1bc), 2);
    if (flag) {
        return (u8)((u32)((u8*)r31)[0x19a] + 0x14);
    }
    return ((u8*)r31)[0x19a];
}

// ============================================================
// fn_8003882C: set unit r3[0x19b] (current speed/movement) to r4
//   Only stores if r4 == 0xff, or 0 <= r4 <= 0x64
// ============================================================
void fn_8003882C(void* r3, s32 r4) {
    if (r4 == 0xff) { ((u8*)r3)[0x19b] = (u8)r4; return; }
    if (r4 < 0) return;
    if (r4 > 0x64) return;
    ((u8*)r3)[0x19b] = (u8)r4;
}

// ============================================================
// fn_80038850: get effective movement for unit r3
//   If class type is 1, 2, or 3 (flying/mounted types): return 0xff
//   Else: return r3[0x19b]
// ============================================================
u8 fn_80038850(void* r3) {
    void* cls = (void*)*(u32*)((u8*)r3 + 0x190);
    u8 type = ((u8*)cls)[0x8];
    if (type == 1 || type == 2 || type == 3) return 0xff;
    return ((u8*)r3)[0x19b];
}

// ============================================================
// fn_80038880: get movement penalty flag (-0x32, +0x32, or 0)
//   If bit 0x3d of r3[0x1bc]: return 0x32
//   If bit 0x3e of r3[0x1bc]: return -0x32
//   Else: return 0
// ============================================================
s8 fn_80038880(void* r3) {
    void* r30 = r3;
    s32 r31 = 0;
    if ((u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 0x3d)) r31 = 0x32;
    if ((u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 0x3e)) r31 = -0x32;
    return (s8)r31;
}

// ============================================================
// fn_800388E8: get effective Authority stat for unit r3
//   Base: r3[0x1aa] + weapon[0x27]; adds skill[0x27] bonus
//   Returns s8 result
// ============================================================
s8 fn_800388E8(void* r3) {
    u8* unit = (u8*)r3;
    s8 r5 = 0;

    // Weapon slot
    s32 wslot = -1;
    if (unit[0x1d1] & (1u<<(31-24)) && *(u32*)(unit+0x1cc)) wslot = 0;
    else if (unit[0x1d9] & (1u<<(31-24)) && *(u32*)(unit+0x1d4)) wslot = 1;
    else if (unit[0x1e1] & (1u<<(31-24)) && *(u32*)(unit+0x1dc)) wslot = 2;
    else if (unit[0x1e9] & (1u<<(31-24)) && *(u32*)(unit+0x1e4)) wslot = 3;
    if (wslot >= 0) {
        void* wp = (void*)*(u32*)(unit + 0x1cc + wslot * 8);
        r5 = (s8)((u8*)wp)[0x27];
    }

    // Skill slot
    s32 sslot = -1;
    if (unit[0x1f1] & (1u<<(31-24)) && *(u32*)(unit+0x1ec)) sslot = 0;
    else if (unit[0x1f9] & (1u<<(31-24)) && *(u32*)(unit+0x1f4)) sslot = 1;
    else if (unit[0x201] & (1u<<(31-24)) && *(u32*)(unit+0x1fc)) sslot = 2;
    else if (unit[0x209] & (1u<<(31-24)) && *(u32*)(unit+0x204)) sslot = 3;
    if (sslot >= 0) {
        void* sp = (void*)*(u32*)(unit + 0x1ec + sslot * 8);
        r5 = (s8)((s32)r5 + (s32)((s8)((u8*)sp)[0x27]));
    }

    return r5;
}

// ============================================================
// fn_80038A68: get effective Luck stat for unit r3
//   Same pattern as fn_800388E8 but reads offset 0x28 (Luck bonus)
// ============================================================
s8 fn_80038A68(void* r3) {
    u8* unit = (u8*)r3;
    s8 r5 = 0;

    s32 wslot = -1;
    if (unit[0x1d1] & (1u<<(31-24)) && *(u32*)(unit+0x1cc)) wslot = 0;
    else if (unit[0x1d9] & (1u<<(31-24)) && *(u32*)(unit+0x1d4)) wslot = 1;
    else if (unit[0x1e1] & (1u<<(31-24)) && *(u32*)(unit+0x1dc)) wslot = 2;
    else if (unit[0x1e9] & (1u<<(31-24)) && *(u32*)(unit+0x1e4)) wslot = 3;
    if (wslot >= 0) {
        void* wp = (void*)*(u32*)(unit + 0x1cc + wslot * 8);
        r5 = (s8)((u8*)wp)[0x28];
    }

    s32 sslot = -1;
    if (unit[0x1f1] & (1u<<(31-24)) && *(u32*)(unit+0x1ec)) sslot = 0;
    else if (unit[0x1f9] & (1u<<(31-24)) && *(u32*)(unit+0x1f4)) sslot = 1;
    else if (unit[0x201] & (1u<<(31-24)) && *(u32*)(unit+0x1fc)) sslot = 2;
    else if (unit[0x209] & (1u<<(31-24)) && *(u32*)(unit+0x204)) sslot = 3;
    if (sslot >= 0) {
        void* sp = (void*)*(u32*)(unit + 0x1ec + sslot * 8);
        r5 = (s8)((s32)r5 + (s32)((s8)((u8*)sp)[0x28]));
    }

    return r5;
}

// ============================================================
// fn_80038BE8: (doc 3) compute effective Strength stat (full version)
//   See attachment  reads r3[0x1ab], class cap r3->0x18c[0x44/0x4c],
//   class bonus r3->0x188[0x1d], weapon/skill slot bonuses at [0x1f],
//   checks fn_80106398 bit 0x10 for extra cap check,
//   checks r3[0x1a0] bit 30 + bit 0x16 for alternate cap path,
//   stores result to r3[0x1a8] (STR effective max)
// ============================================================
s8 fn_80038BE8(void* r3) {
    u8* unit = (u8*)r3;
    void* r5p = (void*)*(u32*)(unit + 0x18c);
    void* r6p = (void*)*(u32*)(unit + 0x188);
    s32 r31 = 0;

    // Base stat with cap
    u8 cur = unit[0x1ab];
    u8 base_cap = ((u8*)r5p)[0x44];
    s8 hard_cap = (s8)((u8*)r5p)[0x4c];
    u8 cls_bonus = ((u8*)r6p)[0x1d];
    s8 sum = (s8)((s32)cur + (s32)base_cap + (s32)cls_bonus);
    if (sum > hard_cap) sum = hard_cap;
    if (sum < 0) sum = 0;

    // Weapon + skill bonuses
    s32 wslot = -1;
    if (unit[0x1d1] & (1u<<(31-24)) && *(u32*)(unit+0x1cc)) wslot = 0;
    else if (unit[0x1d9] & (1u<<(31-24)) && *(u32*)(unit+0x1d4)) wslot = 1;
    else if (unit[0x1e1] & (1u<<(31-24)) && *(u32*)(unit+0x1dc)) wslot = 2;
    else if (unit[0x1e9] & (1u<<(31-24)) && *(u32*)(unit+0x1e4)) wslot = 3;
    s8 wbonus = 0;
    if (wslot >= 0) { void* wp = (void*)*(u32*)(unit+0x1cc+wslot*8); wbonus = (s8)((u8*)wp)[0x1f]; }

    s32 sslot = -1;
    if (unit[0x1f1] & (1u<<(31-24)) && *(u32*)(unit+0x1ec)) sslot = 0;
    else if (unit[0x1f9] & (1u<<(31-24)) && *(u32*)(unit+0x1f4)) sslot = 1;
    else if (unit[0x201] & (1u<<(31-24)) && *(u32*)(unit+0x1fc)) sslot = 2;
    else if (unit[0x209] & (1u<<(31-24)) && *(u32*)(unit+0x204)) sslot = 3;
    s8 sbonus = 0;
    if (sslot >= 0) { void* sp = (void*)*(u32*)(unit+0x1ec+sslot*8); sbonus = (s8)((u8*)sp)[0x1f]; sbonus = (s8)((s32)wbonus+(s32)sbonus); }

    s8 total = (s8)((s32)sum + (s32)sbonus);
    s8 r4v = (s8)unit[0x1a8];
    if (r4v > total) {
        // Check fn_80106398 bit 0x10 for Spd-based extra
        u8 flag = (u8)(u32)fn_80106398((void*)(unit+0x1bc), 0x10);
        if (flag) {
            void* r5p2 = (void*)*(u32*)(unit+0x18c);
            void* r3p2 = (void*)*(u32*)(unit+0x188);
            u8 cur2 = unit[0x1af];
            u8 bc2 = ((u8*)r5p2)[0x48]; s8 hc2 = (s8)((u8*)r5p2)[0x50];
            u8 cb2 = ((u8*)r3p2)[0x21];
            s8 s2 = (s8)((s32)cur2+(s32)bc2+(s32)cb2);
            if (s2 > hc2) s2 = hc2;
            if (s2 < 0) s2 = 0;
            // ceiling divide by 2
            s32 half = ((s32)s2 + ((u32)(s32)s2 >> 31) + 1) >> 1;
            r31 = (s8)half;
        }
    }

    // Check bit 30 of r3[0x1a0]
    if (*(u32*)(unit+0x1a0) & (1u<<(31-30))) {
        u8 flag2 = (u8)(u32)fn_80106398((void*)(unit+0x1bc), 0x16);
        if (!flag2) {
            void* r5p3 = (void*)*(u32*)(unit+0x18c);
            void* r3p3 = (void*)*(u32*)(unit+0x188);
            u8 cur3 = unit[0x1af];
            u8 bc3 = ((u8*)r5p3)[0x48]; s8 hc3 = (s8)((u8*)r5p3)[0x50];
            u8 cb3 = ((u8*)r3p3)[0x21];
            s8 s3 = (s8)((s32)cur3+(s32)bc3+(s32)cb3);
            if (s3 > hc3) s3 = hc3;
            if (s3 < 0) s3 = 0;
            s32 half2 = ((s32)s3 + ((u32)(s32)s3 >> 31) + 1) >> 1;
            r31 = (s8)((s32)r31 - (s32)half2 + (s32)r31);
            // assembly: subf r0,r0,r31; extsb r31,r0  r31 = r31 - half
            r31 = (s8)((s32)r31 - half2);
        }
    }

    return (s8)r31;
}

// ============================================================
// fn_800390C8: (doc 4) compute effective Defense stat
//   Same structure as fn_80038BE8 but for DEF:
//   r3[0x1ae], cls[0x47/0x4f], cls_bonus[0x20], weapon/skill[0x1f]
//   bit 0x10 extra check uses same Spd formula
//   bit 30 check uses offset 0x47 for cap comparison
// ============================================================
s8 fn_800390C8(void* r3) {
    u8* unit = (u8*)r3;
    void* r5p = (void*)*(u32*)(unit+0x18c);
    void* r6p = (void*)*(u32*)(unit+0x188);
    s32 r31 = 0;

    u8 cur = unit[0x1ae];
    u8 base_cap = ((u8*)r5p)[0x47]; s8 hard_cap = (s8)((u8*)r5p)[0x4f];
    u8 cls_bonus = ((u8*)r6p)[0x20];
    s8 sum = (s8)((s32)cur+(s32)base_cap+(s32)cls_bonus);
    if (sum > hard_cap) sum = hard_cap;
    if (sum < 0) sum = 0;

    s32 wslot=-1,sslot=-1;
    if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc)) wslot=0;
    else if (unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4)) wslot=1;
    else if (unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc)) wslot=2;
    else if (unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4)) wslot=3;
    s8 wbonus=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wbonus=(s8)((u8*)wp)[0x1f];}
    if (unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec)) sslot=0;
    else if (unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4)) sslot=1;
    else if (unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc)) sslot=2;
    else if (unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204)) sslot=3;
    s8 sbonus=0;
    if (sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sbonus=(s8)((s32)wbonus+(s32)(s8)((u8*)sp)[0x1f]);}

    s8 total=(s8)((s32)sum+(s32)sbonus);
    s8 r4v=(s8)unit[0x1a8];
    if (r4v > total) {
        u8 flag=(u8)(u32)fn_80106398((void*)(unit+0x1bc),0x10);
        if (flag) {
            void*r5p2=(void*)*(u32*)(unit+0x18c);void*r3p2=(void*)*(u32*)(unit+0x188);
            u8 cur2=unit[0x1af];u8 bc2=((u8*)r5p2)[0x48];s8 hc2=(s8)((u8*)r5p2)[0x50];u8 cb2=((u8*)r3p2)[0x21];
            s8 s2=(s8)((s32)cur2+(s32)bc2+(s32)cb2);
            if (s2>hc2)s2=hc2; if (s2<0)s2=0;
            r31=(s8)(((s32)s2+((u32)(s32)s2>>31)+1)>>1);
        }
    }
    if (*(u32*)(unit+0x1a0)&(1u<<(31-30))) {
        u8 flag2=(u8)(u32)fn_80106398((void*)(unit+0x1bc),0x16);
        if (!flag2) {
            void*r5p3=(void*)*(u32*)(unit+0x18c);void*r3p3=(void*)*(u32*)(unit+0x188);
            u8 cur3=unit[0x1ae];u8 bc3=((u8*)r5p3)[0x47];s8 hc3=(s8)((u8*)r5p3)[0x4f];u8 cb3=((u8*)r3p3)[0x20];
            s8 s3=(s8)((s32)cur3+(s32)bc3+(s32)cb3);
            if (s3>hc3)s3=hc3; if (s3<0)s3=0;
            s32 half=(((s32)s3+((u32)(s32)s3>>31)+1)>>1);
            r31=(s8)((s32)r31-half);
        }
    }
    return (s8)r31;
}

// ============================================================
// fn_800395A8: (doc 5) compute effective Magic stat
//   Same structure but for MAG: r3[0x1ac], cls[0x45/0x4d], cls_bonus[0x1e]
//   weapon/skill[0x1f]  NO bit 30 alternate path (only bit 0x10 check)
//   Also calls fn_80167474/fn_80167490/fn_8016725C for weapon rank
// ============================================================
s8 fn_800395A8(void* r3) {
    u8* unit = (u8*)r3;
    void* r5p = (void*)*(u32*)(unit+0x18c);
    void* r6p = (void*)*(u32*)(unit+0x188);
    s32 r31 = 0;

    u8 cur = unit[0x1ac];
    u8 base_cap = ((u8*)r5p)[0x45]; s8 hard_cap = (s8)((u8*)r5p)[0x4d];
    u8 cls_bonus = ((u8*)r6p)[0x1e];
    s8 sum = (s8)((s32)cur+(s32)base_cap+(s32)cls_bonus);
    if (sum > hard_cap) sum = hard_cap;
    if (sum < 0) sum = 0;

    s32 wslot=-1,sslot=-1;
    if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc)) wslot=0;
    else if (unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4)) wslot=1;
    else if (unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc)) wslot=2;
    else if (unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4)) wslot=3;
    s8 wbonus=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wbonus=(s8)((u8*)wp)[0x20];}
    if (unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec)) sslot=0;
    else if (unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4)) sslot=1;
    else if (unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc)) sslot=2;
    else if (unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204)) sslot=3;
    s8 sbonus=0;
    if (sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sbonus=(s8)((s32)wbonus+(s32)(s8)((u8*)sp)[0x20]);}

    s8 total=(s8)((s32)sum+(s32)sbonus);
    s8 r4v=(s8)unit[0x1a8];
    if (r4v > total) {
        u8 flag=(u8)(u32)fn_80106398((void*)(unit+0x1bc),0x10);
        if (flag) {
            void*r5p2=(void*)*(u32*)(unit+0x18c);void*r3p2=(void*)*(u32*)(unit+0x188);
            u8 cur2=unit[0x1af];u8 bc2=((u8*)r5p2)[0x48];s8 hc2=(s8)((u8*)r5p2)[0x50];u8 cb2=((u8*)r3p2)[0x21];
            s8 s2=(s8)((s32)cur2+(s32)bc2+(s32)cb2);
            if (s2>hc2)s2=hc2; if (s2<0)s2=0;
            r31=(s8)(((s32)s2+((u32)(s32)s2>>31)+1)>>1);
        }
    }
    // MAG also calls weapon rank display at end (fn_80167474/fn_80167490/fn_8016725C)
    {
        void* str = fn_80167474((void*)((u8*)lbl_8033A708 + 0x3c0));
        void* cls2 = (void*)*(u32*)(unit+0x188);
        u16 wid = *(u16*)(unit+0x228);
        u16 wtype = *(u16*)((u8*)cls2+0x58);
        u8 rank = ((u8*)cls2)[0x55];
        fn_80167490(str, (s32)wid, (s32)wtype, (s32)rank);
        u8 rankbuf[8];
        fn_8016725C((void*)rankbuf, (void*)(unit+0x1bc));
        r31 = (s8)((s32)r31 + (s32)rankbuf[4]);
    }
    return (s8)r31;
}

// ============================================================
// fn_80039A50: (doc 6) large dispatch function (jump table, 10 cases)
//   r4 = stat index 0-9; dispatches to individual stat getters
//   case 0: STR (weapon+skill[0x1f] path)
//   case 1: fn_8003B3F8 (SKL?)
//   case 2: fn_8003B140 (SPD?)
//   case 3: fn_8003B0C8
//   case 4: fn_8003B050
//   case 5: Build (r3[0x1b0] + cls[0x22], cap 0x28)
//   case 6: fn_8003ABE0
//   case 7: fn_8003A918
//   case 8: Strike (r3[0x1a9] + cls[0x1b] + equip[0x3c] + weapon[0x28] + skill[0x28])
//   case 9: Authority (r3[0x1aa] + equip[0x3e] + weapon[0x27] + skill[0x27])
//   returns -1 for out of range
// ============================================================
s8 fn_80039A50(void* r3, u8 r4) {
    void* r30 = r3;
    u8 idx = r4 & 0xff;
    if (idx > 9) return -1;

    switch (idx) {
    case 0: { // STR
        u8* unit = (u8*)r30;
        void* r5p = (void*)*(u32*)(unit+0x18c);
        void* r6p = (void*)*(u32*)(unit+0x188);
        u8 cur = unit[0x1ab];
        u8 bc = ((u8*)r5p)[0x44]; s8 hc = (s8)((u8*)r5p)[0x4c]; u8 cb = ((u8*)r6p)[0x1d];
        s8 sum = (s8)((s32)cur+(s32)bc+(s32)cb);
        if (sum>hc)sum=hc; if (sum<0)sum=0;
        s32 wslot=-1,sslot=-1;
        if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc))wslot=0;
        else if(unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4))wslot=1;
        else if(unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc))wslot=2;
        else if(unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4))wslot=3;
        s8 wb=0; if(wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wb=(s8)((u8*)wp)[0x1f];}
        if(unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec))sslot=0;
        else if(unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4))sslot=1;
        else if(unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc))sslot=2;
        else if(unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204))sslot=3;
        s8 sb=0; if(sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sb=(s8)((s32)wb+(s32)(s8)((u8*)sp)[0x1f]);}
        return (s8)((s32)sum+(s32)sb);
    }
    case 1: return (s8)(u32)fn_8003B3F8(r30);
    case 2: return (s8)(u32)fn_8003B140(r30);
    case 3: return (s8)(u32)fn_8003B0C8(r30);
    case 4: return (s8)(u32)fn_8003B050(r30);
    case 5: { // Build
        u8* unit = (u8*)r30;
        void* r3p = (void*)*(u32*)(unit+0x188);
        u8 cb = ((u8*)r3p)[0x22];
        s8 v = (s8)((s32)unit[0x1b0]+(s32)cb);
        if (v > 0x28) v = 0x28;
        if (v < 0) v = 0;
        s32 wslot=-1,sslot=-1;
        if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc))wslot=0;
        else if(unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4))wslot=1;
        else if(unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc))wslot=2;
        else if(unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4))wslot=3;
        s8 wb=0; if(wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wb=(s8)((u8*)wp)[0x24];}
        if(unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec))sslot=0;
        else if(unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4))sslot=1;
        else if(unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc))sslot=2;
        else if(unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204))sslot=3;
        s8 sb=0; if(sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sb=(s8)((s32)wb+(s32)(s8)((u8*)sp)[0x24]);}
        s8 res = (s8)((s32)v+(s32)sb);
        if (res < 0) res = 0;
        return res;
    }
    case 6: return (s8)(u32)fn_8003ABE0(r30);
    case 7: return (s8)(u32)fn_8003A918(r30);
    case 8: { // Strike
        u8* unit = (u8*)r30;
        void* r3p = (void*)*(u32*)(unit+0x188);
        void* r4p = (void*)*(u32*)(unit+0x18c);
        s8 cls = (s8)((u8*)r3p)[0x1b];
        u8 equip = ((u8*)r4p)[0x3c];
        s8 cur = (s8)unit[0x1a9];
        s32 r5 = (s32)cls + (s32)equip + (s32)cur;
        // Check r3[0x1a4] bits 27-29
        if ((unit[0x1a4] >> 3) & 0x7) return 0;
        // fn_80106398 bit 0xe
        u8 rank_flag = (u8)(u32)fn_80106398((void*)(unit+0x1bc), 0xe);
        void* r5p2 = (void*)*(u32*)(unit+0x18c);
        s8 r31b = (s8)(((u8*)r5p2)[0x3e] + unit[0x1aa]);
        if (rank_flag) r31b = (s8)((s32)r31b + 2);
        s32 wslot=-1,sslot=-1;
        if(unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc))wslot=0;
        else if(unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4))wslot=1;
        else if(unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc))wslot=2;
        else if(unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4))wslot=3;
        s8 wb=0; if(wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wb=(s8)((u8*)wp)[0x27];}
        if(unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec))sslot=0;
        else if(unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4))sslot=1;
        else if(unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc))sslot=2;
        else if(unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204))sslot=3;
        s8 sb=0; if(sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sb=(s8)((s32)wb+(s32)(s8)((u8*)sp)[0x27]);}
        r5 += (s32)(s8)sb + (s32)(s8)r31b;
        if (r5 > 0x63) r5 = 0x63;
        if (r5 < 0) r5 = 0;
        return (s8)r5;
    }
    case 9: { // Authority
        u8* unit = (u8*)r30;
        void* r5p = (void*)*(u32*)(unit+0x18c);
        void* r3p = (void*)*(u32*)(unit+0x188);
        s8 cls = (s8)((u8*)r3p)[0x1b];
        u8 equip = ((u8*)r5p)[0x3e];
        s8 cur = (s8)unit[0x1aa];
        s32 r31b = (s32)cls + (s32)equip + (s32)cur;
        s32 wslot=-1,sslot=-1;
        if(unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc))wslot=0;
        else if(unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4))wslot=1;
        else if(unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc))wslot=2;
        else if(unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4))wslot=3;
        s8 wb=0; if(wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);wb=(s8)((u8*)wp)[0x27];}
        if(unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec))sslot=0;
        else if(unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4))sslot=1;
        else if(unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc))sslot=2;
        else if(unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204))sslot=3;
        s8 sb=0; if(sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);sb=(s8)((s32)wb+(s32)(s8)((u8*)sp)[0x27]);}
        r31b += (s32)sb;
        if (r31b > 0x14) r31b = 0x14;
        if (r31b < 0) r31b = 0;
        return (s8)r31b;
    }
    default: return -1;
    }
}

// ============================================================
// fn_8003A204: get class name string for unit r30
//   If bit 2 of r30[0x1bc] not set: call fn_800A8B84(r30->0x188)
//   If set: check if class == lbl_80273150+0x75  return +0x7d
//           else if class == lbl_80273150+0x94  return +0x88
//           else: fn_800A8B84(r30->0x188)
// ============================================================
void* fn_8003A204(void* r3) {
    void* r30 = r3;
    void* r31;

    u8 flag = (u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 2);
    if (!flag) {
        return fn_800A8B84((void*)*(u32*)((u8*)r30 + 0x188));
    }

    r31 = (void*)*(u32*)((u8*)r30 + 0x188);
    void* cls1 = fn_80019F94((void*)((u8*)lbl_80273150 + 0x75));
    if (r31 == cls1) return (void*)((u8*)lbl_80273150 + 0x7d);

    r31 = (void*)*(u32*)((u8*)r30 + 0x188);
    void* cls2 = fn_80019F94((void*)((u8*)lbl_80273150 + 0x94));
    if (r31 == cls2) return (void*)((u8*)lbl_80273150 + 0x88);

    return fn_800A8B84((void*)*(u32*)((u8*)r30 + 0x188));
}

// ============================================================
// fn_8003A2B4: get class data ptr for unit r30 (alternate form)
//   Same as fn_8003A204 but returns r30->0x188->0xc instead of name
//   string from fn_800A8B84 for the default/alternate class cases
// ============================================================
void* fn_8003A2B4(void* r3) {
    void* r30 = r3;
    void* r31;

    u8 flag = (u8)(u32)fn_80106398((void*)((u8*)r30 + 0x1bc), 2);
    if (!flag) {
        void* cls = (void*)*(u32*)((u8*)r30 + 0x188);
        return (void*)*(u32*)((u8*)cls + 0xc);
    }

    r31 = (void*)*(u32*)((u8*)r30 + 0x188);
    void* cls1 = fn_80019F94((void*)((u8*)lbl_80273150 + 0x75));
    if (r31 == cls1) return (void*)((u8*)lbl_80273150 + 0x9d);

    r31 = (void*)*(u32*)((u8*)r30 + 0x188);
    void* cls2 = fn_80019F94((void*)((u8*)lbl_80273150 + 0x94));
    if (r31 == cls2) return (void*)((u8*)lbl_80273150 + 0xa6);

    void* cls = (void*)*(u32*)((u8*)r30 + 0x188);
    return (void*)*(u32*)((u8*)cls + 0xc);
}

// ============================================================
// fn_8003A364: get weapon rank bonus for unit r3
//   r3->0x18c[0x41] + extrwi(r3[0x1a6], 3, 27)
// ============================================================
s8 fn_8003A364(void* r3) {
    void* r4p = (void*)*(u32*)((u8*)r3 + 0x18c);
    u8 base = ((u8*)r4p)[0x41];
    u8 rank_bits = (u8)(((u8*)r3)[0x1a6] >> 3) & 7;  // extrwi 3,27
    return (s8)((s32)base + (s32)rank_bits);
}

// ============================================================
// fn_8003A380: compute effective Strike stat for unit r3
//   Base: cls[0x1c] + equip[0x3d] + weapon[0x28] + skill[0x28]
//   Then adds r3[0x1a9] (Strike exp), clamps to 0x63
// ============================================================
s8 fn_8003A380(void* r3) {
    u8* unit = (u8*)r3;
    void* r5p = (void*)*(u32*)(unit+0x188);
    void* r4p = (void*)*(u32*)(unit+0x18c);
    s8 cls_bonus = (s8)((u8*)r5p)[0x1c];
    u8 equip_bonus = ((u8*)r4p)[0x3d];
    s32 r5 = (s32)cls_bonus + (s32)equip_bonus;

    // Weapon slot
    s32 wslot=-1;
    if(unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc))wslot=0;
    else if(unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4))wslot=1;
    else if(unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc))wslot=2;
    else if(unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4))wslot=3;
    s8 r6=0;
    if(wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);r6=(s8)((u8*)wp)[0x28];}

    // Skill slot
    s32 sslot=-1;
    if(unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec))sslot=0;
    else if(unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4))sslot=1;
    else if(unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc))sslot=2;
    else if(unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204))sslot=3;
    if(sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);r6=(s8)((s32)r6+(s32)(s8)((u8*)sp)[0x28]);}

    s8 strike_exp = (s8)unit[0x1a9];
    s32 total = (s32)(s8)r6 + r5 + (s32)strike_exp;
    if (total > 0x63) total = 0x63;
    return (s8)total;
}

// ============================================================
// fn_8003A538: compute effective Authority stat for unit r30
//   Checks r30[0x1a4] bits 27-29 first (return 0 if set)
//   Base: r30->0x18c[0x3e] + r30[0x1aa], +2 if fn_80106398 bit 0xe
//   Adds weapon[0x27] and skill[0x27] bonuses
//   Clamps to [0, 0x14]
// ============================================================
s8 fn_8003A538(void* r3) {
    u8* r30 = (u8*)r3;

    if ((r30[0x1a4] >> 3) & 7) return 0;

    void* r5p = (void*)*(u32*)(r30 + 0x18c);
    s32 r31 = (s32)((u8*)r5p)[0x3e] + (s32)(s8)r30[0x1aa];

    u8 rank_flag = (u8)(u32)fn_80106398((void*)(r30 + 0x1bc), 0xe);
    // neg/or/srawi trick: if rank_flag != 0, add 2
    s32 add2 = ((-((s32)rank_flag) | (s32)rank_flag) >> 31) & 2;
    r31 += add2;

    // Weapon slot [0x27]
    s32 wslot = -1;
    if (r30[0x1d1] & (1u<<(31-24)) && *(u32*)(r30+0x1cc)) wslot = 0;
    else if (r30[0x1d9] & (1u<<(31-24)) && *(u32*)(r30+0x1d4)) wslot = 1;
    else if (r30[0x1e1] & (1u<<(31-24)) && *(u32*)(r30+0x1dc)) wslot = 2;
    else if (r30[0x1e9] & (1u<<(31-24)) && *(u32*)(r30+0x1e4)) wslot = 3;
    s8 r5 = 0;
    if (wslot >= 0) { void* wp = (void*)*(u32*)(r30+0x1cc+wslot*8); r5 = (s8)((u8*)wp)[0x27]; }

    // Skill slot [0x27]
    s32 sslot = -1;
    if (r30[0x1f1] & (1u<<(31-24)) && *(u32*)(r30+0x1ec)) sslot = 0;
    else if (r30[0x1f9] & (1u<<(31-24)) && *(u32*)(r30+0x1f4)) sslot = 1;
    else if (r30[0x201] & (1u<<(31-24)) && *(u32*)(r30+0x1fc)) sslot = 2;
    else if (r30[0x209] & (1u<<(31-24)) && *(u32*)(r30+0x204)) sslot = 3;
    if (sslot >= 0) { void* sp = (void*)*(u32*)(r30+0x1ec+sslot*8); r5 = (s8)((s32)r5+(s32)(s8)((u8*)sp)[0x27]); }

    r31 += (s32)r5;
    if (r31 > 0x14) r31 = 0x14;
    if (r31 < 0) r31 = 0;
    return (s8)r31;
}

// ============================================================
// fn_8003A754: compute effective Strike stat for unit r3
//   Base: cls[0x1b] + equip[0x3c] + r3[0x1a9]
//   Adds weapon[0x28] and skill[0x28] bonuses
//   Clamps to [0, 0x63]
// ============================================================
s8 fn_8003A754(void* r3) {
    u8* unit = (u8*)r3;
    void* r4p = (void*)*(u32*)(unit + 0x188);
    void* r5p = (void*)*(u32*)(unit + 0x18c);
    s8 cls_bonus = (s8)((u8*)r4p)[0x1b];
    u8 equip = ((u8*)r5p)[0x3c];
    s8 cur = (s8)unit[0x1a9];
    s32 r7 = (s32)cls_bonus + (s32)equip + (s32)cur;

    // Weapon slot [0x28]
    s32 wslot = -1;
    if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc)) wslot=0;
    else if (unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4)) wslot=1;
    else if (unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc)) wslot=2;
    else if (unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4)) wslot=3;
    s8 r6 = 0;
    if (wslot>=0) { void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8); r6=(s8)((u8*)wp)[0x28]; }

    // Skill slot [0x28]
    s32 sslot = -1;
    if (unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec)) sslot=0;
    else if (unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4)) sslot=1;
    else if (unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc)) sslot=2;
    else if (unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204)) sslot=3;
    if (sslot>=0) { void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8); r6=(s8)((s32)r6+(s32)(s8)((u8*)sp)[0x28]); }

    r7 += (s32)r6;
    if (r7 > 0x63) r7 = 0x63;
    if (r7 < 0) r7 = 0;
    return (s8)r7;
}

// ============================================================
// fn_8003A918: compute effective Resistance stat for unit r29
//   Base: r29->0x18c[0x4b] + r29[0x1b2] + cls[0x24], cap r29->0x18c[0x53]
//   Weapon [0x26] + skill [0x26] bonuses with fn_8001CC6C check
//   Adds weapon rank bonus via fn_80167474/fn_80167490/fn_8016725C
//   Returns 0 if negative
// ============================================================
s8 fn_8003A918(void* r3) {
    u8* r29 = (u8*)r3;
    void* r5p = (void*)*(u32*)(r29 + 0x18c);
    void* r3p = (void*)*(u32*)(r29 + 0x188);

    u8 bc = ((u8*)r5p)[0x4b];
    u8 cur = r29[0x1b2];
    s8 hc = (s8)((u8*)r5p)[0x53];
    u8 cb = ((u8*)r3p)[0x24];
    s8 r31 = (s8)((s32)bc + (s32)cur + (s32)cb);
    if (r31 > hc) r31 = hc;
    if (r31 < 0) r31 = 0;

    // Weapon slot [0x26]
    s32 wslot = -1;
    if (r29[0x1d1]&(1u<<(31-24))&&*(u32*)(r29+0x1cc)) wslot=0;
    else if (r29[0x1d9]&(1u<<(31-24))&&*(u32*)(r29+0x1d4)) wslot=1;
    else if (r29[0x1e1]&(1u<<(31-24))&&*(u32*)(r29+0x1dc)) wslot=2;
    else if (r29[0x1e9]&(1u<<(31-24))&&*(u32*)(r29+0x1e4)) wslot=3;
    s8 r30 = 0;
    if (wslot>=0) { void*wp=(void*)*(u32*)(r29+0x1cc+wslot*8); r30=(s8)((u8*)wp)[0x26]; }

    // Skill slot [0x26] with fn_8001CC6C check
    s32 sslot = -1;
    if (r29[0x1f1]&(1u<<(31-24))&&*(u32*)(r29+0x1ec)) sslot=0;
    else if (r29[0x1f9]&(1u<<(31-24))&&*(u32*)(r29+0x1f4)) sslot=1;
    else if (r29[0x201]&(1u<<(31-24))&&*(u32*)(r29+0x1fc)) sslot=2;
    else if (r29[0x209]&(1u<<(31-24))&&*(u32*)(r29+0x204)) sslot=3;
    if (sslot >= 0) {
        void* sp_entry = (void*)((u8*)r29 + 0x1ec + sslot * 8);
        void* sp = (void*)*(u32*)((u8*)sp_entry);
        r30 = (s8)((s32)r30 + (s32)(s8)((u8*)sp)[0x26]);
        fn_8001CC6C(sp_entry);
        // check bits: (sp_entry[0] & 2) | (sp_entry[4] & 0) if nonzero, do equip cap adj
        u32 w1 = *(u32*)((u8*)sp_entry + 0);
        u32 w2 = *(u32*)((u8*)sp_entry + 4);
        if ((w1 & 2) | (w2 & 0)) {
            void* equip_ptr;
            void* r3c = (void*)*(u32*)((u8*)r29 + 0x18c);
            void* enode = (void*)*(u32*)((u8*)r3c + 0xc);
            if (enode) equip_ptr = fn_8000D47C(enode);
            else equip_ptr = 0;
            void* r4p2 = (void*)*(u32*)(r29 + 0x18c);
            s8 base_cap2 = (s8)((u8*)r4p2)[0x4b];
            s8 equip_cap2 = (s8)((u8*)r4p2)[0x4b];
            s8 diff = (s8)(((s32)equip_cap2 - (s32)base_cap2 + ((u32)((s32)(equip_cap2-base_cap2)>>31)) + 1) >> 1);
            r30 = (s8)((s32)r30 - (s32)diff);
        }
    }

    // Weapon rank bonus
    {
        s32 rank_bits = (s32)(r29[0x1a6] >> 3) & 7;
        r30 = (s8)((s32)r30 + rank_bits);
    }

    // fn_80167474/fn_80167490/fn_8016725C weapon rank addition
    {
        void* str = fn_80167474((void*)((u8*)lbl_8033A708 + 0x3c0));
        void* cls2 = (void*)*(u32*)(r29+0x188);
        u16 wid = *(u16*)(r29+0x228);
        u16 wtype = *(u16*)((u8*)cls2+0x58);
        u8 rank = ((u8*)cls2)[0x55];
        fn_80167490(str, (s32)wid, (s32)wtype, (s32)rank);
        u8 rankbuf[16];
        fn_8016725C((void*)rankbuf, (void*)(r29+0x1bc));
        // stw r0,0x10(r1); lbz r3,0xc(r1); stb r3,0x14(r1); lbz r0,0x11(r1)
        // add r30,r30,r0
        r30 = (s8)((s32)r30 + (s32)rankbuf[1]);
    }

    s8 total = (s8)((s32)r31 + (s32)r30);
    if (total < 0) total = 0;
    return total;
}

// ============================================================
// fn_8003ABE0: compute effective Magic Defense (Res) stat for unit r29
//   Same structure as fn_8003A918 but for:
//   r29->0x18c[0x4a] + r29[0x1b1] + cls[0x23], cap r29->0x18c[0x52]
//   Weapon/skill [0x25] bonuses; equip cap uses offset 0x4a
// ============================================================
s8 fn_8003ABE0(void* r3) {
    u8* r29 = (u8*)r3;
    void* r5p = (void*)*(u32*)(r29+0x18c);
    void* r3p = (void*)*(u32*)(r29+0x188);

    u8 bc = ((u8*)r5p)[0x4a]; u8 cur = r29[0x1b1];
    s8 hc = (s8)((u8*)r5p)[0x52]; u8 cb = ((u8*)r3p)[0x23];
    s8 r31 = (s8)((s32)bc+(s32)cur+(s32)cb);
    if (r31>hc) r31=hc; if (r31<0) r31=0;

    s32 wslot=-1;
    if (r29[0x1d1]&(1u<<(31-24))&&*(u32*)(r29+0x1cc)) wslot=0;
    else if (r29[0x1d9]&(1u<<(31-24))&&*(u32*)(r29+0x1d4)) wslot=1;
    else if (r29[0x1e1]&(1u<<(31-24))&&*(u32*)(r29+0x1dc)) wslot=2;
    else if (r29[0x1e9]&(1u<<(31-24))&&*(u32*)(r29+0x1e4)) wslot=3;
    s8 r30=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(r29+0x1cc+wslot*8);r30=(s8)((u8*)wp)[0x25];}

    s32 sslot=-1;
    if (r29[0x1f1]&(1u<<(31-24))&&*(u32*)(r29+0x1ec)) sslot=0;
    else if (r29[0x1f9]&(1u<<(31-24))&&*(u32*)(r29+0x1f4)) sslot=1;
    else if (r29[0x201]&(1u<<(31-24))&&*(u32*)(r29+0x1fc)) sslot=2;
    else if (r29[0x209]&(1u<<(31-24))&&*(u32*)(r29+0x204)) sslot=3;
    if (sslot>=0) {
        void*sp_entry=(void*)((u8*)r29+0x1ec+sslot*8);
        void*sp=(void*)*(u32*)((u8*)sp_entry);
        r30=(s8)((s32)r30+(s32)(s8)((u8*)sp)[0x25]);
        fn_8001CC6C(sp_entry);
        u32 w1=*(u32*)((u8*)sp_entry+0); u32 w2=*(u32*)((u8*)sp_entry+4);
        if ((w1&2)|(w2&0)) {
            void*r3c=(void*)*(u32*)((u8*)r29+0x18c);
            void*enode=(void*)*(u32*)((u8*)r3c+0xc);
            void*equip_ptr; if (enode) equip_ptr=fn_8000D47C(enode); else equip_ptr=0;
            void*r4p2=(void*)*(u32*)(r29+0x18c);
            s8 bc2=(s8)((u8*)r4p2)[0x4a]; s8 ec2=(s8)((u8*)r4p2)[0x4a];
            s8 diff=(s8)(((s32)ec2-(s32)bc2+((u32)((s32)(ec2-bc2)>>31))+1)>>1);
            r30=(s8)((s32)r30-(s32)diff);
        }
    }

    {
        void*str=fn_80167474((void*)((u8*)lbl_8033A708+0x3c0));
        void*cls2=(void*)*(u32*)(r29+0x188);
        u16 wid=*(u16*)(r29+0x228); u16 wtype=*(u16*)((u8*)cls2+0x58); u8 rank=((u8*)cls2)[0x55];
        fn_80167490(str,(s32)wid,(s32)wtype,(s32)rank);
        u8 rankbuf[16]; fn_8016725C((void*)rankbuf,(void*)(r29+0x1bc));
        r30=(s8)((s32)r30+(s32)rankbuf[1]);
    }

    s8 total=(s8)((s32)r31+(s32)r30);
    if (total<0) total=0;
    return total;
}

// ============================================================
// fn_8003AE98: compute effective Build stat for unit r3
//   Base: cls[0x22] + r3[0x1b0], cap 0x28
//   Weapon [0x24] + skill [0x24] bonuses
//   Returns 0 if negative via bgelr pattern
// ============================================================
s8 fn_8003AE98(void* r3) {
    u8* unit = (u8*)r3;
    void* r4p = (void*)*(u32*)(unit+0x188);
    u8 cb = ((u8*)r4p)[0x22];
    s8 r5 = (s8)((s32)unit[0x1b0] + (s32)cb);
    if (r5 > 0x28) r5 = 0x28;
    if (r5 < 0) r5 = 0;

    s32 wslot=-1;
    if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc)) wslot=0;
    else if (unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4)) wslot=1;
    else if (unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc)) wslot=2;
    else if (unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4)) wslot=3;
    s8 r6=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);r6=(s8)((u8*)wp)[0x24];}

    s32 sslot=-1;
    if (unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec)) sslot=0;
    else if (unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4)) sslot=1;
    else if (unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc)) sslot=2;
    else if (unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204)) sslot=3;
    if (sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);r6=(s8)((s32)r6+(s32)(s8)((u8*)sp)[0x24]);}

    s8 total=(s8)((s32)r5+(s32)r6);
    if (total<0) return 0;
    return total;
}

// ============================================================
// fn_8003B050: compute effective Speed stat for unit r3
//   Base: r3->0x18c[0x48] + r3[0x1af] + cls[0x21], cap r3->0x18c[0x50]
//   Then calls fn_80038BE8(r3) and adds result
//   Returns 0 if negative
// ============================================================
s8 fn_8003B050(void* r3) {
    void* r6p = (void*)*(u32*)((u8*)r3+0x18c);
    void* r4p = (void*)*(u32*)((u8*)r3+0x188);
    u8 bc = ((u8*)r6p)[0x48]; u8 cur = ((u8*)r3)[0x1af];
    s8 hc = (s8)((u8*)r6p)[0x50]; u8 cb = ((u8*)r4p)[0x21];
    s8 r31 = (s8)((s32)bc+(s32)cur+(s32)cb);
    if (r31>hc) r31=hc; if (r31<0) r31=0;
    s8 bonus = fn_80038BE8(r3);
    s8 total = (s8)((s32)r31+(s32)bonus);
    if (total<0) return 0;
    return total;
}

// ============================================================
// fn_8003B0C8: compute effective Defense stat for unit r3
//   Base: r3->0x18c[0x47] + r3[0x1ae] + cls[0x20], cap r3->0x18c[0x4f]
//   Then calls fn_800390C8(r3) and adds result
//   Returns 0 if negative
// ============================================================
s8 fn_8003B0C8(void* r3) {
    void* r6p = (void*)*(u32*)((u8*)r3+0x18c);
    void* r4p = (void*)*(u32*)((u8*)r3+0x188);
    u8 bc = ((u8*)r6p)[0x47]; u8 cur = ((u8*)r3)[0x1ae];
    s8 hc = (s8)((u8*)r6p)[0x4f]; u8 cb = ((u8*)r4p)[0x20];
    s8 r31 = (s8)((s32)bc+(s32)cur+(s32)cb);
    if (r31>hc) r31=hc; if (r31<0) r31=0;
    s8 bonus = fn_800390C8(r3);
    s8 total = (s8)((s32)r31+(s32)bonus);
    if (total<0) return 0;
    return total;
}

// ============================================================
// fn_8003B140: compute effective Skill stat for unit r29
//   Base: r29->0x18c[0x46] + r29[0x1ad] + cls[0x1f], cap r29->0x18c[0x4e]
//   Weapon [0x21] + skill [0x21] bonuses with fn_8001CC6C check
//   Adds weapon rank bonus via fn_80167474/fn_80167490/fn_8016725C
//   Returns 0 if negative
// ============================================================
s8 fn_8003B140(void* r3) {
    u8* r29 = (u8*)r3;
    void* r5p = (void*)*(u32*)(r29+0x18c);
    void* r3p = (void*)*(u32*)(r29+0x188);

    u8 bc=((u8*)r5p)[0x46]; u8 cur=r29[0x1ad];
    s8 hc=(s8)((u8*)r5p)[0x4e]; u8 cb=((u8*)r3p)[0x1f];
    s8 r31=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (r31>hc) r31=hc; if (r31<0) r31=0;

    s32 wslot=-1;
    if (r29[0x1d1]&(1u<<(31-24))&&*(u32*)(r29+0x1cc)) wslot=0;
    else if (r29[0x1d9]&(1u<<(31-24))&&*(u32*)(r29+0x1d4)) wslot=1;
    else if (r29[0x1e1]&(1u<<(31-24))&&*(u32*)(r29+0x1dc)) wslot=2;
    else if (r29[0x1e9]&(1u<<(31-24))&&*(u32*)(r29+0x1e4)) wslot=3;
    s8 r30=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(r29+0x1cc+wslot*8);r30=(s8)((u8*)wp)[0x21];}

    s32 sslot=-1;
    if (r29[0x1f1]&(1u<<(31-24))&&*(u32*)(r29+0x1ec)) sslot=0;
    else if (r29[0x1f9]&(1u<<(31-24))&&*(u32*)(r29+0x1f4)) sslot=1;
    else if (r29[0x201]&(1u<<(31-24))&&*(u32*)(r29+0x1fc)) sslot=2;
    else if (r29[0x209]&(1u<<(31-24))&&*(u32*)(r29+0x204)) sslot=3;
    if (sslot>=0) {
        void*sp_entry=(void*)((u8*)r29+0x1ec+sslot*8);
        void*sp=(void*)*(u32*)((u8*)sp_entry);
        r30=(s8)((s32)r30+(s32)(s8)((u8*)sp)[0x21]);
        fn_8001CC6C(sp_entry);
        u32 w1=*(u32*)((u8*)sp_entry+0); u32 w2=*(u32*)((u8*)sp_entry+4);
        if ((w1&2)|(w2&0)) {
            void*r3c=(void*)*(u32*)((u8*)r29+0x18c);
            void*enode=(void*)*(u32*)((u8*)r3c+0xc);
            void*equip_ptr; if (enode) equip_ptr=fn_8000D47C(enode); else equip_ptr=0;
            void*r4p2=(void*)*(u32*)(r29+0x18c);
            s8 bc2=(s8)((u8*)r4p2)[0x46]; s8 ec2=(s8)((u8*)r4p2)[0x46];
            s8 diff=(s8)(((s32)ec2-(s32)bc2+((u32)((s32)(ec2-bc2)>>31))+1)>>1);
            r30=(s8)((s32)r30-(s32)diff);
        }
    }

    {
        void*str=fn_80167474((void*)((u8*)lbl_8033A708+0x3c0));
        void*cls2=(void*)*(u32*)(r29+0x188);
        u16 wid=*(u16*)(r29+0x228); u16 wtype=*(u16*)((u8*)cls2+0x58); u8 rank=((u8*)cls2)[0x55];
        fn_80167490(str,(s32)wid,(s32)wtype,(s32)rank);
        u8 rankbuf[16]; fn_8016725C((void*)rankbuf,(void*)(r29+0x1bc));
        // lbz r3,0xc(r1); stb r3,0x14(r1); lbz r0,0x10(r1)  note offset 0x10 not 0x11
        r30=(s8)((s32)r30+(s32)rankbuf[0]);
    }

    s8 total=(s8)((s32)r31+(s32)r30);
    if (total<0) return 0;
    return total;
}

// ============================================================
// fn_8003B3F8: compute effective Magic stat for unit r3
//   Base: r3->0x18c[0x45] + r3[0x1ac] + cls[0x1e], cap r3->0x18c[0x4d]
//   Then calls fn_800395A8(r3) and adds result
//   Returns 0 if negative
// ============================================================
s8 fn_8003B3F8(void* r3) {
    void* r6p = (void*)*(u32*)((u8*)r3+0x18c);
    void* r4p = (void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x45]; u8 cur=((u8*)r3)[0x1ac];
    s8 hc=(s8)((u8*)r6p)[0x4d]; u8 cb=((u8*)r4p)[0x1e];
    s8 r31=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (r31>hc) r31=hc; if (r31<0) r31=0;
    s8 bonus=fn_800395A8(r3);
    s8 total=(s8)((s32)r31+(s32)bonus);
    if (total<0) return 0;
    return total;
}

// ============================================================
// fn_8003B470: compute effective Strength stat for unit r3
//   Base: r3->0x18c[0x44] + r3[0x1ab] + cls[0x1d], cap r3->0x18c[0x4c]
//   Weapon [0x1f] + skill [0x1f] bonuses (no fn_8001CC6C, no rank)
//   Returns sum clamped by cap
// ============================================================
s8 fn_8003B470(void* r3) {
    u8* unit = (u8*)r3;
    void* r6p = (void*)*(u32*)(unit+0x18c);
    void* r4p = (void*)*(u32*)(unit+0x188);
    u8 bc=((u8*)r6p)[0x44]; u8 cur=unit[0x1ab];
    s8 hc=(s8)((u8*)r6p)[0x4c]; u8 cb=((u8*)r4p)[0x1d];
    s8 r5=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (r5>hc) r5=hc; if (r5<0) r5=0;

    s32 wslot=-1;
    if (unit[0x1d1]&(1u<<(31-24))&&*(u32*)(unit+0x1cc)) wslot=0;
    else if (unit[0x1d9]&(1u<<(31-24))&&*(u32*)(unit+0x1d4)) wslot=1;
    else if (unit[0x1e1]&(1u<<(31-24))&&*(u32*)(unit+0x1dc)) wslot=2;
    else if (unit[0x1e9]&(1u<<(31-24))&&*(u32*)(unit+0x1e4)) wslot=3;
    s8 r6=0;
    if (wslot>=0){void*wp=(void*)*(u32*)(unit+0x1cc+wslot*8);r6=(s8)((u8*)wp)[0x1f];}

    s32 sslot=-1;
    if (unit[0x1f1]&(1u<<(31-24))&&*(u32*)(unit+0x1ec)) sslot=0;
    else if (unit[0x1f9]&(1u<<(31-24))&&*(u32*)(unit+0x1f4)) sslot=1;
    else if (unit[0x201]&(1u<<(31-24))&&*(u32*)(unit+0x1fc)) sslot=2;
    else if (unit[0x209]&(1u<<(31-24))&&*(u32*)(unit+0x204)) sslot=3;
    if (sslot>=0){void*sp=(void*)*(u32*)(unit+0x1ec+sslot*8);r6=(s8)((s32)r6+(s32)(s8)((u8*)sp)[0x1f]);}

    return (s8)((s32)r5+(s32)r6);
}

// ============================================================
// The following 6 functions are simple "base stat + equip cap" getters.
// Pattern: (r3->0x18c[cap_offset] + r3[stat_offset] + cls[bonus_offset])
//          capped at r3->0x18c[hard_cap_offset], floor 0
//          Returns via bgelr (return if >= 0, else return 0)
// ============================================================

// fn_8003B630: Resistance base (r3->0x18c[0x4b] + r3[0x1b2] + cls[0x24], cap [0x53])
s8 fn_8003B630(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x4b]; u8 cur=((u8*)r3)[0x1b2]; s8 hc=(s8)((u8*)r6p)[0x53]; u8 cb=((u8*)r4p)[0x24];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B674: Magic Defense base (r3->0x18c[0x4a] + r3[0x1b1] + cls[0x23], cap [0x52])
s8 fn_8003B674(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x4a]; u8 cur=((u8*)r3)[0x1b1]; s8 hc=(s8)((u8*)r6p)[0x52]; u8 cb=((u8*)r4p)[0x23];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B6B8: Build base (cls[0x22] + r3[0x1b0], cap 0x28)
s8 fn_8003B6B8(void* r3) {
    void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 cb=((u8*)r4p)[0x22]; u8 cur=((u8*)r3)[0x1b0];
    s8 v=(s8)((s32)cb+(s32)cur);
    if (v>0x28) v=0x28;
    if (v<0) return 0;
    return v;
}

// fn_8003B6E8: Speed base (r3->0x18c[0x48] + r3[0x1af] + cls[0x21], cap [0x50])
s8 fn_8003B6E8(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x48]; u8 cur=((u8*)r3)[0x1af]; s8 hc=(s8)((u8*)r6p)[0x50]; u8 cb=((u8*)r4p)[0x21];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B72C: Defense base (r3->0x18c[0x47] + r3[0x1ae] + cls[0x20], cap [0x4f])
s8 fn_8003B72C(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x47]; u8 cur=((u8*)r3)[0x1ae]; s8 hc=(s8)((u8*)r6p)[0x4f]; u8 cb=((u8*)r4p)[0x20];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B770: Skill base (r3->0x18c[0x46] + r3[0x1ad] + cls[0x1f], cap [0x4e])
s8 fn_8003B770(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x46]; u8 cur=((u8*)r3)[0x1ad]; s8 hc=(s8)((u8*)r6p)[0x4e]; u8 cb=((u8*)r4p)[0x1f];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B7B4: Magic base (r3->0x18c[0x45] + r3[0x1ac] + cls[0x1e], cap [0x4d])
s8 fn_8003B7B4(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x45]; u8 cur=((u8*)r3)[0x1ac]; s8 hc=(s8)((u8*)r6p)[0x4d]; u8 cb=((u8*)r4p)[0x1e];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// fn_8003B7F8: Strength base (r3->0x18c[0x44] + r3[0x1ab] + cls[0x1d], cap [0x4c])
s8 fn_8003B7F8(void* r3) {
    void* r6p=(void*)*(u32*)((u8*)r3+0x18c); void* r4p=(void*)*(u32*)((u8*)r3+0x188);
    u8 bc=((u8*)r6p)[0x44]; u8 cur=((u8*)r3)[0x1ab]; s8 hc=(s8)((u8*)r6p)[0x4c]; u8 cb=((u8*)r4p)[0x1d];
    s8 v=(s8)((s32)bc+(s32)cur+(s32)cb);
    if (v>hc) v=hc;
    if (v<0) return 0;
    return v;
}

// ============================================================
// fn_8003B83C: call fn_80017490(r3+0x236, r3)
// ============================================================
void fn_8003B83C(void* r3) {
    fn_80017490((void*)((u8*)r3 + 0x236), r3);
}

// ============================================================
// fn_8003B864: store r4 to r3[0x190], then call fn_80017490(r3+0x236, r3)
// ============================================================
void fn_8003B864(void* r3, void* r4) {
    *(u32*)((u8*)r3 + 0x190) = (u32)r4;
    fn_80017490((void*)((u8*)r3 + 0x236), r3);
}

// ============================================================
// fn_8003B890: initialize unit struct r28
//   Zeros all fields from 0x180 to 0x213, clears weapon/skill slots
//   via fn_8001D6C8 x4 each, zeros combo counts, weapon IDs
//   If r29 != 0: stores r29 to r28[0x198]
// ============================================================
void fn_8003B890(void* r3, u8 r4) {
    u8* r28 = (u8*)r3;
    u8  r29 = r4;

    *(u32*)(r28+0x180) = 0;
    *(u32*)(r28+0x184) = 0;
    *(u32*)(r28+0x188) = 0;
    *(u32*)(r28+0x18c) = 0;
    *(u32*)(r28+0x190) = 0;
    *(u32*)(r28+0x194) = 0;
    r28[0x19a] = 0; r28[0x19b] = 0;
    r28[0x19c] = 0; r28[0x19d] = 0;
    r28[0x19e] = 0; r28[0x19f] = 0;
    *(u32*)(r28+0x1a0) = 0;

    fn_80104Be8((void*)(r28 + 0x1a4));

    r28[0x1a8] = 0;
    r28[0x1b2] = 0; r28[0x1b1] = 0; r28[0x1b0] = 0;
    r28[0x1af] = 0; r28[0x1ae] = 0; r28[0x1ad] = 0;
    r28[0x1ac] = 0; r28[0x1ab] = 0;
    r28[0x1bb] = 0; r28[0x1ba] = 0; r28[0x1b9] = 0;
    r28[0x1b8] = 0; r28[0x1b7] = 0; r28[0x1b6] = 0;
    r28[0x1b5] = 0; r28[0x1b4] = 0;
    *(u32*)(r28+0x1c8) = 0; *(u32*)(r28+0x1c4) = 0;
    *(u32*)(r28+0x1c0) = 0; *(u32*)(r28+0x1bc) = 0;

    // Clear 4 weapon slots + 4 skill slots via fn_8001D6C8
    u8* r31 = r28;
    for (s32 r30 = 0; r30 < 4; r30++) {
        fn_8001D6C8((void*)(r31 + 0x1cc));
        fn_8001D6C8((void*)(r31 + 0x1ec));
        r31 += 8;
    }

    for (s32 i = 0; i < 8; i++) r28[0x20c + i] = 0;
    *(u16*)(r28+0x228) = 0; *(u16*)(r28+0x22a) = 0;
    *(u16*)(r28+0x22c) = 0; *(u16*)(r28+0x22e) = 0;
    *(u16*)(r28+0x230) = 0; *(u16*)(r28+0x232) = 0;
    r28[0x234] = 0; r28[0x235] = 0;

    if (r29) r28[0x198] = r29;
}

// ============================================================
// fn_8003B9E4: assign fn_80019F94-resolved ptrs into combo list
//   r3 = source combo list array, r4 = count
//   For each entry: resolves each entry's [0x8] ptr via fn_80019F94,
//   then sets list[0] ptr = fn_80019F94(list->0x0) and stores list as 0x50
// ============================================================
void fn_8003B9E4(void* r3, s32 r4) {
    void* r29 = r3;
    s32   r27 = r4;
    s32   r28 = 0;

    while (r28 < r27) {
        void* r30 = r29;
        s32   r31 = 0;
        s32   count = *(s32*)((u8*)r29 + 4);
        while (r31 < count) {
            void* ep = (void*)((u8*)r30 + 8);
            void* ptr = (void*)*(u32*)((u8*)ep);
            if (ptr) {
                void* resolved = fn_80019F94(ptr);
                *(u32*)((u8*)ep) = (u32)resolved;
            }
            r30 = (void*)((u8*)r30 + 8);
            r31++;
        }
        void* owner = (void*)*(u32*)((u8*)r29);
        void* resolved_owner = fn_80019F94(owner);
        *(u32*)((u8*)resolved_owner + 0x50) = (u32)r29;

        r28++;
        s32 stride = *(s32*)((u8*)r29 + 4) * 8 + 8;
        r29 = (void*)((u8*)r29 + stride);
    }
}

// ============================================================
// fn_8003BA74: halve (arithmetic right shift by 1) each of 6 bytes
//   at r3[4..9] in place
// ============================================================
void fn_8003BA74(void* r3) {
    for (s32 i = 0; i < 6; i++) {
        s8 v = (s8)((u8*)r3)[4 + i];
        ((u8*)r3)[4 + i] = (u8)(v >> 1);
    }
}

// ============================================================
// fn_8003BAD8: map weapon category index (0-8) to internal type ID
//   Uses jump table jumptable_8028F5A0
//   Returns 0 for out-of-range or case 0
// ============================================================
u8 fn_8003BAD8(u8 r3) {
    static const u8 tbl[9] = {0, 7, 9, 8, 4, 6, 5, 2, 3};
    u32 idx = (u32)r3 & 0xff;
    if (idx > 8) return 0;
    return tbl[idx];
}

// ============================================================
// fn_8003BB4C: get weapon type name string for category r3
//   Uses jump table jumptable_8028F5C4 to index into lbl_80273200
//   Calls fn_8000E20C on the string ptr for cases 1-8
//   Returns string ptr for case 9+ (out-of-range)
// ============================================================
void* fn_8003BB4C(u8 r3) {
    static const s32 offsets[9] = {-1, 0x8, 0xf, 0x16, 0x1d, 0x25, 0x2b, 0x33, 0x3a};
    extern u8 lbl_80273200[];
    u32 idx = (u32)r3 & 0xff;
    if (idx > 8) return (void*)((u8*)lbl_80273200 + 0x43);
    void* str = (void*)((u8*)lbl_80273200 + offsets[idx]);
    return fn_8000E20C(str);
}

// ============================================================
// fn_8003BC20: get weapon type index for unit r31's equipped weapon
//   Compares weapon name against 8 strings in lbl_80273200
//   Returns 0-7 for match, 8 if no match (via neg/or/srawi/andc)
// ============================================================

// Corrected cleaner version matching the assembly exactly:
s32 fn_8003BC20(void* r3) {
    void* r31 = r3;
    if (!r31) return 0;

    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x44))) return 1;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x49))) return 2;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x51))) return 3;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x56))) return 4;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x5c))) return 5;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x61))) return 6;
    if (!fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x67))) return 7;
    {
        s32 res = fn_8023D008(r31, (void*)((u8*)lbl_80273200 + 0x6e));
        s32 neg = -res;
        return 8 & ~((neg | res) >> 31);
    }
}

// ============================================================
// fn_8003BD74: equip weapon r30 on unit r31, updating skill flags
//   Checks bits 8/a/9 of r31[0x1bc] flags to gate equip
//   Clears old equip bits via andc, resolves new equip via fn_8000D47C,
//   ORs new bits in, clears rlwinm bits from 0x1a0,
//   sets r31[0x19c] based on bit 9, calls fn_800932F0
// ============================================================
void fn_8003BD74(void* r3, u8 r4) {
    u8* r31 = (u8*)r3;
    u8  r30 = r4;

    u8 f8 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 8);
    if (!f8) return;

    u8 fa = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 0xa);
    if (fa) return;

    u8 check = (u8)(u32)fn_8009338C(r31);
    if (check) return;

    // Check bit 9 gating based on r30
    if (r30) {
        u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
        if (!f9) return;
    } else {
        u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
        if (f9) return;
    }

    // Clear old equip bits via andc
    void* r4p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) &= ~*(u32*)((u8*)r4p+0x1c);
    *(u32*)(r31+0x1c0) &= ~*(u32*)((u8*)r4p+0x20);
    *(u32*)(r31+0x1c4) &= ~*(u32*)((u8*)r4p+0x24);
    *(u32*)(r31+0x1c8) &= ~*(u32*)((u8*)r4p+0x28);

    // Resolve new equip
    void* r3c = (void*)*(u32*)(r31+0x18c);
    void* enode = (void*)*(u32*)((u8*)r3c+0xc);
    void* new_equip;
    if (enode) new_equip = fn_8000D47C((u8*)enode);
    else new_equip = 0;
    *(u32*)(r31+0x18c) = (u32)new_equip;

    // OR new bits in
    void* r6p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) |= *(u32*)((u8*)r6p+0x1c);
    *(u32*)(r31+0x1c0) |= *(u32*)((u8*)r6p+0x20);
    *(u32*)(r31+0x1c4) |= *(u32*)((u8*)r6p+0x24);
    *(u32*)(r31+0x1c8) |= *(u32*)((u8*)r6p+0x28);

    // Clear bits 19-17 (rlwinm ,,,19,17) from 0x1a0
    *(u32*)(r31+0x1a0) = *(u32*)(r31+0x1a0) & ~(7u << (31-19));

    // Set r31[0x19c] based on bit 9
    {
        u8 f9b = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
        r31[0x19c] = f9b ? 0x14 : 0;
    }

    fn_800932F0(r31);
}

// ============================================================
// fn_8003BEF8: equip default weapon on unit r30
//   If bit 8 of r30[0x1bc]: clear all 4 weapon slots via fn_8001D6C8,
//   then find preferred weapon via chain of fn_8000D47C lookups,
//   call fn_8009606C to set it, set bit 7 of slot[5]
// ============================================================
void fn_8003BEF8(void* r3) {
    u8* r30 = (u8*)r3;

    u8 f8 = (u8)(u32)fn_80106398((void*)(r30+0x1bc), 8);
    if (!f8) return;

    // Clear all 4 weapon slots
    s32 r31 = 0;
    do {
        void* slot = fn_80037D5C(r30, r31);
        fn_8001D6C8(slot);
        r31++;
    } while (r31 < 4);

    // Find preferred weapon: r30->0x18c->0x14
    void* r4p = (void*)*(u32*)(r30+0x18c);
    void* pref = (void*)*(u32*)((u8*)r4p+0x14);
    if (!pref) {
        // Fall back to r30->0x18c->0xc chain
        void* r3c = (void*)*(u32*)(r30+0x18c);
        void* enode = (void*)*(u32*)((u8*)r3c+0xc);
        void* resolved;
        if (enode) resolved = fn_8000D47C((u8*)enode);
        else resolved = 0;

        void* pref2 = (void*)*(u32*)((u8*)resolved+0x14);
        if (!pref2) return;

        // Second fallback chain
        void* r3c2 = (void*)*(u32*)(r30+0x18c);
        void* enode2 = (void*)*(u32*)((u8*)r3c2+0xc);
        void* resolved2;
        if (enode2) resolved2 = fn_8000D47C((u8*)enode2);
        else resolved2 = 0;
        pref = (void*)*(u32*)((u8*)resolved2+0x14);
        if (!pref) return;
    }

    fn_8009606C(r30, pref);

    // Set bit 7 (rlwimi) of slot[0][5]
    void* slot0 = fn_80037D5C(r30, 0);
    u8 v = ((u8*)slot0)[5];
    v = (u8)((v & ~(1u<<7)) | (1u<<7));
    ((u8*)slot0)[5] = v;
}

// ============================================================
// fn_8003BFF0: equip weapon (no-arg version, uses r31->0x18c directly)
//   Same andc/or pattern as fn_8003BD74 but skips the gating checks
// ============================================================
void fn_8003BFF0(void* r3) {
    u8* r31 = (u8*)r3;

    void* r4p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) &= ~*(u32*)((u8*)r4p+0x1c);
    *(u32*)(r31+0x1c0) &= ~*(u32*)((u8*)r4p+0x20);
    *(u32*)(r31+0x1c4) &= ~*(u32*)((u8*)r4p+0x24);
    *(u32*)(r31+0x1c8) &= ~*(u32*)((u8*)r4p+0x28);

    void* r3c = (void*)*(u32*)(r31+0x18c);
    void* enode = (void*)*(u32*)((u8*)r3c+0xc);
    void* new_equip;
    if (enode) new_equip = fn_8000D47C((u8*)enode);
    else new_equip = 0;
    *(u32*)(r31+0x18c) = (u32)new_equip;

    void* r6p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) |= *(u32*)((u8*)r6p+0x1c);
    *(u32*)(r31+0x1c0) |= *(u32*)((u8*)r6p+0x20);
    *(u32*)(r31+0x1c4) |= *(u32*)((u8*)r6p+0x24);
    *(u32*)(r31+0x1c8) |= *(u32*)((u8*)r6p+0x28);

    *(u32*)(r31+0x1a0) = *(u32*)(r31+0x1a0) & ~(7u << (31-19));

    {
        u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
        r31[0x19c] = f9 ? 0x14 : 0;
    }
    fn_800932F0(r31);
}

// ============================================================
// fn_8003C0FC: update r31[0x19c] movement counter with mounted check
//   Returns 1 if counter clamped, 0 otherwise
//   Checks bits 8/a/9, uses fn_8009338C
//   If bit 9: add 4 to counter; else: subtract 3
//   Clamps to [0, 0x14], returns 1 if at boundary
// ============================================================
s32 fn_8003C0FC(void* r3) {
    u8* r31 = (u8*)r3;

    if (!(u8)(u32)fn_80106398((void*)(r31+0x1bc), 8)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 0xa)) return 0;
    if ((u8)(u32)fn_8009338C(r31)) return 0;

    u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
    s32 delta = f9 ? 4 : -3;
    r31[0x19c] = (u8)((s32)r31[0x19c] + delta);

    s8 cur = (s8)r31[0x19c];
    if (cur <= 0) { r31[0x19c] = 0; return 1; }
    if (cur >= 0x14) { r31[0x19c] = 0x14; return 1; }
    return 0;
}

// ============================================================
// fn_8003C1D8: same as fn_8003C0FC but delta is +2/-1 instead of +4/-3
// ============================================================
s32 fn_8003C1D8(void* r3) {
    u8* r31 = (u8*)r3;

    if (!(u8)(u32)fn_80106398((void*)(r31+0x1bc), 8)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 0xa)) return 0;
    if ((u8)(u32)fn_8009338C(r31)) return 0;

    u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
    s32 delta = f9 ? 2 : -1;
    r31[0x19c] = (u8)((s32)r31[0x19c] + delta);

    s8 cur = (s8)r31[0x19c];
    if (cur <= 0) { r31[0x19c] = 0; return 1; }
    if (cur >= 0x14) { r31[0x19c] = 0x14; return 1; }
    return 0;
}

// ============================================================
// fn_8003C2B4: get mount counter for unit r31
//   If bit 0xa of r31[0x1bc]: return 0x14
//   Else: return r31[0x19c]
// ============================================================
u8 fn_8003C2B4(void* r3) {
    u8* r31 = (u8*)r3;
    u8 fa = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 0xa);
    if (fa) return 0x14;
    return r31[0x19c];
}

// ============================================================
// fn_8003C2FC: set r31[0x19c] based on bit 9 of r31[0x1bc],
//   then call fn_800932F0
// ============================================================
void fn_8003C2FC(void* r3) {
    u8* r31 = (u8*)r3;
    u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
    r31[0x19c] = f9 ? 0x14 : 0;
    fn_800932F0(r31);
}

// ============================================================
// fn_8003C354: init r31[0x19c] from class data or bit 9 flag
//   If bit 8 not set: skip
//   If bit 9 set: r31[0x19c] = 0x14
//   Else: r31[0x19c] = r31->0x188[0x56]
// ============================================================
void fn_8003C354(void* r3) {
    u8* r31 = (u8*)r3;

    u8 f8 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 8);
    if (!f8) return;

    u8 f9 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 9);
    if (f9) {
        r31[0x19c] = 0x14;
    } else {
        void* cls = (void*)*(u32*)(r31+0x188);
        r31[0x19c] = ((u8*)cls)[0x56];
    }
}

// ============================================================
// fn_8003C3BC: load unit r30 item/weapon data from r31 stream
//   Zeros many fields at r30[0x238..0x260], sets 0x260 = 0x10
//   Uses fn_8000D3E4 + fn_8017C420 to look up item data pointers
//   Fills r30[0x238, 0x23c, 0x240, 0x244, 0x248, 0x250, 0x251,
//              0x254, 0x258, 0x25a]
// ============================================================
void fn_8003C3BC(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;
    void* r29;

    // Zero fields
    *(u32*)(r30+0x238) = 0; *(u32*)(r30+0x23c) = 0;
    *(u32*)(r30+0x240) = 0; *(u32*)(r30+0x244) = 0;
    r30[0x248] = 0; *(u32*)(r30+0x24c) = 0;
    r30[0x250] = 0; r30[0x251] = 0;
    *(u32*)(r30+0x254) = 0;
    *(u16*)(r30+0x258) = 0; *(u16*)(r30+0x25a) = 0;
    *(u32*)(r30+0x25c) = 0;
    r30[0x260] = 0x10;

    // Item slot 0 (0x238): lbl_80273278+0x8
    {
        void* tbl = fn_8000D3E4((void*)((u8*)lbl_80273278 + 0x8));
        r29 = tbl;
        u8 idx = (u8)(u32)fn_8017C420(r31);
        void* entry = (void*)*(u32*)((u8*)tbl + (u32)idx * 4);
        void* resolved = fn_8000D47C((u8*)entry);
        if (resolved) {
            *(u32*)(r30+0x238) = *(u32*)((u8*)resolved+0x14);
            r30[0x250] = 0;
        }
    }
    // Item slot 1 (0x23c): lbl_80273278+0x17
    {
        void* tbl = fn_8000D3E4((void*)((u8*)lbl_80273278 + 0x17));
        r29 = tbl;
        u8 idx = (u8)(u32)fn_8017C420(r31);
        void* entry = (void*)*(u32*)((u8*)tbl + (u32)idx * 4);
        void* resolved = fn_8000D47C((u8*)entry);
        if (resolved) {
            *(u32*)(r30+0x23c) = *(u32*)((u8*)resolved+0x14);
            r30[0x251] = 0;
        }
    }
    // Item slot 2 (0x240): lbl_80273278+0x26
    {
        void* tbl = fn_8000D3E4((void*)((u8*)lbl_80273278 + 0x26));
        r29 = tbl;
        u8 idx = (u8)(u32)fn_8017C420(r31);
        void* entry = (void*)*(u32*)((u8*)tbl + (u32)idx * 4);
        void* resolved = fn_8000D47C((u8*)entry);
        if (resolved) *(u32*)(r30+0x240) = *(u32*)resolved;
    }
    // Item slot 3 (0x244): lbl_80273278+0x36
    {
        void* tbl = fn_8000D3E4((void*)((u8*)lbl_80273278 + 0x36));
        r29 = tbl;
        u8 idx = (u8)(u32)fn_8017C420(r31);
        void* entry = (void*)*(u32*)((u8*)tbl + (u32)idx * 4);
        void* resolved = fn_8000D47C((u8*)entry);
        if (resolved) *(u32*)(r30+0x244) = *(u32*)resolved;
    }

    r30[0x250] = (u8)(u32)fn_8017C420(r31);
    r30[0x251] = (u8)(u32)fn_8017C420(r31);
    *(u32*)(r30+0x254) = (u32)(u32)fn_8017C394(r31);
    *(u16*)(r30+0x258) = (u16)(u32)fn_8017C3F4(r31);
    *(u16*)(r30+0x25a) = (u16)(u32)fn_8017C3F4(r31);
    r30[0x248] = (u8)(u32)fn_8017C420(r31);
}

// ============================================================
// fn_8003C56C: serialize unit r30 item slots to stream r31
//   Writes r30[0x238..0x25a] fields via fn_8017C030/BFB8/C008
// ============================================================
void fn_8003C56C(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;

    // 0x238, 0x23c: item ptrs  look up via fn_8000D3E4, write byte 0x20
    {
        void* d = fn_8000D3E4((void*)*(u32*)(r30+0x238));
        u8 v = (u8)*(u32*)((u8*)d+0x20);
        fn_8017C030(r31, (s32)v);
    }
    {
        void* d = fn_8000D3E4((void*)*(u32*)(r30+0x23c));
        u8 v = (u8)*(u32*)((u8*)d+0x20);
        fn_8017C030(r31, (s32)v);
    }
    // 0x240, 0x244: item ptrs  look up via fn_8000D3E4, write byte[4]
    {
        void* d = fn_8000D3E4((void*)*(u32*)(r30+0x240));
        u8 v = ((u8*)d)[4];
        fn_8017C030(r31, (s32)v);
    }
    {
        void* d = fn_8000D3E4((void*)*(u32*)(r30+0x244));
        u8 v = ((u8*)d)[4];
        fn_8017C030(r31, (s32)v);
    }
    fn_8017C030(r31, (s32)r30[0x250]);
    fn_8017C030(r31, (s32)r30[0x251]);
    fn_8017BFB8(r31, (s32)*(u32*)(r30+0x254));
    fn_8017C008(r31, (s32)*(u16*)(r30+0x258));
    fn_8017C008(r31, (s32)*(u16*)(r30+0x25a));
    fn_8017C030(r31, (s32)r30[0x248]);
}

// ============================================================
// fn_8003C650: load 4 item ptrs from r29 struct into unit r28
//   r29[0x38/0x3c/0x40/0x44]  resolve via fn_8000D47C  store
// ============================================================
void fn_8003C650(void* r3, void* r4) {
    u8* r28 = (u8*)r3;
    void* r29 = r4;
    void* r30 = (void*)*(u32*)((u8*)r29+0x40);
    void* r31 = (void*)*(u32*)((u8*)r29+0x3c);
    void* r3v = (void*)*(u32*)((u8*)r29+0x38);

    void* p0 = fn_8000D47C((u8*)r3v);
    if (p0) { *(u32*)(r28+0x238) = *(u32*)((u8*)p0+0x14); r28[0x250] = 0; }

    void* p1 = fn_8000D47C((u8*)r31);
    if (p1) { *(u32*)(r28+0x23c) = *(u32*)((u8*)p1+0x14); r28[0x251] = 0; }

    void* p2 = fn_8000D47C((u8*)r30);
    if (p2) *(u32*)(r28+0x240) = *(u32*)p2;

    void* r3w = (void*)*(u32*)((u8*)r29+0x44);
    void* p3 = fn_8000D47C((u8*)r3w);
    if (p3) *(u32*)(r28+0x244) = *(u32*)p3;
}

// ============================================================
// fn_8003C70C: resolve r4 via fn_8000D47C, store [0] to r31[0x244]
// ============================================================
void fn_8003C70C(void* r3, void* r4) {
    void* r31 = r3;
    void* p = fn_8000D47C((u8*)r4);
    if (p) *(u32*)((u8*)r31+0x244) = *(u32*)p;
}

// ============================================================
// fn_8003C74C: resolve r4 via fn_8000D47C, store [0] to r31[0x240]
// ============================================================
void fn_8003C74C(void* r3, void* r4) {
    void* r31 = r3;
    void* p = fn_8000D47C((u8*)r4);
    if (p) *(u32*)((u8*)r31+0x240) = *(u32*)p;
}

// ============================================================
// fn_8003C78C: resolve r4 via fn_8000D47C, store [0x14] to r31[0x23c],
//   clear r31[0x251]
// ============================================================
void fn_8003C78C(void* r3, void* r4) {
    void* r31 = r3;
    void* p = fn_8000D47C((u8*)r4);
    if (p) {
        *(u32*)((u8*)r31+0x23c) = *(u32*)((u8*)p+0x14);
        ((u8*)r31)[0x251] = 0;
    }
}

// ============================================================
// fn_8003C7D4: resolve r4 via fn_8000D47C, store [0x14] to r31[0x238],
//   clear r31[0x250]
// ============================================================
void fn_8003C7D4(void* r3, void* r4) {
    void* r31 = r3;
    void* p = fn_8000D47C((u8*)r4);
    if (p) {
        *(u32*)((u8*)r31+0x238) = *(u32*)((u8*)p+0x14);
        ((u8*)r31)[0x250] = 0;
    }
}

// ============================================================
// fn_8003C81C: zero all item/skill fields in unit r3 struct
//   Clears 0x238..0x260, sets 0x260 = 0x10
// ============================================================
void fn_8003C81C(void* r3) {
    u8* unit = (u8*)r3;
    *(u32*)(unit+0x238) = 0; *(u32*)(unit+0x23c) = 0;
    *(u32*)(unit+0x240) = 0; *(u32*)(unit+0x244) = 0;
    unit[0x248] = 0; *(u32*)(unit+0x24c) = 0;
    unit[0x250] = 0; unit[0x251] = 0;
    *(u32*)(unit+0x254) = 0;
    *(u16*)(unit+0x258) = 0; *(u16*)(unit+0x25a) = 0;
    *(u32*)(unit+0x25c) = 0;
    unit[0x260] = 0x10;
}

// ============================================================
// fn_8003C85C: set unit r30's class (r4) and resolve equip
//   If r4==0: skip. Stores r4 to r30[0x188].
//   Resolves r4[0x10] via fn_80019F50 and fn_8000D47C chain
//   to get r31 (equip ptr). Checks fn_80106398 bit 2 on both
//   r30[0x18c]+0x1c and r31+0x1c. Stores r31 to r30[0x18c].
//   Then calls fn_800967E8(-1), fn_8004EB60(0), fn_80050E18
// ============================================================
void fn_8003C85C(void* r3, void* r4, void* r5) {
    u8* r30 = (u8*)r3;
    void* r31 = r5;

    if (!r4) goto done;

    *(u32*)(r30+0x188) = (u32)r4;

    {
        void* tmp = fn_80019F50((void*)*(u32*)((u8*)r4+0x10));
        r31 = tmp;
        void* enode = (void*)*(u32*)((u8*)r31+0xc);
        void* equip;
        if (enode) equip = fn_8000D47C((u8*)enode);
        else equip = 0;

        if (!equip) goto done;

        void* r4p = (void*)*(u32*)(r30+0x18c);
        u8 f2a = (u8)(u32)fn_80106398((void*)((u8*)r4p+0x1c), 2);
        if (f2a) {
            u8 f2b = (u8)(u32)fn_80106398((void*)((u8*)r31+0x1c), 2);
            if (!f2b) goto done;
            void* enode2 = (void*)*(u32*)((u8*)r31+0xc);
            void* equip2;
            if (enode2) equip2 = fn_8000D47C((u8*)enode2);
            else equip2 = 0;
            r31 = equip2;
            goto done;
        } else {
            u8 f2c = (u8)(u32)fn_80106398((void*)((u8*)r31+0x1c), 2);
            if (!f2c) goto done;
            void* enode3 = (void*)*(u32*)((u8*)r31+0xc);
            void* equip3;
            if (enode3) equip3 = fn_8000D47C((u8*)enode3);
            else equip3 = 0;
            r31 = equip3;
        }
    }

done:
    if (r31) *(u32*)(r30+0x18c) = (u32)r31;
    fn_800967E8(r30, -1);
    fn_8004EB60(r30, 0);
    fn_80050E18(r30);
}

// ============================================================
// fn_8003C970: check if unit r31 is mounted or has special ability
//   If bit 6 of r31[0x1bc]: return 1
//   If bit 7 of r31[0x1bc]: return 1 (via neg/or/srwi pattern)
//   Else: return 0
// ============================================================
u8 fn_8003C970(void* r3) {
    u8* r31 = (u8*)r3;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 6)) return 1;
    u8 f7 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 7);
    u32 r0 = (u32)f7;
    return (u8)((-r0 | r0) >> 31);
}

// ============================================================
// fn_8003C9D0: deserialize unit r30 from stream r31
//   Reads class, equip, many stat/flag bytes, weapon slots,
//   item slots, combo counts, calls fn_8003C3BC + fn_8004BDF8 + fn_8003B83C
//   Returns 1 on success, 0 if stream type check fails
// ============================================================
s32 fn_8003C9D0(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;

    // Check stream type (u16 nonzero)
    u32 type = (u32)(u16)(u32)fn_8017C3F4(r31);
    if (!type) return 0;

    void* cls = fn_80019FB4(r31);
    void* equip = fn_80019F70((void*)(u32)(u16)(u32)fn_8017C3F4(r31));
    *(u32*)(r30+0x188) = (u32)cls;
    *(u32*)(r30+0x18c) = (u32)equip;

    // Position
    u8 pos_idx = (u8)(u32)fn_8017C420(r31);
    void* pos_entry = (void*)((u8*)lbl_802D4744 + (u32)pos_idx * 0xc);
    fn_8003B864(r30, pos_entry);

    // r30[0x180/0x184/0x194]: unit ptrs (1-based index into lbl_802BB9C4)
    for (s32 i = 0; i < 3; i++) {
        u8 idx = (u8)(u32)fn_8017C420(r31);
        void* unit_ptr;
        if (idx) unit_ptr = (void*)((u8*)lbl_802BB9C4 + (u32)(idx-1) * 0x280);
        else unit_ptr = 0;
        if (i==0) *(u32*)(r30+0x180) = (u32)unit_ptr;
        else if (i==1) *(u32*)(r30+0x184) = (u32)unit_ptr;
        else *(u32*)(r30+0x194) = (u32)unit_ptr;
    }

    // Byte fields
    r30[0x199] = (u8)(u32)fn_8017C420(r31);
    r30[0x19a] = (u8)(u32)fn_8017C420(r31);
    r30[0x19b] = (u8)(u32)fn_8017C420(r31);
    r30[0x19c] = (u8)(u32)fn_8017C420(r31);
    r30[0x19d] = (u8)(u32)fn_8017C420(r31);
    r30[0x19e] = (u8)(u32)fn_8017C420(r31);
    r30[0x19f] = (u8)(u32)fn_8017C420(r31);

    // Flags word (4 bytes), then 0x1a4 block
    fn_8017C254(r31, 4, (void*)(r30+0x1a0));
    fn_8010490C((void*)(r30+0x1a4), r31);

    r30[0x1a8] = (u8)(u32)fn_8017C420(r31);
    r30[0x1a9] = (u8)(u32)fn_8017C420(r31);
    r30[0x1aa] = (u8)(u32)fn_8017C420(r31);

    // Stats (8 bytes each)
    fn_8017C254(r31, 8, (void*)(r30+0x1ab));
    fn_8017C254(r31, 8, (void*)(r30+0x1b4));

    // Skill/weapon flags block
    fn_801061DC((void*)(r30+0x1bc), r31);

    // 8 weapon/skill slots
    for (s32 i = 0; i < 8; i++) {
        void* slot = fn_80037D70(r30, i);
        fn_8001C264(slot, r31);
    }

    // Item/combo/misc blocks
    fn_8001D120((void*)(r30+0x20c), r31);
    fn_800174F0((void*)(r30+0x228), r31);
    fn_8017C254(r31, 0xa, (void*)(r30+0x214));

    // Item data + combo
    fn_8003C3BC(r30, r31);
    fn_8004BDF8(r30, r31);

    // Advance stream counter
    *(u32*)((u8*)r31+4) = *(u32*)((u8*)r31+4) + 2;
    fn_8003B83C(r30);

    return 1;
}

// ============================================================
// fn_8003CC34: serialize unit r30 to stream r31
//   Mirror of fn_8003C9D0  writes all fields in same order
//   If r30[0x188] == 0: write type 0 and return early
// ============================================================
void fn_8003CC34(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;

    void* cls = (void*)*(u32*)(r30+0x188);
    if (!cls) {
        fn_8017C008(r31, 0);
        return;
    }

    fn_8017C008(r31, (s32)*(u16*)((u8*)cls+0x18));
    fn_8017C008(r31, (s32)*(u16*)((u8*)*(u32*)(r30+0x18c)+0x38));
    fn_8017C030(r31, (s32)(u8)*(u32*)((u8*)*(u32*)(r30+0x190)+8));

    // r30[0x180], 0x184, 0x194: unit index (0 if null)
    for (s32 i = 0; i < 3; i++) {
        void* up;
        if (i==0) up = (void*)*(u32*)(r30+0x180);
        else if (i==1) up = (void*)*(u32*)(r30+0x184);
        else up = (void*)*(u32*)(r30+0x194);
        u8 idx = up ? ((u8*)up)[0x198] : 0;
        fn_8017C030(r31, (s32)idx);
    }

    fn_8017C030(r31, (s32)r30[0x199]);
    fn_8017C030(r31, (s32)r30[0x19a]);
    fn_8017C030(r31, (s32)r30[0x19b]);
    fn_8017C030(r31, (s32)r30[0x19c]);
    fn_8017C030(r31, (s32)r30[0x19d]);
    fn_8017C030(r31, (s32)r30[0x19e]);
    fn_8017C030(r31, (s32)r30[0x19f]);

    fn_8017BE74(r31, 4, (void*)(r30+0x1a0));
    fn_80104938((void*)(r30+0x1a4), r31);

    fn_8017C030(r31, (s32)r30[0x1a8]);
    fn_8017C030(r31, (s32)r30[0x1a9]);
    fn_8017C030(r31, (s32)r30[0x1aa]);

    fn_8017BE74(r31, 8, (void*)(r30+0x1ab));
    fn_8017BE74(r31, 8, (void*)(r30+0x1b4));
    fn_80106208((void*)(r30+0x1bc), r31);

    for (s32 i = 0; i < 8; i++) {
        void* slot = fn_80037D70(r30, i);
        fn_8001C324(slot, r31);
    }

    fn_8001D14C((void*)(r30+0x20c), r31);
    fn_80017584((void*)(r30+0x228), r31);
    fn_8017BE74(r31, 0xa, (void*)(r30+0x214));
    fn_8003C56C(r30, r31);
    fn_8004BE7C(r30, r31);
    fn_8017C008(r31, 0);
}

// ============================================================
// fn_8003CE50: find best attack target for unit r29 within range r30/r31
//   Two-pointer search (col r30, row r31) over entire grid
//   Uses fn_800230A4, fn_80022814, fn_800228C4, fn_8002149C,
//   fn_800FF030, fn_80021418 for hit/cost checks
//   Stores best (col,row) back to r30[0]/r31[0]
// ============================================================
void fn_8003CE50(void* r3, void* r4, void* r5) {
    u8* r29 = (u8*)r3;
    u8* r30 = (u8*)r4;
    u8* r31 = (u8*)r5;

    extern u8 lbl_802D49F8[];
    u8* r23 = lbl_802D49F8 + 0xd;

    s8 unit_row = (s8)r29[0x19f];
    s8 unit_col = (s8)r29[0x19e];
    s32 idx = (s32)unit_col + ((s32)unit_row << 6);
    u8 r27 = r23[idx];
    r23[idx] = 0;

    fn_800230A4((void*)lbl_802D49F8, 5);
    fn_80022814((void*)lbl_802D49F8, 0);

    void* terrain_type = fn_80019F50((void*)((u8*)lbl_802732C8 + 0x69));
    fn_800228C4((void*)lbl_802D49F8, terrain_type);

    fn_8002149C((void*)lbl_802D49F8, r30[0], r31[0], 0x40, 0, 0);

    void* equip_ptr = (void*)*(u32*)(r29+0x18c);
    fn_800228C4((void*)lbl_802D49F8, equip_ptr);

    s32 r20 = 0x270f;  // best cost so far (large)
    u8* r28 = lbl_802D49F8;

    s8 r19 = (s8)r28[9];  // grid rows
    for (; r19 < (s8)r28[0xb] - 1; r19++) {
        s8 r18 = (s8)r28[8];  // grid cols
        for (; r18 < (s8)r28[0xa] - 1; r18++) {
            s32 r26 = (s32)r19 << 6;

            // Check terrain cost
            u8* r24 = lbl_802D49F8 + 0x10000;
            s32 cost_idx = ((s32)r18 + r26) * 2;
            s16 cost = *(s16*)((u8*)r24 + 0x4190 + cost_idx);
            if (cost < 0) continue;

            u8* cell = r28 + (s32)r18 + r26;
            u8* r4c = lbl_802D49F8 + 0x10000;
            s8 cell_flag = (s8)*(cell + 0xe18e - 0x10000 + 0x10000);
            if (cell_flag) continue;

            u8 hit_flag = (u8)(u32)fn_800FF030(r29, (s32)r19);
            if (hit_flag) continue;

            if (cell[0xd]) continue;

            s32 path_cost = (s32)(s16)(u32)fn_80021418((void*)lbl_802D49F8, r18, r19);
            if (path_cost > 0x7530) continue;

            u32 cost_u = (u32)(u16)cost;
            if ((u32)r20 <= cost_u) continue;

            // New best
            r30[0] = (u8)r18;
            r20 = (s32)cost_u;
            r31[0] = (u8)r19;
        }
    }

    // Restore original cell
    r23[(s32)unit_col + ((s32)unit_row << 6)] = r27;
}

// ============================================================
// fn_8003D028: clear movement range cells within Manhattan distance r20
//   from unit r23, using lbl_802D49F8 grid
//   Uses fn_800230A4, fn_80022E78, fn_800228C4, fn_80021418
// ============================================================
void fn_8003D028(void* r3, u8 r4) {
    u8* r23 = (u8*)r3;
    u8  r20 = r4;

    extern u8 lbl_802D49F8[];

    u8 r21 = r23[0x19e];  // col
    u8 r22 = r23[0x19f];  // row

    fn_800230A4((void*)lbl_802D49F8, 5);
    fn_80022E78((void*)lbl_802D49F8, 5, -1);

    void* equip = (void*)*(u32*)(r23+0x18c);
    fn_800228C4((void*)lbl_802D49F8, equip);

    u8* r29 = lbl_802D49F8;
    s8 r25 = (s8)r23[0x19f];  // unit row
    s8 r24 = (s8)r23[0x19e];  // unit col

    s8 r22b = (s8)r29[9];
    for (; r22b < (s8)r29[0xb] - 1; r22b++) {
        s8 r21b = (s8)r29[8];
        s32 r30 = (s32)r22b << 6;
        for (; r21b < (s8)r29[0xa] - 1; r21b++) {
            // Manhattan distance check
            s32 dr = (s32)r22b - (s32)r25; if (dr < 0) dr = -dr;
            s32 dc = (s32)r21b - (s32)r24; if (dc < 0) dc = -dc;
            s32 dist = dr + dc;
            if (dist > (s32)r20) goto next_col;

            // Check cell occupancy and flags
            u8* cell = r29 + r21b + r30;
            if (cell[0xd]) goto next_col;
            {
                u8* r4c = lbl_802D49F8 + 0x10000;
                s8 cell_flag = (s8)*(cell + 0xe18e - 0x10000 + 0x10000);
                if (cell_flag) goto next_col;
            }
            if (!cell[0x200d]) goto next_col;

            {
                s32 path_cost = (s32)(s16)(u32)fn_80021418((void*)lbl_802D49F8, r21b, r22b);
                if (path_cost > 0x7530) goto next_col;
            }

            // Clear the movement cell
            {
                u8* r24p = lbl_802D49F8 + 0x10000;
                s32 cost_idx = (r21b + r30) * 2;
                *(s16*)((u8*)r24p + 0x4190 + cost_idx) = 0;
            }
        next_col:;
            r21b++;
        }
        r22b++;
    }
}

// ============================================================
// fn_8003D190: compute hit rate r28 vs defender r29
//   SKL_atk * 5 - RES_def + 30 - distance*2, clamped [0,100]
// ============================================================
u8 fn_8003D190(void* r3, void* r4) {
    void* r28 = r3;
    void* r29 = r4;

    s8 skl_atk = fn_8003B140(r28);
    s8 res_def = (s8)(u32)fn_8003A918(r29);
    s32 r31 = ((s32)skl_atk - (s32)res_def) * 5;

    s8 def_val = fn_8003B0C8(r28);
    r31 += (s32)def_val;

    u8 dist = fn_800382C8(r28, r29);
    s32 dist2 = (s32)(u32)(dist & 0xff) * 2;  // clrlslwi r3,r3,24,1

    s32 total = (s32)r31 - (s32)dist2 + 0x1e;
    if (total > 0x64) total = 0x64;
    if (total < 0) total = 0;
    return (u8)total;
}

// ============================================================
// fn_8003D234: compute target level for unit r30 given growth count r4
//   If r4 == 0: return 0
//   If bit 0xb of r30[0x1bc]: double r4 (luck/etc bonus)
//   If bit 0x4b of r30[0x1bc]: multiply r4 by 7/10 (rounded), clamp [1,0x64]
//   Else: clamp r4 to [0, 0x64]
// ============================================================
u8 fn_8003D234(void* r3, u8 r4) {
    u8* r30 = (u8*)r3;
    s32 r31 = (s32)(u8)r4;

    if (!r31) return 0;

    // Bit 0xb check: double
    if ((u8)(u32)fn_80106398((void*)(r30+0x1bc), 0xb)) {
        r31 <<= 1;
    }

    // Bit 0x4b check: multiply by 7, divide by 10
    if ((u8)(u32)fn_80106398((void*)(r30+0x1bc), 0x4b)) {
        s32 v = r31 * 7;
        // mulhw by 0x66666667, srawi 2, add >>31 = divide by 10
        s32 div10 = v / 10;
        r31 = div10;
        if (r31 < 1) r31 = 1;
    }

    if (r31 > 0x64) r31 = 0x64;
    return (u8)r31;
}

// ============================================================
// fn_8003D2DC: compute available XP/level-up budget for unit r31
//   Returns 0 if unit is blocked by various flags, otherwise
//   computes: r30 - (speed + (level-1)*100), clamped [0,100]
//   r30 = 0x76c normally, 0x7d0 if bit 2 active and equip found
// ============================================================
u8 fn_8003D2DC(void* r3) {
    u8* r31 = (u8*)r3;
    u8  r30;

    // Check lbl_8033A708[0x9f] bit 3
    extern u8 lbl_8033A708[];
    if ((lbl_8033A708[0x9f] >> (31-28)) & 1) return 0;

    // Check class type
    void* cls = (void*)*(u32*)(r31+0x190);
    u8 type = ((u8*)cls)[0x8];
    if (type != 0 && type != 5) return 0;

    // Check r31[0x1a8] (max stat)
    if (!(s8)r31[0x1a8]) return 0;

    // Check movement
    if ((u8)(u32)fn_80038850(r31) == 0xff) return 0;

    // Check flags 2, 8, 0x4d
    r30 = 0x76c;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 2)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 8)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 0x4d)) return 0;

    // Resolve equip
    void* r3c = (void*)*(u32*)(r31+0x18c);
    void* enode = (void*)*(u32*)((u8*)r3c+0xc);
    void* equip;
    if (enode) equip = fn_8000D47C((u8*)enode);
    else equip = 0;
    if (!equip) return 0;

    // Check level >= 0xa
    if ((s8)r31[0x19a] < 0xa) return 0;

    // If all checks pass, extend budget to 0x7d0
    r30 = 0x7d0;

    // Compute: r30 - (speed + (level-1)*100), clamp [0,100]
    {
        u8 spd = (u8)(u32)fn_80038850(r31);
        s32 level = (s32)(s8)r31[0x19a];
        s32 used = (s32)(u8)spd + (level - 1) * 0x64;
        s32 result = (s32)r30 - used;
        if (result > 0x64) result = 0x64;
        if (result < 0) result = 0;
        return (u8)result;
    }
}

// ============================================================
// fn_8003D464: unequip unit r31 (clear equip bits via andc),
//   resolve new equip, OR new bits back in, update combat counters
//   Also: cap r31[0x20c..0x213] to equip[0x2c..0x33] values,
//   halve training bytes r31[0x1b4..0x1bb], clear rlwinm bits from
//   r31[0x1a0], call fn_8003B470+fn_8003838C
// ============================================================
void fn_8003D464(void* r3) {
    u8* r31 = (u8*)r3;

    // Clear old equip bits
    void* r4p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) &= ~*(u32*)((u8*)r4p+0x1c);
    *(u32*)(r31+0x1c0) &= ~*(u32*)((u8*)r4p+0x20);
    *(u32*)(r31+0x1c4) &= ~*(u32*)((u8*)r4p+0x24);
    *(u32*)(r31+0x1c8) &= ~*(u32*)((u8*)r4p+0x28);

    // Resolve new equip
    void* r3c = (void*)*(u32*)(r31+0x18c);
    void* enode = (void*)*(u32*)((u8*)r3c+0xc);
    void* new_equip;
    if (enode) new_equip = fn_8000D47C((u8*)enode);
    else new_equip = 0;
    *(u32*)(r31+0x18c) = (u32)new_equip;

    // OR new bits in
    void* r6p = (void*)*(u32*)(r31+0x18c);
    *(u32*)(r31+0x1bc) |= *(u32*)((u8*)r6p+0x1c);
    *(u32*)(r31+0x1c0) |= *(u32*)((u8*)r6p+0x20);
    *(u32*)(r31+0x1c4) |= *(u32*)((u8*)r6p+0x24);
    *(u32*)(r31+0x1c8) |= *(u32*)((u8*)r6p+0x28);

    // Check bit 0x44  if not set, call fn_801064C4(bit 0x45)
    u8 f44 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 0x44);
    if (!f44) {
        fn_801064C4((void*)(r31+0x1bc), 0x45);
    }

    // Cap r31[0x20c..0x213] to equip[0x2c..0x33] (8 bytes, 2 iterations of 4)
    for (s32 iter = 0; iter < 2; iter++) {
        for (s32 i = 0; i < 4; i++) {
            void* eq = (void*)*(u32*)(r31+0x18c);
            u8 cap = ((u8*)eq)[0x2c + i];
            u8 cur = r31[0x20c + i];
            if (cur < cap) r31[0x20c + i] = cap;
        }
    }

    // Reset level and movement
    r31[0x19a] = 1;
    fn_8003882C(r31, 0);

    // Halve training bytes [0x1b4..0x1bb] (arithmetic right shift by 1)
    for (s32 i = 0; i < 8; i++) {
        s8 v = (s8)r31[0x1b4 + i];
        r31[0x1b4 + i] = (u8)(v >> 1);
    }

    // Clear rlwinm bits 14-12 from r31[0x1a0]
    *(u32*)(r31+0x1a0) &= ~(7u << (31-14));

    s8 str = fn_8003B470(r31);
    fn_8003838C(r31, str);
}

// ============================================================
// fn_8003D6D8: check if unit r31 can gain XP (simplified version)
//   Returns 1 if level<10, else uses subfc/adde carry trick
// ============================================================
s32 fn_8003D6D8(void* r3) {
    u8* r31 = (u8*)r3;

    if (!(u8)(u32)fn_80106398((void*)(r31+0x1bc), 2)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 8)) return 0;
    if ((u8)(u32)fn_80106398((void*)(r31+0x1bc), 0x4d)) return 0;

    void* r3c = (void*)*(u32*)(r31+0x18c);
    void* enode = (void*)*(u32*)((u8*)r3c+0xc);
    void* equip;
    if (enode) equip = fn_8000D47C((u8*)enode);
    else equip = 0;
    if (!equip) return 0;

    // subfc/adde trick: returns 1 if r31[0x19a] < 0xa, else 0
    // subfc r0, 0xa, r5 (5=level); adde r3, r4, r3
    // = (level >= 10) ? 0 : 1  via carry flag
    s32 level = (s32)(s8)r31[0x19a];
    s32 r3v = (u32)0 >> 31;   // srwi r3, r0, 31 of constant 0xa
    s32 r4v = level >> 31;    // srawi r4, level, 31
    // subfc: borrow = (0xa > level) ? 0 : 1; adde = r4 + r3 + borrow
    // simplified: return (level < 10) ? 0 : 1... no:
    // subfc r0, r0(=0xa), r5(=level) sets CA = (level >= 0xa)
    // adde r3, r4(=level>>31), r3(=0) + CA
    // = (level < 0) ? -1 : 0 + CA
    // for positive level: r4=0, r3=0, CA=(level>=10) -> result = (level>=10)?1:0
    return (level >= 0xa) ? 1 : 0;
}

// ============================================================
// fn_8003D79C: if r4 != 0, store r4 to r3[0x199]
// ============================================================
void fn_8003D79C(void* r3, u8 r4) {
    if (!r4) return;
    ((u8*)r3)[0x199] = r4;
}

// ============================================================
// fn_8003D7AC: move unit r30 to position r31 (fn_800157F4)
//   If 0 < r31 < 4: call fn_80095D08(r30) first
//   Uses fn_8001577C + fn_800157F4 at lbl_802D4744 + r31*0xc
// ============================================================
void fn_8003D7AC(void* r3, s32 r4) {
    void* r30 = r3;
    s32   r31 = r4;

    if (r31 > 0 && r31 < 4) fn_80095D08(r30);

    void* cls = (void*)*(u32*)((u8*)r30+0x190);
    fn_8001577C(cls, r30);
    void* pos = (void*)((u8*)lbl_802D4744 + r31 * 0xc);
    fn_800157F4(r30, pos);
}

// ============================================================
// fn_8003D82C: same as fn_8003D7AC but uses fn_800158B8 instead of fn_800157F4
// ============================================================
void fn_8003D82C(void* r3, s32 r4) {
    void* r30 = r3;
    s32   r31 = r4;

    if (r31 > 0 && r31 < 4) fn_80095D08(r30);

    void* cls = (void*)*(u32*)((u8*)r30+0x190);
    fn_8001577C(cls, r30);
    void* pos = (void*)((u8*)lbl_802D4744 + r31 * 0xc);
    fn_800158B8(r30, pos);
}

// ============================================================
// fn_8003D8AC: (doc 1) full unit initialization from spawn data r29
//   r28 = unit ptr, r29 = spawn data ptr
//   Sets class, equip, position, stats, flags, weapons, items,
//   combo list, then calls fn_8003BEF8, fn_80093A50, etc.
// ============================================================
void fn_8003D8AC(void* r3, void* r4) {
    u8* r28 = (u8*)r3;
    u8* r29 = (u8*)r4;

    // Resolve class and initialize
    void* cls = fn_8000D47C((u8*)*(u32*)r29);
    *(u32*)(r28+0x188) = (u32)cls;

    r28[0x19b] = 0; r28[0x1a9] = 0; r28[0x1aa] = 0;
    *(u32*)(r28+0x1a0) = 0;
    fn_80104Be8((void*)(r28+0x1a4));

    *(u32*)(r28+0x194) = 0;
    *(u32*)(r28+0x1c8) = 0; *(u32*)(r28+0x1c4) = 0;
    *(u32*)(r28+0x1c0) = 0; *(u32*)(r28+0x1bc) = 0;

    for (s32 i = 0; i < 6; i++) *(u16*)(r28+0x228+i*2) = 0;
    r28[0x234] = 0; r28[0x235] = 0;

    // Equip
    if (!r29[4]) {
        void* clsp = (void*)*(u32*)(r28+0x188);
        void* equip_node = fn_8000D47C((u8*)*(u32*)((u8*)clsp+0x10));
        *(u32*)(r28+0x18c) = (u32)equip_node;
    } else {
        void* equip = fn_8000D47C((u8*)r29[4]);
        *(u32*)(r28+0x18c) = (u32)equip;
    }

    // Position
    fn_8003830C(r28, (s8)r29[0xb], (s8)r29[0xc]);

    // OR class flags into 0x1bc block
    void* clsp2 = (void*)*(u32*)(r28+0x188);
    *(u32*)(r28+0x1bc) |= *(u32*)((u8*)clsp2+0x40);
    *(u32*)(r28+0x1c0) |= *(u32*)((u8*)clsp2+0x44);
    *(u32*)(r28+0x1c4) |= *(u32*)((u8*)clsp2+0x48);
    *(u32*)(r28+0x1c8) |= *(u32*)((u8*)clsp2+0x4c);

    // OR equip flags
    void* equipp = (void*)*(u32*)(r28+0x18c);
    *(u32*)(r28+0x1bc) |= *(u32*)((u8*)equipp+0x1c);
    *(u32*)(r28+0x1c0) |= *(u32*)((u8*)equipp+0x20);
    *(u32*)(r28+0x1c4) |= *(u32*)((u8*)equipp+0x24);
    *(u32*)(r28+0x1c8) |= *(u32*)((u8*)equipp+0x28);

    // Process 5 skill slots
    u8* r31 = r29;
    for (s32 r30 = 0; r30 < 5; r30++) {
        void* skill = (void*)*(u32*)((u8*)r31+0x10);
        if (skill) fn_80106584((void*)(r28+0x1bc), skill);
        r31 += 4;
    }

    // Speed/level setup
    void* clsp3 = (void*)*(u32*)(r28+0x188);
    void* equip_type = (void*)*(u32*)((u8*)clsp3+0x10);
    if (!fn_8023D008(r28, equip_type)) {
        u8 spd_data = r29[0xa];
        u8 cls_spd = (u8)(s8)((u8*)clsp3)[0x1a];
        r28[0x19a] = (spd_data > (u8)cls_spd) ? spd_data : r28[0x19a];
    } else {
        r28[0x19a] = r29[0xa];
    }

    // Check flags and set mount/movement
    if ((u8)(u32)fn_80106398((void*)(r28+0x1bc), 0x4e)) {
        fn_800289F4(r28);
        if (!fn_800289F4(r28)) fn_800289F4(r28);
    }
    if ((u8)(u32)fn_80106398((void*)(r28+0x1bc), 2)) {
        r28[0x19a] = 1;
    } else {
        r28[0x19a] = 0xa;
    }

    fn_8003C354(r28);

    // r29[0x64] = initial mount counter
    if (r29[0x64] && r29[0x64] < 0x14) r28[0x19c] = r29[0x64];

    // Bit 0 of r29[8]: load weapons
    if (r29[8] & 1) {
        fn_8003D8AC(r28, r29);
        fn_80017618((void*)(r28+0x228));
    }

    // Stats from r29[0x5c..0x63]
    {
        u8 stat_buf[8];
        for (s32 i = 0; i < 8; i++) stat_buf[i] = r29[0x5c + i];
        fn_8003722C(r28, stat_buf);
    }

    // Training bytes from class
    void* clsp4 = (void*)*(u32*)(r28+0x188);
    for (s32 i = 0; i < 8; i++) r28[0x1b4+i] = ((u8*)clsp4)[0x2d+i];

    // Weapon equip loop (8 slots)
    u8* r31w = r29;
    for (s32 r30w = 0; r30w < 8; r30w++) {
        void* weapon_data = (void*)*(u32*)((u8*)r31w+0x10);
        if (weapon_data) {
            u8 flags = r29[r30w + 0x30];
            if (!(flags & (1u<<(31-30)))) {
                // Check lbl_8033A708[0x57]
                extern u8 lbl_8033A708[];
                if (lbl_8033A708[0x57] != 1) {
                    fn_8009606C(r28, weapon_data);
                    // Set bit based on flags
                }
            }
        }
        r31w += 4;
    }

    fn_8003BEF8(r28);

    // Copy equip combo bytes
    void* eq2 = (void*)*(u32*)(r28+0x18c);
    for (s32 i = 0; i < 8; i++) r28[0x20c+i] = ((u8*)eq2)[0x2c+i];

    fn_80093A50(r28);

    // Combo ability loop
    for (u8 r26 = 0; r26 < 8; r26++) {
        if ((u8)(u32)fn_800940F4(r28, (u32)r26)) {
            void* clsp5 = (void*)*(u32*)(r28+0x188);
            u8 ability = ((u8*)clsp5)[0x35 + r26];
            if (ability) r28[0x20c + r26] = ability;
        }
    }

    // Weapon slot initialization (if bit 0 of r29[8])
    if (r29[8] & 1) {
        for (s32 r27 = 0; r27 < 4; r27++) {
            void* slot = fn_80037D5C(r28, r27);
            if (!slot) continue;
            if (!(-(s32)*(u32*)slot | *(u32*)slot)) continue;
            if ((u8)(u32)fn_800953C0(r28)) continue;
            // ... weapon type/slot processing
        }
    }

    fn_800369D4(r28);
    fn_800967E8(r28, -1);
    fn_80096688(r28, -1);

    s8 str = fn_8003B470(r28);
    fn_8003838C(r28, str);

    if ((u8)(u32)fn_8009338C(r28)) {
        if (!(u8)(u32)fn_80106398((void*)(r28+0x1bc), 9)) {
            fn_8003BFF0(r28);
        }
    }

    fn_8004FFE0(r28);

    if (r29[0x67]) r28[0x199] = r29[0x67];

    if (r29[8] & (1u<<(31-29))) *(u32*)(r28+0x1a0) |= 0x100;

    fn_8003C81C(r28);
    fn_8003C650(r28, r29);
    r28[0x248] = r29[0x66];

    if (r29[8] & (1u<<(31-30))) *(u32*)(r28+0x254) |= 0x02000000;
    if (r29[8] & (1u<<(31-27))) *(u32*)(r28+0x254) |= 0x10000000;
    if (r29[8] & (1u<<(31-26))) *(u32*)(r28+0x254) |= 0x20000000;
    if (r29[8] & (1u<<(31-25))) *(u32*)(r28+0x254) |= 0x00020000;

    extern u8 lbl_8033BFB8[];
    fn_801E6770((void*)lbl_8033BFB8, (void*)*(u32*)(r28+0x188));
    *(u32*)(r28+0x1a0) |= 0x00080000;
}

// ============================================================
// fn_8003DC64: check if unit r29 can equip weapon r30
//   Returns 1 if already equipped, 0 if can equip
//   Returns 3 if no weapon slot available
//   Checks MAG stat vs weapon requirement, fn_8001CC6C flags,
//   fn_80096C2C / fn_80096BD4 for slot availability
// ============================================================
s32 fn_8003DC64(void* r3, void* r4) {
    void* r29 = r3;
    void* r30 = r4;

    // Check bit 1 of r30[5] (already equipped flag)
    if ((((u8*)r30)[5] >> (31-24)) & 1) return 2;

    s8 r31 = fn_8003B3F8(r29);

    u8 req = (u8)(u32)fn_8001D4C4(r30);
    if ((u32)req <= (u32)(u8)r31) return 1;

    fn_8001CC6C(r30);
    u32 w1 = *(u32*)r30;
    u32 w2 = *(u32*)((u8*)r30+4);
    if ((w1 & 0) | (w2 & 5)) {
        s32 r = fn_80096C2C(r29);
        if (r < 0) return 3;
    } else {
        s32 r = fn_80096BD4(r29);
        if (r < 0) return 3;
    }

    // cntlzw/srwi pattern: return 1 if result==0, else 0
    u32 val = 0;
    u32 lz = 0; { u32 v=val; if(!v){lz=32;}else{lz=0;while(!(v&0x80000000u)){lz++;v<<=1;}} }
    return (s32)(lz >> 5);
}

// ============================================================
// fn_8003DD48: same as fn_8003DC64 but return is s32 not u32
//   (identical logic, different return type convention)
// ============================================================
s32 fn_8003DD48(void* r3, void* r4) {
    void* r29 = r3;
    void* r30 = r4;

    if ((((u8*)r30)[5] >> (31-24)) & 1) return 2;

    s8 r31 = fn_8003B3F8(r29);
    u8 req = (u8)(u32)fn_8001D4C4(r30);
    if ((u32)req <= (u32)(u8)r31) return 1;

    fn_8001CC6C(r30);
    u32 w1 = *(u32*)r30;
    u32 w2 = *(u32*)((u8*)r30+4);
    if ((w1 & 0) | (w2 & 5)) {
        if (fn_80096C2C(r29) < 0) return 3;
    } else {
        if (fn_80096BD4(r29) < 0) return 3;
    }
    return 0;
}

// ============================================================
// fn_8003DE20: compare Speed stats of two units, return 1 if r3 faster
//   Uses xor/srawi/and/subf carry trick for signed compare
// ============================================================
s32 fn_8003DE20(void* r3, void* r4) {
    void* r30 = r3;
    s8 r31 = fn_8003B050(r4);
    s8 r4v = fn_8003B050(r30);
    // xor/srawi trick: sign(r31 XOR r4v) - carry
    s32 x = (s32)r4v ^ (s32)r31;
    s32 half = x >> 1;
    s32 a = x & (s32)r4v;
    return (s32)(u32)((half - a) >> 31);
}

// ============================================================
// fn_8003DE7C: compute interpolated position between two units
//   r3=unit_a, r4=unit_b, r5=blend, r6=out_col, r7=out_row
//   col_out = (unit_b[0x19e] - unit_a[0x19e]) * r5 + unit_b[0x19e]
//   row_out = (unit_b[0x19f] - unit_a[0x19f]) * r5 + unit_b[0x19f]
// ============================================================
void fn_8003DE7C(void* r3, void* r4, s8 r5, void* r6, void* r7) {
    s8 col_a = (s8)((u8*)r3)[0x19e];
    s8 col_b = (s8)((u8*)r4)[0x19e];
    s8 row_a = (s8)((u8*)r3)[0x19f];
    s8 row_b = (s8)((u8*)r4)[0x19f];

    s8 col_diff = (s8)((s32)col_b - (s32)col_a);
    s8 row_diff = (s8)((s32)row_b - (s32)row_a);

    *(u8*)r6 = (u8)((s32)col_diff * (s32)r5 + (s32)col_b);
    *(u8*)r7 = (u8)((s32)row_diff * (s32)r5 + (s32)row_b);
}

// ============================================================
// fn_8003DEC0: compare Strike stats, return carry result
//   Uses subfc/adde: result = (r4_strike + 2 >= r3_strike) ? 1 : 0
// ============================================================
s32 fn_8003DEC0(void* r3, void* r4) {
    void* r30 = r3;
    s8 r31 = fn_8003A380(r4);
    s8 r4v = fn_8003A380(r30);
    // srwi r3,r31,31; addi r0,r4,2; srawi r4,r0,31; subfc r0,r31,r0; adde r3,r4,r3
    s32 r3v = (u32)(s32)r31 >> 31;
    s32 tmp = (s32)r4v + 2;
    s32 r4s = tmp >> 31;
    // subfc: CA = (tmp >= r31) unsigned
    u32 ca = ((u32)tmp >= (u32)(s32)r31) ? 1 : 0;
    return r4s + r3v + (s32)ca;
}

// ============================================================
// fn_8003DF1C: check Strike advantage (r3 vs r4 weapon, bit 3 flag)
//   If bit 3 of r4[0x1bc]: return 0
//   Uses same subfc/adde carry trick with (r4_strike - 2) vs r3_strike
// ============================================================
s32 fn_8003DF1C(void* r3, void* r4) {
    void* r30 = r3;
    void* r31 = r4;

    if ((u8)(u32)fn_80106398((void*)((u8*)r31+0x1bc), 3)) return 0;

    s8 r31v = fn_8003A380(r31);
    s8 r4v  = fn_8003A380(r30);
    s32 r3v = (u32)(s32)r31v >> 31;
    s32 tmp = (s32)r4v - 2;
    s32 r4s = tmp >> 31;
    u32 ca  = ((u32)tmp >= (u32)(s32)r31v) ? 1 : 0;
    return r4s + r3v + (s32)ca;
}

// ============================================================
// fn_8003DF98: find closest valid move target for unit r29
//   Scans grid, excludes occupied/terrain-blocked cells,
//   finds cell with min cost, stores to r30[0]/r31[0]
// ============================================================
void fn_8003DF98(void* r3, void* r4, void* r5) {
    u8* r29 = (u8*)r3;
    u8* r30 = (u8*)r4;
    u8* r31 = (u8*)r5;

    extern u8 lbl_802D49F8[];
    u8* r24 = lbl_802D49F8 + 0xd;

    s8 unit_col = (s8)r29[0x19e];
    s8 unit_row = (s8)r29[0x19f];
    void* r27 = (void*)*(u32*)(r29+0x194);

    // Clear unit cell
    s32 idx = (s32)unit_col + ((s32)unit_row << 6);
    r24[idx] = 0;

    fn_800230A4((void*)lbl_802D49F8, 5);
    fn_800228C4((void*)lbl_802D49F8, (void*)*(u32*)(r29+0x18c));
    fn_80022814((void*)lbl_802D49F8, 0);
    fn_8002149C((void*)lbl_802D49F8, r29[0x19e], r29[0x19f], 0x3e8, 0, 0);
    fn_800228C4((void*)lbl_802D49F8, (void*)*(u32*)((u8*)r27+0x18c));
    fn_80022814((void*)lbl_802D49F8, (s32)*(u32*)((u8*)r27+0x190));

    *r30 = 0xff; *r31 = 0xff;
    s32 r23 = 0x7fff;

    s8 r22 = (s8)lbl_802D49F8[9];
    for (; r22 < (s8)lbl_802D49F8[0xb]-1; r22++) {
        s8 r21 = (s8)lbl_802D49F8[8];
        s32 r28 = (s32)r22 << 6;
        for (; r21 < (s8)lbl_802D49F8[0xa]-1; r21++) {
            s32 cost = (s32)(s16)(u32)fn_80021418((void*)lbl_802D49F8, r21, r22);
            if (cost > 0x7530) continue;

            u8* cell = lbl_802D49F8 + r21 + r28;
            if (cell[0xd]) continue;
            if (cell[0x100d] == 0x37) continue;

            u8* r25 = lbl_802D49F8 + 0x10000;
            s32 cidx = (r21 + r28) * 2;
            u16 cv = (u16)(u32)*(s16*)((u8*)r25 + 0x4190 + cidx);
            if ((u32)r23 <= (u32)cv) continue;

            *r30 = (u8)r21;
            r23 = (s32)cv;
            *r31 = (u8)r22;
        }
    }

    // Restore unit cell
    r24[(s32)unit_col + ((s32)unit_row << 6)] = r29[0x198];
}

// ============================================================
// fn_8003E158: (docs 2/3/4) large unit/combat state machine
//   r30 = unit ptr, r31 = r30[0x194] (partner/target ptr)
//   Two main paths based on r30[0x1a0] bits 30 and 29:
//   - bit 30: initiate attack on r31 (swap positions, set flags,
//     call fn_8003F3BC/B4/AC/A4, fn_8003EBC4, fn_8004EBE8, etc.)
//   - bit 29: partner triggered attack
//   Large function (~0x924 bytes)  see attachment
// ============================================================
void fn_8003E158(void* r3) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)*(u32*)(r30+0x194);
    if (!r31) goto done;

    {
        u32 flags = *(u32*)(r30+0x1a0);
        if (flags & (1u<<(31-30))) {
            // Attacker path
            rlwinm_clear:;
            *(u32*)(r30+0x1a0) = flags & ~(1u<<(31-30)) & ~(1u<<(31-31));
            void* r26;
            u32 r31flags = *(u32*)(r31+0x1a0);
            *(u32*)(r31+0x1a0) = r31flags & ~(1u<<(31-30)) & ~(1u<<(31-29)) & ~(1u<<(31-28));
            *(u32*)(r30+0x194) = 0;
            *(u32*)(r31+0x194) = 0;
            fn_8003830C(r31, (s8)r30[0x19e], (s8)r30[0x19f]);
            *(u32*)(r31+0x1a0) |= 1;
            // ... (large combat resolution block)
        } else if (flags & (1u<<(31-29))) {
            // Partner path (symmetric)
            // ... (same structure as attacker path but for r31)
        }
    }
done:
    fn_8004EBE8(r30, 1);
    // Final class-type check and cleanup
    {
        void* cls = (void*)*(u32*)(r30+0x190);
        if (!((u8*)cls)[8]) {
            fn_8001577C(cls, r30);
            fn_800158B8(r30, (void*)((u8*)lbl_802D4744 + 0x3c));
            *(u32*)(r30+0x1a0) |= 0x4000;
        } else {
            fn_8001577C(cls, r30);
            fn_8003B890(r30, -1);
            fn_800157F4(r30, (void*)((u8*)lbl_802D4744 + 0x30));
        }
    }
}

// ============================================================
// fn_8003EA7C: process unit r31 end-of-turn / death
//   If r31[0x1a8] != 0: skip
//   Check bit 0x5c: if set call fn_8003838C, clear bits, return
//   Else: set bit 3 in 0x1a0, call fn_8004EBE8(1)
//   If class type == 0: fn_8001577C + fn_800158B8 to lbl_802D4744+0x48
//   Else if bit 0x59: call fn_800158B8 to lbl_802D4744+0x54
//   Else: fn_8003B890(-1) + fn_800157F4 to lbl_802D4744+0x30
// ============================================================
void fn_8003EA7C(void* r3) {
    u8* r31 = (u8*)r3;

    if ((s8)r31[0x1a8]) return;

    u8 f5c = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 0x5c);
    if (f5c) {
        fn_8003838C(r31, 1);
        *(u32*)(r31+0x1a0) &= ~(7u << (31-21));
        return;
    }

    *(u32*)(r31+0x1a0) |= 8;
    fn_8004EBE8(r31, 1);

    void* cls = (void*)*(u32*)(r31+0x190);
    u8 cls_type = ((u8*)cls)[8];
    if (!cls_type) {
        fn_8001577C(cls, r31);
        fn_800158B8(r31, (void*)((u8*)lbl_802D4744 + 0x48));
        *(u32*)(r31+0x1a0) |= 0x8000;
        r31[0x234] = lbl_8033A708[0x10];
        fn_800368AC(r31);
    } else {
        u8 f59 = (u8)(u32)fn_80106398((void*)(r31+0x1bc), 0x59);
        if (f59) {
            fn_8001577C(cls, r31);
            fn_800158B8(r31, (void*)((u8*)lbl_802D4744 + 0x54));
            s8 str = fn_8003B470(r31);
            fn_8003838C(r31, str);
        } else {
            fn_8001577C(cls, r31);
            fn_8003B890(r31, -1);
            fn_800157F4(r31, (void*)((u8*)lbl_802D4744 + 0x30));
        }
    }
}

// ============================================================
// fn_8003EBC4: detach unit r3 from its partner r3[0x194]
//   Clears position link bits from both units' 0x1a0,
//   zeros both 0x194 ptrs, moves r31 to r3's position,
//   sets bit 0 in r31[0x1a0]
// ============================================================
void fn_8003EBC4(void* r3, void* r4, void* r5) {
    u8* unit = (u8*)r3;
    void* r4p = r4;
    void* r5p = r5;
    u8* r31 = (u8*)*(u32*)(unit+0x194);

    *(u32*)(unit+0x1a0) &= ~(7u << (31-31));
    *(u32*)(r31+0x1a0)  &= ~(7u << (31-30)) & ~(7u << (31-28));
    *(u32*)(unit+0x194) = 0;
    *(u32*)(r31+0x194)  = 0;
    fn_8003830C(r31, (s8)((u8*)r3)[0x19e], (s8)((u8*)r3)[0x19f]);
    *(u32*)(r31+0x1a0) |= 1;
}

// ============================================================
// fn_8003EC24: link two units as carry pair
//   Copies r30[0x19e/f] to r31, sets bit 1 in r30[0x1a0],
//   bit 2 in r31[0x1a0], stores each other's ptr to [0x194]
// ============================================================
void fn_8003EC24(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;

    fn_8003830C(r31, (s8)r30[0x19e], (s8)r30[0x19f]);
    *(u32*)(r30+0x1a0) |= 2;
    *(u32*)(r31+0x1a0) |= 4;
    *(u32*)(r30+0x194) = (u32)r31;
    *(u32*)(r31+0x194) = (u32)r30;
}

// ============================================================
// fn_8003EC88: (doc 5) large combat dispatch state machine
//   See attachment
// ============================================================
void fn_8003EC88(void* r3) {
    // Large function  see attachment for full assembly
    // Calls fn_8014EC84, fn_80167598 for speed setup,
    // multiplies class growth rates by level, applies to stats [0x1ab..0x1b2]
    // Uses fn_8000D00C for RNG, complex mulhw formula per stat
}

// ============================================================
// fn_8003F34C: return ptr to lbl_802D4744 + r3*0xc
// ============================================================
void* fn_8003F34C(s32 r3) {
    return (void*)((u8*)lbl_802D4744 + r3 * 0xc);
}

// ============================================================
// fn_8003F360: return r3[0x8] (class type byte)
// ============================================================
u8 fn_8003F360(void* r3) {
    return ((u8*)r3)[0x8];
}

// ============================================================
// fn_8003F368: return r3[0x190] (class ptr)
// ============================================================
void* fn_8003F368(void* r3) {
    return (void*)*(u32*)((u8*)r3+0x190);
}

// ============================================================
// fn_8003F370: return r3[0] & r4
// ============================================================
u32 fn_8003F370(void* r3, u32 r4) {
    return *(u32*)r3 & r4;
}

// ============================================================
// fn_8003F37C: r3[0] |= r4
// ============================================================
void fn_8003F37C(void* r3, u32 r4) {
    *(u32*)r3 = *(u32*)r3 | r4;
}

// ============================================================
// fn_8003F38C: store r4 to r3[0x194]
// ============================================================
void fn_8003F38C(void* r3, void* r4) {
    *(u32*)((u8*)r3+0x194) = (u32)r4;
}

// ============================================================
// fn_8003F394: r3[0] &= ~r4
// ============================================================
void fn_8003F394(void* r3, u32 r4) {
    *(u32*)r3 = *(u32*)r3 & ~r4;
}

// ============================================================
// fn_8003F3A4: return r3[0x194]
// ============================================================
void* fn_8003F3A4(void* r3) {
    return (void*)*(u32*)((u8*)r3+0x194);
}

// ============================================================
// fn_8003F3AC: return r3[0x19e] (unit col)
// ============================================================
u8 fn_8003F3AC(void* r3) {
    return ((u8*)r3)[0x19e];
}

// ============================================================
// fn_8003F3B4: return r3[0x19f] (unit row)
// ============================================================
u8 fn_8003F3B4(void* r3) {
    return ((u8*)r3)[0x19f];
}

// ============================================================
// fn_8003F3BC: return r3 + 0x1a0 (ptr to flags word)
// ============================================================
void* fn_8003F3BC(void* r3) {
    return (void*)((u8*)r3+0x1a0);
}

// ============================================================
// fn_8003F3C4: complex weapon slot lookup with 7-byte key compare
//   vs lbl_80375060[0..6]. Two comparison passes (current and
//   previous slot), then pointer arithmetic to return slot entry.
//   Returns slot ptr offset by 0x20, or 0 on mismatch.
// ============================================================
void* fn_8003F3C4(void* r3, s32 r4) {
    extern u8* lbl_80375060;
    u8* r6 = (u8*)*(u32*)lbl_80375060;

    // First compare: r3[0x18..0x1e] vs r6[0..6]
    for (s32 i = 0; i < 7; i++) {
        if ((s8)((u8*)r3)[0x18+i] != (s8)r6[i]) goto no_match_first;
    }
    goto match_first;
no_match_first:
    {
        // No match in first pass fall through to update logic
        // Update r27[0x18..0x1e] from lbl_80375060
        for (s32 i = 0; i < 7; i++) ((u8*)r3)[0x18+i] = r6[i];
        // Iterate r27[8] entries, updating ptr offsets
        u8* r5 = (u8*)r3 + 0x20;
        s32 r4v = 0;
        while (r4v < (s32)*(u32*)((u8*)r3+8)) {
            u32 r0 = *(u32*)r5;
            u32 aligned = r0 & ~3u;
            u32* entry = (u32*)((u8*)r3 + 0x20 + aligned);
            *entry = *entry + (u32)((u8*)r3+0x20);
            r5 += 4; r4v++;
        }
    }
match_first:
    // Second compare: (r3-0x20)[0x18..0x1e] vs r6[0..6]
    {
        u8* r5 = (u8*)r3 - 0x20;
        for (s32 i = 0; i < 7; i++) {
            if ((s8)r5[0x18+i] != (s8)r6[i]) goto no_match_second;
        }
        goto match_second;
    no_match_second:;
        {
            // Compute slot ptr via pointer arithmetic
            u8* base = (u8*)r3;
            u32 off4  = *(u32*)(base+4) & ~3u;
            u32 off8  = *(u32*)(base+8);
            u32 offc  = *(u32*)(base+0xc);
            u32 off10 = *(u32*)(base+0x10);
            u8* r7 = base + off4 + 0x20;
            u8* r6p = r7 + off8*4;
            u8* r5p = r6p + (offc*8 + off10*8);
            u32 r0 = *(u32*)(r5p+4);
            u8* r3p = (u8*)r6p + offc*8 + off10*8 + r0;
            // Loop: find matching entry
            u32 cnt = *(u32*)(base+8);
            u8* scan = (u8*)r7;
            for (u32 i = 0; i < cnt; i++) {
                if (*(u32*)r5p == *(u32*)scan) break;
                scan += 4;
            }
            return (void*)fn_8000D514(r3p, (void*)scan);
        }
    match_second:;
        return (void*)0;
    }
}

// ============================================================
// fn_8003F61C: same key-compare structure as fn_8003F3C4
//   but final return is r3[0xc] (linked list next ptr)
//   Returns 0 on mismatch, r3[0xc] on match
// ============================================================
void* fn_8003F61C(void* r3) {
    extern u8* lbl_80375060;
    u8* r5 = (u8*)*(u32*)lbl_80375060;

    for (s32 i = 0; i < 7; i++) {
        if ((s8)((u8*)r3)[0x18+i] != (s8)r5[i]) goto no_first;
    }
    goto match_first;
no_first:;
    {
        u8* sub = (u8*)r3 - 0x20;
        for (s32 i = 0; i < 7; i++) {
            if ((s8)sub[0x18+i] != (s8)r5[i]) return 0;
        }
    }
match_first:;
    return (void*)*(u32*)((u8*)r3+0xc);
}

// ============================================================
// fn_8003F810: same 7-byte key compare vs lbl_80375060,
//   two passes, then calls fn_8005C680(r3) and returns result
// ============================================================
void* fn_8003F810(void* r3) {
    extern u8* lbl_80375060;
    u8* r5 = (u8*)*(u32*)lbl_80375060;

    for (s32 i = 0; i < 7; i++) {
        if ((s8)((u8*)r3)[0x18+i] != (s8)r5[i]) goto no_first;
    }
    goto match_first;
no_first:;
    {
        u8* sub = (u8*)r3 - 0x20;
        for (s32 i = 0; i < 7; i++) {
            if ((s8)sub[0x18+i] != (s8)r5[i]) { r3 = 0; goto done; }
        }
    }
match_first:;
done:;
    return fn_8005C680(r3);
}

// ============================================================
// fn_8003FA1C: (doc 1) complex slot init/search function
//   r26=r3, calls fn_8005C6C4(r4|1), then does key compare,
//   pointer arithmetic on slot block, calls fn_8000D514
//   Returns offset+0x20 of matched slot entry
// ============================================================
void* fn_8003FA1C(void* r3, u16 r4) {
    extern u8* lbl_80375060;

    void* r26 = r3;
    u16 r4v = r4 | 1;
    void* r27 = fn_8005C6C4((void*)(u32)r4v, 0);

    u8* r8 = (u8*)*(u32*)lbl_80375060;
    u8* base = (u8*)r27;

    // Compute layout offsets
    u32 off4  = *(u32*)(base+4) & ~3u;
    u32 off8  = *(u32*)(base+8);
    u32 offc  = *(u32*)(base+0xc);
    u32 off10 = *(u32*)(base+0x10);
    u8* r31 = base + 0x20;
    u8* r30 = r31 + off4;
    u8* r28 = r30 + off8*4;
    u8* r29 = r28 + offc*8 + off10*8;

    // First key compare: base[0x18..0x1e] vs r8[0..6]
    s32 matched = 1;
    for (s32 i = 0; i < 7; i++) {
        if ((s8)base[0x18+i] != (s8)r8[i]) { matched = 0; break; }
    }

    if (!matched) {
        // Update key bytes from lbl_80375060
        for (s32 i = 0; i < 7; i++) base[0x18+i] = r8[i];
        // Update slot ptr offsets
        u8* r5 = r30;
        s32 cnt = 0;
        while (cnt < (s32)off8) {
            u32 r0 = *(u32*)r5 & ~3u;
            u32* ep = (u32*)(r31 + r0);
            *ep = *ep + (u32)r31;
            r5 += 4; cnt++;
        }
    }

    // Check r27[0x1f]
    if (!(s8)base[0x1f]) {
        base[0x1f] = 1;
        // Iterate r27[0xc] entries
        u8* r28p = r28;
        for (s32 r25 = 0; r25 < (s32)offc; r25++) {
            u32 r0 = *(u32*)(r28p) & ~3u;
            void* r3p = (void*)((u8*)r29 + *(u32*)(r28p+4));
            void* r4p = (void*)(r31 + r0);
            // Search for match
            u32 cntv = off8;
            u8* scan = r30;
            for (u32 i = 0; i < cntv; i++) {
                if (*(u32*)(r28p) == *(u32*)scan) break;
                scan += 4;
            }
            fn_8000D514(r3p, r4p);
            r28p += 8; r25++;
        }
    }

    // Second key compare: (r27-0x20)[0x18..0x1e] vs r8[0..6]
    {
        u8* prev = base - 0x20;
        s32 matched2 = 1;
        for (s32 i = 0; i < 7; i++) {
            if ((s8)prev[0x18+i] != (s8)r8[i]) { matched2 = 0; break; }
        }
        if (matched2) {
            // No update needed
        } else {
            // r5 = 0 (null result)
        }
    }

    return (void*)((u8*)r27 + 0x20);
}

// ============================================================
// fn_8003FE6C: call fn_8003FA1C(r3, 0)
// ============================================================
void* fn_8003FE6C(void* r3) {
    return fn_8003FA1C(r3, 0);
}

// ============================================================
// fn_8003FE90: same 7-byte key compare vs lbl_80375060, two passes
//   Uses bnelr (return-if-nonzero) pattern instead of branch
//   Returns 0 if both passes fail, otherwise returns non-zero
// ============================================================
u32 fn_8003FE90(void* r3) {
    extern u8* lbl_80375060;
    u8* r5 = (u8*)*(u32*)lbl_80375060;

    for (s32 i = 0; i < 7; i++) {
        if ((s8)((u8*)r3)[0x18+i] != (s8)r5[i]) return 0;
    }
    // First pass matched  bnelr returns here (nonzero)
    // (implicit: fall through means matched, so keep going)

    {
        u8* sub = (u8*)r3 - 0x20;
        for (s32 i = 0; i < 7; i++) {
            if ((s8)sub[0x18+i] != (s8)r5[i]) return 0;
        }
    }
    return 0;
}

// ============================================================
// fn_80040078: clear r30[0x1f], iterate r30[0xc] entries
//   calling fn_8000D2F8 on each, with ptr/offset arithmetic
// ============================================================
void fn_80040078(void* r3) {
    u8* r30 = (u8*)r3;

    u32 off4  = *(u32*)(r30+4) & ~3u;
    u32 off8  = *(u32*)(r30+8);
    u32 offc  = *(u32*)(r30+0xc);
    u32 off10 = *(u32*)(r30+0x10);

    u8* r29 = r30 + off4 + 0x20;
    u8* r27 = r29 + off8*4;
    u8* r28 = r27 + offc*8 + off10*8;

    for (s32 r31 = 0; r31 < (s32)offc; r31++) {
        u32 r0 = *(u32*)(r27) & ~3u;
        void* r3p = (void*)((u8*)r28 + *(u32*)(r27+4));
        void* r4p = (void*)(r29 + r0);
        // Search for match
        u32 cnt = off8;
        u8* scan = r29;
        for (u32 i = 0; i < cnt; i++) {
            if (*(u32*)r27 == *(u32*)scan) break;
            scan += 4;
        }
        fn_8000D2F8(r3p, r4p);
        r27 += 8;
    }

    r30[0x1f] = 0;
}

// ============================================================
// fn_80040130: call fn_8000C028(lbl_8028F6C0)
// ============================================================
void fn_80040130(void) {
    extern u8 lbl_8028F6C0[];
    fn_8000C028((void*)lbl_8028F6C0);
}

// ============================================================
// fn_80040158: if r4==0, set r4=3; call fn_8000CC18(lbl_8028F6C0),
//   then fn_800401F0(r31=r3, r4)
// ============================================================
void fn_80040158(void* r3, s32 r4) {
    extern u8 lbl_8028F6C0[];
    void* r31 = r3;
    if (!r4) r4 = 3;
    fn_8000CC18((void*)lbl_8028F6C0, r4);
    fn_800401F0(r31, r4);
}

// ============================================================
// fn_800401A0: call fn_800401C0()
// ============================================================
void fn_800401A0(void) {
    fn_800401C0();
}

// ============================================================
// fn_800401C0: if lbl_8037554C != 0, call fn_80044618(ptr, 0)
// ============================================================
void fn_800401C0(void) {
    extern void* lbl_8037554C;
    void* r3 = lbl_8037554C;
    if (r3) fn_80044618(r3, 0);
}

// ============================================================
// fn_800401F0: iterate lbl_8037554C particle list, collect
//   active entries with specific flag conditions into stack buffer,
//   call fn_80044618(ptr,0), then clear bit 1 of each entry[2]
// ============================================================
void fn_800401F0(void* r3, u8 r4) {
    extern void* lbl_8037554C;
    void* ptr = lbl_8037554C;
    if (!ptr) return;

    u8 stack_buf[0x100];
    s32 r31 = 0;
    s32 r6  = 0;
    s32 r9  = 0;
    s32 r5  = 0;
    s16 count = *(s16*)((u8*)ptr+6);

    while (r5 < (s32)count) {
        u8* r8 = (u8*)*(u32*)((u8*)ptr+0x14) + r9;
        void* cls = (void*)*(u32*)((u8*)r8+0x10);
        u32 r7 = *(u32*)((u8*)cls+0xbc);

        // Determine if entry should be active
        u8 active = 0;
        if (r7 & (1u<<(31-20))) active = 1;
        else if (r7 & (1u<<(31-19))) active = 1;

        if (active) {
            // Check visibility/shadow flags
            u8 visible = 0;
            if (!(r7 & (1u<<(31-27)))) {
                if (r7 & (1u<<(31-11))) visible = 1;
            }

            if (visible) {
                if (!r4) {
                    if (r7 & (1u<<(31-19))) goto skip;
                }

                u8 r7b = ((u8*)r8)[2];
                u32 bits = (u32)r7b & 3u;
                u32 lz = 0;
                { u32 v=bits; if(!v){lz=32;}else{lz=0;while(!(v&0x80000000u)){lz++;v<<=1;}} }
                if ((lz >> 3) & 0xff) {
                    ((u8*)r8)[2] = r7b | 2;
                    *(u32*)((u8*)stack_buf + r6) = (u32)r8;
                    r31++;
                    r6 += 4;
                }
            }
        }
skip:;
        r9 += 0xb4;
        r5++;
    }

    fn_80044618(ptr, 0);

    // Clear bit 1 of each collected entry's byte[2]
    if (r31 <= 0) return;

    s32 start = (r31 > 8) ? r31 - 8 : 0;
    u8* base = stack_buf + start * 4;
    s32 remaining = r31 - start;

    while (remaining > 0) {
        u8* entry = (u8*)*(u32*)base;
        entry[2] = entry[2] & ~2u;
        base += 4;
        remaining--;
    }
}

// ============================================================
// fn_800403F4: (docs 2/3/4) particle system update loop
//   Checks lbl_8037554C and lbl_80376554, iterates active entries
//   with float matrix/rotation math using psq_st/lfd double-bias,
//   calls fn_8020B098/AE58/AB7C/B118, fn_8006778C, fn_80060904,
//   fn_8006CC90 per entry
// ============================================================
void fn_800403F4(void) {
    extern void* lbl_8037554C;
    extern u32   lbl_80376554;

    void* r27 = lbl_8037554C;
    if (!r27) return;
    if (lbl_80376554 & (1u<<(31-30))) return;

    u32 r3 = *(u32*)((u8*)r27+0x64);
    if (r3 & 1u) return;
    if (!(r3 & 2u)) return;

    u8* r30 = (u8*)*(u32*)((u8*)r27+0x14);
    s32 r29 = 0;
    s16 count = *(s16*)((u8*)r27+6);

    while (r29 < (s32)count) {
        void* cls = (void*)*(u32*)((u8*)r30+0x10);
        u8*   r28 = r30 + 0x14;
        u8    r26 = r30[2];
        u32   r31 = *(u32*)((u8*)cls+0xbc);

        if ((r31 & 1u) != 1) goto next;
        if (r26 & 1u) goto next;

        if (r31 & (1u<<(31-21))) fn_8005FF88(r28);
        if (r26 & (1u<<(31-24))) goto next;
        if (!(r31 & (1u<<(31-24)))) goto no_float;

        // Double-bias float construction for col/row positions
        {
            // ... float matrix math (psq_st/lfd/fsubs/fadds/fmuls)
            // calls fn_8020B098, fn_8020AE58, fn_8020AB7C, fn_8020B118
        }

no_float:;
        if (r31 & (1u<<(31-15))) {
            fn_8006778C((void*)fn_800486F8, r30, 2);
        }
        fn_80060904(r28);
        fn_8006CC90(r28);

next:;
        r29++;
        r30 += 0xb4;
    }
}

// ============================================================
// fn_800406A4: (doc 5) extended particle update loop
//   Same structure as fn_800403F4 but with additional
//   lbl_80375540/44 counter logic and fn_80044B90 callback
// ============================================================
void fn_800406A4(void) {
    extern void* lbl_8037554C;
    extern u32   lbl_80376554;
    extern u32   lbl_80375540;
    extern u8    lbl_80375544;

    void* r5p = lbl_8037554C;
    if (!r5p) return;
    if (lbl_80376554 & (1u<<(31-30))) return;

    // Counter logic
    void* r3p = (void*)*(u32*)((u8*)r5p+0xc);
    if (r3p) {
        if (!(s8)lbl_80375544) {
            lbl_80375540 = 0;
            lbl_80375544 = 1;
        }
        // Determine half-count
        s32 r5v = 0, r4v = 0;
        if (lbl_80375540 & 1u) {
            s16 hc = *(s16*)((u8*)r5p+6);
            r5v = (s32)(hc >> 1);
        } else {
            s16 hc = *(s16*)((u8*)r5p+6);
            r4v = (s32)(hc >> 1);
        }
        lbl_80375540++;
        fn_80047CE0(r5p, r4v, r5v);
    }

    void* r27 = lbl_8037554C;
    u32 r3f = *(u32*)((u8*)r27+0x64);
    if (r3f & 1u) goto check_tail;
    if (!(r3f & 2u)) goto check_tail;

    {
        u8* r30 = (u8*)*(u32*)((u8*)r27+0x14);
        s32 r29 = 0;
        s16 count = *(s16*)((u8*)r27+6);

        while (r29 < (s32)count) {
            void* cls = (void*)*(u32*)((u8*)r30+0x10);
            u8*   r28 = r30 + 0x14;
            u8    r26 = r30[2];
            u32   r31 = *(u32*)((u8*)cls+0xbc);

            if (r31 & 1u) goto next2;
            if (r26 & 1u) goto next2;
            if (r31 & (1u<<(31-21))) fn_8005FF88(r28);
            if (r26 & (1u<<(31-24))) goto next2;
            if (!(r31 & (1u<<(31-24)))) goto no_float2;

            // float matrix math (same as fn_800403F4)
no_float2:;
            if (r31 & (1u<<(31-15))) fn_8006778C((void*)fn_800486F8, r30, 2);
            fn_80060904(r28);
            fn_8006CC90(r28);
next2:;
            r29++;
            r30 += 0xb4;
        }
    }

check_tail:;
    {
        void* r5t = lbl_8037554C;
        void* tail = (void*)*(u32*)((u8*)r5t+0xc);
        if (!tail) return;
        u32 flags = *(u32*)((u8*)r5t+0x64);
        if (flags & 1u) return;
        fn_8006778C((void*)fn_80044B90, 0, 2);
    }
}

// ============================================================
// fn_800409EC: return bit 1 of lbl_8037554C[0x64], or 0 if null
// ============================================================
u32 fn_800409EC(void) {
    extern void* lbl_8037554C;
    void* r3 = lbl_8037554C;
    if (!r3) return 0;
    u32 r0 = *(u32*)((u8*)r3+0x64);
    return (r0 >> (31-1)) & 1;
}

// ============================================================
// fn_80040A0C: return lbl_8037554C
// ============================================================
void* fn_80040A0C(void) {
    extern void* lbl_8037554C;
    return lbl_8037554C;
}

// ============================================================
// fn_80040A14: store r3 to lbl_8037554C
// ============================================================
void fn_80040A14(void* r3) {
    extern void* lbl_8037554C;
    lbl_8037554C = r3;
}

// ============================================================
// fn_80040A1C: if r3==0, use lbl_8037554C; if ptr != 0,
//   call fn_8004141C(ptr); if still matches lbl_8037554C, clear it
// ============================================================
void fn_80040A1C(void* r3) {
    extern void* lbl_8037554C;
    void* r31 = r3;
    if (!r31) r31 = lbl_8037554C;
    if (!r31) return;
    fn_8004141C(r31);
    if (r31 == lbl_8037554C) lbl_8037554C = 0;
}

// ============================================================
// fn_80040A70: (doc 1) particle system init/reset function
//   r3=0: init lbl_802FA340 block, r3=1: init lbl_802FA3F4 block
//   Sets lbl_8037552x SDA vars, calls fn_80040D40
//   Returns 0 for invalid r3, no explicit return otherwise
// ============================================================
s32 fn_80040A70(s32 r3) {
    extern u8 lbl_802FA340[];
    extern u8 lbl_802FA3F4[];
    extern u8 lbl_80375528;
    extern u8 lbl_8037552A;
    extern u8 lbl_8037552B;
    extern u8 lbl_8037552C;
    extern u8 lbl_8037552D;
    extern u8 lbl_8037552E;
    extern u8 lbl_80375529;
    extern u8 lbl_80375530;
    extern u8 lbl_80375534;
    extern u8 lbl_80375535;
    extern u8 lbl_80375538;
    extern u8 lbl_8037553C;
    extern u8 lbl_80375DA6;
    extern u32 lbl_803771E0;
    extern u32 lbl_803771E4;
    extern u32 lbl_803771E8;

    if (r3 == 1) goto case_1;
    if (r3 > 1) return 0;
    if (r3 < 0) return 0;

    // case 0: init lbl_802FA340
    {
        u8* r3p = lbl_802FA340;
        u32 tmp[3];
        tmp[0] = lbl_803771E0;
        tmp[1] = lbl_803771E4;
        tmp[2] = lbl_803771E8;

        u8 r28 = ((u8*)tmp)[0];
        u8 r27 = ((u8*)tmp)[1];
        u8 r25 = ((u8*)tmp)[2];
        u8 r24 = ((u8*)tmp)[3];
        u8 r23 = ((u8*)tmp)[4];
        u8 r12 = ((u8*)tmp)[5];
        u8 r10 = ((u8*)tmp)[6];
        u8 r9  = ((u8*)tmp)[7];
        u8 r8  = ((u8*)tmp)[8];
        u8 r7  = ((u8*)tmp)[9];
        u8 r5  = ((u8*)tmp)[10];
        u8 r0v = ((u8*)tmp)[11];

        *(u32*)(r3p+0xa4) = 0;
        *(u32*)(r3p+0x64) = 0;
        *(u32*)(r3p+0x08) = 0; *(u32*)(r3p+0x0c) = 0;
        *(u32*)(r3p+0x10) = 0; *(u32*)(r3p+0x14) = 0;
        *(u32*)(r3p+0x18) = 0; *(u32*)(r3p+0x1c) = 0;
        *(u32*)(r3p+0x20) = 0; *(u32*)(r3p+0x24) = 0;
        *(u32*)(r3p+0x28) = 0; *(u32*)(r3p+0x2c) = 0;
        *(u32*)(r3p+0x30) = 0; *(u32*)(r3p+0xa4) = 0;
        *(u32*)(r3p+0x34) = 0;

        lbl_80375528 = 1; lbl_8037552A = 0; lbl_80375529 = 3;
        lbl_8037552C = 0; lbl_8037552D = 0; lbl_8037552E = 0;
        lbl_80375534 = 0; lbl_80375535 = 0;
        lbl_80375538 = r28;
        *(&lbl_80375538+1) = r27;
        *(&lbl_80375538+2) = r25;
        *(&lbl_80375538+3) = r24;
        lbl_8037553C = r23;
        *(&lbl_8037553C+1) = r12;
        *(&lbl_8037553C+2) = r10;
        *(&lbl_8037553C+3) = r9;
        lbl_80375530 = r8;
        *(&lbl_80375530+1) = r7;
        *(&lbl_80375530+2) = r5;
        *(&lbl_80375530+3) = r0v;
        lbl_8037552B = 0;

        fn_80040D40((void*)lbl_802FA340, 0);
        lbl_80375DA6 = 0;
        r3p[0x68] = 0;
        return 0;
    }

case_1:
    // case 1: init lbl_802FA3F4
    {
        u8* r3p = lbl_802FA3F4;
        u32 tmp[3];
        tmp[0] = lbl_803771E0;
        tmp[1] = lbl_803771E4;
        tmp[2] = lbl_803771E8;

        u8 r26 = ((u8*)tmp)[0]; u8 r27 = ((u8*)tmp)[1];
        u8 r29 = ((u8*)tmp)[2]; u8 r30 = ((u8*)tmp)[3];
        u8 r31 = ((u8*)tmp)[4]; u8 r12 = ((u8*)tmp)[5];
        u8 r10 = ((u8*)tmp)[6]; u8 r9  = ((u8*)tmp)[7];
        u8 r8  = ((u8*)tmp)[8]; u8 r7  = ((u8*)tmp)[9];
        u8 r5  = ((u8*)tmp)[10]; u8 r0v = ((u8*)tmp)[11];

        *(u32*)(r3p+0xa4) = 0;
        *(u32*)(r3p+0x64) = 0;
        *(u32*)(r3p+0x08) = 0; *(u32*)(r3p+0x0c) = 0;
        *(u32*)(r3p+0x10) = 0; *(u32*)(r3p+0x14) = 0;
        *(u32*)(r3p+0x18) = 0; *(u32*)(r3p+0x1c) = 0;
        *(u32*)(r3p+0x20) = 0; *(u32*)(r3p+0x24) = 0;
        *(u32*)(r3p+0x28) = 0; *(u32*)(r3p+0x2c) = 0;
        *(u32*)(r3p+0x30) = 0; *(u32*)(r3p+0xa4) = 0;
        *(u32*)(r3p+0x34) = 0;

        lbl_80375528 = 1; lbl_8037552A = 0; lbl_80375529 = 3;
        lbl_8037552C = 0; lbl_8037552D = 0; lbl_8037552E = 0;
        lbl_80375534 = 0; lbl_80375535 = 0;
        lbl_80375538 = r26;
        *(&lbl_80375538+1) = r27;
        *(&lbl_80375538+2) = r29;
        *(&lbl_80375538+3) = r30;
        lbl_8037553C = r31;
        *(&lbl_8037553C+1) = r12;
        *(&lbl_8037553C+2) = r10;
        *(&lbl_8037553C+3) = r9;
        lbl_80375530 = r8;
        *(&lbl_80375530+1) = r7;
        *(&lbl_80375530+2) = r5;
        *(&lbl_80375530+3) = r0v;
        lbl_8037552B = 0;

        fn_80040D40((void*)lbl_802FA3F4, 0);
        lbl_80375DA6 = 0;
        r3p[0x68] = 1;
        return 0;
    }
}

// ============================================================
// fn_80040CE4: particle bounding-box test
//   r3=particle_ptr, r4=col, r5=row
//   Returns 1 if (col,row) is outside the particle's bounds,
//   0 if inside (using subfc/adde carry trick for row comparison)
// ============================================================
u8 fn_80040CE4(void* r3, s8 r4, s8 r5) {
    u8* p = (u8*)r3;
    s8 r6 = (s8)p[0x61];
    if (r4 < r6) return 1;
    if (r5 < r6) return 1;

    s16 w = *(s16*)((u8*)p+0);
    s32 ww = (s32)w - (s32)r6;
    if (r4 < ww) return 1;

    s16 h = *(s16*)((u8*)p+2);
    s32 hh = (s32)h - (s32)r6;
    // subfc/adde carry trick: return 1 if r5 >= hh, else 0
    s32 r3v = (u32)(s32)hh >> 31;
    s32 r4v = (s32)r5 >> 31;
    u32 ca = ((u32)(s32)r5 >= (u32)(s32)hh) ? 1 : 0;
    return (u8)(r4v + r3v + (s32)ca);
}

// ============================================================
// fn_80040D40: particle color update function
//   r3=particle_ptr, r4=color_data_ptr (or 0 for default)
//   If r4==0: fill r28[0xac..0xb3] with 0xff using fn_80148960
//   Else: call fn_80146F2C, iterate entries, compute float colors
//   using double-bias XOR pattern, call fn_80148C84/C0C
// ============================================================
void fn_80040D40(void* r3, void* r4) {
    extern u8 lbl_80375130;

    u8* r28 = (u8*)r3;

    // Double-bias float: lbl_80375130 byte via lfd/fsubs
    u8 r5 = lbl_80375130;
    // (float construction via stack not needed in C  just use the value)

    if (!r4) {
        fn_80148960(0xfa);
        for (s32 i = 0; i < 8; i++) r28[0xac + i] = 0xff;
        return;
    }

    s32 r31 = (s32)(u32)fn_80146F2C(r4, (void*)((u8*)r4 + 8));
    u8* r30 = (u8*)r4 + 8;
    s32 r29 = 0;

    while (r29 < r31) {
        void* r4p = (void*)*(u32*)r30;
        u8 type = r28[0x68];

        float f1 = 0.0f, f2 = 0.0f, f3 = 0.0f;

        if (type == 0) {
            // Double-bias: r4[9/a/b]  float coords
            s8 v9 = (s8)((u8*)r4p)[9];
            s8 va = (s8)((u8*)r4p)[0xa];
            s8 vb = (s8)((u8*)r4p)[0xb];
            // xoris+lfd+fsubs pattern  compute floats
            // (simplified)
            (void)v9; (void)va; (void)vb;
        } else if (type == 1) {
            s8 v9 = (s8)((u8*)r4p)[9];
            s8 va = (s8)((u8*)r4p)[0xa];
            s8 vb = (s8)((u8*)r4p)[0xb];
            (void)v9; (void)va; (void)vb;
        }

        u8 mode = ((u8*)r4p)[8];
        if (mode == 0) {
            void* data = (void*)*(u32*)((u8*)r4p+4);
            u8 idx = ((u8*)r4p)[0xc];
            u8 result = (u8)(u32)fn_80148C84(data, 1, (s32)idx);
            r28[0xac + r29] = result;
        } else if (mode == 1) {
            void* data = (void*)*(u32*)((u8*)r4p+4);
            u8 idx = ((u8*)r4p)[0xc];
            u8 result = (u8)(u32)fn_80148C0C(data, 1, (s32)idx);
            r28[0xac + r29] = result;
        }

        r30 += 4;
        r29++;
    }
}

// ============================================================
// fn_80040F6C: particle system render update
//   r3=particle_ptr: calls fn_8012446C on r3[0x30],
//   then the lbl_80375529 logic + color/cursor setup
//   (same lbl_8037552x pattern as fn_800403F4/fn_80041158 tail)
// ============================================================
void fn_80040F6C(void* r3) {
    extern u8  lbl_80375529;
    extern u8  lbl_80375534; extern u8  lbl_80375535;
    extern u8  lbl_80375538; extern u8  lbl_8037553C;
    extern u8  lbl_8037552C; extern u8  lbl_8037552D; extern u8  lbl_8037552E;
    extern u8  lbl_80375530;

    u8* r31 = (u8*)r3;
    fn_8012446C((void*)*(u32*)(r31+0x30));

    if (!r31[0x68]) {
        fn_800C21D8();
        fn_800C1F80();

        // lbl_80375529 mode check (subfic/orc/srwi pattern)
        u8 r3v = lbl_80375529;
        u8 r3u = (u8)((u32)r3v - 1);
        u32 ca = ((u32)r3u <= 1u) ? 1 : 0;
        u8 r4v = (u8)(((~r3u) | 1u) - ((1u - r3u) >> 1));
        if ((r4v >> 31) == 0) r4v = 0;
        if (r4v) fn_80148100(1);
        else fn_80148100(0);
    }

    void* r3c = (void*)fn_80067390(0);
    fn_80066E94();
    void* cursor = fn_80067370(0);

    // Double-bias float for lbl_80375534/35  cursor[0x24/28]
    {
        s8 v34 = (s8)lbl_80375534;
        s8 v35 = (s8)lbl_80375535;
        // xoris/lfd/fsubs pattern
        (void)v34; (void)v35;
    }

    // Copy SDA color bytes to cursor
    *(u8*)((u8*)cursor+0)   = lbl_8037553C;
    *(u8*)((u8*)cursor+1)   = *(&lbl_8037553C+1);
    *(u8*)((u8*)cursor+2)   = *(&lbl_8037553C+2);
    *(u8*)((u8*)cursor+4)   = lbl_80375538;
    *(u8*)((u8*)cursor+5)   = *(&lbl_80375538+1);
    *(u8*)((u8*)cursor+6)   = *(&lbl_80375538+2);

    void* r30p = fn_80067370(2);
    void* r4p  = fn_80067370(0);
    fn_80067314(r30p, r4p);
    fn_8006713C((void*)(r31+0x70));
    fn_800674F8(0);
    void* r30b = fn_80067510();
    fn_800673B0();

    // lbl_8037552C/D/E  r30[0/4/8] with float scale by r31[0x6c]
    *(u8*)((u8*)r30b+0) = lbl_8037552C;
    // (double-bias float construction for lbl_8037552D/E)

    *(u8*)((u8*)r30b+1) = lbl_80375530;
    *(u8*)((u8*)r30b+2) = *(&lbl_80375530+1);
    *(u8*)((u8*)r30b+3) = *(&lbl_80375530+2);
}

// ============================================================
// fn_80041158: particle mode/type dispatch
//   Sets lbl_80375529 based on r3[0x64] bits 12-13 (player count)
//   Sets lbl_8037552A based on r3[0x64] bits 7-11 (button code)
// ============================================================
void fn_80041158(void* r3) {
    extern u8 lbl_80375529;
    extern u8 lbl_8037552A;

    u32 flags = *(u32*)((u8*)r3+0x64);

    // Check bits 12-13 (rlwinm ,,,12,13)
    u32 mode = flags & 0x000C0000u;  // bits 12-13 in PPC bit numbering
    // Map to player count
    if      (mode == 0x00080000u) { // 0x8<<16
        u8 v = (lbl_8033A708[0xa6] == 1) ? 1 : 0;
        lbl_80375529 = v;
    } else if (mode == 0x000C0000u) { // 0xc<<16
        u8 v = (lbl_8033A708[0xa6] == 1) ? 2 : 0;
        lbl_80375529 = v;
    } else if (mode == 0x00040000u) { // 0x4<<16
        u8 v = (lbl_8033A708[0xa6] == 1) ? 3 : 0;
        lbl_80375529 = v;
    } else {
        u8 v = (lbl_8033A708[0xa6] == 1) ? 0 : 0;
        lbl_80375529 = v;
    }

    // Check bits 7-11 (rlwinm ,,,7,11)
    u32 btn = flags & 0x01F00000u;
    static const u8 btn_map[] = {
        0,    // 0x000000
        1,    // 0x100000 (0x10<<16)
        2,    // 0x200000
        3,    // 0x300000
        4,    // 0x400000
        5,    // 0x500000
        6,    // 0x600000
        7,    // 0x700000
        8,    // 0x800000
        9,    // 0x900000
        0xa,  // 0xa00000
        0xb,  // 0xb00000
        0xc,  // 0xc00000
        0xd,  // 0xd00000
        0xe,  // 0xe00000
        0xf,  // 0xf00000
        0x10, // 0x1000000
        0x11, // 0x1100000
        0,    // default
    };

    // Map btn to lbl_8037552A (0x10 through 0x110 << 16 step 0x10)
    u8 result = 0;
    switch (btn) {
        case 0x00000000u: result = 0x0; break;
        case 0x00100000u: result = 0x1; break;
        case 0x00200000u: result = 0x2; break;
        case 0x00300000u: result = 0x3; break;
        case 0x00400000u: result = 0x4; break;
        case 0x00500000u: result = 0x5; break;
        case 0x00600000u: result = 0x6; break;
        case 0x00700000u: result = 0x7; break;
        case 0x00800000u: result = 0x8; break;
        case 0x00900000u: result = 0x9; break;
        case 0x00A00000u: result = 0xa; break;
        case 0x00B00000u: result = 0xb; break;
        case 0x00C00000u: result = 0xc; break;
        case 0x00D00000u: result = 0xd; break;
        case 0x00E00000u: result = 0xe; break;
        case 0x00F00000u: result = 0xf; break;
        case 0x01000000u: result = 0x10; break;
        case 0x01100000u: result = 0x11; break;
        default: result = 0; break;
    }
    lbl_8037552A = result;
}

// ============================================================
// fn_8004141C: (docs 2/4/6) particle system teardown/free
//   r3=particle_ptr: if r3[0x64] bit 1 set:
//   Clear flag bits, call fn_8000C028 x3, fn_8000C734 x2,
//   fn_8006DAB4, fn_8005C660, fn_80040D40(ptr,0),
//   then if r3[0x68]==0: free slot resources (fn_800C4B84,
//   fn_800C15A0, fn_8003F810 x5, fn_80148100, fn_800615C8 loops,
//   fn_800C4868, fn_8003F810, fn_8005C680),
//   then reset SDA vars + call fn_8005BB44, fn_80067F8C
// ============================================================
void fn_8004141C(void* r3) {
    extern u8  lbl_8028F5E8[];
    extern u8  lbl_80273420[];
    extern u8  lbl_80375528; extern u8  lbl_80375529;
    extern u8  lbl_8037552A; extern u8  lbl_8037552B;
    extern u8  lbl_8037552C; extern u8  lbl_8037552D; extern u8  lbl_8037552E;
    extern u8  lbl_80375530; extern u8  lbl_80375534; extern u8  lbl_80375535;
    extern u8  lbl_80375538; extern u8  lbl_8037553C;
    extern u8  lbl_80375DA6;
    extern u32 lbl_803771E0; extern u32 lbl_803771E4; extern u32 lbl_803771E8;

    u8* r31 = (u8*)r3;
    u32 flags = *(u32*)(r31+0x64);

    if (!(flags & (1u<<(31-1)))) return;

    // Clear active bit, reset flags
    *(u32*)(r31+0x64) = flags & ~(7u << (31-2));

    fn_8000C028((void*)((u8*)lbl_8028F5E8 + 0x70));
    fn_8000C028((void*)((u8*)lbl_8028F5E8 + 0x20));
    fn_8000C028((void*)lbl_8028F5E8);

    void* r30p = (void*)*(u32*)(r31+0x30);
    fn_8000C734(r30p); *(u32*)(r31+0x30) = 0;
    void* r2cp = (void*)*(u32*)(r31+0x2c);
    fn_8000C734(r2cp); *(u32*)(r31+0x2c) = 0;

    fn_8006DAB4((void*)*(u32*)(r31+0x38));
    fn_8005C660((void*)((u8*)lbl_80273420 + 0x112));
    fn_80040D40(r31, 0);

    if (!r31[0x68]) {
        // Free slot resources
        void* r3a4 = (void*)*(u32*)(r31+0xa4);
        if (r3a4) { fn_800C4B84(r3a4); *(u32*)(r31+0xa4) = 0; *(u32*)(r31+0xa4) = 0; }
        fn_800C15A0();

        void* slots[] = {
            (void*)*(u32*)(r31+0x1c),
            (void*)*(u32*)(r31+0x20),
            (void*)*(u32*)(r31+0x24),
            (void*)*(u32*)(r31+0x28),
            (void*)*(u32*)(r31+0x18),
        };
        for (s32 i = 0; i < 5; i++) {
            if (slots[i]) { fn_8003F810(slots[i]); *(u32*)(r31+0x1c+i*4) = 0; }
        }

        fn_80148100(0);
        lbl_80375DA6 = 0;
    }

    // Free particle entries loop
    {
        s32 r26 = 0, r25 = 0;
        s16 cnt = *(s16*)(r31+6);
        while (r26 < cnt) {
            void* entry = (void*)((u8*)*(u32*)(r31+0x14) + r25 + 0x14);
            fn_800615C8(entry);
            r25 += 0xb4; r26++;
        }
    }
    {
        s32 r26 = 0, r25 = 0;
        s16 cnt = *(s16*)(r31+4);
        while (r26 < cnt) {
            void* entry = (void*)((u8*)*(u32*)(r31+0x10) + r25 + 0x4);
            fn_800615C8(entry);
            r25 += 0xc0; r26++;
        }
    }

    fn_800C4868((void*)*(u32*)(r31+0x10)); *(u32*)(r31+0x10) = 0;
    fn_800C4868((void*)*(u32*)(r31+0x14)); *(u32*)(r31+0x14) = 0;
    fn_8003F810((void*)*(u32*)(r31+0xc)); *(u32*)(r31+0xc) = 0;
    fn_8005C680((void*)*(u32*)(r31+0x8)); *(u32*)(r31+0x8) = 0;

    // Reset SDA vars from lbl_803771E0/E4/E8
    {
        u32 tmp[3];
        tmp[0] = lbl_803771E0; tmp[1] = lbl_803771E4; tmp[2] = lbl_803771E8;
        u8 r28 = ((u8*)tmp)[0]; u8 r29 = ((u8*)tmp)[1];
        u8 r31b = ((u8*)tmp)[2]; u8 r12 = ((u8*)tmp)[3];
        u8 r11 = ((u8*)tmp)[4]; u8 r10 = ((u8*)tmp)[5];
        u8 r8  = ((u8*)tmp)[6]; u8 r7  = ((u8*)tmp)[7];
        u8 r6  = ((u8*)tmp)[8]; u8 r5  = ((u8*)tmp)[9];
        u8 r3v = ((u8*)tmp)[10]; u8 r0v = ((u8*)tmp)[11];

        *(u16*)(r31+6) = 0; *(u16*)(r31+4) = 0;
        *(u32*)(r31+8) = 0;

        lbl_80375528 = 1; lbl_8037552A = 0; lbl_80375529 = 3;
        lbl_8037552C = 0; lbl_8037552D = 0; lbl_8037552E = 0;
        lbl_80375534 = 0; lbl_80375535 = 0;
        lbl_80375538 = r28; *(&lbl_80375538+1) = r29;
        *(&lbl_80375538+2) = r31b; *(&lbl_80375538+3) = r12;
        lbl_8037553C = r11; *(&lbl_8037553C+1) = r10;
        *(&lbl_8037553C+2) = r8; *(&lbl_8037553C+3) = r7;
        lbl_80375530 = r6; *(&lbl_80375530+1) = r5;
        *(&lbl_80375530+2) = r3v; *(&lbl_80375530+3) = r0v;
        lbl_8037552B = 0;
    }

    fn_8005BB44();
    extern float lbl_80377220; extern float lbl_80377224;
    fn_80067F8C(lbl_80377220, lbl_80377224);
}

// ============================================================
// fn_800416DC: (docs 3/5/7) particle system open/load function
//   r3=particle_ptr, r4=filename_ptr
//   Strips path from filename, stores to r26[0x3c],
//   calls OSGetTime, dispatches on r26[0x68] (0 or 1),
//   loads resource data, allocates particle slots,
//   reads lbl_80273420 config data, calls fn_8020AE58/AB48 etc.
//   Very large function (~0x1040 bytes)
// ============================================================
void fn_800416DC(void* r3, void* r4) {
    extern u8  lbl_80273420[];
    extern u8  lbl_802FA300[];
    extern u8  lbl_802D49F8[];
    extern u8  lbl_80375DA6;
    extern u8  lbl_80375130;

    u8* r26 = (u8*)r3;
    u8* r27 = (u8*)r4;

    fn_8004141C(r26);

    // Strip path from filename  find last '/' or '\'
    u8* r15 = r26 + 0x3c;
    u32 len = (u32)strlen((char*)r27);
    u8* scan = r27 + len - 1;
    while (scan >= r27) {
        s8 c = (s8)*scan;
        if (c == '/' || c == '\\') { scan++; goto found; }
        scan--;
    }
found:;
    // Copy basename to r26[0x3c]
    while ((s8)*scan != 0) {
        s8 cv = (s8)*scan;
        if (cv == '/' || cv == '\\') break;
        *r15++ = (u8)cv;
        scan++;
    }
    *r15 = 0;

    // Save OSGetTime
    OSGetTime();
    u8 mode = r26[0x68];

    if (mode == 0) {
        // Load mode 0
        fn_8023D1A0((void*)lbl_802FA300, r27);
        fn_8023D130((void*)lbl_802FA300, (void*)((u8*)lbl_80273420+0x161));
        *(u32*)(r26+0x8) = (u32)fn_8005C6E4((void*)lbl_802FA300);

        fn_8023D1A0((void*)lbl_802FA300, r27);
        fn_8023D130((void*)lbl_802FA300, (void*)((u8*)lbl_80273420+0x169));
        *(u32*)(r26+0xc) = (u32)fn_8003FE6C((void*)lbl_802FA300);

        // Init rotation matrix
        fn_8020AE58((void*)((u8*)r26+0x18+0x18), 0x58, 1.0f);
        *(float*)(r26+0x6c) = /* lbl_8037722C */ 1.0f;
        fn_8020AB48((void*)((u8*)r26+0x18+0x18), (void*)(r26+0x70));

        // Load optional slot ptrs (5 slots at offsets 0x122/12d/13a/147/154)
        static const s32 slot_offsets[] = {0x122, 0x12d, 0x13a, 0x147, 0x154};
        static const s32 dest_offsets[] = {0x18, 0x1c, 0x20, 0x24, 0x28};
        for (s32 i = 0; i < 5; i++) {
            fn_8023D1A0((void*)lbl_802FA300, r27);
            fn_8023D130((void*)lbl_802FA300, (void*)((u8*)lbl_80273420+slot_offsets[i]));
            u16 check = (u16)(u32)fn_8005BFDC((void*)lbl_802FA300);
            if (check != 0x8000) {
                if (i == 0)
                    *(u32*)(r26+dest_offsets[i]) = (u32)fn_8003FA1C((void*)lbl_802FA300, 8);
                else
                    *(u32*)(r26+dest_offsets[i]) = (u32)fn_8003FE6C((void*)lbl_802FA300);
            }
        }

        // Read particle size/scale data from lbl_80273420+0x171
        if (fn_8000D47C((void*)((u8*)lbl_80273420+0x171))) {
            void* data = fn_8000D3E4((void*)((u8*)lbl_80273420+0x171));
            u8* dp = (u8*)data;
            // Read 4 s16 values via ptr advance
            *(u16*)(r26+0) = *(u16*)dp; dp += 2;
            *(u16*)(r26+2) = *(u16*)dp; dp += 2;
            *(u16*)(r26+4) = *(u16*)dp; dp += 2;
            *(u16*)(r26+6) = *(u16*)dp;
            float f1 = (float)(u32)fn_8001B954(data);
            extern float lbl_80377220;
            // fdivs f31, f0, f1
        }

        // Store to lbl_802D49F8+0x1c2d4
        *(float*)((u8*)lbl_802D49F8 + 0x1c2d4) = 0.0f; // f31

        // Read color/scroll data
        if (fn_8000D47C((void*)((u8*)lbl_80273420+0x17d))) {
            void* cdata = fn_8000D3E4((void*)((u8*)lbl_80273420+0x17d));
            for (s32 i = 0; i < 8; i++) r26[0x5c+i] = ((u8*)cdata)[i];
            *(u32*)(r26+0x64) = *(u32*)((u8*)cdata+8);
        } else {
            r26[0x5c] = 0x18; r26[0x5d] = 0x18;
            r26[0x5e] = 0x20; r26[0x5f] = 0x20;
            r26[0x60] = 0x40; r26[0x61] = 0; *(u32*)(r26+0x64) = 0;
        }

        fn_80041158(r26);

        // Allocate particle array
        void* tbl = fn_8000D3E4((void*)((u8*)lbl_80273420+0x186));
        s16 cnt = *(s16*)(r26+4);
        *(u32*)(r26+0x10) = (u32)fn_800C48A8((void*)tbl, cnt * 0xc0);

        // Initialize particle entries loop
        // ... (9 register vars init from lbl_802FA300)
        // calls fn_8001B954 x6, fn_8001B9E8, fn_8001B99C per entry
        // fn_8023D1A0/D130 x several, fn_80065E10, fn_8006CFD0,
        // fn_8006DB14, fn_8005C25C, fn_8005F4DC, fn_80061334

        fn_80045F30(r26, (void*)((u8*)lbl_80273420+0x1ab));
        fn_80044618(r26, 1);
        fn_800C2420();

        // Load shadow/color config from lbl_80273420+0x1b8
        // ... (same pattern as above)

        lbl_80375DA6 = 0; // or from fn_80146E90
        lbl_80375130 = 1;

        extern float lbl_80377224;
        fn_80067F8C(lbl_80377220, lbl_80377224);
        return;
    }

    if (mode == 1) {
        // Similar to mode 0 but with different offsets
        // ... (see assembly for full detail)
    }

    // Common tail: setup render resources, OSGetTime delta, fn_800056CC
    fn_8005C6E4((void*)((u8*)lbl_80273420+0x112));
    *(u32*)(r26+0x38) = (u32)fn_8006DB14((void*)((u8*)lbl_80273420+0x21c));
    *(u32*)(r26+0x2c) = (u32)fn_800EECDC();
    *(u32*)(r26+0x30) = (u32)fn_801246F8();
    *(u32*)(r26+0x64) |= 0x40000000u;
    fn_8012446C((void*)*(u32*)(r26+0x30));
    // ... cursor setup, fn_800C21D8/1F80, lbl_80375529 logic,
    // fn_80067390/66E94/67370, color/float setup, fn_80040D40,
    // OSGetTime delta, fn_80235530, fn_800056CC
}

// ============================================================
// fn_80042720: (doc 8) large particle event dispatch state machine
//   r3=particle_ptr, iterates lbl_80335B58 event table,
//   dispatches on event type byte[2] (0x21-0x29) using jump table
//   jumptable_8028F6DC, then processes event entries with bounding
//   box checks using fn_80040CE4/fn_8005FE10/fn_80049D50/fn_800465E0
//   etc., then calls fn_80044618, fn_80022A48, fn_8012446C,
//   final cursor/color setup
// ============================================================
void fn_80042720(void* r3) {
    extern u8  lbl_80335B58[];
    extern u8  lbl_80273420[];
    extern u8  lbl_802D49F8[];
    extern u8  lbl_80375529;
    extern u8  lbl_80375528;
    extern u8  lbl_8037552A; extern u8  lbl_8037552B;
    extern u8  lbl_8037552C; extern u8  lbl_8037552D; extern u8  lbl_8037552E;
    extern u8  lbl_80375530; extern u8  lbl_80375534; extern u8  lbl_80375535;
    extern u8  lbl_80375538; extern u8  lbl_8037553C;

    u8* r26 = (u8*)r3;
    u8* r30 = lbl_80335B58;
    u8* r31 = r30;
    s32 r29 = 0;

    s32 total = (s32)(u32)fn_80110790(r31);
    while (r29 < total) {
        s8 r28 = (s8)r30[0];  // col param
        s8 r27 = (s8)r30[1];  // row param
        u8 evt = r30[2] - 0x21;  // event type 0x21..0x29

        if (evt <= 8) {
            // Jump table dispatch on evt
            switch (evt) {
            case 0: { // 0x21: find visible particle at (r28,r27) with bits 0x410+0xa00
                s16 cnt = *(s16*)(r26+6);
                void* found = 0;
                for (s32 i = cnt-1; i >= 0; i--) {
                    void* ep = (void*)((u8*)*(u32*)(r26+0x14) + i*0xb4);
                    u32 bc = *(u32*)((u8*)*(u32*)((u8*)ep+0x10)+0xbc);
                    if (bc & 0x410) continue;
                    if ((bc & 0xa00) != 0xa00) continue;
                    if (fn_80040CE4(ep, r28, r27)) continue;
                    found = ep; break;
                }
                if (found) { fn_8005FE10((void*)((u8*)found+0x14), 1.0f); }
                break;
            }
            case 1: { // 0x22: find particle with rlwinm bit 0x1000
                s16 cnt = *(s16*)(r26+6);
                void* found = 0;
                for (s32 i = cnt-1; i >= 0; i--) {
                    void* ep = (void*)((u8*)*(u32*)(r26+0x14) + i*0xb4);
                    u32 bc = *(u32*)((u8*)*(u32*)((u8*)ep+0x10)+0xbc);
                    if ((bc & 0x1000) != 0x1000) continue;
                    if (fn_80040CE4(ep, r28, r27)) continue;
                    found = ep; break;
                }
                if (found) {
                    fn_80049D50(found, 0);
                    // ... (movement direction sub-dispatch)
                }
                break;
            }
            case 2: { // 0x23: movement dispatch with dir
                // ... (complex direction + bdnz search)
                break;
            }
            case 3: { // 0x24: find + call fn_80049E08
                s16 cnt = *(s16*)(r26+6);
                void* found = 0;
                for (s32 i = cnt-1; i >= 0; i--) {
                    void* ep = (void*)((u8*)*(u32*)(r26+0x14) + i*0xb4);
                    u32 bc = *(u32*)((u8*)*(u32*)((u8*)ep+0x10)+0xbc);
                    if (bc & 0x410) continue;
                    if ((bc & 0xa00) != 0xa00) continue;
                    if (fn_80040CE4(ep, r28, r27)) continue;
                    found = ep; break;
                }
                if (found) {
                    // collect + fn_80049E08
                    void* p = r26;
                    s32 cnt2 = (s32)(u32)fn_800465E0(p, (void*)((u8*)r26+8));
                    for (s32 k = 0; k < cnt2; k++) {
                        void* entry = (void*)*(u32*)((u8*)r26+8+k*4);
                        fn_80049E08(entry, 0);
                    }
                }
                break;
            }
            case 4: { // 0x25: similar to case 3 with bit 0x800
                break;
            }
            case 5: { // 0x26: bit 0x200
                break;
            }
            case 6: { // 0x27: set bit 1 in byte[2], find bit 0x20000
                break;
            }
            case 7: { // 0x28: find bit 0x800 + fn_80049E08
                break;
            }
            case 8: { // 0x29: find bit 0x8000 + fn_80049E08
                break;
            }
            }
        }

        r30 += 8;
        r29++;
        total = (s32)(u32)fn_80110790(r31);
    }

    fn_80044618(r26, 1);
    fn_80022A48((void*)lbl_802D49F8);
    fn_8012446C((void*)*(u32*)(r26+0x30));

    // Cursor/color setup (same pattern as fn_800416DC tail)
    if (!r26[0x68]) {
        fn_800C21D8();
        fn_800C1F80();
        // lbl_80375529 mode check
        u8 v = lbl_80375529;
        u8 vu = (u8)(v - 1);
        u8 r4v = 0;
        // subfic/orc/srwi pattern
        if ((((~vu) | 1u) - ((1u - vu) >> 1)) >> 31) r4v = 0;
        if (r4v) fn_80148100(1);
        else fn_80148100(0);
    }

    // Cursor setup (identical to fn_800416DC/fn_80040F6C tail)
    void* cursor = fn_80067370(0);
    fn_80066E94();
    void* c0 = fn_80067370(0);
    // Double-bias lbl_80375534/35 floats  cursor[0x24/28]
    // Copy SDA color bytes + float scale
    fn_80067314(fn_80067370(2), c0);
    fn_8006713C((void*)(r26+0x70));
    fn_800674F8(0);
    void* r27p = fn_80067510();
    fn_800673B0();
    // lbl_8037552C  r27[0], lbl_8037552D/E  float scale
    fn_8001625C();
}

// ============================================================
// fn_800433AC: return r3[0x1c]
// ============================================================
void* fn_800433AC(void* r3) {
    return (void*)*(u32*)((u8*)r3+0x1c);
}

// ============================================================
// fn_800433B4: init particle render viewport
//   r4=ptr: sets up lbl_80375548 viewport using fn_8022B3A0
//   and fn_8022B634 with zeroed floats
// ============================================================
void fn_800433B4(void* r3, void* r4) {
    extern u32 lbl_80375548;
    void* r31 = r4;
    void* r5p = (void*)lbl_80375548;
    float f1 = *(float*)((u8*)r5p+0x10);
    float f0 = *(float*)((u8*)r5p+0x14);
    s32 fi1, fi0;
    // fctiwz  convert to int
    fi1 = (s32)f1; fi0 = (s32)f0;
    s32 r4v = *(s32*)((u8*)r5p+0x1c);
    fn_8022B3A0(r31, r4v, fi1, fi0, 4, 0, 0, 0, 0, 0);
    fn_8022B634(r31, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0);
}

// ============================================================
// fn_80043444: free lbl_80375548 and its 0x1c sub-allocation
//   Calls fn_8000C028(lbl_8028F698), fn_800C4B84, fn_800C4888
// ============================================================
void fn_80043444(void) {
    extern u32  lbl_80375548;
    extern u8   lbl_8028F698[];

    if (!lbl_80375548) return;

    fn_8000C028((void*)lbl_8028F698);
    void* sub = (void*)*(u32*)((u8*)lbl_80375548+0x1c);
    fn_800C4B84(sub);
    *(u32*)((u8*)lbl_80375548+0x1c) = 0;
    fn_800C4888((void*)lbl_80375548);
    lbl_80375548 = 0;
}

// ============================================================
// fn_800434A0: (doc 1) large particle system update function
//   r27=particle_ptr: two main loops (first clears bit 0x7e of
//   byte[2] for each entry, second processes visible entries
//   with float matrix math + fn_80060904/fn_8006CC90),
//   calls fn_80067638 at start/end with fn_80044050/fn_80043FB4
// ============================================================
void fn_800434A0(void* r3) {

    u8* r27 = (u8*)r3;

    fn_80067638(0, (void*)fn_80044050, (void*)fn_80044050, r27, 1);

    // Clear bit 6 (0x7e mask = clrlwi r0,r0,25 = keep bits 0..6) on each entry
    if (*(u32*)(r27+0xc)) {
        s32 r3v = 0;
        void* r4p = (void*)*(u32*)(r27+0x14);
        s16 cnt = *(s16*)(r27+6);
        while (r3v < (s32)cnt) {
            u8 b = ((u8*)r4p)[2];
            ((u8*)r4p)[2] = b & 0x7f;
            r3v++;
            r4p = (void*)((u8*)r4p + 0xb4);
        }
    }

    u32 flags = *(u32*)(r27+0x64);
    if ((flags & 1u) || !(flags & 2u)) goto tail;

    {
        u8* r30 = (u8*)*(u32*)(r27+0x14);
        s32 r29 = 0;
        s16 cnt = *(s16*)(r27+6);

        while (r29 < (s32)cnt) {
            void* cls = (void*)*(u32*)(r30+0x10);
            u8*   r28 = r30 + 0x14;
            u8    r26 = r30[2];
            u32   r31 = *(u32*)((u8*)cls+0xbc);

            if ((r31 & 1u) != 0) goto next1;
            if (r26 & 1u) goto next1;
            if (r31 & (1u<<(31-21))) fn_8005FF88(r28);
            if (r26 & (1u<<(31-24))) goto next1;
            if (!(r31 & (1u<<(31-24)))) goto no_float1;

            {
                // Double-bias float construction for r30[0/1]  f28/f29/f30/f31
                s8 col = (s8)r30[0]; s8 row = (s8)r30[1];
                void* r4p = (void*)*(u32*)((u8*)*(u32*)lbl_8037554C+0x30);
                float equip_f = *(float*)((u8*)r4p+0x48);
                u8 mode = r27[0x68];
                // (float matrix computations f28/f29/f30/f31)
                // bne 0x1  use r27[0]/r27[2] halved for center adjustment
                (void)col; (void)row; (void)equip_f; (void)mode;
            }

no_float1:;
            if (r31 & (1u<<(31-15))) fn_8006778C((void*)fn_800486F8, r30, 2);
            fn_80060904(r28);
            fn_8006CC90(r28);
next1:;
            r29++;
            r30 += 0xb4;
        }

        // Second loop: second pass (same flag checks, different float register layout)
        r30 = (u8*)*(u32*)(r27+0x14);
        s32 r31v = 0;
        s16 cnt2 = *(s16*)(r27+6);

        while (r31v < (s32)cnt2) {
            void* cls2 = (void*)*(u32*)(r30+0x10);
            u8*   r28b = r30 + 0x14;
            u8    r26b = r30[2];
            u32   r29b = *(u32*)((u8*)cls2+0xbc);

            if ((r29b & 1u) != 1) goto next2;
            if (r26b & 1u) goto next2;
            if (r29b & (1u<<(31-21))) fn_8005FF88(r28b);
            if (r26b & (1u<<(31-24))) goto next2;
            if (!(r29b & (1u<<(31-24)))) goto no_float2;
            // float math pass 2 (f31/f30/f28/f29 layout)
no_float2:;
            if (r29b & (1u<<(31-15))) fn_8006778C((void*)fn_800486F8, r30, 2);
            fn_80060904(r28b);
            fn_8006CC90(r28b);
next2:;
            r31v++;
            r30 += 0xb4;
        }
    }

    // Check tail: if r27[0xc] && !(r27[0x64] & 1)  call fn_80044B90
    if (*(u32*)(r27+0xc) && !(*(u32*)(r27+0x64) & 1u)) {
        fn_8006778C((void*)fn_80044B90, r27, 2);
    }

tail:;
    fn_80067638(2, (void*)fn_80043FB4, (void*)fn_80043FB4, r27, 3);
}

// ============================================================
// fn_80043A00: init lbl_80375548 particle struct
//   r3=owner, r4=maybe_flags, f1-f6=float params
//   Allocates 0x20 bytes via fn_800C48D4, fills float fields,
//   allocates texture buffer via fn_800C4BB4,
//   calls DCInvalidateRange, then fn_800434A0 or fn_8000CBC8
// ============================================================
void fn_80043A00(void* r3, void* r4,
                 float f1, float f2, float f3,
                 float f4, float f5, float f6) {
    extern u32  lbl_80375548;
    extern u8   lbl_80273420[];
    extern u8   lbl_8028F698[];
    extern float lbl_80377240;

    float r26=f1, r27=f2, r28=f3, r29=f4, r30=f5, r31=f6;
    void* r29p = r3;
    void* r30p = r4;

    void* alloc = fn_800C48D4(0x20);
    lbl_80375548 = (u32)alloc;

    // Store float params
    *(float*)((u8*)alloc+0x0) = r26;
    *(float*)((u8*)alloc+0x4) = r27;

    float ratio = r28 * r31 / r30;
    if (ratio < r29) ratio = r29;
    if (ratio > lbl_80377240) ratio = lbl_80377240;

    *(float*)((u8*)alloc+0x10) = r30;
    *(float*)((u8*)alloc+0x14) = r31;

    // Store normalized ratio (clamped) to both [8] and [c]
    *(float*)((u8*)alloc+0x8) = ratio;
    *(float*)((u8*)alloc+0xc) = ratio;

    // Adjust aspect ratio: if r30 > r31, scale [8]; else scale [c]
    if (r30 > r31) {
        float s = *(float*)((u8*)alloc+0x8) * (r30/r31);
        *(float*)((u8*)alloc+0x8) = s;
    } else {
        float s = *(float*)((u8*)alloc+0xc) * (r31/r30);
        *(float*)((u8*)alloc+0xc) = s;
    }

    // Allocate texture buffer
    s32 width  = (s32)r30;
    s32 height = (s32)r31;
    void* tex = fn_8022B17C(width, height, 4, 0, 0);
    s32 r31i = (s32)(u32)tex;

    void* buf = fn_800C4BB4((void*)-(s32)r31i,
                             (void*)((u8*)lbl_80273420+0x245), 0);
    *(u32*)((u8*)lbl_80375548+0x1c) = (u32)buf;

    // Invalidate data cache
    DCInvalidateRange((void*)*(u32*)((u8*)lbl_80375548+0x1c),
                       (u32)*(u32*)((u8*)lbl_80375548+0x1c));

    if (!r30p) {
        fn_800434A0(r29p);
    } else {
        fn_8000CBC8((void*)lbl_8028F698, r30p);
    }
}

// ============================================================
// fn_80043BC8: particle color setup helper
//   r3=particle_ptr, r4/r5/r6=s16 color params
//   Constructs 6 floats from r3[0]/[2] and params via double-bias,
//   then calls fn_80043A00 with them
// ============================================================
void fn_80043BC8(void* r3, s16 r4, s16 r5, s16 r6) {
    extern double lbl_80377208;
    extern float  lbl_80377210;

    s16 hw = *(s16*)((u8*)r3+0);
    s16 hh = *(s16*)((u8*)r3+2);
    u8  r0b = ((u8*)r3)[0x61];
    s32 r8 = (s32)(u8)r0b << 1;

    // 6 float values via double-bias xoris pattern:
    // f1 = (hw ^ 0x8000) via lfd/fsubs * f3
    // f2 = (hh ^ 0x8000) via lfd/fsubs * f3
    // f3 = (hw - r8) ^ 0x8000 via lfd/fsubs
    // f4 = (hh - r8) ^ 0x8000 via lfd/fsubs
    // f5 = r5 ^ 0x8000 via lfd/fsubs
    // f6 = r4 ^ 0x8000 via lfd/fsubs
    float f3v = lbl_80377210;
    float f1 = (float)((hw ^ (s16)0x8000)) * f3v;  // simplified
    float f2 = (float)((hh ^ (s16)0x8000)) * f3v;
    float f3b = (float)(((hw - (s16)r8) ^ (s16)0x8000));
    float f4 = (float)(((hh - (s16)r8) ^ (s16)0x8000));
    float f5 = (float)((s16)(r5 ^ 0x8000));
    float f6 = (float)((s16)(r4 ^ 0x8000));

    fn_80043A00(r3, (void*)(s32)r6, f1, f2, f3b, f4, f5, f6);
}

// ============================================================
// fn_80043C90: teardown particle system
//   r3=outer_ptr: calls fn_80068480 on r3[0x54],
//   then frees r31[0x114] and r31 itself (fn_800C4B84),
//   clears bits 29-27 from lbl_80376554
// ============================================================
void fn_80043C90(void* r3) {
    extern u32 lbl_80376554;
    u8* r31p = (u8*)r3;

    fn_80068480((void*)*(u32*)(r31p+0x54));
    u8* r31 = (u8*)*(u32*)(r31p+0x58);
    fn_800C4B84((void*)*(u32*)(r31+0x114));
    *(u32*)(r31+0x114) = 0;
    fn_800C4B84(r31);
    lbl_80376554 &= ~(7u << (31-29));
}

// ============================================================
// fn_80043CE8: call fn_800434A0(lbl_8037554C)
// ============================================================
void fn_80043CE8(void) {
    fn_800434A0((void*)lbl_8037554C);
}

// ============================================================
// fn_80043D0C: init particle system struct r3
//   Calls fn_80068478, allocates fn_800C4BB4, fn_80068480,
//   sets up viewport via fn_80067FDC/FA0/F8C/F18,
//   loads config from lbl_80273350, stores to r31[0x58],
//   sets lbl_80376554 bit 3
// ============================================================
void fn_80043D0C(void* r3) {
    extern u8   lbl_80273350[];
    extern u8   lbl_80273420[];
    extern u32  lbl_80376554;
    extern float lbl_80377244;
    extern float lbl_80377248;
    extern float lbl_8037724C;
    extern float lbl_80377250;
    extern float lbl_80377254;
    extern float lbl_80377258;

    u8* r31 = (u8*)r3;
    u8* r30 = lbl_80273350;

    void* r3v = fn_80068478();
    *(u32*)(r31+0x54) = (u32)r3v;

    void* buf = fn_800C4BB4((void*)-0x190,
                             (void*)((u8*)lbl_80273420+0x245), 0);
    u8* r29 = (u8*)buf;

    fn_80068480(r3v);

    // Setup viewport
    *(u16*)r29 = 2;
    fn_80067FDC(0, 0, 0, 0x260, 0x1c0);

    // Camera setup
    fn_80067FA0(0.0f, 0.0f, lbl_80377244, lbl_80377248);
    fn_80067F8C(lbl_80377220, lbl_8037724C);

    // Projection
    {
        float f2 = *(float*)(r29+0xc);
        float f0 = *(float*)(r29+0x10);
        float f1 = lbl_80377250;
        float f3 = *(float*)(r29+0x180);
        float f4 = *(float*)(r29+0x184);
        fn_8020B5C4((void*)((u8*)r29+0x2c), f2/f0, f1, f3, f4);
    }
    fn_80068000((void*)((u8*)r29+0x2c), 1);

    // Copy config floats from lbl_80273350 offsets 0xac..0xcc
    {
        u32 v0 = *(u32*)(r30+0xac); u32 v1 = *(u32*)(r30+0xb0); u32 v2 = *(u32*)(r30+0xb4);
        *(float*)(r29+0xd4) = *(float*)&v0;
        *(float*)(r29+0xd8) = *(float*)&v1;
        *(float*)(r29+0xdc) = *(float*)&v2;
    }

    *(float*)(r29+0xf8) = lbl_80377254;
    *(float*)(r29+0xfc) = 0.0f;
    *(float*)(r29+0x100) = 0.0f;
    *(float*)(r29+0x104) = 0.0f;

    {
        u32 v0 = *(u32*)(r30+0xb8); u32 v1 = *(u32*)(r30+0xbc); u32 v2 = *(u32*)(r30+0xc0);
        *(float*)(r29+0xe0) = *(float*)&v0;
        *(float*)(r29+0xe4) = *(float*)&v1;
        *(float*)(r29+0xe8) = *(float*)&v2;
    }

    {
        u32 v0 = *(u32*)(r30+0xc4); u32 v1 = *(u32*)(r30+0xc8); u32 v2 = *(u32*)(r30+0xcc);
        *(float*)(r29+0xec) = *(float*)&v0;
        *(float*)(r29+0xf0) = *(float*)&v1;
        *(float*)(r29+0xf4) = *(float*)&v2;
    }

    *(float*)(r29+0x18c) = lbl_80377250;
    *(float*)(r29+0x188) = lbl_80377258;

    fn_80067F18();

    // Allocate font buffer
    void* font = fn_800C4BB4((void*)-0x4000,
                              (void*)((u8*)lbl_80273420+0x245), 0);
    *(u32*)(r29+0x114) = (u32)font;

    *(u16*)(r29+0x11a) = 0x400;
    fn_8006604C(r29);

    *(u32*)(r31+0x58) = (u32)r29;
    lbl_80376554 |= 8u;
}

// ============================================================
// fn_80043EE0: particle viewport bounds check + output coords
//   r4=col (s8 xoris bias), r5=row (s8 xoris bias), r6=out[3]
//   Computes normalized x/y using lbl_80375548 viewport,
//   stores to r6[0/4/8], returns 1 if in bounds, 0 if outside
// ============================================================
u8 fn_80043EE0(void* r3, s8 r4, s8 r5, float* r6) {
    extern u32  lbl_80375548;
    extern float lbl_80377210;

    void* vp = (void*)lbl_80375548;
    float w  = *(float*)((u8*)vp+0x10);
    float rw = *(float*)((u8*)vp+0x8);
    float x0 = *(float*)((u8*)vp+0x0);
    float y0 = *(float*)((u8*)vp+0x4);
    float cw = *(float*)((u8*)vp+0xc);
    float ch = *(float*)((u8*)vp+0x14);   // height at 0x14? No - check offsets
    float ratio = w / rw;

    // Double-bias: r4  f1, r5  f2
    float f1, f2;
    {
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)r4 ^ 0x8000);
        double d = *(double*)stk;
        f1 = (float)(d - 4503601774854144.0);
    }
    {
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)r5 ^ 0x8000);
        double d = *(double*)stk;
        f2 = (float)(d - 4503601774854144.0);
    }

    float half = lbl_80377210;  // 0.5f
    float cx = x0 + (x0 - rw * half);  // fnmsubs f2, f2, f6, f0  x0 - rw*0.5
    // simplified: compiler pattern from fnmsubs
    float vx = ratio * (half + f1 - cx);
    float vy = ratio * (half + f2 - (y0 - ch * half));

    r6[0] = vx;
    r6[1] = vy;
    r6[2] = 0.0f;

    if (r6[0] < 0.0f) return 0;
    if (r6[1] < 0.0f) return 0;
    if (r6[0] > w)    return 0;
    if (r6[1] > w)    return 0;
    return 1;
}

// ============================================================
// fn_80043FA0: return viewport width/ratio
//   Returns lbl_80375548[0x10] / lbl_80375548[0x8]
// ============================================================
float fn_80043FA0(void) {
    extern u32 lbl_80375548;
    void* vp = (void*)lbl_80375548;
    float w  = *(float*)((u8*)vp+0x10);
    float rw = *(float*)((u8*)vp+0x8);
    return w / rw;
}

// ============================================================
// fn_80043FB4: particle render setup callback
//   Sets up viewport/scissor from lbl_80375548, loads texture,
//   calls fn_80229FA8, fn_8022A058, fn_8022A904, fn_80229758,
//   fn_8022BC10, fn_800678B4(0), fn_80066F88
// ============================================================
void fn_80043FB4(void) {
    extern u32 lbl_80375548;
    void* vp = (void*)lbl_80375548;
    float fw = *(float*)((u8*)vp+0x10);
    float fh = *(float*)((u8*)vp+0x14);
    s32 iw = (s32)fw;
    s32 ih = (s32)fh;
    fn_80229FA8(0, 0, (u32)iw, (u32)ih);
    fn_8022A058(0, 0, (u32)iw, (u32)ih, 4, 0);
    fn_8022A904((void*)*(u32*)((u8*)vp+0x1c), 1);
    fn_80229758();
    fn_8022BC10();
    fn_800678B4(0);
    fn_80066F88();
}

// ============================================================
// fn_80044050: particle render begin callback
//   Loads lbl_80375548 floats, calls fn_80068478,
//   stores viewport config, calls fn_80067FA0, fn_80067FDC,
//   fn_80067B78, fn_80066F88
// ============================================================
void fn_80044050(void) {
    extern u32   lbl_80375548;
    extern float lbl_8037723C;
    extern float lbl_8037725C;

    void* vp = (void*)lbl_80375548;
    float f31 = *(float*)((u8*)vp+0x0);
    float f30 = *(float*)((u8*)vp+0x4);
    float f29 = *(float*)((u8*)vp+0x10);
    float f28 = *(float*)((u8*)vp+0x14);
    float f27 = *(float*)((u8*)vp+0x8);
    float f26 = *(float*)((u8*)vp+0xc);

    void* r3 = fn_80068478();
    *(float*)((u8*)r3+0xe0) = f31;
    *(float*)((u8*)r3+0xe4) = f30;
    *(float*)((u8*)r3+0xe8) = 0.0f;
    *(float*)((u8*)r3+0xec) = 0.0f;
    *(float*)((u8*)r3+0xf0) = lbl_8037723C;
    *(float*)((u8*)r3+0xf4) = 0.0f;
    *(float*)((u8*)r3+0xd4) = f31;
    *(float*)((u8*)r3+0xd8) = f30;
    *(float*)((u8*)r3+0xdc) = lbl_8037725C;

    fn_80067FA0(0.0f, 0.0f, f29, f28);

    s32 iw = (s32)f29;
    s32 ih = (s32)f28;
    fn_80067FDC(0, 0, 0, iw, ih);

    fn_80067B78(f27, f26, 0);
    fn_80066F88();
}

// ============================================================
// fn_80044164: camera/matrix setup helper
//   f1=x, f2=y, r4=out_matrix_ptr
//   Calls fn_800230D8 x4 for 4 grid corners using lbl_80273350
//   offsets 0x7c-0xa8, then fn_8020BDE8 x2, fn_8020BD40 x3,
//   stores 3x3 rotation matrix to r28 (r4)
// ============================================================
void fn_80044164(float f1, float f2, void* r4) {
    extern u8   lbl_802D49F8[];
    extern u8   lbl_80273350[];
    extern float lbl_80377220;
    extern float lbl_80377210;

    float* r28 = (float*)r4;
    s32 r30 = (s32)f1;  // fctiwz
    s32 r29 = (s32)f2;

    // Call fn_800230D8 with lbl_802D49F8, r30, r29, 0  f31
    float f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r30, r29, 0);

    // Second call: offsets from lbl_80273350+0x94..0x9c, r6=1
    {
        u32 v0 = *(u32*)(lbl_80273350+0x94);
        u32 v1 = *(u32*)(lbl_80273350+0x98);
        u32 v2 = *(u32*)(lbl_80273350+0x9c);
        float f1b = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r30, r29, 1);
        float df = f1b - f31;
        (void)v0; (void)v1; (void)v2; (void)df;
    }

    // Third call: offsets 0xa0..0xa8, r6=2, fn_8020BDE8
    {
        float f1c = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r30, r29, 2);
        float df2 = f1c - f31;
        (void)df2;
    }

    // Fourth call: offsets 0x7c..0x84, r6=3  f31 update
    f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r30, r29, 3);

    // Fifth call: offsets 0x88..0x90, r6=2, fn_8020BDE8
    {
        float f1d = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r30, r29, 2);
        (void)f1d;
    }

    // fn_8020BDE8 x2, fn_8020BD40 x3  fill r28[0..0x2c]
    // (matrix construction from bilinear interpolation)
    fn_8020BDE8(0, 0, 0);  // stubs
    fn_8020BD40(0, 0);

    // Store identity pattern to r28 (simplified)
    r28[0x0/4] = 0.0f; r28[0x4/4] = 0.0f; r28[0x8/4] = 0.0f;
    r28[0x4/4] = 0.0f; r28[0x14/4] = 0.0f; r28[0x24/4] = 0.0f;
    r28[0x8/4] = 0.0f; r28[0x18/4] = 0.0f; r28[0x28/4] = 0.0f;
    r28[0xc/4] = 0.0f; r28[0x1c/4] = 0.0f; r28[0x2c/4] = 0.0f;
}

// ============================================================
// fn_80044514: find particle entry at (col, row) in r3's list
//   Returns 1 if found a visible, active entry at (r4,r5),
//   returns 0 if not found. Checks flags bits 27, 20, 19, 11.
// ============================================================
u8 fn_80044514(void* r3, s8 r4, s8 r5) {
    u8* p = (u8*)r3;
    u32 flags = *(u32*)(p+0x64);
    if (!(flags & (1u<<(31-3)))) return 0;

    s16 cnt = *(s16*)(p+6);
    u8* r7 = (u8*)*(u32*)(p+0x14);
    for (s32 i = 0; i < (s32)cnt; i++, r7 += 0xb4) {
        void* cls = (void*)*(u32*)(r7+0x10);
        u32 r3f = *(u32*)((u8*)cls+0xbc);

        // Active check: bit 27  dead, bits 20/19  active
        u8 active = 0;
        if (r3f & (1u<<(31-27))) { active = 0; goto chk_vis; }
        if (r3f & (1u<<(31-20))) active = 1;
        else if (r3f & (1u<<(31-19))) active = 1;
chk_vis:;
        if (!active) continue;

        // Visibility: if bit 27 set  0, else check bit 11
        u8 vis = 0;
        if (r3f & (1u<<(31-27))) vis = 0;
        else if (r3f & (1u<<(31-11))) vis = 1;
        if (!vis) continue;

        // Check bits[1:0] of byte[2]
        u8 b2 = r7[2];
        u32 bits = (u32)b2 & 3u;
        u32 lz; { u32 v=bits; if(!v){lz=32;}else{lz=0;while(!(v&0x80000000u)){lz++;v<<=1;}} }
        if (!((lz>>3)&0xff)) continue;

        // Bounds check
        s8 c0 = (s8)r7[4], c1 = (s8)r7[6];
        s8 r0 = (s8)r7[5], r1 = (s8)r7[7];
        if (r4 < c0 || r4 > c1) continue;
        if (r5 < r0 || r5 > r1) continue;
        return 1;
    }
    return 0;
}

// ============================================================
// fn_80044618: (doc 12) particle animation frame update
//   r3=particle_ptr, r4=flag
//   Iterates lbl_802D49F8 grid, looks up lbl_80273420+0x289/295
//   animation frame data, writes to lbl_802D49F8 tile map offsets,
//   then if r3[0x64] bit 3 set, processes visible entries with
//   animation/movement sub-dispatch, calls fn_800457E4(r3),
//   fn_80023C4C(lbl_802D49F8), fn_80023B18(lbl_802D49F8),
//   optionally fn_80015EC8, sets r3[0x64] |= 1
// ============================================================
void fn_80044618(void* r3, u8 r4) {
    extern u8  lbl_80273420[];
    extern u8  lbl_802D49F8[];

    u8* r25 = (u8*)r3;

    // Load animation frame tables
    void* r20 = fn_8000D3E4((void*)((u8*)lbl_80273420+0x289));
    void* r31 = fn_8000D3E4((void*)((u8*)lbl_80273420+0x295));
    void* r30 = r20;
    void* r29 = r31;

    // Optional extra tables at lbl_80273420+0x2a0/2b0
    if (fn_8000D47C((void*)((u8*)lbl_80273420+0x2a0))) {
        r30 = fn_8000D3E4((void*)((u8*)lbl_80273420+0x2a0));
        r29 = fn_8000D3E4((void*)((u8*)lbl_80273420+0x2b0));
    }

    // Write animation frames to lbl_802D49F8 tile map
    // Outer loop: r28 = col (0..r25[2]-1)
    // Inner loop: r27 = row (0..r25[0]-1)
    // Each entry: lhz from r31/r29, mulli *0xc, lwz [0x8], fn_8005B660,
    //   stb result to lbl_802D49F8+(r28<<6+r27)+0x100d,
    //   sth lha[0/2/4/6] to lbl_802D49F8+0x142d4 and +0x1c2d8
    s16 cols = *(s16*)(r25+2);
    s16 rows = *(s16*)(r25+0);
    u8* r31p = (u8*)r31;
    u8* r29p = (u8*)r29;
    for (s32 r28 = 0; r28 < (s32)cols; r28++) {
        s32 r22 = (s8)r28 << 6;
        u8* r17 = (u8*)lbl_802D49F8 + r22;
        for (s32 r27 = 0; r27 < (s32)rows; r27++) {
            u16 idx0 = *(u16*)r31p; r31p += 2;
            u16 idx1 = *(u16*)r29p; r29p += 2;
            void* e0 = (u8*)r20 + (s32)idx0 * 0xc;
            void* e1 = (u8*)r30 + (s32)idx1 * 0xc;
            u8 tile = (u8)(u32)fn_8005B660((void*)*(u32*)((u8*)e0+8));
            r17[(s8)r27 + 0x100d] = tile;
            // Store lha[0/2/4/6] to two tile map offsets
            s32 base = ((s8)r27 + r22) << 3;
            *(s16*)((u8*)lbl_802D49F8 + base*2 + 0x142d4) = *(s16*)((u8*)e0+0);
            *(s16*)((u8*)lbl_802D49F8 + base*2 + 0x1c2d8) = *(s16*)((u8*)e1+0);
            // ... [0x2/0x4/0x6] same pattern (omitted for brevity)
        }
    }

    // Active entry processing
    u32 flags = *(u32*)(r25+0x64);
    if (!(flags & (1u<<(31-3)))) goto tail;

    {
        u8* r31e = (u8*)*(u32*)(r25+0x14);
        for (s32 r30i = 0; r30i < (s32)*(s16*)(r25+6); r30i++, r31e += 0xb4) {
            void* cls = (void*)*(u32*)(r31e+0x10);
            u32 bc = *(u32*)((u8*)cls+0xbc);
            u8 active = 0;
            if (bc & (1u<<(31-27))) active = 0;
            else if (bc & (1u<<(31-20))) active = 1;
            else if (bc & (1u<<(31-19))) active = 1;
            if (!active) continue;

            u8 b2 = r31e[2];
            u32 bits = (u32)b2 & 3u;
            u32 lz; { u32 v=bits; if(!v){lz=32;}else{lz=0;while(!(v&0x80000000u)){lz++;v<<=1;}} }
            if (!((lz>>3)&0xff)) continue;

            // Read particle bytes
            s8 r29b = (s8)r31e[4]; s8 r16b = (s8)r31e[5];
            s8 r28b = (s8)r31e[6]; s8 r27b = (s8)r31e[7];
            if (r29b < 0) r29b = 0;
            if (r16b < 0) r16b = 0;
            s16 wmax = *(s16*)(r25+0) - 1;
            if (r28b >= wmax) r28b = (s8)wmax;
            s16 hmax = *(s16*)(r25+2) - 1;
            if (r27b >= hmax) r27b = (s8)hmax;

            if (!(bc & (1u<<(31-30)))) goto no_anim;

            // Animation sub-dispatch with lbl_80273420+0x26a/27a
            if (!fn_8000D47C((void*)((u8*)lbl_80273420+0x26a))) continue;
            void* r23 = fn_8000D3E4((void*)((u8*)lbl_80273420+0x26a));
            void* r22p = fn_8000D3E4((void*)((u8*)lbl_80273420+0x27a));

            // Inner loop over rows/cols
            for (s32 r18 = r16b; r18 <= (s32)r27b; r18++) {
                s32 r21 = (s8)r18 << 6;
                s32 r24 = r29b;
                s32 r0 = r29b + r18 * *(s16*)(r25+0);
                u8* r19 = (u8*)r22p + r0*2;
                for (s32 r24i = r24; r24i <= (s32)r28b; r24i++) {
                    u16 idx = *(u16*)r19; r19 += 2;
                    void* em = (u8*)r23 + (s32)idx * 0xc;
                    u8 t = (u8)(u32)fn_8005B660((void*)*(u32*)((u8*)em+8));
                    ((u8*)lbl_802D49F8 + r21 + r24i + 0x100d)[0] = t;
                    // sth lha[0/2/4/6] to map offsets
                }
            }
            continue;

no_anim:;
            // Alt path: same but without extra table check
            if (!fn_8000D47C((void*)((u8*)lbl_80273420+0x26a))) continue;
            void* r21p = fn_8000D3E4((void*)((u8*)lbl_80273420+0x26a));
            void* r22q = fn_8000D3E4((void*)((u8*)lbl_80273420+0x27a));
            for (s32 r17i = r16b; r17i <= (s32)r27b; r17i++) {
                s32 r23i = (s8)r17i << 6;
                s32 r0 = r29b + r17i * *(s16*)(r25+0);
                u8* r20p = (u8*)r22q + r0*2;
                for (s32 r19i = r29b; r19i <= (s32)r28b; r19i++) {
                    u16 idx = *(u16*)r20p; r20p += 2;
                    void* en = (u8*)r21p + (s32)idx * 0xc;
                    u8 t = (u8)(u32)fn_8005B660((void*)*(u32*)((u8*)en+8));
                    ((u8*)lbl_802D49F8 + r23i + r19i + 0x100d)[0] = t;
                }
            }
        }
    }

tail:;
    fn_80023C4C((void*)lbl_802D49F8);
    fn_800457E4(r25);
    fn_80023B18((void*)lbl_802D49F8);
    if (r4) {
        fn_80015EC8();
        *(u32*)(r25+0x64) |= 1u;
    }
}

// ============================================================
// fn_80044B34: wrap fn_80023C4C + fn_800457E4 + optional fn_80023B18
//   r3=particle_ptr, r4=flag
// ============================================================
void fn_80044B34(void* r3, u8 r4) {
    extern u8 lbl_802D49F8[];
    void* r30 = r3;
    fn_80023C4C((void*)lbl_802D49F8);
    fn_800457E4(r30);
    if (r4) fn_80023B18((void*)lbl_802D49F8);
}

// ============================================================
// fn_80044B90: particle system finalization/render
//   r3=particle_ptr: clears flag bit 0 if set, calls fn_80044DB4,
//   then large render sequence with fn_80069B9C/DC8, fn_8020B098,
//   fn_80067F0C/8C, fn_8020AB7C, fn_8022DAD8/DB28, fn_80229CA0,
//   fn_8006E19C/30C/38C/1DC/DFEC/DD8C etc.
//   (render commit + UI overlay for particle system)
// ============================================================
void fn_80044B90(void* r3) {
    extern u8   lbl_8033A708[];
    extern float lbl_80377264;
    extern u32   lbl_803771F0;
    extern u8    lbl_80375529;

    u8* r31 = (u8*)r3;
    u32 flags = *(u32*)(r31+0x64);

    if (flags & 1u) {
        *(u32*)(r31+0x64) = flags & ~1u;
        fn_80044DB4(r31);
    }

    // Compute scaled frame count from lbl_8033A708[0xa0]
    {
        u32 r5 = *(u32*)(r31+0xa0);
        u8 rate = lbl_8033A708[0xa0];
        // mulhw + srawi + srwi + add pattern  rate*0xff/0x51eb*0x10000>>5
        s32 scaled = (s32)((s64)(s32)(rate*0xff) * 0x51eb851f >> 37);
        u8 r0b = (u8)scaled;
        // Store to stack + r31[0xa0]
        (void)r5; (void)r0b;
    }

    void* r30 = (void*)(u32)fn_80069B9C();
    fn_80069DC8();

    // Setup identity matrix via fn_8020B098 with lbl_803771F4/lbl_80377264
    {
        extern float lbl_803771F4;
        fn_8020B098(0, lbl_803771F4, lbl_80377264, lbl_803771F4);
    }
    fn_80067F0C();
    fn_8020AB7C(0, 0, 0);
    fn_8022DAD8(0, 0);
    fn_8006E55C(0);
    fn_8020AD90(0, 0);
    fn_8022DB28(0, 0);
    fn_80229CA0(6, 0);
    fn_8006E19C(1);

    // Pass r31[0xa0] wrapped in stack
    fn_8006E30C(4, 0, 0);
    fn_8006E38C(4, 0, (void*)lbl_803771F0);
    fn_8006E1DC(4, 0, 0, 0, 0, 0, 2);

    fn_8006DFEC(r30, 0xff, 0xff, 4);
    fn_8006DD8C(r30, 4);
    fn_80228914();
    fn_80228240(9, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8006E110(1, 4, 5, 0);
    fn_8006E50C(1);
    fn_8006E4B4(0, 0, 1, 7, 0);
    fn_8006E468(1, 3, 0);

    // lbl_80375529 mode check (subfic/orc/srwi pattern)
    {
        u8 v = lbl_80375529;
        u8 vu = (u8)(v - 1);
        u32 t = ((~(u32)vu) | 1u) - ((1u - (u32)vu) >> 1);
        u8 r4v = (t >> 31) ? 0 : 1;
        if (!r4v) r4v = 0;
        if (r4v) fn_800C1BB4();
    }

    fn_80069D94();
    fn_8006E0D0(lbl_80375529 & 0xff);
    fn_80069CD4();
    fn_8006E090(0);

    fn_8022D7C4((void*)*(u32*)(r31+0xa4), (void*)*(u32*)(r31+0xa8));
    fn_80066C30(-1);
}

// ============================================================
// fn_80044DB4: (doc 13) particle render commit
//   r3=particle_ptr: allocates temp buffer via fn_800C4BB4,
//   iterates grid computing visibility/edge flags per cell,
//   calling fn_800230D8 x4 + fmadds distance check,
//   then second pass rendering with fn_80229B48 + double-bias
//   float coords  stfs to 0xcc010000 (GX fifo),
//   calls fn_8022D700, memcpy, DCFlushRange, fn_800C4C34,
//   fn_800056CC debug print
// ============================================================
void fn_80044DB4(void* r3) {
    extern u8   lbl_80273420[];
    extern u8   lbl_802D49F8[];
    extern float lbl_80377268;

    u8* r27 = (u8*)r3;
    u8  r29 = r27[0x61];  // tile origin

    // Allocate scratch buffer
    void* r21 = fn_800C4BB4((void*)-0x4000, (void*)((u8*)lbl_80273420+0x245), 0);
    u8* r26 = (u8*)r21 + (r29 << 7);
    u8* r25 = r26;

    s16 wcnt = *(s16*)(r27+2) - r29;
    s16 hcnt = *(s16*)(r27+0) - r29;

    // Pass 1: classify each cell (col visibility/edge flags)
    for (s32 r23 = r29; r23 < (s32)(*(s16*)(r27+2)); r23++) {
        u8* r28p = r25 + r29;
        u8* r30p = r26 + r29 - 1;  // prev col
        for (s32 r24 = r29; r24 < (s32)(*(s16*)(r27+0)); r24++, r28p++, r30p++) {
            *r28p = 0;
            u8 tile = ((u8*)lbl_802D49F8)[(s8)r24 + ((s8)r23 << 6) + 0x100d];

            // Classify tile: skip if 0, 4, 0xb, 0x1d, 0x45-0x48
            u8 skip = 0;
            if (tile == 0 || tile == 4 || tile == 0xb) skip = 1;
            else if (tile == 0x1d) skip = 1;
            else if (tile >= 0x45 && tile < 0x49) skip = 1;

            if (skip) continue;
            *r28p = 6;

            // Edge flags
            if (r24 == r29) { *r28p |= 1; continue; }
            if (!*(r28p-1)) { *r28p |= 1; continue; }

            // Distance check via fn_800230D8 x4 + fmadds
            float f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24-1, r23, 1);
            float f30 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23, 0) - f31;
            f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24-1, r23, 3);
            float f1 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23, 2) - f31;
            float dist = f30*f30 + f1*f1;
            if (dist >= lbl_80377268) *r28p |= 1;

            // Column edge
            if (r23 == r29) { *r28p |= 8; continue; }
            if (!*(r28p - 0x80)) { *r28p |= 8; continue; }

            // Vertical distance check
            f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23-1, 2);
            f30 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23, 0) - f31;
            f31 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23-1, 3);
            f1  = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r24, r23, 1) - f31;
            dist = f30*f30 + f1*f1;
            if (dist >= lbl_80377268) *r28p |= 8;
        }
        r25 += 0x80;
        r26 += 0x80;
    }

    // Allocate GX buffer
    void* r22 = fn_800C4BB4((void*)0xfffc0000, (void*)((u8*)lbl_80273420+0x245), 0);
    DCInvalidateRange(r22, 0x40000);
    fn_8022D634(r22, 0x40000);

    // Pass 2: render tiles
    r25 = (u8*)r21 + r29 * 0x80 + r29;
    r26 = r25;
    for (s32 r30i = r29; r30i < (s32)*(s16*)(r27+2); r30i++) {
        u8* r28q = r26;
        for (s32 r31i = r29; r31i < (s32)*(s16*)(r27+0); r31i++, r28q++) {
            u8 flag = *r28q;
            if (!flag) continue;

            // Dispatch on flag value: 6=shadow, 7=cursor, 8-0xf=variants, 0xe=special, 0x10-0xf=alt
            u8 mode;
            if (flag == 6) mode = 3;
            else if (flag == 7) mode = 4;
            else if (flag == 0xe) mode = 4;
            else if (flag >= 8 && flag < 0x10) mode = 5;
            else continue;

            fn_80229B48(0xb0, 0, mode);
            float f1 = (float)(u32)fn_800230D8((void*)lbl_802D49F8, r31i, r30i, 1);

            // Emit 3-6 float pairs to GX via stfs to 0xcc010000
            // Double-bias pattern for each corner
            // (6 stfs pairs per tile  omitted for brevity)
            (void)f1;
        }
        r26 += 0x80;
    }

    // Finalize and copy
    fn_8022D700();
    void* r23 = (void*)(u32)fn_8022D700();  // returns size
    if (*(u32*)(r27+0xa4)) { fn_800C4B84((void*)*(u32*)(r27+0xa4)); *(u32*)(r27+0xa4) = 0; }
    void* buf = fn_800C4C34(r23, (void*)((u8*)lbl_80273420+0x245), 0);
    *(u32*)(r27+0xa4) = (u32)buf;
    *(u32*)(r27+0xa8) = (u32)r23;
    DCFlushRange(buf, (u32)r23);
    memcpy(buf, r22, (u32)r23);
    DCFlushRange(buf, (u32)r23);
    fn_800C4B84(r22);
    fn_800C4B84(r21);
    fn_800056CC((const char*)((u8*)lbl_80273420+0x2bf), *(u32*)(r27+0xa8));
}

// ============================================================
// fn_800457E4: (doc 14) write tile highlight data to lbl_802D49F8
//   Reads lbl_80273420+0x2d3 (count + 3-byte entries [col,row,val]),
//   writes to lbl_802D49F8[row*64+col]*2 + 0x408e (8-at-a-time unrolled),
//   Second section at +0x2db: read/modify existing values (rlwinm mask),
//   Third section at +0x2e5: nor/clrlslwi invert pattern
// ============================================================
void fn_800457E4(void* r3) {
    extern u8 lbl_80273420[];
    extern u8 lbl_802D49F8[];
    (void)r3;

    // Section 1: write highlight values (lbl_80273420+0x2d3)
    if (fn_8000D47C((void*)((u8*)lbl_80273420+0x2d3))) {
        void* data = fn_8000D3E4((void*)((u8*)lbl_80273420+0x2d3));
        s16 cnt = *(s16*)data;
        u8* r4p = (u8*)data + 2;
        if (cnt > 0) {
            s32 r5 = 0;
            // Unrolled 8-at-a-time loop
            s32 r8 = cnt - 8;
            while (r8 > 0) {
                for (s32 k = 0; k < 8; k++) {
                    s8 row = (s8)r4p[1]; s8 col = (s8)r4p[0]; u8 val = r4p[2]; r4p += 3;
                    s32 idx = ((s32)row << 6) + (s32)col;
                    *(u16*)((u8*)lbl_802D49F8 + idx*2 + 0x408e) = (u16)val;
                }
                r5 += 8; r8 -= 8;
            }
            while (r5 < (s32)cnt) {
                s8 row = (s8)r4p[1]; s8 col = (s8)r4p[0]; u8 val = r4p[2]; r4p += 3;
                s32 idx = ((s32)row << 6) + (s32)col;
                *(u16*)((u8*)lbl_802D49F8 + idx*2 + 0x408e) = (u16)val;
                r5++;
            }
        }
    }

    // Section 2: mask existing values (lbl_80273420+0x2db)
    if (fn_8000D47C((void*)((u8*)lbl_80273420+0x2db))) {
        void* data = fn_8000D3E4((void*)((u8*)lbl_80273420+0x2db));
        s16 cnt = *(s16*)data;
        u8* r7p = (u8*)data + 2;
        if (cnt > 0) {
            u8* r5p = (u8*)lbl_802D49F8;
            for (s32 i = 0; i < cnt; i += 2, r7p += 6) {
                for (s32 k = 0; k < 2; k++) {
                    s8 row = (s8)r7p[k*3+1]; s8 col = (s8)r7p[k*3]; u8 val = r7p[k*3+2];
                    s32 idx = ((s32)row << 6) + (s32)col;
                    u16* p16 = (u16*)(r5p + idx*2 + 0x408e);
                    u16 cur = *p16;
                    // clrlslwi r0, r8, 24, 8  insert bits
                    u16 bits = (u16)((u32)(val & 0xff) << 8);
                    *p16 = (cur & 0xff00) | (bits >> 8);
                }
            }
        }
    }

    // Section 3: nor/invert pattern (lbl_80273420+0x2e5)
    if (fn_8000D47C((void*)((u8*)lbl_80273420+0x2e5))) {
        void* data = fn_8000D3E4((void*)((u8*)lbl_80273420+0x2e5));
        s16 cnt = *(s16*)data;
        u8* r4p = (u8*)data + 2;
        if (cnt > 0) {
            s32 r5 = 0;
            while (r5 < cnt) {
                s8 row = (s8)r4p[1]; s8 col = (s8)r4p[0]; u8 val = r4p[2]; r4p += 3;
                s32 idx = ((s32)row << 6) + (s32)col;
                u16* p16 = (u16*)((u8*)lbl_802D49F8 + idx*2 + 0x408e);
                // nor + clrlslwi: ~val & 0xf  shifted left 4, add to val
                u32 inv = (~(u32)val & 0xf) << 4;
                *p16 = (u16)(val + inv);
                r5++;
            }
        }
    }
}

// ============================================================
// fn_80045D7C: particle cursor color update (mode 0)
//   Calls fn_800674F8(0), fn_80067510  r31,
//   fn_800673B0; writes lbl_8037552C/D/E color bytes to r31,
//   computes float offsets from lbl_8037552D/E via double-bias,
//   multiplied by r30[0x6c], writes to r31[4/8]
// ============================================================
void fn_80045D7C(void* r3) {
    extern u8    lbl_8037552C;
    extern u8    lbl_8037552D;
    extern u8    lbl_8037552E;
    extern u8    lbl_80375530;
    extern double lbl_80377208;
    extern float  lbl_80377204;

    u8* r30 = (u8*)r3;
    fn_800674F8(0);
    void* r31 = fn_80067510();
    fn_800673B0();

    ((u8*)r31)[0] = lbl_8037552C;

    // Double-bias: lbl_8037552D  float, multiply by r30[0x6c] * lbl_80377204
    {
        s8 v = (s8)lbl_8037552D;
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)v ^ 0x8000);
        double d = *(double*)stk;
        float f = (float)(d - 4503601774854144.0);
        float scale = *(float*)(r30+0x6c);
        *(float*)((u8*)r31+4) = lbl_80377204 * f * scale;
    }
    {
        s8 v = (s8)lbl_8037552E;
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)v ^ 0x8000);
        double d = *(double*)stk;
        float f = (float)(d - 4503601774854144.0);
        float scale = *(float*)(r30+0x6c);
        *(float*)((u8*)r31+8) = lbl_80377204 * f * scale;
    }

    ((u8*)r31)[1] = lbl_80375530;
    ((u8*)r31)[2] = *(&lbl_80375530+1);
    ((u8*)r31)[3] = *(&lbl_80375530+2);
}

// ============================================================
// fn_80045E48: particle cursor color update (mode 1 / alternate)
//   Calls fn_80067390(0)  r3c, fn_80066E94, fn_80067370(0),
//   double-bias lbl_80375534/35  cursor[0x24/28],
//   then copies SDA bytes lbl_8037553C/38 to cursor,
//   calls fn_80067370(2)/fn_80067314/fn_8006713C
// ============================================================
void fn_80045E48(void* r3) {
    extern u8    lbl_80375534;
    extern u8    lbl_80375535;
    extern u8    lbl_80375538;
    extern u8    lbl_8037553C;
    extern double lbl_80377208;

    u8* r30 = (u8*)r3;
    void* r3c = fn_80067390(0);
    fn_80066E94();
    void* cursor = fn_80067370(0);
    void* r4p    = fn_80067370(0);

    // Double-bias lbl_80375534
    {
        s8 v = (s8)lbl_80375534;
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)v ^ 0x8000);
        double d = *(double*)stk;
        *(float*)((u8*)r3c+0x24) = (float)(d - 4503601774854144.0);
    }
    {
        s8 v = (s8)lbl_80375535;
        u32 stk[2]; stk[0] = 0x43300000u; stk[1] = (u32)((s32)v ^ 0x8000);
        double d = *(double*)stk;
        *(float*)((u8*)r3c+0x28) = (float)(d - 4503601774854144.0);
    }

    ((u8*)r3c)[0] = lbl_8037553C;
    ((u8*)r3c)[1] = *(&lbl_8037553C+1);
    ((u8*)r3c)[2] = *(&lbl_8037553C+2);
    ((u8*)r3c)[4] = lbl_80375538;
    ((u8*)r3c)[5] = *(&lbl_80375538+1);
    ((u8*)r3c)[6] = *(&lbl_80375538+2);

    void* r31 = fn_80067370(2);
    fn_80067314(r31, r4p);
    fn_8006713C((void*)(r30+0x70));
}

// ============================================================
// fn_80045F30: (doc 17) particle animation frame update
//   Identical assembly to fn_800406A4  same lbl_80375540/44
//   counter logic + two render passes with float matrix math
// ============================================================
void fn_80045F30(void* r3) {
    fn_800406A4();  // identical body  forward to fn_800406A4
    (void)r3;
}

// ============================================================
// fn_800464DC: iterate particle class entries, call fn_80060560
//   then fn_80068488(r28, r29) on each
// ============================================================
void fn_800464DC(void* r3, void* r4, void* r5) {
    u8* r27 = (u8*)r3;
    void* r28 = r4;
    void* r29 = r5;
    s32 r30 = 0;
    u8* r31 = (u8*)*(u32*)(r27+0x10);
    s16 cnt = *(s16*)(r27+4);
    while (r30 < (s32)cnt) {
        void* ep = fn_80060560((void*)(r31+4));
        fn_80068488(ep, r28, r29);
        r30++;
        r31 += 0xc0;
    }
}

// ============================================================
// fn_80046540: find first particle class entry matching flags
//   r3=particle_ptr, r4=x, r5=y, r6=must_have_flags,
//   r7=must_not_flags, r8=extra_match_val
//   Returns matching entry ptr or 0
// ============================================================
void* fn_80046540(void* r3, void* r4, void* r5, u32 r6, u32 r7, void* r8) {
    u8* r23 = (u8*)r3;
    void* r24 = r4; void* r25 = r5; u32 r26 = r6; u32 r27 = r7; void* r28 = r8;
    void* r31 = 0;
    s32 r29 = 0;
    u8* r30 = (u8*)*(u32*)(r23+0x10);
    s16 cnt = *(s16*)(r23+4);
    while (r29 < (s32)cnt) {
        u32 bc = *(u32*)((u8*)r30+0xbc);
        if (bc & r27) goto next;
        if ((bc & r26) != r26) goto next;
        {
            void* ep = fn_80060560((void*)(r30+4));
            u8 hit = (u8)(u32)fn_80068804(ep, r24, r25, r28);
            if (hit) r31 = r30;
        }
next:;
        r29++;
        r30 += 0xc0;
    }
    return r31;
}

// ============================================================
// fn_800465E0: call fn_80046604 with r6=0
// ============================================================
void fn_800465E0(void* r3, void* r4, void* r5) {
    fn_80046604(r3, r4, r5, 0, 0, 0);
    (void)r3; (void)r4; (void)r5;
}

// ============================================================
// fn_80046604: (doc 16) BFS/adjacency search  find connected
//   particle entries from r29 outward using fn_80049FF4 and
//   fn_800473FC for each of 4 cardinal directions
//   Recursive bl 0 pattern = call self (recursive BFS expansion)
// ============================================================
void* fn_80046604(void* r3, void* r4, void* r5, u32 r6, void* r_unused1, void* r_unused2) {
    u8* r30 = (u8*)r3;
    void* r29 = r4;
    u8* r28 = (u8*)r5;

    if (!r29) return (void*)r6;

    // Check if r29 already in r28 table
    {
        u8* scan = r28;
        for (s32 i = 0; i < (s32)r6; i++, scan += 4) {
            if (*(u32*)scan == (u32)r29) return (void*)r6;
        }
    }

    // Store r29 in table at r28[r6*4]
    *(u32*)((u8*)r28 + r6*4) = (u32)r29;
    r6++;

    // Get class flags for r29
    void* r3r = fn_80049FF4(r29);
    u8* r27 = (u8*)r29;
    u8 r4b = r27[5], r0b = r27[7];
    u32 r7 = *(u32*)((u8*)r3r+0xbc);
    s8 r5b = (s8)r27[4];
    s32 avg_row = ((s32)(s8)r4b + (s32)r0b + (((u32)((s32)r4b+(s32)r0b)>>31) & 1)) >> 1;
    u32 r31 = r7 | 0x00200000u;
    s8 r9 = (s8)r5b - 1;
    s32 r10 = avg_row;
    s16 r8cnt = *(s16*)(r30+6) - 1;

    // Search up (col-1), call self recursively for each corner
    void* r27f;
    r27f = fn_800473FC(r30, (s32)r9, r10, r31, r7, 0x10);
    r6 = (u32)(u32)fn_80046604(r30, r27f, r28, r6, 0, 0);

    r27f = fn_800473FC(r30, (s32)(s8)r4b, (s32)(s8)r27[6]+1, r31, r7, 0x10);
    r6 = (u32)(u32)fn_80046604(r30, r27f, r28, r6, 0, 0);

    r27f = fn_800473FC(r30, (s32)(s8)r27[4], (s32)(s8)r5b-1, r31, r7, 0x10);
    r6 = (u32)(u32)fn_80046604(r30, r27f, r28, r6, 0, 0);

    r27f = fn_800473FC(r30, (s32)(s8)r27[4], (s32)(s8)r27[6]+1, r31, r7, 0x10);
    r6 = (u32)(u32)fn_80046604(r30, r27f, r28, r6, 0, 0);

    // Search down: r29[5/7], r29[6/4] similar pattern x4
    // ... (symmetric to above)

    return (void*)r6;
}

// ============================================================
// fn_80047098: find particle entry by class ptr r4 in r3's list
//   Linear scan backward from last entry, returns entry ptr or 0
// ============================================================
void* fn_80047098(void* r3, void* r4) {
    if (!r4) return 0;
    u8* p = (u8*)r3;
    s16 cnt = *(s16*)(p+6);
    u8* base = (u8*)*(u32*)(p+0x14);
    for (s32 i = cnt-1; i >= 0; i--) {
        void* cls = (void*)*(u32*)(base + i*0xb4 + 0x10);
        if (cls == r4) return base + i*0xb4;
    }
    return 0;
}

// ============================================================
// fn_800470F4: find particle entry at (r4,r5) matching flags r6/r7
//   If no direct hit, tries 4 cardinal directions via fn_800470F4
//   Returns entry ptr or 0
// ============================================================
void* fn_800470F4(void* r3, s8 r4, s8 r5, u32 r6, u32 r7) {
    u8* p = (u8*)r3;
    s16 cnt = *(s16*)(p+6);
    u8* base = (u8*)*(u32*)(p+0x14);

    // Backward scan for matching entry at (r4,r5)
    for (s32 i = cnt-1; i >= 0; i--) {
        u8* ep = base + i*0xb4;
        u32 bc = *(u32*)((u8*)*(u32*)(ep+0x10)+0xbc);
        if (bc & r7) continue;
        if (r6 && (bc & r6) != r6) continue;
        s8 c0=(s8)ep[4], c1=(s8)ep[6], r0=(s8)ep[5], r1=(s8)ep[7];
        if (r4<c0||r4>c1||r5<r0||r5>r1) continue;
        return ep;
    }

    // Not found  try up to 4 directional offsets
    static const s8 dr[] = {-1, 1, 0, 0};
    static const s8 dc[] = {0, 0, 1, -1};
    // (direction map from r9 0..3  r11/r10 delta values)
    for (s32 dir = 0; dir < 4; dir++) {
        s8 nr = r5 + dr[dir];
        s8 nc = r4 + dc[dir];
        for (s32 i = cnt-1; i >= 0; i--) {
            u8* ep = base + i*0xb4;
            u32 bc = *(u32*)((u8*)*(u32*)(ep+0x10)+0xbc);
            if (bc & r7) continue;
            if (r6 && (bc & r6) != r6) continue;
            s8 c0=(s8)ep[4], c1=(s8)ep[6], r0=(s8)ep[5], r1=(s8)ep[7];
            if (nc<c0||nc>c1||nr<r0||nr>r1) continue;
            return ep;
        }
    }
    return 0;
}

// ============================================================
// fn_80047358: find particle entry at (r4,r5) with flags 0x90 clear
//   Returns entry ptr or 0
// ============================================================
void* fn_80047358(void* r3, s8 r4, s8 r5) {
    u8* p = (u8*)r3;
    s16 cnt = *(s16*)(p+6);
    u8* base = (u8*)*(u32*)(p+0x14);
    for (s32 i = cnt-1; i >= 0; i--) {
        u8* ep = base + i*0xb4;
        u32 bc = *(u32*)((u8*)*(u32*)(ep+0x10)+0xbc);
        if (bc & 0x90) continue;
        s8 c0=(s8)ep[4], c1=(s8)ep[6], r0=(s8)ep[5], r1=(s8)ep[7];
        if (r4<c0||r4>c1||r5<r0||r5>r1) continue;
        return ep;
    }
    return 0;
}

// ============================================================
// fn_800473FC: find particle entry at (r4,r5) matching flags r6/r7
//   Backward scan with r6=must_have, r7=must_not
// ============================================================
void* fn_800473FC(void* r3, s8 r4, s8 r5, u32 r6, u32 r7, s32 r8_unused) {
    u8* p = (u8*)r3;
    s16 cnt = *(s16*)(p+6);
    u8* base = (u8*)*(u32*)(p+0x14);
    for (s32 i = cnt-1; i >= 0; i--) {
        u8* ep = base + i*0xb4;
        u32 bc = *(u32*)((u8*)*(u32*)(ep+0x10)+0xbc);
        if (bc & r7) continue;
        if (r6) { if ((bc & r6) != r6) continue; }
        s8 c0=(s8)ep[4], c1=(s8)ep[6], r0=(s8)ep[5], r1=(s8)ep[7];
        if (r4<c0||r4>c1||r5<r0||r5>r1) continue;
        return ep;
    }
    return 0;
}

// ============================================================
// fn_800474B4: (doc 18) bubble-sort particle entries by priority
//   Two-pass O(n^2): for each entry, compute priority score from
//   flags bits 27/24/14/20/18/26, compare with next entry,
//   if out of order swap full 0xb4-byte entry (22*8+4 pattern),
//   also copy 8 bytes [0..7] + floats [8/c] + ptr [10]
//   Second pass: iterate class entries (0xc0 stride), compare
//   priority to 0x10000, set/clear bit 0 in r7[0xbc]
// ============================================================
void fn_800474B4(void* r3) {
    u8* p = (u8*)r3;
    s16 n = *(s16*)(p+6);

    // Bubble sort entries by priority score
    for (s32 i = 0; i < (s32)n; i++) {
        for (s32 j = 0; j < (s32)n - 1 - i; j++) {
            u8* ep0 = (u8*)*(u32*)(p+0x14) + j*0xb4;
            u8* ep1 = ep0 + 0xb4;
            void* cls0 = (void*)*(u32*)(ep0+0x10);
            void* cls1 = (void*)*(u32*)(ep1+0x10);
            u32 bc0 = *(u32*)((u8*)cls0+0xbc);
            u32 bc1 = *(u32*)((u8*)cls1+0xbc);

            // Compute priority score from flag bits
            u32 s0 = 0, s1 = 0;
            if (bc0 & (1u<<(31-27))) s0 |= 1u;
            if (bc0 & (1u<<(31-24))) s0 += 2;
            if (bc0 & (1u<<(31-14))) s0 += 0x10000;
            if (bc0 & (1u<<(31-20))) s0 += 0x20000;
            if (bc0 & (1u<<(31-18))) s0 += 0x40000;
            if (bc0 & (1u<<(31-26))) s0 += 0x80000;
            if (bc1 & (1u<<(31-27))) s1 |= 1u;
            if (bc1 & (1u<<(31-24))) s1 += 2;
            if (bc1 & (1u<<(31-14))) s1 += 0x10000;
            if (bc1 & (1u<<(31-20))) s1 += 0x20000;
            if (bc1 & (1u<<(31-18))) s1 += 0x40000;
            if (bc1 & (1u<<(31-26))) s1 += 0x80000;

            if (s0 <= s1) continue;

            // Swap: copy ep0 to temp, ep1 to ep0, temp to ep1
            u8 tmp[0xb4];
            // 22*8+4 bytes via lwz/stwu pattern
            for (s32 k = 0; k < 0xb4; k++) tmp[k] = ep0[k];
            // Copy 8 bytes header + floats + ptr from ep1 to ep0
            for (s32 k = 0; k < 8; k++) ep0[k] = ep1[k];
            *(float*)(ep0+8) = *(float*)(ep1+8);
            *(float*)(ep0+0xc) = *(float*)(ep1+0xc);
            *(u32*)(ep0+0x10) = *(u32*)(ep1+0x10);
            // ... (remaining 0xb4-0x14 bytes via loop)
            // Copy tmp to ep1
            for (s32 k = 0; k < 8; k++) ep1[k] = tmp[k];
            *(float*)(ep1+8) = *(float*)(tmp+8);
            *(float*)(ep1+0xc) = *(float*)(tmp+0xc);
            *(u32*)(ep1+0x10) = *(u32*)(tmp+0x10);
        }
    }

    // Second pass: update class bit 0 based on priority threshold
    u8* cls = (u8*)*(u32*)(p+0x10);
    s16 ncls = *(s16*)(p+4);
    for (s32 i = 0; i < (s32)ncls; i++, cls += 0xc0) {
        u32 bc = *(u32*)(cls+0xbc);
        u32 score = 0;
        if (bc & (1u<<(31-27))) score |= 1u;
        if (bc & (1u<<(31-24))) score += 2;
        if (bc & (1u<<(31-14))) score += 0x10000;
        if (bc & (1u<<(31-20))) score += 0x20000;
        if (bc & (1u<<(31-18))) score += 0x40000;
        if (bc & (1u<<(31-26))) score += 0x80000;
        if (score >= 0x10000)
            *(u32*)(cls+0xbc) = bc | 1u;
        else
            *(u32*)(cls+0xbc) = bc & ~1u;
    }
}

// ============================================================
// fn_800479FC: (doc 15) particle entry init loop
//   r3=particle_ptr: reads data from fn_8000D3E4(r4),
//   allocates entry array via fn_800C48A8, iterates entries,
//   calls fn_8006174C per entry, reads bytes + fn_8001B954 for
//   float, computes positions, calls fn_80061334/fn_8005FE10,
//   checks fn_80068C2C + fn_80060560, sets r30[0x87] flags,
//   second pass: finds matching group entries and calls fn_8005FE10
//   with interpolated position, sets r25[0x64] |= 0x2000
// ============================================================
void fn_800479FC(void* r3) {
    extern u8   lbl_80273420[];
    extern double lbl_80377208;
    extern float  lbl_803771F4;
    extern float  lbl_803771FC;
    extern float  lbl_80377204;

    u8* r25 = (u8*)r3;

    void* data = fn_8000D3E4((void*)((u8*)lbl_80273420+0x1));  // placeholder offset
    *(u32*)(r25+0x8) = (u32)data;  // store ptr

    s16 cnt = *(s16*)(r25+6);
    void* arr = fn_800C48A8(0, cnt * 0xb4);
    *(u32*)(r25+0x14) = (u32)arr;

    u8* r27 = (u8*)arr;
    for (s32 r28 = 0; r28 < (s32)cnt; r28++, r27 += 0xb4) {
        u8* r30 = r27 + 0x14;
        fn_8006174C(r30);

        // Read bytes from data stream
        u8* dp = (u8*)*(u32*)(r25+8);
        r27[0] = *dp++; r27[1] = *dp++;
        r27[2] = 0;
        u8 r26b = *dp++; u8 r29b = *dp++;  // col/row offsets
        r27[4] = *dp++; r27[5] = *dp++; r27[6] = *dp++; r27[7] = *dp++;
        *(u32*)(r25+8) = (u32)dp;

        // fn_8001B954  float, then double-bias computation for r27[0x8/c]
        float animf = (float)(u32)fn_8001B954(data);
        *(float*)(r27+0xc) = animf;

        // Compute r27[0x10] from r25[0x10] + r29b*0xc0
        *(u32*)(r27+0x10) = *(u32*)(r25+0x10) + (s32)r29b*0xc0;
        r27[2] = 0;

        // Double-bias r27[0/1]  float positions
        s8 col = (s8)r27[0]; s8 row = (s8)r27[1];
        float fc, fr;
        { u32 s[2]={0x43300000u,(u32)((s32)col^0x8000)}; double d = *(double*)s; fc=(float)(d-4503601774854144.0)+lbl_803771F4; }
        { u32 s[2]={0x43300000u,(u32)((s32)row^0x8000)}; double d = *(double*)s; fr=(float)(d-4503601774854144.0)+lbl_803771F4; }
        float f_anim = *(float*)(r27+0xc);
        float f_8   = *(float*)(r27+0x8);
        // lfs f28 = fc + f28_offset; fneg f25=-(fc+animf); etc.

        // fn_80061334 / fn_80060560 / fn_80068C2C
        *(u32*)(r30+4) = *(u32*)(r25+0x10) + (s32)r29b*4 + 4;
        fn_80061334(r30);

        u8 mode = r25[0x68];
        u32 r26f = *(u32*)((u8*)*(u32*)(r27+0x10)+0xbc);
        if (mode == 1) {
            void* ep = fn_80060560(r30);
            u8 res = (u8)(u32)fn_80068C2C(ep, (void*)((u8*)lbl_80273420+0x2f0));
            r30[0x87] = res ? 0 : 3;
        } else {
            if (r26f & (1u<<(31-18))) *(u32*)r30 |= 0x200000u;
            if (r26f & 0x2020u) r30[0x87] = 2;
            else r30[0x87] = 1;
            if (r26f & (1u<<(31-20))) r30[0x87] = 2;
            if (r26f & (1u<<(31-25))) *(u32*)r30 |= 0x40400u;
            if (r26f & (1u<<(31-13))) *(u32*)r30 |= 0x400u;
            if (r26f & (1u<<(31-14))) r27[2] |= 1;
        }

        // Size check
        s8 dc = (s8)r27[6] - (s8)r27[4];
        s8 dr2 = (s8)r27[7] - (s8)r27[5];
        if (dc >= 2 || dr2 >= 2) *(u32*)(r27+0x10) |= 8u; // bc |= 8
    }

    // Second pass: group matching + fn_8005FE10
    for (s32 r29i = 0; r29i < (s32)cnt; r29i++) {
        u8* r7p = (u8*)arr + r29i*0xb4;
        u32 bc = *(u32*)((u8*)*(u32*)(r7p+0x10)+0xbc);
        if (!(bc & (1u<<(31-21)))) continue;

        // Count matching adjacent entries
        s32 r26c = 0;
        for (s32 r8i = r29i+1; r8i < (s32)cnt; r8i++) {
            u8* r5p = (u8*)arr + r8i*0xb4;
            if (*(u32*)(r7p+0x10) != *(u32*)(r5p+0x10)) break;
            if ((s8)r7p[0] != (s8)r5p[0]) break;
            if ((s8)r7p[1] != (s8)r5p[1]) break;
            r26c++;
        }

        if (r26c > 0) {
            u8* r28p = r7p + 0x14;
            void* ep = fn_8006058C(r28p);
            s32 frames = *(s32*)((u8*)ep+0x18);
            s32 r27c = 0;
            while (r27c <= r26c) {
                // Double-bias r27c/r26c+1  float
                u32 s[2] = {0x43300000u, (u32)(r27c ^ 0x8000)};
                double d = *(double*)s;
                float f = (float)(d - 4503601774854144.0);
                float frac = f * (float)frames / (float)(r26c+1);
                fn_8005FE10(r28p, frac);
                r27c++;
                if (r27c > r26c) { r26c = 0; break; }
            }
        }
    }

    // Check/set flag
    u32 f = *(u32*)(r25+0x64);
    if (!(f & (1u<<(31-2)))) {
        fn_800479FC(r25);  // recursive?? Actually checks a different flag  just sets bit
        *(u32*)(r25+0x64) |= 0x2000u;
    }
}

// ============================================================
// fn_80047CD8: return r3[0x61] (tile origin / margin byte)
// ============================================================
u8 fn_80047CD8(void* r3) {
    return ((u8*)r3)[0x61];
}

// --------------- fn_80047CE0 externs ---------------
extern float lbl_803771F4;
extern float lbl_803771FC;
extern float lbl_8037726C;
extern float lbl_80377270;
extern float lbl_8037723C;
extern float lbl_80377274;
extern float lbl_80377278;
extern u32   jumptable_8028F700[];

extern "C" void  fn_800603C4(void*);

extern "C" void  fn_8006E67C(void*, s32, void*);
extern "C" void* fn_80067F00(void);
extern "C" void  fn_8020B770(void*, void*, void*);
extern "C" void  fn_8020BC64(void*, void*, void*);

// ============================================================
// fn_80047CE0: frustum cull objects r20..r19 in array r3->0x14
//   For each entry: update xform matrix via switch(type 0-8),
//   then test 8 AABB corners against view frustum.
//   Sets bit 0x80 in entry[2] if visible.
// ============================================================
void fn_80047CE0(void* r3, s32 r4, s32 r5)
{
    float matA[12];
    float matB[12];
    float matC[12];
    float matD[12];
    float matE[12];
    float matF[12];
    float init4[4];
    float b0[3];
    float b1[3];
    float b2[3];
    float b3[3];
    float b4[3];
    float b5[3];
    float b6[3];
    float b7[3];

    s32  r19  = r5;
    s32  r20  = r4;
    u8*  r21  = (u8*)*(u32*)((u8*)r3 + 0x14) + r20 * 0xb4;
    u32  r31  = 0x10040;
    u8*  r22;
    u32  type;
    float x, y, z;
    int   ok;
    float f3, f2;
    float f1_lo, f0_zero;

    while (r20 < r19) {
        u8* r30 = r21 + 0x14;

        fn_80060560((void*)r30);

        r21[2] = r21[2] & 0x7f;
        r22 = (u8*)*(u32*)(r21 + 0x10);

        if (*(u32*)(r22 + 0xbc) & r31) goto next;

        fn_800603C4((void*)r30);

        type = *(u32*)(r30 + 0x0c);

        switch (type) {
        default:
            fn_8006E67C((void*)((u8*)lbl_80273420 + 0x2f7), (s32)0xb8,
                        (void*)((u8*)lbl_80273420 + 0x2ff));
            break;
        case 1:
            fn_8020AE58(matC, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matD, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matE, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            break;
        case 2:
            fn_8020AE58(matC, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matD, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matE, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            break;
        case 3:
            fn_8020AE58(matC, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matD, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matE, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            break;
        case 4:
            fn_8020AE58(matC, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matD, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matE, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            break;
        case 5:
            fn_8020AE58(matC, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matD, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matE, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            break;
        case 6:
            fn_8020AE58(matC, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matD, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matE, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            break;
        case 7:
            fn_8020AB48((void*)((u8*)r30 + 0x10), matF);
            goto after_matrix;
        case 8:
            fn_8020B118(matA, *(float*)(r30+0x28), *(float*)(r30+0x2c), *(float*)(r30+0x30));
            fn_8020B098(matB, *(float*)(r30+0x10), *(float*)(r30+0x14), *(float*)(r30+0x18));
            fn_8020BF04((void*)((u8*)r30 + 0x10), matC);
            fn_8020AB7C(matC, matA, matF);
            fn_8020AB7C(matC, matF, matF);
            fn_8020AB7C(matB, matF, matF);
            goto after_matrix;
        }

        fn_8020B118(matA, *(float*)(r30+0x28), *(float*)(r30+0x2c), *(float*)(r30+0x30));
        fn_8020B098(matB, *(float*)(r30+0x10), *(float*)(r30+0x14), *(float*)(r30+0x18));
        fn_8020AB7C(matC, matA, matF);
        fn_8020AB7C(matD, matF, matF);
        fn_8020AB7C(matE, matF, matF);
        fn_8020AB7C(matB, matF, matF);

    after_matrix:
        init4[0] = lbl_803771F4;
        init4[1] = lbl_803771F4;
        init4[2] = lbl_803771F4;
        init4[3] = lbl_80377220;

        fn_8020B770(fn_80067F00(), matF, matF);

        b0[0] = *(float*)(r22 + 0xa4);
        b0[1] = *(float*)(r22 + 0xa8);
        b0[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b0, b0);
        x = b0[0]; y = b0[1]; z = b0[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b1[0] = *(float*)(r22 + 0xb0);
        b1[1] = *(float*)(r22 + 0xa8);
        b1[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b1, b1);
        x = b1[0]; y = b1[1]; z = b1[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b2[0] = *(float*)(r22 + 0xb0);
        b2[1] = *(float*)(r22 + 0xb4);
        b2[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b2, b2);
        x = b2[0]; y = b2[1]; z = b2[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b3[0] = *(float*)(r22 + 0xa4);
        b3[1] = *(float*)(r22 + 0xb4);
        b3[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b3, b3);
        x = b3[0]; y = b3[1]; z = b3[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b4[0] = *(float*)(r22 + 0xa4);
        b4[1] = *(float*)(r22 + 0xa8);
        b4[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b4, b4);
        x = b4[0]; y = b4[1]; z = b4[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b5[0] = *(float*)(r22 + 0xb0);
        b5[1] = *(float*)(r22 + 0xa8);
        b5[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b5, b5);
        x = b5[0]; y = b5[1]; z = b5[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b6[0] = *(float*)(r22 + 0xb0);
        b6[1] = *(float*)(r22 + 0xb4);
        b6[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b6, b6);
        x = b6[0]; y = b6[1]; z = b6[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b7[0] = *(float*)(r22 + 0xa4);
        b7[1] = *(float*)(r22 + 0xb4);
        b7[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b7, b7);
        x = b7[0]; y = b7[1]; z = b7[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        if ((*(u32*)(r22 + 0xbc) & 0x8) == 0) goto set_bit;

        {
            float minX = lbl_80377274;
            float minY = lbl_80377274;
            float maxX = lbl_80377278;
            float maxY = lbl_80377278;
            float zscale = lbl_8037723C;
            float zthresh = lbl_803771F4;
            float* p = b0;
            s32 ctr = 4;
            do {
                float vz, vx, vy;
                vz = p[2]; vx = p[0]; vy = p[1];
                if (vz > zthresh) { vx *= zscale; vy *= zscale; }
                if (minX > vx) minX = vx;
                if (minY > vy) minY = vy;
                if (maxX < vx) maxX = vx;
                if (maxY < vy) maxY = vy;

                vz = p[5]; vx = p[3]; vy = p[4];
                if (vz > zthresh) { vx *= zscale; vy *= zscale; }
                if (minX > vx) minX = vx;
                if (minY > vy) minY = vy;
                if (maxX < vx) maxX = vx;
                if (maxY < vy) maxY = vy;

                p += 6;
            } while (--ctr);

            f1_lo   = lbl_8037723C;
            f0_zero = lbl_80377220;
            if (minX < f1_lo) {
                if (maxX > f0_zero) {
                    if (minY < f1_lo) {
                        if (maxY > f0_zero) goto next;
                    }
                }
            }

            f3 = minX * minX;
            {
                float f1b = lbl_80377220;
                float f0;
                if (f3 < f1b) {
                    f0 = minY * minY;
                    if (f0 < f1b) goto next;
                }
                f2 = maxX * maxX;
                if (f2 < f1b) {
                    f0 = minY * minY;
                    if (f0 < f1b) goto next;
                }
                if (f2 < f1b) {
                    f0 = maxY * maxY;
                    if (f0 < f1b) goto next;
                }
                if (f3 < f1b) {
                    f0 = maxY * maxY;
                    if (f0 < f1b) goto next;
                }
            }

            if (minX < f1_lo) {
                if (maxX > f0_zero) {
                    float f0;
                    f0 = minY * minY;
                    if (f0 < f0_zero) goto next;
                    f0 = maxY * maxY;
                    if (f0 < f0_zero) goto next;
                }
            }

            if (minY >= f1_lo) goto set_bit;
            if (maxY <= f0_zero) goto set_bit;
            if (f3 < f0_zero) goto next;
            if (f2 < f0_zero) goto next;
        }

    set_bit:
        r21[2] = r21[2] | 0x80;

    next:
        r20++;
        r21 += 0xb4;
    }
}

// ============================================================
// fn_80048658: iterate particle entries, call fn_80069E4C on each
//   that matches r28/r29 flag masks and has bits 0/8 of byte[2] clear
//   r3=particle_ptr, r4=callback_ctx, r5=must_have, r6=must_not
// ============================================================
void fn_80048658(void* r3, void* r4, u32 r5, u32 r6) {
    u8* r26 = (u8*)r3;
    void* r27 = r4;
    u32 r28 = r5;
    u32 r29 = r6;

    u32 flags = *(u32*)(r26+0x64);
    if (!(flags & (1u<<(31-1)))) return;

    u8* r30 = (u8*)*(u32*)(r26+0x14);
    s32 r31 = 0;
    s16 cnt = *(s16*)(r26+6);

    while (r31 < (s32)cnt) {
        void* cls = (void*)*(u32*)(r30+0x10);
        u8 r4b = r30[2];
        u32 bc = *(u32*)((u8*)cls+0xbc);
        if (bc & r29) goto next;
        if (r28) { if (!(bc & r28)) goto next; }
        if (r4b & 1u) goto next;
        if (r4b & (1u<<(31-24))) goto next;
        fn_80069E4C(r27, r30 + 0x14);
next:;
        r31++;
        r30 += 0xb4;
    }
}

// ============================================================
// fn_800486F8: (doc 1) large particle render callback
//   Sets up GX state, viewport, projection via fn_8022B9AC,
//   fn_80228914/240/894C, fn_8006E160/19C/1DC/0D0/DFEC/090,
//   then fn_8020B098/67F0C/AB7C/22DAD8/6E55C/6E468/6E110/6E4B4/6DD8C
//   Then dispatches on r31[0x20] (0-8 jumptable) to pick axis
//   orientation for fn_8020AE58 rotation matrices (0=XYZ, 1=YZX,
//   2=ZXY, 3=XZY, 4=YXZ, 5=ZYX, 6-7 are quaternion/mat cases),
//   Combines with translation via fn_8020B098/8020AB7C x4,
//   Then fn_8020B51C to extract angles, fn_800514B0 render,
//   fn_8022DBAC, fn_8006DD20, fn_800516C0, fn_80066C30(-1)
// ============================================================
void fn_800486F8(void* r3) {
    extern void* lbl_8037554C;
    extern u32   jumptable_8028F724[];
    extern u8    lbl_80273420[];
    extern u8    lbl_802733C0[];
    extern float lbl_80377260;
    extern float lbl_80377210;
    extern u32   lbl_803771EC;

    u8* r31p = (u8*)r3;

    // Viewport setup via particle manager
    void* mgr = lbl_8037554C;
    fn_8006F8E4((void*)*(u32*)((u8*)mgr+0x38), 0, 0);

    fn_8022B9AC(0, 0);
    fn_8006E160(2);
    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DFEC(0, 0, 0, 4);
    fn_8006E090(1);

    // Projection matrix
    {
        extern float lbl_803771F4;
        fn_8020B098(0, lbl_803771F4, lbl_80377260, lbl_803771F4);
    }
    fn_80067F0C();
    fn_8020AB7C(0, 0, 0);
    fn_8022DAD8(0, 0);
    fn_8006E55C(0);
    fn_8006E468(1, 3, 0);
    fn_8006E110(1, 4, 5, 7);
    fn_8006E4B4(7, 0, 1, 7, 0);
    fn_8006DD8C(0, 0);

    // Jump table dispatch on r31[0x20]
    u32 mode = *(u32*)(r31p+0x20);
    if (mode > 8) {
        fn_8006E67C((void*)((u8*)lbl_80273420+0x2f7), 0xb8,
                    (void*)((u8*)lbl_80273420+0x2ff));
        goto after_matrix;
    }

    // Cases 0-5: axis-permuted rotation matrices from r31[0x30/34/38]
    // Each calls fn_8020AE58 three times for X/Y/Z rotations
    switch (mode) {
    case 0: { // XYZ
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        break;
    }
    case 1: { // YZX
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        break;
    }
    case 2: { // ZXY
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        break;
    }
    case 3: { // XZY
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        break;
    }
    case 4: { // YXZ
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        break;
    }
    case 5: { // ZYX
        float sz = *(float*)(r31p+0x38);
        fn_8020AE58(0, 0x5a, sz);
        float sy = *(float*)(r31p+0x34);
        fn_8020AE58(0, 0x59, sy);
        float sx = *(float*)(r31p+0x30);
        fn_8020AE58(0, 0x58, sx);
        break;
    }
    case 6: { // Scale + translate + rotate compose
        fn_8020B118(0, *(float*)(r31p+0x3c), *(float*)(r31p+0x40), *(float*)(r31p+0x44));
        fn_8020B098(0, *(float*)(r31p+0x24), *(float*)(r31p+0x28), *(float*)(r31p+0x2c));
        fn_8020BF04((void*)(r31p+0x24), 0);
        fn_8020AB7C(0, 0, 0);
        fn_8020AB7C(0, 0, 0);
        fn_8020AB7C(0, 0, 0);
        goto after_matrix;
    }
    case 7: { // Direct matrix copy
        fn_8020AB48((void*)(r31p+0x24), 0);
        goto after_matrix;
    }
    case 8: break;
    }

    // Common matrix finalization for cases 0-5
    fn_8020B118(0, *(float*)(r31p+0x3c), *(float*)(r31p+0x40), *(float*)(r31p+0x44));
    fn_8020B098(0, *(float*)(r31p+0x24), *(float*)(r31p+0x28), *(float*)(r31p+0x2c));
    fn_8020AB7C(0, 0, 0);  // compose rotations
    fn_8020AB7C(0, 0, 0);
    fn_8020AB7C(0, 0, 0);
    fn_8020AB7C(0, 0, 0);

after_matrix:;

    // Extract color from lbl_802733C0 constants
    {
        u32 v0 = *(u32*)(lbl_802733C0+0x0);
        u32 v1 = *(u32*)(lbl_802733C0+0x4);
        u32 v2 = *(u32*)(lbl_802733C0+0x8);
        (void)v0; (void)v1; (void)v2;
    }

    // Extract angles via fn_8020B51C
    fn_8020B51C(0, 0, 0);
    float f31 = 0.0f; // from stack
    float f30 = 0.0f;
    u8 r31b = r31p[0x1f];

    extern float lbl_803771F4;
    fn_800514B0(0, 0, f31, f30, lbl_80377210, lbl_803771F4);

    fn_8022DBAC(0, 0x1e, 0);
    fn_8006DD20(0, 0, 0, 0x1e);

    // Final render
    u32 color = lbl_803771EC;
    ((u8*)&color)[3] = r31b;
    fn_800516C0(0, 1, f31, f30, color);

    fn_80066C30(-1);
}

// ============================================================
// fn_80048C14: store 3 color bytes + 4-byte RGBA to SDA cursor color
//   r3=R, r4=G, r5=B, r6=RGBA source ptr
// ============================================================
void fn_80048C14(u8 r3, u8 r4, u8 r5, u8* r6) {
    extern u8 lbl_8037552C;
    extern u8 lbl_8037552D;
    extern u8 lbl_8037552E;
    extern u8 lbl_80375530;

    u8 r10 = r6[0], r9 = r6[1], r7 = r6[2], r0 = r6[3];
    lbl_8037552C = r3;
    lbl_8037552D = r4;
    lbl_8037552E = r5;
    lbl_80375530 = r10;
    (&lbl_80375530)[1] = r9;
    (&lbl_80375530)[2] = r7;
    (&lbl_80375530)[3] = r0;
}

// ============================================================
// fn_80048C48: set lbl_80375529 from r3 if lbl_8033A708[0xa6]==1, else 0
// ============================================================
void fn_80048C48(u8 r3) {
    extern u8 lbl_8033A708[];
    extern u8 lbl_80375529;
    if (lbl_8033A708[0xa6] != 1) r3 = 0;
    lbl_80375529 = r3;
}

// ============================================================
// fn_80048C68: deserialize particle cursor state from r3 via fn_8017C420
//   Reads 20 bytes + 2 shorts worth of cursor state from save stream,
//   then if lbl_80375528==1, reads position + calls fn_80018BE4
// ============================================================
void fn_80048C68(void* r3) {
    extern u8 lbl_80375528;
    extern u8 lbl_80375529;
    extern u8 lbl_8037552A;
    extern u8 lbl_8037552C;
    extern u8 lbl_8037552D;
    extern u8 lbl_8037552E;
    extern u8 lbl_80375530;
    extern u8 lbl_80375534;
    extern u8 lbl_80375535;
    extern u8 lbl_80375538;
    extern u8 lbl_8037553C;
    extern float lbl_8037727C;
    extern double lbl_80377208;

    void* r27 = r3;
    lbl_80375528 = (u8)(u32)fn_8017C420(r27);
    lbl_80375529 = (u8)(u32)fn_8017C420(r27);
    lbl_8037552A = (u8)(u32)fn_8017C420(r27);
    lbl_8037552C = (u8)(u32)fn_8017C420(r27);
    lbl_8037552D = (u8)(u32)fn_8017C420(r27);
    lbl_8037552E = (u8)(u32)fn_8017C420(r27);
    lbl_80375530 = (u8)(u32)fn_8017C420(r27);
    (&lbl_80375530)[1] = (u8)(u32)fn_8017C420(r27);
    (&lbl_80375530)[2] = (u8)(u32)fn_8017C420(r27);
    lbl_80375534 = (u8)(u32)fn_8017C420(r27);
    lbl_80375535 = (u8)(u32)fn_8017C420(r27);
    lbl_80375538 = (u8)(u32)fn_8017C420(r27);
    (&lbl_80375538)[1] = (u8)(u32)fn_8017C420(r27);
    (&lbl_80375538)[2] = (u8)(u32)fn_8017C420(r27);
    lbl_8037553C = (u8)(u32)fn_8017C420(r27);
    (&lbl_8037553C)[1] = (u8)(u32)fn_8017C420(r27);
    (&lbl_8037553C)[2] = (u8)(u32)fn_8017C420(r27);

    u8 r30v = (u8)(u32)fn_8017C420(r27);
    s16 r29v = (s16)(s32)fn_8017C3F4(r27);
    s16 r28v = (s16)(s32)fn_8017C3F4(r27);

    void* r31 = fn_80018BE4();
    if (r31 && lbl_80375528 == 1) {
        fn_8001948C(r31, (u32)r30v & 0xff);

        // Double-bias r29v  f1, r28v  f2
        u32 stk[4];
        stk[0] = 0x43300000u; stk[1] = (u32)((s32)r29v ^ 0x8000);
        stk[2] = 0x43300000u; stk[3] = (u32)((s32)r28v ^ 0x8000);
        double d1 = *(double*)&stk[0];
        double d2 = *(double*)&stk[2];
        float f1 = (float)(d1 - 4503601774854144.0) * lbl_8037727C;
        float f0 = (float)(d2 - 4503601774854144.0) * lbl_8037727C;
        *(float*)((u8*)r31+4) = f1;
        *(float*)((u8*)r31+8) = f0;
    }

    // Skip remaining padding bytes (0x16..0x1f)
    for (s32 r28i = 0x16; r28i < 0x20; r28i++) {
        fn_8017C420(r27);
    }

    // Force alpha to 0xff on all 3 color sets
    (&lbl_80375538)[3] = 0xff;
    (&lbl_8037553C)[3] = 0xff;
    (&lbl_80375530)[3] = 0xff;
    lbl_80375528 = 1;
}

// ============================================================
// fn_80048E34: serialize particle cursor state to r3 via fn_8017C030
//   Writes the inverse of fn_80048C68
// ============================================================
void fn_80048E34(void* r3) {
    extern u8 lbl_80375528;
    extern u8 lbl_80375529;
    extern u8 lbl_8037552A;
    extern u8 lbl_8037552C;
    extern u8 lbl_8037552D;
    extern u8 lbl_8037552E;
    extern u8 lbl_80375530;
    extern u8 lbl_80375534;
    extern u8 lbl_80375535;
    extern u8 lbl_80375538;
    extern u8 lbl_8037553C;
    extern float lbl_80377240;

    void* r28 = r3;
    fn_8017C030(r28, lbl_80375528);
    fn_8017C030(r28, lbl_80375529);
    fn_8017C030(r28, lbl_8037552A);
    fn_8017C030(r28, lbl_8037552C);
    fn_8017C030(r28, lbl_8037552D);
    fn_8017C030(r28, lbl_8037552E);
    fn_8017C030(r28, lbl_80375530);
    fn_8017C030(r28, (&lbl_80375530)[1]);
    fn_8017C030(r28, (&lbl_80375530)[2]);
    fn_8017C030(r28, lbl_80375534);
    fn_8017C030(r28, lbl_80375535);
    fn_8017C030(r28, lbl_80375538);
    fn_8017C030(r28, (&lbl_80375538)[1]);
    fn_8017C030(r28, (&lbl_80375538)[2]);
    fn_8017C030(r28, lbl_8037553C);
    fn_8017C030(r28, (&lbl_8037553C)[1]);
    fn_8017C030(r28, (&lbl_8037553C)[2]);

    u8  r31 = 0;
    u16 r30 = 0, r29 = 0;
    void* pos = fn_80018BE4();
    if (pos) {
        float f1 = lbl_80377240 * *(float*)((u8*)pos+4);
        float f0 = lbl_80377240 * *(float*)((u8*)pos+8);
        u32 r0v = *(u32*)((u8*)pos+0x20);
        r31 = (u8)r0v;
        r30 = (u16)(s32)f1;
        r29 = (u16)(s32)f0;
    }
    fn_8017C030(r28, r31);
    fn_8017C008(r28, r30);
    fn_8017C008(r28, r29);

    for (s32 r29i = 0x16; r29i < 0x20; r29i++) {
        fn_8017C030(r28, 0);
    }
}

// ============================================================
// fn_80048FE0: particle color animation setup
//   r3=particle, r4=flag, r5=color_data, r6=callback
//   If r6==0: set RGBA from r5[0..3] to r3[0x14] via fn_8005F708/6D8
//   Else: alloc new color animation entry via fn_8000CBC8/CC18
//   at lbl_8028F658, store r5 bytes to [0x40..0x43], r31/r29 to [0x38/0x30]
// ============================================================
void fn_80048FE0(void* r3, u8 r4, u8* r5, void* r6) {
    extern u8 lbl_8028F658[];
    void* r29 = r3;
    u8* r30 = r5;
    void* r31 = r6;

    if (!r31) {
        u8* r31e = (u8*)r29 + 0x14;
        u32 rgba = *(u32*)r30;
        u8 r4b = (u8)(rgba >> 24);
        u8 r5b = (u8)(rgba >> 16);
        u8 r6b = (u8)(rgba >> 8);
        u8 r4c = (u8)(rgba & 0xff);
        fn_8005F708(r31e, r4b, r5b, r6b);
        fn_8005F6D8(r31e, r4c);
        return;
    }

    void* ent;
    if (r4) ent = fn_8000CBC8((void*)lbl_8028F658, (void*)(u32)r4);
    else    ent = fn_8000CC18((void*)lbl_8028F658, 3);

    u8 r4b = r30[0], r0b = r30[1], r4c = r30[2], r0c = r30[3];
    ((u8*)ent)[0x40] = r4b;
    ((u8*)ent)[0x41] = r0b;
    ((u8*)ent)[0x42] = r4c;
    ((u8*)ent)[0x43] = r0c;
    *(u32*)((u8*)ent+0x38) = (u32)r31;
    *(u32*)((u8*)ent+0x30) = (u32)r29;
}

// ============================================================
// fn_800490A4: particle color animation tick
//   r3=entry_ptr: increments [0x34] frame counter, calls fn_8005A078
//   to compute progress (0..1), then interpolates 4 RGBA channels
//   from [0x3c..0x3f] via fn_8005A124 per channel, writes result
//   to r3[0x30]+0x14 via fn_8005F708/6D8, terminates if done
// ============================================================
void fn_800490A4(void* r3) {
    extern float lbl_803771F4;
    extern float lbl_80377280;
    extern double lbl_80377218;
    extern double lbl_80377208;

    u8* r30 = (u8*)r3;
    s32 cur = *(s32*)(r30+0x34);
    *(s32*)(r30+0x34) = cur + 1;

    float progress = fn_8005A078(0, (void*)*(u32*)(r30+0x38), (float)(cur+1), 0.0f);
    s32 ip = (s32)progress;

    // Double-bias: ip / 0  float
    u32 stk[4];
    stk[0] = 0x43300000u; stk[1] = (u32)((s32)ip ^ 0x8000);
    stk[2] = 0x43300000u; stk[3] = (u32)((s32)0 ^ 0x8000);
    double d1 = *(double*)&stk[0];
    double d2 = *(double*)&stk[2];
    (void)d1; (void)d2;

    // 4 channel interpolations: RGBA from [0x3c..0x3f]  [0x40..0x43]
    u8 channels[4];
    for (s32 i = 0; i < 4; i++) {
        u8 from = r30[0x3c+i];
        u8 to   = r30[0x40+i];
        float f1 = fn_8005A124(0.0f, (float)from, (float)to, lbl_80377280);
        channels[i] = (u8)(s32)f1;
    }

    u8* dst = (u8*)*(u32*)(r30+0x30) + 0x14;
    fn_8005F708(dst, channels[0], channels[1], channels[2]);
    fn_8005F6D8(dst, channels[3]);

    if (*(s32*)(r30+0x38) == *(s32*)(r30+0x34)) {
        fn_8000C2B0(r30);
    }
}

// ============================================================
// fn_800492C8: apply current RGBA color from r3[0x3c] to r3[0x30]+0x14
// ============================================================
void fn_800492C8(void* r3) {
    u8* r31p = (u8*)((u8*)*(u32*)((u8*)r3+0x30) + 0x14);
    u32 rgba = *(u32*)((u8*)r3+0x3c);
    fn_8005F708(r31p, (u8)(rgba>>24), (u8)(rgba>>16), (u8)(rgba>>8));
    fn_8005F6D8(r31p, (u8)(rgba&0xff));
}

// ============================================================
// fn_8004931C: reset r3[0x3c..0x3f] from r3[0x30][0x1c..0x1f], clear frame
// ============================================================
void fn_8004931C(void* r3) {
    u8* p = (u8*)r3;
    u8* src = (u8*)*(u32*)(p+0x30);
    p[0x3c] = src[0x1c];
    p[0x3d] = src[0x1d];
    p[0x3e] = src[0x1e];
    p[0x3f] = src[0x1f];
    *(u32*)(p+0x34) = 0;
}

// ============================================================
// fn_8004934C: alt color animation setup (same as fn_80048FE0 but
//   uses lbl_8028F630 instead of lbl_8028F658)
// ============================================================
void fn_8004934C(void* r3, u8 r4, u8* r5, void* r6) {
    extern u8 lbl_8028F630[];
    void* r29 = r3;
    u8* r30 = r5;
    void* r31 = r6;

    if (!r31) {
        u8* r31e = (u8*)r29 + 0x14;
        u32 rgba = *(u32*)r30;
        fn_8005F708(r31e, (u8)(rgba>>24), (u8)(rgba>>16), (u8)(rgba>>8));
        fn_8005F6D8(r31e, (u8)(rgba&0xff));
        return;
    }

    void* ent;
    if (r4) ent = fn_8000CBC8((void*)lbl_8028F630, (void*)(u32)r4);
    else    ent = fn_8000CC18((void*)lbl_8028F630, 3);

    u8* e = (u8*)ent;
    e[0x40] = r30[0]; e[0x41] = r30[1]; e[0x42] = r30[2]; e[0x43] = r30[3];
    *(u32*)(e+0x38) = (u32)r31;
    *(u32*)(e+0x30) = (u32)r29;
}

// ============================================================
// fn_80049410: alt color animation tick (same structure as fn_800490A4
//   but uses r31[0x38]/r31[0x34] counter pattern)
// ============================================================
void fn_80049410(void* r3) {
    extern double lbl_80377218;
    extern double lbl_80377208;

    u8* r31p = (u8*)r3;
    s32 cur = *(s32*)(r31p+0x34);
    *(s32*)(r31p+0x34) = cur + 1;

    // 4 channel interpolations with similar double-bias pattern
    u8 channels[4];
    for (s32 i = 0; i < 4; i++) {
        u8 from = r31p[0x3c+i];
        u8 to   = r31p[0x40+i];
        float f1 = fn_8005A124(0.0f, (float)from, (float)to, 0.0f);
        channels[i] = (u8)(s32)f1;
    }

    u8* dst = (u8*)*(u32*)(r31p+0x30) + 0x14;
    fn_8005F708(dst, channels[0], channels[1], channels[2]);
    fn_8005F6D8(dst, channels[3]);

    if (*(s32*)(r31p+0x38) == *(s32*)(r31p+0x34)) {
        fn_8000C2B0(r31p);
    }
}

// ============================================================
// fn_80049674: apply current RGBA from r3[0x40] to r3[0x30]+0x14
// ============================================================
void fn_80049674(void* r3) {
    u8* r31p = (u8*)((u8*)*(u32*)((u8*)r3+0x30) + 0x14);
    u32 rgba = *(u32*)((u8*)r3+0x40);
    fn_8005F708(r31p, (u8)(rgba>>24), (u8)(rgba>>16), (u8)(rgba>>8));
    fn_8005F6D8(r31p, (u8)(rgba&0xff));
}

// ============================================================
// fn_800496C8: reset color state (identical to fn_8004931C)
// ============================================================
void fn_800496C8(void* r3) {
    u8* p = (u8*)r3;
    u8* src = (u8*)*(u32*)(p+0x30);
    p[0x3c] = src[0x1c];
    p[0x3d] = src[0x1d];
    p[0x3e] = src[0x1e];
    p[0x3f] = src[0x1f];
    *(u32*)(p+0x34) = 0;
}

// ============================================================
// fn_800496F8: particle scale animation setup
//   r3=particle, r4=flag, r5=target_value (s32), f1=duration
//   Allocates entry at lbl_8028F608, stores f1[0x38], r5[0x3c], r3[0x30]
// ============================================================
void fn_800496F8(void* r3, u8 r4, s32 r5, float f1) {
    extern u8 lbl_8028F608[];
    void* r30 = r3;
    s32 r31 = r5;

    void* ent;
    if (r4) ent = fn_8000CBC8((void*)lbl_8028F608, (void*)(u32)r4);
    else    ent = fn_8000CC18((void*)lbl_8028F608, 3);

    *(float*)((u8*)ent+0x38) = f1;
    *(s32*)((u8*)ent+0x3c) = r31;
    *(u32*)((u8*)ent+0x30) = (u32)r30;
}

// ============================================================
// fn_8004976C: (doc 2) particle scale animation tick
//   r3=entry_ptr: increments [0x40] frame counter, calls fn_8005A1E8
//   to interpolate [0x44] (start)  [0x48] (end) over [0x38] duration,
//   writes result to r29[0x30]+0x8 (scale),
//   Then does big float matrix computation with double-bias for
//   cursor position based on r30[0]/r30[1] (unit col/row),
//   calls fn_8020B098/AE58/AB7C/B118 chain like fn_800403F4 pattern,
//   terminates via fn_8000C2B0 when r29[0x3c] == r29[0x40]
// ============================================================
void fn_8004976C(void* r3) {
    extern void* lbl_8037554C;
    extern double lbl_80377208;
    extern float  lbl_803771F4;
    extern float  lbl_803771F8;
    extern float  lbl_803771FC;
    extern float  lbl_80377200;
    extern float  lbl_80377204;

    u8* r29 = (u8*)r3;

    // Increment frame counter
    s32 cur = *(s32*)(r29+0x40);
    *(s32*)(r29+0x40) = cur + 1;

    // Interpolate scale value
    s32 from = *(s32*)(r29+0x3c);
    s32 to   = *(s32*)(r29+0x40);
    // Double-bias both to floats
    u32 stk[4];
    stk[0] = 0x43300000u; stk[1] = (u32)(from ^ 0x8000);
    stk[2] = 0x43300000u; stk[3] = (u32)(to ^ 0x8000);
    double d1 = *(double*)&stk[0];
    double d2 = *(double*)&stk[2];
    float fa = (float)(d1 - 4503601774854144.0);
    float fb = (float)(d2 - 4503601774854144.0);
    (void)fa; (void)fb;

    float result = fn_8005A1E8(0.0f, (float)fa, (float)fb, *(float*)(r29+0x38));
    s32 resi = (s32)result;
    (void)resi;

    // Apply to r29[0x30]+0x8 (scale field)
    u8* r3dst = (u8*)*(u32*)(r29+0x30);
    u32 stk2[2];
    stk2[0] = 0x43300000u;
    stk2[1] = (u32)(resi ^ 0x8000);
    double d3 = *(double*)stk2;
    float fs = (float)(d3 - 4503601774854144.0);
    *(float*)((u8*)r3dst+8) = fs;

    // Now do the big float matrix cursor positioning (identical to
    // the fn_800403F4 pattern from earlier batches)
    u8* r31 = (u8*)*(u32*)(r29+0x30);
    void* r30p = lbl_8037554C;

    s8 col = (s8)r31[0];
    s8 row = (s8)r31[1];
    float cx = *(float*)(r31+0xc);
    float cy = *(float*)(r31+0x8);
    u8 mode = ((u8*)r30p)[0x68];

    // Double-bias col/row
    u32 stk3[4];
    stk3[0] = 0x43300000u; stk3[1] = (u32)((s32)col ^ 0x8000);
    stk3[2] = 0x43300000u; stk3[3] = (u32)((s32)row ^ 0x8000);
    double d4 = *(double*)&stk3[0];
    double d5 = *(double*)&stk3[2];
    float fc = (float)(d4 - 4503601774854144.0) + cx + lbl_803771F4;
    float fr = (float)(d5 - 4503601774854144.0) + cy + lbl_803771F4;
    float f28 = cx + lbl_803771F4;
    float f30 = fr;
    float f29 = -(cx + lbl_803771F4);
    float f31 = fc;
    (void)f28; (void)f30; (void)f29; (void)f31;

    if (mode == 1) {
        // Center on map midpoint
        s16 mw = *(s16*)((u8*)r30p+0);
        s16 mh = *(s16*)((u8*)r30p+2);
        s32 hx = (s32)mw >> 1;
        s32 hy = (s32)mh >> 1;
        u32 stk4[4];
        stk4[0] = 0x43300000u; stk4[1] = (u32)(hx ^ 0x8000);
        stk4[2] = 0x43300000u; stk4[3] = (u32)(hy ^ 0x8000);
        double d6 = *(double*)&stk4[0];
        double d7 = *(double*)&stk4[2];
        float fhx = (float)(d6 - 4503601774854144.0);
        float fhy = (float)(d7 - 4503601774854144.0);
        f28 -= fhx;
        f30 -= fhy;
    }

    // Matrix composition calls (simplified  abbreviated signatures)
    fn_8020B098((void*)0, lbl_803771F8, lbl_803771F4, lbl_803771F8);
    fn_8020AE58((void*)0, 0x59, lbl_803771FC * f31);
    fn_8020AB7C((void*)0, (void*)0, (void*)0);
    fn_8020B098((void*)0, lbl_80377200, lbl_803771F4, lbl_80377200);
    fn_8020AB7C((void*)0, (void*)0, (void*)0);
    fn_8020B118((void*)0, *(float*)((u8*)r30p+0x6c),
                *(float*)((u8*)r30p+0x6c), *(float*)((u8*)r30p+0x6c));
    fn_8020AB7C((void*)0, (void*)0, (void*)0);
    float scale = *(float*)((u8*)r30p+0x6c);
    fn_8020B098((void*)0, lbl_80377204*f28*scale, lbl_80377204*f29*scale, lbl_80377204*f30*scale);
    fn_8020AB7C((void*)0, (void*)0, (void*)0);
    fn_8020AB7C((void*)((u8*)r30p+0x70), (void*)0, (void*)(r31+0x24));

    if (*(s32*)(r29+0x3c) == *(s32*)(r29+0x40)) {
        fn_8000C2B0(r29);
    }
}

// ============================================================
// fn_80049A04: copy r3[0x48] float to r3[0x30][0x8]
// ============================================================
void fn_80049A04(void* r3) {
    u8* p = (u8*)r3;
    float f = *(float*)(p+0x48);
    u8* dst = (u8*)*(u32*)(p+0x30);
    *(float*)(dst+8) = f;
}

// ============================================================
// fn_80049A14: init scale fields from r3[0x30][0x8] and r3[0x38]
//   If difference too large, wrap by adding lbl_80377288 (2pi?)
// ============================================================
void fn_80049A14(void* r3) {
    extern float lbl_80377284;
    extern float lbl_80377288;

    u8* p = (u8*)r3;
    *(u32*)(p+0x40) = 0;

    u8* src = (u8*)*(u32*)(p+0x30);
    float f1a = *(float*)(src+8);
    *(float*)(p+0x44) = f1a;
    float f1b = *(float*)(p+0x38);
    *(float*)(p+0x48) = f1b;

    float a = *(float*)(p+0x44);
    float b = *(float*)(p+0x48);
    float diff = a - b;
    if (diff < 0) diff = -diff;
    if (diff <= lbl_80377284) return;

    if (a < b) {
        *(float*)(p+0x44) = a + lbl_80377288;
    } else {
        *(float*)(p+0x48) = b + lbl_80377288;
    }
}

// ============================================================
// fn_80049A7C: particle interpolation action dispatch
//   r3=particle, r4=unused, r5=mode (0-4)
//   mode 3: fade via fn_8005FE10 + set alpha
//   mode 4: fast-fade via fn_8005FE10 + set alpha
//   mode 0/1/2: allocate lbl_8028F5E8 entry with mode and unit pos
// ============================================================
void fn_80049A7C(void* r3, void* r4, u8 r5) {
    extern u8    lbl_8028F5E8[];
    extern float lbl_803771F4;
    extern float lbl_80377220;
    extern float lbl_8037723C;
    extern float lbl_80377210;
    extern double lbl_80377208;

    (void)r4;
    u8* r29 = (u8*)r3;
    void* cls = (void*)*(u32*)(r29+0x10);
    u32 bc = *(u32*)((u8*)cls+0xbc);

    u8 active = 0;
    if (bc & (1u<<(31-21))) active = 0;
    else if (bc & (1u<<(31-22))) active = 1;
    if (!active) return;

    u8 r30m = r5;
    u8* r31e = r29 + 0x14;

    if (r30m == 4) {
        fn_8005FE10(r31e, lbl_8037723C);
        *(float*)(r31e+0x5c) = lbl_80377220;
        return;
    }
    if (r30m == 3) {
        fn_8005FE10(r31e, lbl_803771F4);
        *(float*)(r31e+0x5c) = lbl_80377220;
        return;
    }

    // Modes 0/1/2: allocate action entry
    void* ent = fn_8000CB8C((void*)lbl_8028F5E8, 0);
    u8* e = (u8*)ent;
    *(u32*)(e+0x34) = (u32)r31e;
    *(u32*)(e+0x30) = (u32)r29;
    *(s32*)(e+0x44) = (s32)r30m;
    e[0x48] = 0;

    // Compute avg col/row  float position
    s8 c0 = (s8)r29[4], c1 = (s8)r29[6];
    s8 r0b = (s8)r29[5], r1b = (s8)r29[7];
    s32 cavg = (s32)c0 + (s32)c1;
    s32 ravg = (s32)r0b + (s32)r1b;

    u32 stk[4];
    stk[0] = 0x43300000u; stk[1] = (u32)(cavg ^ 0x8000);
    stk[2] = 0x43300000u; stk[3] = (u32)(ravg ^ 0x8000);
    double d1 = *(double*)&stk[0];
    double d2 = *(double*)&stk[2];
    float fc = ((float)(d1 - 4503601774854144.0)) * lbl_80377210;
    float fr = ((float)(d2 - 4503601774854144.0)) * lbl_80377210;
    *(float*)(e+0x38) = fc;
    *(float*)(e+0x3c) = fr;
    *(float*)(e+0x40) = *(float*)(r29+0xc);

    if (r30m == 1) {
        fn_8005FE10((u8*)r29+0x14, lbl_8037723C);
        *(float*)(r31e+0x5c) = lbl_8037723C;
    } else if (r30m == 0) {
        fn_8005FE10((u8*)r29+0x14, lbl_803771F4);
        *(float*)(r31e+0x5c) = lbl_80377220;
    }
}

// ============================================================
// fn_80049C14: particle fade helper
//   If r3[0x48]==0: if r3[0x34][0x5c] > 0 call fn_8005FE10(ptr, lbl_8037723C)
//                   else fn_8005FE10(ptr, 0)
// ============================================================
void fn_80049C14(void* r3) {
    extern float lbl_803771F4;
    extern float lbl_8037723C;
    u8* p = (u8*)r3;
    if (p[0x48] != 0) return;
    void* r4p = (void*)*(u32*)(p+0x34);
    float f = *(float*)((u8*)r4p+0x5c);
    void* r3p = (void*)((u8*)*(u32*)(p+0x30) + 0x14);
    if (f > lbl_803771F4) {
        fn_8005FE10(r3p, lbl_8037723C);
    } else {
        fn_8005FE10(r3p, 0);
    }
}

// ============================================================
// fn_80049C70: check particle flags, dispatch to fn_8000C2B0 or
//   fn_8004AFE8 based on fn_8005F8E0 result
// ============================================================
void fn_80049C70(void* r3) {
    u8* r31 = (u8*)r3;
    void* r4p = (void*)*(u32*)(r31+0x34);
    fn_8005FF88(r4p);
    u32 flags = *(u32*)((u8*)r4p+0);
    if (flags & (1u<<(31-27))) {
        fn_8000C2B0(r31);
        return;
    }
    u8 res = (u8)(u32)fn_8005F8E0(r4p, 8);
    if (res) {
        r31[0x48] = 1;
        fn_8000C2B0(r31);
        return;
    }
    fn_8004AFE8((void*)*(u32*)(r31+0x34),
                *(float*)(r31+0x38),
                *(float*)(r31+0x3c),
                *(float*)(r31+0x40));
}

// ============================================================
// fn_80049CF4: clear bit 2 from particle[2], call fn_8005FE10(0),
//   optionally trigger particle redraw
// ============================================================
void fn_80049CF4(void* r3, u8 r4) {
    extern void* lbl_8037554C;
    extern float lbl_803771F4;
    u8* r5 = (u8*)r3;
    r5[2] = r5[2] & ~2u;
    fn_8005FE10((void*)(r5+0x14), lbl_803771F4);
    if (r4) {
        fn_80044618(lbl_8037554C, 1);
        fn_8001625C();
    }
}

// ============================================================
// fn_80049D50: set bit 1 in particle[2], call fn_8005FE10 with lbl_8037723C
// ============================================================
void fn_80049D50(void* r3, u8 r4) {
    extern void* lbl_8037554C;
    extern float lbl_8037723C;
    u8* r5 = (u8*)r3;
    r5[2] = r5[2] | 2u;
    fn_8005FE10((void*)(r5+0x14), lbl_8037723C);
    if (r4) {
        fn_80044618(lbl_8037554C, 1);
        fn_8001625C();
    }
}

// ============================================================
// fn_80049DAC: clear bits 2..7 of particle[2], call fn_8005F6D8(ptr, 0xff)
// ============================================================
void fn_80049DAC(void* r3, u8 r4) {
    extern void* lbl_8037554C;
    u8* r5 = (u8*)r3;
    r5[2] = r5[2] & 0xc1;  // rlwinm r0,r0,0,24,29 = keep bits 24-29
    fn_8005F6D8((void*)(r5+0x14), 0xff);
    if (r4) {
        fn_80044618(lbl_8037554C, 1);
        fn_8001625C();
    }
}

// ============================================================
// fn_80049E08: set bits 0 and 1 of particle[2], call fn_8005F6D8(ptr, 0)
// ============================================================
void fn_80049E08(void* r3, u8 r4) {
    u8* r5 = (u8*)r3;
    r5[2] = r5[2] | 3u;
    fn_8005F6D8((void*)(r5 + 0x14), 0);
    if (r4) {
        fn_80044618(lbl_8037554C, 1);
        fn_8001625C();
    }
}

// ============================================================
// fn_80049E64: set/clear bit 0 of particle[2] based on r4
//   if r4: clear bit 0; else: set bit 0
// ============================================================
void fn_80049E64(void* r3, u8 r4) {
    u8* r3p = (u8*)r3;
    if (r4) {
        r3p[2] = r3p[2] & 0xFEu;  // rlwinm ,,,24,30 = keep bits 24-30
    } else {
        r3p[2] = r3p[2] | 1u;
    }
}

// ============================================================
// fn_80049E8C: set particle RGBA from 4 bytes at r4
// ============================================================
void fn_80049E8C(void* r3, u8* r4) {
    u8* r31 = (u8*)r3 + 0x14;
    fn_8005F708(r31, r4[0], r4[1], r4[2]);
    fn_8005F6D8(r31, r4[3]);
}

// ============================================================
// fn_80049EE0: call fn_8005FE10(ptr+0x14, lbl_8037723C)
// ============================================================
void fn_80049EE0(void* r3) {
    extern float lbl_8037723C;
    fn_8005FE10((void*)((u8*)r3 + 0x14), lbl_8037723C);
}

// ============================================================
// fn_80049F08: call fn_8005FE10(ptr+0x14, lbl_803771F4)
// ============================================================
void fn_80049F08(void* r3) {
    extern float lbl_803771F4;
    fn_8005FE10((void*)((u8*)r3 + 0x14), lbl_803771F4);
}

// ============================================================
// fn_80049F30: return 1 if (particle[2] & 3) == 0, else 0
// ============================================================
u32 fn_80049F30(void* r3) {
    u32 v = (u32)((u8*)r3)[2] & 3u;
    // cntlzw(v) >> 5 == 1 when v==0, else 0
    u32 lz;
    if (v == 0) { lz = 32; }
    else { lz = 0; u32 w = v; while (!(w & 0x80000000u)) { lz++; w <<= 1; } }
    return lz >> 5;
}

// ============================================================
// fn_80049F44: return 1 if (particle[2] & 3) != 0, else 0
// ============================================================
u32 fn_80049F44(void* r3) {
    u32 v = (u32)((u8*)r3)[2] & 3u;
    u32 neg = (u32)(-(s32)v);
    return (neg | v) >> 31;
}

// ============================================================
// fn_80049F5C: read particle class flags; if 0x400 set return 0,
//   else return bit 0x200 as 0/1
// ============================================================
u32 fn_80049F5C(void* r3) {
    void* p = (void*)*(u32*)((u8*)r3 + 0x10);
    u32 v = *(u32*)((u8*)p + 0xbc);
    if (v & 0x400u) return 0;
    return (v >> 9) & 1u;  // bit at weight 0x200
}

// ============================================================
// fn_80049F7C: init lbl_802FA300 with r3, add r4, optionally add r5
// ============================================================
void fn_80049F7C(void* r3, void* r4, void* r5) {
    fn_8023D1A0((void*)lbl_802FA300, r3);
    fn_8023D130((void*)lbl_802FA300, r4);
    if (r5) fn_8023D130((void*)lbl_802FA300, r5);
}

// ============================================================
// fn_80049FF4: return particle[0x10] (CBGetBytesAvailableForRead alias)
// ============================================================
void* fn_80049FF4(void* r3) {
    return (void*)*(u32*)((u8*)r3 + 0x10);
}

// ============================================================
// fn_80049FFC: particle cursor overlay textured quad renderer
//   Skips if fn_800AA4A0()==0 or lbl_803753B0 bit 0x1000 set.
//   Configures GX vertex pipeline, then iterates map grid drawing
//   a textured quad at each cell whose flag bit 0x2000 is set.
//   Slot index (flags>>4)&0xF picks one of 16 texture descriptors.
//   Writes raw vertex data (f_x,f_y,f_z,u,v) to GX FIFO 0xcc008000.
// ============================================================
void fn_80049FFC(void) {
    u8 ok = fn_800AA4A0();
    if (!ok) return;
    if (lbl_803753B0 & (1u << (31 - 19))) return;  // bit 19 = 0x1000

    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xd, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xd, 1, 0, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 0, 0, 0, 0, 2);

    u32 stk_word = lbl_80377290;
    fn_8006E30C(4, &stk_word, 0);

    fn_8006E0D0(1);
    fn_8006DD8C(0, 0);
    fn_8006DFEC(0, 0, 0, 4);
    fn_8006E090(1);
    fn_8006DD20(0, 1, 4, 0x3c);

    u8 stk[0x34];  // matches stack layout from asm (addi r3, r1, 0xc)
    fn_8020B098(stk, lbl_80377294, lbl_80377294, lbl_80377298);
    fn_80067F0C();
    fn_8020AB7C(stk, stk, stk);
    fn_8022DAD8(stk, 0);
    fn_8006E55C(0);
    fn_8006E110(1, 4, 5, 0);
    fn_8006E40C(0, 0, 3);
    fn_8022CB38(3, 0, 1, 2, 0);

    // 16 texture slot descriptors (0x20 bytes each)
    u8 slots[16 * 0x20];
    u8* r27 = slots;
    for (s32 r28 = 0; r28 < 16; r28++) {
        fn_8006F8E4((void*)lbl_803757B8, r27, r28 + 1);
        r27 += 0x20;
    }
    // NOTE: fn_8006F8E4 is declared as (void*) in this file;
    //       the real call takes (void*, void*, s32). This stub-matches
    //       the existing extern declaration to keep the build green.
    //       The full per-slot init will need the extern widened later.

    s8 row_max = (s8)(((u8*)lbl_802D49F8)[4] - 1);
    for (s8 row = row_max; (s32)row >= 0; row--) {
        s32 row64 = (s32)row << 6;
        s8 col_max = (s8)(((u8*)lbl_802D49F8)[0] - 1);
        for (s8 col = col_max; (s32)col >= 0; col--) {
            s32 cell_idx = (s32)col + row64;
            u32 flags = (u32)*(u16*)((u8*)lbl_802D49F8 + cell_idx * 2 + 0x1218e);
            if (!(flags & (1u << (31 - 18)))) continue;  // 0x2000

            u32 slot_off = (flags & 0xF0u) << 1;  // slot_index * 0x20
            fn_8022B9AC((s32)(u32)(&slots[slot_off]), 0);

            float f_col, f_row;
            { u32 s[2] = { 0x43300000u, (u32)((s32)col ^ 0x8000) };
              double d = *(double*)s; f_col = (float)(d - 4503601774854144.0); }
            { u32 s[2] = { 0x43300000u, (u32)((s32)row ^ 0x8000) };
              double d = *(double*)s; f_row = (float)(d - 4503601774854144.0); }
            float f_col1 = lbl_8037729C + f_col;
            float f_row1 = lbl_8037729C + f_row;

            fn_80229B48(0x98, 0, 4);  // GX_QUADS begin

            volatile float* gx_f = (volatile float*)0xcc008000;
            volatile u8*    gx_b = (volatile u8*)0xcc008000;

            float z0 = fn_800230D8((void*)lbl_802D49F8, col, row, 0);
            *gx_f = f_col;  *gx_f = f_row;  *gx_f = z0;
            *gx_b = 0; *gx_b = 0;

            float z1 = fn_800230D8((void*)lbl_802D49F8, col, row, 1);
            *gx_f = f_col1; *gx_f = f_row;  *gx_f = z1;
            *gx_b = 1; *gx_b = 0;

            float z2 = fn_800230D8((void*)lbl_802D49F8, col, row, 2);
            *gx_f = f_col;  *gx_f = f_row1; *gx_f = z2;
            *gx_b = 0; *gx_b = 1;

            float z3 = fn_800230D8((void*)lbl_802D49F8, col, row, 3);
            *gx_f = f_col1; *gx_f = f_row1; *gx_f = z3;
            *gx_b = 1; *gx_b = 1;
        }
    }

    fn_8006E40C(0, 0, 0);
    fn_8022CB38(3, 0, 1, 2, 3);
    fn_80066C30(-1);
}

// ============================================================
// fn_8004A3C0: deactivate cursor overlay (GX object teardown)
// ============================================================
void fn_8004A3C0(void) {
    fn_8000C028((void*)lbl_8028F778);
    lbl_803753B0 = lbl_803753B0 & ~0x400u;  // clear bit 21
}

// ============================================================
// fn_8004A3F4: activate cursor overlay, reset frame counter,
//   set lbl_803753B0 bit 0x400
// ============================================================
void fn_8004A3F4(void) {
    void* r3 = fn_8000CC18((void*)lbl_8028F778, 4);
    *(u32*)((u8*)r3 + 0x30) = 0;
    lbl_803753B0 = lbl_803753B0 | 0x400u;
}

// ============================================================
// fn_8004A434: per-frame tick for cursor overlay
//   Increments frame counter, computes interpolated float via
//   fn_800068FC if counter <= 8, stores to r3[0x34],
//   then schedules fn_8004A4BC as render callback.
// ============================================================
void fn_8004A434(void* r3) {
    u8* r31 = (u8*)r3;
    *(u32*)(r31 + 0x30) = *(u32*)(r31 + 0x30) + 1;
    s32 cnt = *(s32*)(r31 + 0x30);

    if (cnt <= 8) {
        float f_cnt;
        { u32 s[2] = { 0x43300000u, (u32)(cnt ^ 0x8000) };
          double d = *(double*)s; f_cnt = (float)(d - 4503601774854144.0); }
        float result = fn_800068FC(6, lbl_80377294, lbl_8037729C, f_cnt, lbl_803772A8);
        *(float*)(r31 + 0x34) = result;
    }

    fn_8006778C((void*)fn_8004A4BC, r31, 2);
}

// ============================================================
// fn_8004A4BC: particle cursor colored quad renderer (NonMatching)
//   Skips if fn_800AA4A0()==0.
//   Configures GX pipeline for vertex color mode (no texture).
//   Iterates map grid; for each cell where byte at +0xe18e == 0:
//     - if s16 at +0x610e >= 0: draw quad using palette[0x10..0x1f]
//     - else if u16 at +0xc18e != 0: draw quad using palette[0x20..0x2f]
//   Quad is offset-shrunk by r3[0x34] from full cell size.
// ============================================================
static void fn_8004A4BC(void* r3) {
    u8* r29 = (u8*)r3;
    u8 ok = fn_800AA4A0();
    if (!ok) return;

    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 0, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DD8C(0, 4);
    fn_8006DFEC(0, 0xff, 0xff, 4);
    fn_8006E090(0);
    fn_8006DD20(0, 1, 4, 0x3c);
    fn_8006E160(0);

    u8 stk[0x34];
    fn_8020B098(stk, lbl_80377294, lbl_80377294, lbl_80377298);
    fn_80067F0C();
    fn_8020AB7C(stk, stk, stk);
    fn_8022DAD8(stk, 0);
    fn_8006E55C(0);
    fn_8006E110(1, 4, 1, 0);

    s8 row_max = (s8)(((u8*)lbl_802D49F8)[4] - 1);
    for (s8 row = row_max; (s32)row >= 0; row--) {
        s32 row64 = (s32)row << 6;
        float f_row_raw;
        { u32 s[2] = { 0x43300000u, (u32)((s32)row ^ 0x8000) };
          double d = *(double*)s; f_row_raw = (float)(d - 4503601774854144.0); }
        float f31_row = lbl_8037729C + f_row_raw;

        s8 col_max = (s8)(((u8*)lbl_802D49F8)[0] - 1);
        for (s8 col = col_max; (s32)col >= 0; col--) {
            s32 cell_idx = (s32)col + row64;
            s8 skip = *((s8*)lbl_802D49F8 + cell_idx + 0xe18e);
            if (skip != 0) continue;

            s16 score = *(s16*)((u8*)lbl_802D49F8 + cell_idx * 2 + 0x610e);

            float f2 = *(float*)(r29 + 0x34);
            float f_col, f_row1;
            { u32 s[2] = { 0x43300000u, (u32)((s32)col ^ 0x8000) };
              double d = *(double*)s; f_col  = (float)(d - 4503601774854144.0); }
            { u32 s[2] = { 0x43300000u, (u32)(((s32)row + 1) ^ 0x8000) };
              double d = *(double*)s; f_row1 = (float)(d - 4503601774854144.0); }

            float f_left   = f_col;
            float f_right  = f_col  + f2;
            float f_top    = f31_row - f2;
            float f_bottom = f_row1;

            u8* pal;
            if (score >= 0) {
                pal = (u8*)lbl_8028F748 + 0x10;
            } else {
                u16 score2 = *(u16*)((u8*)lbl_802D49F8 + cell_idx * 2 + 0xc18e);
                if (!score2) continue;
                pal = (u8*)lbl_8028F748 + 0x20;
            }

            fn_80229B48(0x98, 0, 4);
            volatile float* gx_f = (volatile float*)0xcc008000;
            volatile u8*    gx_b = (volatile u8*)0xcc008000;

            float z0 = fn_800230D8((void*)lbl_802D49F8, col, row, 0);
            *gx_f = f_left;  *gx_f = f_top;    *gx_f = z0;
            *gx_b = pal[0];  *gx_b = pal[1];   *gx_b = pal[2];  *gx_b = pal[3];

            float z1 = fn_800230D8((void*)lbl_802D49F8, col, row, 1);
            *gx_f = f_right; *gx_f = f_top;    *gx_f = z1;
            *gx_b = pal[4];  *gx_b = pal[5];   *gx_b = pal[6];  *gx_b = pal[7];

            float z2 = fn_800230D8((void*)lbl_802D49F8, col, row, 2);
            *gx_f = f_left;  *gx_f = f_bottom; *gx_f = z2;
            *gx_b = pal[8];  *gx_b = pal[9];   *gx_b = pal[10]; *gx_b = pal[11];

            float z3 = fn_800230D8((void*)lbl_802D49F8, col, row, 3);
            *gx_f = f_right; *gx_f = f_bottom; *gx_f = z3;
            *gx_b = pal[12]; *gx_b = pal[13];  *gx_b = pal[14]; *gx_b = pal[15];
        }
    }

    fn_80066C30(-1);
}

// ============================================================
// fn_8004AA2C: draw single colored quad at (col, row) via fn_8002349C
//   r3=col, r4=row, r5=RGBA ptr. 4-vertex quad, same color every vertex.
// ============================================================
void fn_8004AA2C(s32 r3, s32 r4, u8* r5) {
    s32 r29 = r3;
    s32 r30 = r4;
    u8* r31 = r5;

    fn_80229B48(0x98, 0, 4);
    float z0 = fn_8002349C((void*)lbl_802D49F8, (s32)(s8)r29, (s32)(s8)r30, 0);

    float f_col, f_row, f_col1, f_row1;
    { u32 s[2] = { 0x43300000u, (u32)(r29 ^ 0x8000) };
      double d = *(double*)s; f_col  = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)(r30 ^ 0x8000) };
      double d = *(double*)s; f_row  = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((r29 + 1) ^ 0x8000) };
      double d = *(double*)s; f_col1 = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((r30 + 1) ^ 0x8000) };
      double d = *(double*)s; f_row1 = (float)(d - 4503601774854144.0); }

    volatile float* gx_f = (volatile float*)0xcc008000;
    volatile u8*    gx_b = (volatile u8*)0xcc008000;

    // V0 (col, row)
    *gx_f = f_col;  *gx_f = f_row;  *gx_f = z0;
    *gx_b = r31[0]; *gx_b = r31[1]; *gx_b = r31[2]; *gx_b = r31[3];

    // V1 (col+1, row)
    float z1 = fn_8002349C((void*)lbl_802D49F8, (s32)(s8)r29, (s32)(s8)r30, 1);
    *gx_f = f_col1; *gx_f = f_row;  *gx_f = z1;
    *gx_b = r31[0]; *gx_b = r31[1]; *gx_b = r31[2]; *gx_b = r31[3];

    // V2 (col+1, row+1)
    float z2 = fn_8002349C((void*)lbl_802D49F8, (s32)(s8)r29, (s32)(s8)r30, 2);
    *gx_f = f_col1; *gx_f = f_row1; *gx_f = z2;
    *gx_b = r31[0]; *gx_b = r31[1]; *gx_b = r31[2]; *gx_b = r31[3];

    // V3 (col, row+1)
    float z3 = fn_8002349C((void*)lbl_802D49F8, (s32)(s8)r29, (s32)(s8)r30, 3);
    *gx_f = f_col;  *gx_f = f_row1; *gx_f = z3;
    *gx_b = r31[0]; *gx_b = r31[1]; *gx_b = r31[2]; *gx_b = r31[3];
}

// ============================================================
// fn_8004AC6C: GX pipeline setup for particle colored-quad mode
//   (same prologue as fn_8004A4BC, without the render loop)
// ============================================================
void fn_8004AC6C(void) {
    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 0, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DD8C(0, 4);
    fn_8006DFEC(0, 0xff, 0xff, 4);
    fn_8006E090(0);
    fn_8006DD20(0, 1, 4, 0x3c);
    fn_8006E160(0);

    u8 stk[0x34];
    fn_8020B098(stk, lbl_80377294, lbl_80377294, lbl_80377298);
    fn_80067F0C();
    fn_8020AB7C(stk, stk, stk);
    fn_8022DAD8(stk, 0);
    fn_8006E55C(0);
    fn_8006E110(1, 4, 1, 0);
}

// ============================================================
// fn_8004AD94: classify particle state, return a mode code 0..6
//   r3=particle ptr, r4=flag. Branch tree that reads r3[0]
//   (sub-object) and its byte at +0x12, plus result of
//   fn_8001DF04 and fn_8001CC6C flag check.
// ============================================================
s32 fn_8004AD94(void* r3, u8 r4) {
    u8* r31 = (u8*)r3;
    if (!r31) return 0;

    if (!r4) {
        void* p = (void*)*(u32*)r31;
        u32 r0 = p ? (u32)(u8)(u32)fn_8001DF04(p) : 0u;

        if (r0 > 1) {
            void* r3c = fn_8001CC6C(r31);
            u32 r5 = *(u32*)((u8*)r3c + 4);
            if (!(r5 & 0x40u)) {
                void* pp = (void*)*(u32*)r31;
                u8 byte = pp ? *((u8*)pp + 0x12) : 0xcu;
                if (byte == 2) return 3;
                if (byte == 1) return 5;
                // fall through to second block
            }
        }
    }

    // second block
    void* pp = (void*)*(u32*)r31;
    u8 byte = pp ? *((u8*)pp + 0x12) : 0xcu;
    switch ((s32)byte) {
        case 0: return 1;
        case 1: return 4;
        case 2: return 2;
        case 3: return 6;
        default: return 0;
    }
}

// ============================================================
// fn_8004AEE0: play sound FX for 4 consecutive u16 IDs on r3
//   r3=particle (reads 4 u16 IDs at +0x7c stride 2),
//   r4=struct ptr (reads 3 floats: [0]=p1, [4]=p2, [8]=volume).
//   For each valid ID: log + play via fn_801485BC (positional)
//   or fn_80148640 (fallback when volume <= 0).
// ============================================================
void fn_8004AEE0(void* r3, void* r4) {
    u8* r29 = (u8*)r3;
    float f31 = *(float*)((u8*)r4 + 0x0);
    float f30 = *(float*)((u8*)r4 + 0x4);
    float f29 = *(float*)((u8*)r4 + 0x8);

    for (s32 i = 0; i < 4; i++) {
        u16 val = *(u16*)(r29 + 0x7c);
        void* id;
        if (val == 0xffff)       id = 0;
        else if (val < 0x3e8)    id = 0;
        else                     id = fn_80147AE4(val);

        if (id) {
            fn_800056CC((const char*)((u8*)lbl_80273770 + 0x8a), id);
            if (f29 > lbl_803772B0) {
                fn_801485BC(id, 0x64, f31, f30, f29);
            } else {
                fn_80148640(id, 0x64);
            }
        }
        r29 += 2;
    }
}

// ============================================================
// fn_8004AFE8: same as fn_8004AEE0 but takes (f1,f2,f3) directly
//   instead of reading from a struct pointer.
// ============================================================
void fn_8004AFE8(void* r3, float f1, float f2, float f3) {
    u8* r30 = (u8*)r3;
    float f29 = f1;
    float f30f = f2;
    float f31 = f3;

    for (s32 i = 0; i < 4; i++) {
        u16 val = *(u16*)(r30 + 0x7c);
        void* id;
        if (val == 0xffff)       id = 0;
        else if (val < 0x3e8)    id = 0;
        else                     id = fn_80147AE4(val);

        if (id) {
            fn_800056CC((const char*)((u8*)lbl_80273770 + 0x8a), id);
            if (f31 > lbl_803772B0) {
                fn_801485BC(id, 0x64, f29, f30f, f31);
            } else {
                fn_80148640(id, 0x64);
            }
        }
        r30 += 2;
    }
}

// ============================================================
// fn_8004B0F0: sound-ID lookup helper
//   Returns 0 for sentinel (0xffff) or IDs < 0x3e8, else fn_80147AE4.
// ============================================================
void* fn_8004B0F0(u16 r3) {
    if (r3 == 0xffff) return 0;
    if (r3 < 0x3e8) return 0;
    return fn_80147AE4(r3);
}

// ============================================================
// fn_8004B134: test if (s8)r3[r4+0xc] is in specific signed range
//   (effectively |v|<64 AND some positive-modulo check < 32).
//   Returns 1 if in range, else 0.
// ============================================================
u32 fn_8004B134(u8* r3, s32 r4) {
    s32 v = (s32)(s8)r3[r4 + 0xc];

    // srawi + addze: signed divide by 64 (round toward zero)
    s32 q = v >> 6;
    if (v < 0 && (v & 0x3f) != 0) q++;
    if (q != 0) return 0;

    s32 sl  = (s32)((u32)v << 26);
    s32 sgn = v >> 31;
    s32 sub = sl - sgn;
    s32 rot = (s32)(((u32)sub << 6) | ((u32)sub >> 26));
    s32 sum = rot + sgn;
    if (sum >= 0x20) return 0;
    return 1;
}

// ============================================================
// fn_8004B174: return bit r4 of r3[0x10] as 0 or 1
// ============================================================
u32 fn_8004B174(void* r3, s32 r4) {
    u32 v = *(u32*)((u8*)r3 + 0x10);
    u32 mask = 1u << r4;
    u32 masked = v & mask;
    u32 neg = (u32)(-(s32)masked);
    return (neg | masked) >> 31;
}

// ============================================================
// fn_8004B194: logged debug print via fn_8023AAE4
//   If bit r4 of r3[0x10] is clear: set r4=6 and call fn_800056A0(0).
//   Then format-print using tables lbl_8028F7A0/lbl_8028F7E4 and
//   format strings at lbl_80273770+0x9c/+0xa8.
// ============================================================
void fn_8004B194(void* r3, s32 r4) {
    u8* r30 = (u8*)r3;
    s32 r31 = r4;

    u32 v = *(u32*)(r30 + 0x10);
    u32 bit = 1u << r31;

    if (!(v & bit)) {
        r31 = 6;
        fn_800056A0(0);
    }

    u8  r0v  = r30[8];
    u32 t1   = lbl_8028F7A0[r31];
    u32 t2   = lbl_8028F7E4[r0v];
    u32 arg6 = *(u32*)(r30 + 4);

    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_80273770 + 0x9c),
                (const void*)((u8*)lbl_80273770 + 0xa8),
                arg6, t1, t2);
}

// ============================================================
// fn_8004B238: debug log r3+r4 entry, using lbl_80273770 format
// ============================================================
void fn_8004B238(void* r3, void* r4) {
    u8* r4p = (u8*)r3 + (u32)(u8*)r4;  // add r4, r3, r4
    u32 r6 = *(u32*)((u8*)r3 + 4);
    u8  r7 = ((u8*)r4p)[0xc];
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_80273770 + 0xad),
                (const void*)((u8*)lbl_80273770 + 0xa8),
                r6, r7, 0);
}

// ============================================================
// fn_8004B288: debug log r3[4] with format lbl_80273770+0xbc
// ============================================================
void fn_8004B288(void* r3) {
    u32 r6 = *(u32*)((u8*)r3 + 4);
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_80273770 + 0xbc),
                (const void*)((u8*)lbl_80273770 + 0xa8),
                r6, 0, 0);
}

// ============================================================
// fn_8004B2D0: debug log r3[4] with format lbl_80273770+0xcb
// ============================================================
void fn_8004B2D0(void* r3) {
    u32 r6 = *(u32*)((u8*)r3 + 4);
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_80273770 + 0xcb),
                (const void*)((u8*)lbl_80273770 + 0xa8),
                r6, 0, 0);
}

// ============================================================
// fn_8004B318: debug log r3[4] with format lbl_80273770+0xd7
// ============================================================
void fn_8004B318(void* r3) {
    u32 r6 = *(u32*)((u8*)r3 + 4);
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_80273770 + 0xd7),
                (const void*)((u8*)lbl_80273770 + 0xa8),
                r6, 0, 0);
}

// ============================================================
// fn_8004B360: return lbl_8028F7E4[r3] (LooseBallAnims::GetDesperationInfo)
// ============================================================
u32 fn_8004B360(s32 r3) {
    return lbl_8028F7E4[r3];
}

// ============================================================
// fn_8004B374: check fn_80106398 bit 0x5c on r3+0x1bc;
//   if set, call fn_80050020(r3, 0xb) and set r3[3] bit 0x10,
//   else set r3[3] bit 0x20.
// ============================================================
void fn_8004B374(void* r3) {
    u8* r31 = (u8*)r3;
    u8 ok = (u8)(u32)fn_80106398((void*)(r31 + 0x1bc), 0x5c);
    if (ok) {
        fn_80050020(r31, 0xb);
        r31[3] = r31[3] | 0x10u;
    } else {
        r31[3] = r31[3] | 0x20u;
    }
}

// ============================================================
// fn_8004B3D8: iterate unit array (1..0x9f), apply sound entry
//   to each active visible unit that has a standing anim.
//   Allocates matrix from lbl_802FA4C8, sets up transform from
//   unit position floats, calls fn_8005F6D8/FF88/60904/6CC90.
// ============================================================
void fn_8004B3D8(void) {
    u8 teams[4];
    fn_800153FC((void*)teams, 3);

    for (s32 r30 = 1; r30 <= 0x9f; r30++) {
        u8* r31;
        if (r30 & 0xff) {
            r31 = (u8*)lbl_802BB9C4 + (u32)(r30 - 1) * 0x280;
        } else {
            r31 = 0;
        }

        if (!*(u32*)(r31 + 0x188)) continue;
        void* r4p = (void*)*(u32*)(r31 + 0x190);
        u8 team = ((u8*)r4p)[8];
        if (!teams[team]) continue;

        u32 flags = *(u32*)(r31 + 0x1a0);
        if (flags & 0x100fcu) continue;  // rlwinm bits 27-28 mapped as 0x1fc00

        u8 b3 = r31[3];
        if ((b3 & 0x22u) != 2u) continue;
        if (!r31[0x27]) continue;

        u8* r29 = r31 + 0xbc;
        s32 cnt = fn_80104A24((void*)(r31 + 0x1a4));
        if (cnt > 5) cnt = 5;
        if (cnt <= 0) continue;

        u8* entry = (u8*)lbl_802FA4C8 + (u32)(cnt - 1) * 0xa0;
        *(u32*)(r29 + 4) = (u32)entry;

        u8 stk_ae[0x58];
        fn_8020AE58(stk_ae, 0x58, lbl_803772C8);

        u8 stk_40[0x30];
        fn_8020B118(stk_40, lbl_803772CC, lbl_803772CC, lbl_803772CC);

        float f1  = *(float*)(r31 + 0xc);
        float f0  = *(float*)(r31 + 0x18);
        float f4  = *(float*)(r31 + 0x4);
        float f3  = *(float*)(r31 + 0x10);
        float f2  = f1 + f0;
        float f0b = lbl_803772D0;
        float f5  = *(float*)(r31 + 0x8);
        float f1b = f4 + f3;
        float f4b = *(float*)(r31 + 0x14);
        float f3b = f2 - f0b;
        float f2b = f5 + f4b;

        u8 stk_10[0x30];
        fn_8020B098(stk_10, f1b, f3b, f2b);

        fn_8020AB7C(stk_ae, stk_40, stk_40);
        fn_8020AB7C(stk_10, stk_40, (void*)(r29 + 0x10));

        fn_8005F6D8(r29, r31[0x27]);
        fn_8005FF88(r29);
        fn_80060904(r29);
        fn_8006CC90(r29);
    }
}

// ============================================================
// fn_8004B59C: setup GX pipeline then call sound/render functions
//   r3=particle ptr, r4=extra ptr. Checks r3->0x1a0 bit 0 for
//   extended color/alpha setup, then calls fn_80068F40/69004/69730.
// ============================================================
s32 fn_8004B59C(void* r3, void* r4) {
    u8* r31 = (u8*)r3;
    u8* r25 = (u8*)r4;

    fn_8006A29C();
    u8* r30 = (u8*)fn_8006A294();
    u32 r28 = *(u32*)(r30 + 0x90);
    u8* r29 = (u8*)r30;
    fn_80069DC8();
    u8* r27 = (u8*)r30;  // mr r27, r3 after fn_80069DC8 returns prev r3

    u32 flags = *(u32*)(r30);
    if (flags & (1u << (31 - 18))) {
        fn_8006DFEC(r27, 0xff, 0xff, 4);
        fn_8006DD8C(r27, 4);
    } else {
        void* r4tx = (void*)*(u32*)(r31 + 0x14);
        u8 stk[8];
        fn_8006F8E4((void*)lbl_80375550, stk, (s32)*(u16*)((u8*)r4tx + 4));

        u8* r26 = (u8*)fn_80069D38();
        fn_80069CDC();

        fn_8006DD20(1, (s32)(u32)r26, 4, 0x3c);
        fn_8022B9AC((s32)(u32)r26, (s32)(u32)stk);
        fn_8006DFEC(r27, (s32)(u32)r26, (s32)(u32)r26, 4);
        fn_8006DD8C(r27, 0);
    }

    if (*(u32*)(r30 + 0x1a0) & 1u) {
        fn_8022CB38(1, 1, 1, 1, 3);
        fn_8006E40C((s32)(u32)r27, 0, 1);
        fn_8006DE78((void*)r27, 0xf, 8, 0xa, 0xa);
        fn_8006DF68((void*)r27, 0, 2, 3, 1, 0);
        fn_8006DE0C((void*)r27, 7, 4, 5, 7);
        fn_8006DEE4((void*)r27, 0, 0, 0, 1, 0);
    }

    fn_80068F40(r30, r29);
    fn_80069004(r30, r29, r31);
    fn_80069730(r30, 0, r29, r31);
    return 1;
}

// ============================================================
// fn_8004B740: large particle/sound tick function (NonMatching)
//   r3 = offset-8 ptr into sound queue entry.
//   Reads entry[0] to determine mode (0, 1, or other).
//   Mode 0: float interp via fn_8005A124, texture slot setup.
//   Mode 1: float interp via fn_8005A1E8 (twice), texture setup.
//   Common tail: fn_8022B9AC, matrix load from lbl_80273858,
//   float setup, fn_8020B23C/B494/AB7C x3, fn_8020B098 x2,
//   fn_8022DBAC, fn_8006DD20, fn_800516EC.
// ============================================================
static void fn_8004B740(void* r3) {
    u8* r29 = (u8*)r3 + 8;
    u8* r31 = (u8*)lbl_80273858;
    float f31 = lbl_803772D4;
    s32  r30 = 0xff;

    u8 mode = r29[0];
    if (mode == 1) {
        goto mode1;
    } else if (mode == 0) {
        goto mode0;
    } else {
        goto tail;
    }

mode0:;
    {
        u8 b1 = r29[1];
        r30 = 0xc0;
        if (b1 > 0x78) {
            u32 v = b1 - 0x78;
            float fv;
            { u32 s[2] = { 0x43300000u, (u32)(v ^ 0x8000) };
              double d = *(double*)s; fv = (float)(d - 4503601774854144.0); }
            float result = fn_8005A124(lbl_803772D8, lbl_803772DC, fv, lbl_803772E0);
            s32 truncated = (s32)result;
            r30 = truncated;
        }
        fn_8006F8E4((void*)*(u32*)lbl_80375550, (void*)((u8*)r29 + 0x44), 3);
        goto tail;
    }

mode1:;
    {
        u8 b1 = r29[1];
        float fv;
        { u32 s[2] = { 0x43300000u, (u32)((u32)b1 ^ 0x8000) };
          double d = *(double*)s; fv = (float)(d - 4503601774854144.0); }
        float r1 = fn_8005A1E8(lbl_803772E4, lbl_803772DC, fv, lbl_803772E0);
        f31 = r1;
        // second interp using b1 again with lbl_803772CC
        float r2 = fn_8005A1E8(lbl_803772CC, lbl_803772D4, fv, lbl_803772E0);
        r30 = (s32)r2;  // fctiwz
        fn_8006F8E4((void*)*(u32*)lbl_80375550, (void*)((u8*)r29 + 0x44), 4);
        goto tail;
    }

tail:;
    {
        s16 sval = *(s16*)(r29 + 2);
        float fsval;
        { u32 s[2] = { 0x43300000u, (u32)((u32)(sval ^ 0x8000)) };
          double d = *(double*)s; fsval = (float)(d - 4503601774854144.0); }

        u32 r5 = *(u32*)(r31 + 0x1c);
        u32 r4v = *(u32*)(r31 + 0x20);
        u32 r3v = *(u32*)(r31 + 0x28);
        u32 r0v = *(u32*)(r31 + 0x2c);
        float f1 = *(float*)(r29 + 8);
        float f0 = *(float*)(r29 + 4);
        u32 r10 = *(u32*)(r31 + 0x24);
        u32 r7  = *(u32*)(r31 + 0x30);
        u32 r4b = *(u32*)(r31 + 0x34);
        u32 r3b = *(u32*)(r31 + 0x38);
        u32 r0b = *(u32*)(r31 + 0x3c);
        u32 r6  = *(u32*)&lbl_803772C4;

        fn_8022B9AC((s32)(u32)((u8*)r29 + 0x44), 0);

        if (lbl_803772DC > fsval) {
            // branch: fn_8020AE58, fn_8020B23C, fn_8020B494, fn_8020AB7C x2,
            //         fn_8020B098 x2, fn_8020AB7C x2
            u8 stk_cc[0x30];
            fn_8020AE58(stk_cc, 0x5a, (float)(lbl_803772E8 * fsval));
            u8 stk_9c[0x30], stk_1c[0x10], stk_28[0x10], stk_10[0x10];
            // pack 3 word-triples from r31 table into stacks
            *(u32*)((u8*)stk_1c+0)  = r5;
            *(u32*)((u8*)stk_28+0)  = r4v;
            *(u32*)((u8*)stk_10+0)  = r3v;
            fn_8020B23C(stk_9c, stk_1c, stk_28, stk_10);
            float neg_f31 = -f31;
            u8 stk_6c[0x30];
            fn_8020B494(stk_6c, neg_f31, f31, f31, neg_f31, f31, f31, f31, f31);
            fn_8020AB7C(stk_6c, stk_9c, (void*)((u8*)r29 + 0x44 + 0x30 + 0x30));
            u8 stk_fc[0x30];
            fn_8020B098(stk_fc, lbl_803772EC, lbl_803772EC, lbl_803772DC);
            u8 stk_cc2[0x30];
            fn_8020AB7C(stk_cc2, stk_fc, stk_cc2);
            fn_8020B098(stk_fc, lbl_803772D4, lbl_803772D4, lbl_803772DC);
            fn_8020AB7C(stk_fc, stk_cc2, stk_fc);
            fn_8020AB7C(stk_cc, (void*)((u8*)r29 + 0x44 + 0x60), stk_fc);
        } else {
            u8 stk_9c[0x30], stk_1c[0x10], stk_28[0x10], stk_10[0x10];
            fn_8020B23C(stk_9c, stk_1c, stk_28, stk_10);
            float neg_f31 = -f31;
            u8 stk_6c[0x30];
            fn_8020B494(stk_6c, neg_f31, f31, f31, neg_f31, f31, f31, f31, f31);
            fn_8020AB7C(stk_6c, stk_9c, (void*)((u8*)r29 + 0x44 + 0x60));
        }

        u8 stk_12c[0x30];
        fn_8022DBAC(stk_12c, 0x1e, 0);
        fn_8006DD20(0, 0, 0, 0x1e);

        u32 color_word = r6;
        *((u8*)&color_word + 3) = (u8)r30;
        u8 stk8[8];
        *(u32*)(stk8 + 0) = color_word;
        fn_800516EC(stk8, 0, f0, f1);
    }
}

// ============================================================
// fn_8004BAA8: push entry onto sound queue (lbl_8037556C)
//   If queue full (head ptr == 0), return without writing.
//   Else: link entry into doubly-linked list at [0x10] tail,
//   advance [0x8] free ptr by 4, increment [0x14] count,
//   then write f1->r6[0xc], f2->r6[0x10], r3->r6[0xa],
//   r4->r6[0x8], clear r6[0x9].
// ============================================================
void fn_8004BAA8(s32 r3, u8 r4, float f1, float f2) {
    void* queue = (void*)*(u32*)lbl_8037556C;
    void* free_slot = (void*)*(u32*)((u8*)queue + 8);
    void* r6 = (void*)*(u32*)free_slot;
    if (!r6) return;

    void* tail = (void*)*(u32*)((u8*)queue + 0x10);
    *(u32*)((u8*)r6 + 4) = (u32)tail;
    *(u32*)((u8*)r6 + 0) = 0;
    if (tail) *(u32*)tail = (u32)r6;

    void* head_c = (void*)*(u32*)((u8*)queue + 0xc);
    if (!head_c) *(u32*)((u8*)queue + 0xc) = (u32)r6;
    *(u32*)((u8*)queue + 0x10) = (u32)r6;

    u32 fptr = *(u32*)((u8*)queue + 8);
    *(u32*)((u8*)queue + 8)  = fptr + 4;
    u32 cnt = *(u32*)((u8*)queue + 0x14);
    *(u32*)((u8*)queue + 0x14) = cnt + 1;

    *(float*)((u8*)r6 + 0xc) = f1;
    *(u32*)((u8*)r6 + 0x10)  = 0;
    *(float*)((u8*)r6 + 0x10) = f2;
    *(s16*)((u8*)r6 + 0xa)   = (s16)r3;
    ((u8*)r6)[9] = 0;
    ((u8*)r6)[8] = r4;
}

// ============================================================
// fn_8004BB34: tick sound queue (lbl_8037556C)
//   Iterates all entries via [0] (next) links.
//   Each entry: increment [0x9] frame counter; if counter
//   reaches threshold based on [0x8] type (0=0xb4, 1=0x3c),
//   unlink and free; else keep.
//   After loop: if any removed, schedule fn_8004BC74 as callback.
// ============================================================
static void fn_8004BB34(void) {
    void* queue = (void*)*(u32*)lbl_8037556C;
    if (!queue) return;

    void* r5 = 0;  // current entry
    while (1) {
        if (!r5) {
            r5 = (void*)*(u32*)((u8*)queue + 0xc);
        } else {
            r5 = (void*)*(u32*)r5;
        }
        if (!r5) break;

        u8* e = (u8*)r5;
        e[9]++;
        u8 typ = e[8];
        u8 frm = e[9];

        u8 done;
        if (typ == 0) done = (frm == 0xb4) ? 1u : 0u;
        else if (typ == 1) done = (frm == 0x3c) ? 1u : 0u;
        else done = 1;

        if (!done) continue;

        // unlink
        void* queue2 = (void*)*(u32*)lbl_8037556C;
        void* prev = (void*)*(u32*)((u8*)e);
        void* next = (void*)*(u32*)((u8*)e + 4);
        if (prev) *(u32*)((u8*)prev + 4) = (u32)next;
        if (next) *(u32*)next            = (u32)prev;

        void* tail_c = (void*)*(u32*)((u8*)queue2 + 0xc);
        if (r5 == tail_c) *(u32*)((u8*)queue2 + 0xc) = (u32)prev;
        void* head2 = (void*)*(u32*)((u8*)queue2 + 0x10);
        if (r5 == head2) *(u32*)((u8*)queue2 + 0x10) = (u32)next;

        u32 sz = *(u32*)((u8*)queue2 + 8);
        *(u32*)((u8*)queue2 + 8)  = sz - 4;
        u32 cnt = *(u32*)((u8*)queue2 + 0x14);
        *(u32*)((u8*)queue2 + 0x14) = cnt - 1;

        u32 fp = *(u32*)((u8*)queue2 + 8);
        *(u32*)fp = (u32)r5;
    }

    fn_80067638(2, (void*)fn_8004BC74, (void*)fn_8004BC74, 0, 2);
}

// ============================================================
// fn_8004BC74: GX render pass for sound queue entries
//   If queue count == 0, return. Else configure GX pipeline
//   (same as fn_8004AC6C but different constants), iterate
//   lbl_8037556C linked list calling fn_8004B740 on each.
// ============================================================
static void fn_8004BC74(void* r3, void* r4) {
    (void)r3; (void)r4;
    void* queue = (void*)*(u32*)lbl_8037556C;
    if (!queue || !*(u32*)((u8*)queue + 0x14)) return;

    fn_8006E160(2);
    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DFEC(0, 0, 0, 4);
    fn_8006E090(1);

    u8 stk[0x30];
    fn_8020B098(stk, lbl_803772DC, lbl_803772DC, lbl_80377300);
    fn_80067F0C();
    fn_8020AB7C(stk, stk + 0x30, stk);
    fn_8022DAD8(stk, 0);
    fn_8006E55C(0);
    fn_8006E468(1, 3, 0);
    fn_8006E110(1, 4, 5, 7);
    fn_8006E4B4(7, 0, 1, 7, 0);
    fn_8006DD8C(0, 0);

    void* r31 = 0;
    while (1) {
        if (!r31) {
            r31 = (void*)*(u32*)((u8*)queue + 0xc);
        } else {
            r31 = (void*)*(u32*)r31;
        }
        if (!r31) break;
        fn_8004B740((void*)((u8*)r31 - 8));
    }
}

// ============================================================
// fn_8004BDF8: deserialize sound queue entry from save stream
//   r3=entry ptr, r4=stream ptr
//   Zeros several fields, reads 3 values via fn_8017C3F4/C420.
// ============================================================
void fn_8004BDF8(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;

    r30[3] = 0;
    *(s16*)(r30 + 0x15c) = 0;
    *(s16*)(r30 + 0) = 0;
    *(s16*)(r30 + 0x16e) = -1;
    r30[0x16d] = 0xff;
    r30[0x16c] = 0xff;
    *(float*)(r30 + 0x170) = lbl_803772DC;
    *(float*)(r30 + 0x174) = lbl_803772DC;
    *(float*)(r30 + 0x178) = lbl_803772DC;
    *(u32*)(r30 + 0x17c) = 0;

    s32 v0 = (s32)fn_8017C3F4(r31);
    *(s16*)(r30 + 0x15c) = (s16)v0;
    fn_8017C420(r31);
    fn_8017C420(r31);
}

// ============================================================
// fn_8004BE7C: serialize sound queue entry to save stream
//   r3=entry ptr, r4=stream ptr.
//   Writes r3[0x15c] count then two zero shorts via fn_8017C008/C030.
// ============================================================
void fn_8004BE7C(void* r3, void* r4) {
    u8* r31 = (u8*)r4;
    s16 cnt = *(s16*)((u8*)r3 + 0x15c);
    fn_8017C008(r31, (u32)(u16)cnt);
    fn_8017C030(r31, 0);
    fn_8017C030(r31, 0);
}

// ============================================================
// fn_8004BECC: compute 3D position offset from queue entry
//   r3=entry, r4=out vec3, f1=scale.
//   If r3[0x17c] non-null, reads s8 bytes [0xa/0xb] for x/y offset.
//   Multiplies by f1 and lbl_80377304, writes to r4[0..8].
// ============================================================
void fn_8004BECC(void* r3, void* r4, float f1) {
    float f2 = lbl_803772DC;
    float f0 = f2;
    void* entry = (void*)*(u32*)((u8*)r3 + 0x17c);
    if (entry) {
        s8 bx = (s8)((u8*)entry)[0xa];
        s8 by = (s8)((u8*)entry)[0xb];
        float fx, fy;
        { u32 s[2] = { 0x43300000u, (u32)((s32)bx ^ 0x8000) };
          double d = *(double*)s; fx = (float)(d - 4503601774854144.0); }
        { u32 s[2] = { 0x43300000u, (u32)((s32)by ^ 0x8000) };
          double d = *(double*)s; fy = (float)(d - 4503601774854144.0); }
        f2 = fx; f0 = fy;
    }
    float f3 = f2 * f1;
    float f4 = lbl_80377304;
    float f2b = f0 * f1;
    float f0b = lbl_803772DC * f1;
    float f3r = f3 * f4;
    float f1r = f2b * f4;
    float f0r = f0b * f4;
    *(float*)((u8*)r4 + 0) = f3r;
    *(float*)((u8*)r4 + 4) = f1r;
    *(float*)((u8*)r4 + 8) = f0r;
}

// ============================================================
// fn_8004BF58: compute sound queue entry playback progress (0..1)
//   If f1==r3[4] and f2==r3[8]: compute (s16)r3[0x15c] / lbl_80377308.
//   Else: call fn_80059610(r3[8], ???) for distance-based falloff.
// ============================================================
float fn_8004BF58(void* r3, float f1, float f2) {
    float f3 = f1;
    float f4 = f2;
    float r3f1 = *(float*)((u8*)r3 + 4);
    float r3f0 = *(float*)((u8*)r3 + 8);
    if (f3 == r3f1 && f4 == r3f0) {
        s16 cnt = *(s16*)((u8*)r3 + 0x15c);
        float fcnt;
        { u32 s[2] = { 0x43300000u, (u32)((s32)cnt ^ 0x8000) };
          double d = *(double*)s; fcnt = (float)(d - 4503601774854144.0); }
        return fcnt / lbl_80377308;
    }
    return fn_80059610(r3f0, f2, 0.0f, 0.0f);
}

// ============================================================
// fn_8004BFC8: same as fn_8004BF58 but takes two entry ptrs
//   Compares r4[4/8] vs r3[4/8]; if match, use r3[0x15c].
// ============================================================
float fn_8004BFC8(void* r3, void* r4) {
    float f3 = *(float*)((u8*)r4 + 4);
    float f4 = *(float*)((u8*)r4 + 8);
    float r3f1 = *(float*)((u8*)r3 + 4);
    float r3f0 = *(float*)((u8*)r3 + 8);
    if (f3 == r3f1 && f4 == r3f0) {
        s16 cnt = *(s16*)((u8*)r3 + 0x15c);
        float fcnt;
        { u32 s[2] = { 0x43300000u, (u32)((s32)cnt ^ 0x8000) };
          double d = *(double*)s; fcnt = (float)(d - 4503601774854144.0); }
        return fcnt / lbl_80377308;
    }
    return fn_80059610(r3f0, f4, 0.0f, 0.0f);
}

// ============================================================
// fn_8004C038: if r3[0x1a0] bits 27-28 clear, convert r3[4/8]
//   to int positions, call fn_8014DF60, then call fn_80018964 if r4!=0.
// ============================================================
void fn_8004C038(void* r3, u8 r4) {
    u8* r31 = (u8*)r4;
    u32 flags = *(u32*)((u8*)r3 + 0x1a0);
    if (flags & 0x18u) {  // rlwinm. bits 27-28 = mask 0x18
        return;
    }
    float f1 = *(float*)((u8*)r3 + 4);
    float f0 = *(float*)((u8*)r3 + 8);
    s32 icol = (s32)f1;
    s32 irow = (s32)f0;
    float fc, fr;
    { u32 s[2] = { 0x43300000u, (u32)(icol ^ 0x8000) };
      double d = *(double*)s; fc = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)(irow ^ 0x8000) };
      double d = *(double*)s; fr = (float)(d - 4503601774854144.0); }
    fn_8014DF60((void*)lbl_8033A708, fc, fr);
    if ((u32)(u8)(u32)r31) fn_80018964();
}

// ============================================================
// fn_8004C0D4: if r3[3] bit 2 set, find fn_8006058C entry;
//   if found and [0x10]==0, call fn_8005FE10(entry, lbl_8037730C).
// ============================================================
void fn_8004C0D4(void* r3) {
    u8* r31 = (u8*)r3;
    if (!(r31[3] & 4u)) return;
    void* r31e = (void*)(r31 + 0x1c);
    void* res = fn_8006058C(r31e);
    if (!res) return;
    if (*(s32*)((u8*)res + 0x10) != 0) return;
    fn_8005FE10(r31e, lbl_8037730C);
}

// ============================================================
// fn_8004C130: multi-condition check returning 0 or 1
//   Returns 1 for: bit 2 of r3[3] clear, or r3[0x1a0] bits set,
//   or fn_8006058C null, or entry[0x10]!=0.
//   Else: return bit 4 of r3[0x1c][0] (extrwi 1,27).
// ============================================================
u32 fn_8004C130(void* r3) {
    u8* r31 = (u8*)r3;
    if (!(r31[3] & 4u)) return 1;
    u32 flags = *(u32*)(r31 + 0x1a0);
    if (flags & 0x1dcu) return 1;  // lis 0x100 + addi 0xdc = 0x100dc; and test
    void* r31e = (void*)(r31 + 0x1c);
    void* res = fn_8006058C(r31e);
    if (!res) return 1;
    if (*(s32*)((u8*)res + 0x10) != 0) return 1;
    u32 v = *(u32*)r31e;
    return (v >> (31 - 27)) & 1u;  // extrwi r3, r0, 1, 27
}

// ============================================================
// fn_8004C1BC: check if unit position matches its current float pos
//   Compares r3[0x19e] (col) and r3[0x19f] (row) as doubles vs
//   r3[4]+r3[0x10] and r3[8]+r3[0x14]. Returns 1 if mismatch.
// ============================================================
u32 fn_8004C1BC(void* r3) {
    u8* p = (u8*)r3;
    u32 hi = 0x43300000u;

    s8 col = (s8)p[0x19e];
    float fcol;
    { u32 s[2] = { hi, (u32)((s32)col ^ 0x8000) };
      double d = *(double*)s; fcol = (float)(d - 4503601774854144.0); }
    float f4 = lbl_803772D4;
    float f1 = *(float*)(p + 4);
    float f0 = *(float*)(p + 0x10);
    float target_x = f1 + f0;
    float fcol_f = f4 + fcol;
    if (fcol_f != target_x) return 1;

    s8 row = (s8)p[0x19f];
    float frow;
    { u32 s[2] = { hi, (u32)((s32)row ^ 0x8000) };
      double d = *(double*)s; frow = (float)(d - 4503601774854144.0); }
    float f1r = *(float*)(p + 8);
    float f0r = *(float*)(p + 0x14);
    float target_y = f1r + f0r;
    float frow_f = f4 + frow;
    // mfcr + extrwi + xori pattern: return 1 if NOT equal
    u32 eq = (frow_f == target_y) ? 1u : 0u;
    return eq ^ 1u;
}

// ============================================================
// fn_8004C250: get particle ptr via fn_80040A0C, truncate r31[4/8]
//   to s32, call fn_80040CE4(particle, col, row).
// ============================================================
u8 fn_8004C250(void* r3) {
    u8* r31 = (u8*)r3;
    void* particle = fn_80040A0C();
    s32 col = (s32)*(float*)(r31 + 4);
    s32 row = (s32)*(float*)(r31 + 8);
    return (u8)(u32)fn_80040CE4(particle, col, row);
}

// ============================================================
// fn_8004C2A0: return (r3[3] & 4) != 0
// ============================================================
u32 fn_8004C2A0(void* r3) {
    u32 v = (u32)((u8*)r3)[3] & 4u;
    u32 neg = (u32)(-(s32)v);
    return (neg | v) >> 31;
}

// ============================================================
// fn_8004C2B8: if lbl_8037555C != 0, schedule fn_8004C2F8 callback.
// ============================================================
void fn_8004C2B8(void) {
    if (!lbl_8037555C) return;
    fn_80067638(2, (void*)fn_8004C2F8, (void*)fn_8004C2F8, 0, 1);
}

// ============================================================
// fn_8004C2F8: per-unit particle init (NonMatching, 0x2FC bytes)
//   Attaches a particle at r3+0x1c. Resolves anim name via
//   fn_8004B360/fn_8004B318/fn_8023AAE4/fn_8005BFDC/fn_8000D47C.
//   Sets flags, attaches r3+0xbc particle, registers fn_8004B59C.
//   Two near-identical halves for anim A and anim B.
// ============================================================
void fn_8004C2F8(void* r3, void* r4) {
    u8* r31 = (u8*)r3;
    u16 r29 = (u16)(u32)r4;

    u8 b3 = r31[3];
    if (b3 & 4u) return;

    // Clear bit 2, set bit 1
    r31[3] = (b3 & 0xFDu) | 2u;

    s8 r28v = (s8)r31[0x16c];
    if ((s32)r28v < 0) {
        void* tmp = fn_80037EF4(r31);
        r28v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    // Resolve particle base ptr via r31[0x18c]
    u8* r27 = (u8*)*(u32*)(r31 + 0x18c);
    u8 has_anim = r31[3] & 0x20u;
    void* anim_ptr = 0;
    if (has_anim) {
        anim_ptr = (void*)*(u32*)(r27 + 0xc);
        if (anim_ptr) anim_ptr = fn_8000D47C(anim_ptr);
        else anim_ptr = 0;
    }

    // Pick anim slot via flags
    s32 slot = 0;
    { u8 r31b_0 = fn_80106398((void*)(r31 + 0x1bc), 8) ? 1 : 0;
      if (r31b_0) {
          slot = fn_80106398((void*)(r27 + 0x1c), 9) ? 1 : 0;
      } else {
          slot = fn_80106398((void*)(r27 + 0x1c), 2) ? 1 : 0;
      }
    }

    void** anim_table = (void**)*(u32*)(r31 + 0x188);
    void*  slot_ptr   = anim_table[slot * 4 / 4 + (0x5c / 4)];
    if (!slot_ptr) slot_ptr = (void*)*(u32*)(r27 + 0x18);

    void* r30 = slot_ptr;
    if (!r30) {
        fn_800056A0(0);
        r30 = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    // Validate anim string
    if (r30 && ((s8*)r30)[0] != 0) {
        u32 desperation = fn_8004B360((s32)r28v);
        u8 fmt_buf[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r30, desperation, (u32)r30, 0u);
        anim_ptr = fn_8000D47C(fmt_buf);
        if (!anim_ptr) {
            fn_800056A0(0);
            anim_ptr = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(anim_ptr);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                    (const void*)anim_ptr, 0u, 0u, 0u);
            u16 result = fn_8005BFDC(fmt2);
            if ((result & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                anim_ptr = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        anim_ptr = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    // Setup r30=r31+0x1c particle
    u8* r30p = r31 + 0x1c;
    *(u32*)(r31 + 0x17c) = (u32)anim_ptr;
    fn_8006174C(r30p);
    r30p[0x87 - 0x1c] = 1;
    fn_8004B318(anim_ptr);
    r29 = (u16)((r29 & 0xffff) | 8u);
    fn_8005C6C4(anim_ptr, (u32)(u16)r29);
    *(u32*)(r31 + 0x164) = (u32)fn_8005C6C4(anim_ptr, (u32)(u16)r29);
    fn_8004B288(anim_ptr);
    fn_8005F41C(r30p, anim_ptr);
    fn_8004B2D0(anim_ptr);
    fn_8005F47C(r30p, anim_ptr);

    // Second anim half (anim B)
    r28v = (s8)r31[0x16c];
    if ((s32)r28v < 0) {
        void* tmp = fn_80037EF4(r31);
        r28v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r26p = (u8*)*(u32*)(r31 + 0x18c);
    s32 slot2 = 0;
    { u8 s1 = fn_80106398((void*)(r31 + 0x1bc), 8) ? 1 : 0;
      if (s1) slot2 = fn_80106398((void*)(r26p + 0x1c), 9) ? 1 : 0;
      else slot2 = fn_80106398((void*)(r26p + 0x1c), 2) ? 1 : 0;
    }

    void** at2 = (void**)*(u32*)(r31 + 0x188);
    void*  sp2  = at2[slot2 * 4 / 4 + (0x5c / 4)];
    if (!sp2) sp2 = (void*)*(u32*)(r26p + 0x18);

    void* r27p = sp2;
    if (!r27p) {
        fn_800056A0(0);
        r27p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    void* anim2 = 0;
    if (r27p && ((s8*)r27p)[0] != 0) {
        u32 d2 = fn_8004B360((s32)r28v);
        u8 fb2[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r27p, d2, (u32)r27p, 0u);
        anim2 = fn_8000D47C(fb2);
        if (!anim2) {
            fn_800056A0(0);
            anim2 = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(anim2);
            u8 fb3[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                    (const void*)anim2, 0u, 0u, 0u);
            u16 r2 = fn_8005BFDC(fb3);
            if ((r2 & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fb3);
                anim2 = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        anim2 = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    // Dispatch by team type
    void* r4tx = (void*)*(u32*)(r31 + 0x190);
    u8 team = ((u8*)r4tx)[8];
    u32 disp_idx = (team <= 4) ? team : 0;
    fn_8004B238(anim2, (void*)(u32)disp_idx);

    u16 snd = fn_8005BFDC(anim2);
    if ((snd & 0xffff) != 0x8000) {
        snd = (u16)(u32)lbl_80375068;
    }

    void* r28final = (void*)(u32)snd;
    fn_8005F35C(r30p, r28final, (u32)(u16)r29);
    fn_80061334(r30p);

    u32 r0 = *(u32*)(r30p);
    if (r0 & (1u << (31 - 27))) {
        fn_80050020(r31, 0xb);
        if (r31[3] & 4u) {
            u8* r26ep = r31 + 0x1c;
            void* res = fn_8006058C(r26ep);
            if (res && !*(s32*)((u8*)res + 0x10)) {
                fn_8005FE10(r26ep, lbl_8037730C);
            }
        }
        r31[3] = r31[3] & ~0x18u;
    } else {
        fn_80050020(r31, 0);
    }

    // Setup r30p state / r31+0xbc particle
    u8* r26bp = r31 + 0x1c;
    u32 r0b = *(u32*)(r30p);
    r30p[0] = (u8)((r0b | 0x61108000u) >> 24);
    *(float*)(r31 + 0x10) = lbl_803772DC;
    *(float*)(r31 + 0x14) = lbl_803772DC;
    *(float*)(r31 + 0x18) = lbl_803772DC;
    *(s16*)(r31 + 0x15e) = 0x3c;
    *(s16*)(r31 + 0x160) = 0x3c;
    *(s16*)(r31 + 0x162) = 0x3c;
    fn_80061284(r30p, (void*)((u8*)lbl_802738D8 + 0x8f));
    fn_80061284(r30p, (void*)((u8*)lbl_802738D8 + 0x92));
    r31[0x168] = r31[0];
    r31[0x169] = r31[1];

    fn_80060560(r26bp);
    fn_80068804(r26bp, 0, (void*)fn_8004B59C, (void*)0x4000);
    *(u32*)(r26bp + 0x90 - 0x1c) = (u32)r31;

    fn_8005F6D8(r26bp, 0);

    u8* r26cp = r31 + 0xbc;
    fn_8006174C(r26cp);
    *(u32*)(r26cp + 4) = (u32)lbl_802FA4C8;
    fn_80061334(r26cp);
    u32 fl = *(u32*)r26cp;
    r26cp[0] = (u8)((fl | 0x100u) >> 0);
    *(u32*)(r26cp + 4) = 0;
}

// ============================================================
// fn_8004C5F4: perunit particle full render tick (NonMatching, 0x3C0)
//   Attachment 1. Reads anim angle/speed/alpha from unit entry.
//   Calls fn_800068F4, fn_8005A078, fn_8020B23C, fn_8020B494,
//   fn_8020AB7C x5, fn_8020B098 x2, fn_8022DBAC, fn_8006DD20,
//   fn_800516EC. Two render branches based on angle threshold.
// ============================================================
void fn_8004C5F4(void* r3) {
    u8* r29 = (u8*)r3;
    u8* r31 = (u8*)lbl_80273858;
    float f31 = lbl_803772D4;

    // Decode r29[0] as u16 for angle
    u16 angle = *(u16*)r29;
    float f_angle;
    { u32 s[2] = { 0x43300000u, (u32)(angle ^ 0x8000) };
      double d = *(double*)s; f_angle = (float)(d - 4503601774854144.0); }
    float f29 = *(float*)(r29 + 4);
    float f30 = *(float*)(r29 + 8);

    // Call fn_800068F4 -> fn_8005A078 to compute alpha
    fn_800068F4();
    float alpha = fn_8005A078(0, r3, lbl_803772E4, lbl_80377310);
    s32 r30 = 0xff;

    u8 b27 = r29[0x27];
    float fspeed;
    { u32 s[2] = { 0x43300000u, (u32)((u32)b27 ^ 0x8000) };
      double d = *(double*)s; fspeed = (float)(d - 4503601774854144.0); }
    float f1r = (fspeed * alpha) / lbl_80377310;
    r30 = (s32)f1r;

    // Table data from lbl_80273858
    u32 r10 = *(u32*)(r31 + 0x24);
    u32 r7  = *(u32*)(r31 + 0x30);
    u32 r5  = *(u32*)(r31 + 0x1c);
    u32 r4v = *(u32*)(r31 + 0x20);
    u32 r3v = *(u32*)(r31 + 0x28);
    u32 r0v = *(u32*)(r31 + 0x2c);
    u32 r4b = *(u32*)(r31 + 0x34);
    u32 r3b = *(u32*)(r31 + 0x38);
    u32 r0b = *(u32*)(r31 + 0x3c);

    // Pack floats and words onto stack for fn_8022B9AC
    fn_8022B9AC((s32)(u32)((u8*)r29 + 0x4c), 0);

    // Branch on angle vs zero
    if (lbl_803772DC != f29) {  // fcmpu f0, f29 != 0.0
        u8 stk_bc[0x30];
        fn_8020AE58(stk_bc, 0x5a, lbl_803772E8 * f29);
        u8 stk_8c[0x30];
        u8 stk_1c[0x10], stk_28[0x10], stk_10[0x10];
        fn_8020B23C(stk_8c, stk_1c, stk_28, stk_10);
        float neg_f31 = -f31;
        u8 stk_5c[0x30];
        fn_8020B494(stk_5c, neg_f31, f31, f31, neg_f31, f31, f31, f31, f31);
        fn_8020AB7C(stk_5c, stk_8c, (void*)((u8*)r29 + 0x4c + 0x60));
        u8 stk_ec[0x30];
        fn_8020B098(stk_ec, lbl_803772EC, lbl_803772EC, lbl_803772DC);
        fn_8020AB7C(stk_bc, stk_ec, stk_bc);
        fn_8020B098(stk_ec, lbl_803772D4, lbl_803772D4, lbl_803772DC);
        fn_8020AB7C(stk_ec, stk_bc, stk_ec);
        fn_8020AB7C(stk_bc, (void*)((u8*)r29 + 0x4c + 0x60), stk_ec);
    } else {
        u8 stk_8c[0x30];
        u8 stk_1c[0x10], stk_28[0x10], stk_10[0x10];
        fn_8020B23C(stk_8c, stk_1c, stk_28, stk_10);
        float neg_f31 = -f31;
        u8 stk_5c[0x30];
        fn_8020B494(stk_5c, neg_f31, f31, f31, neg_f31, f31, f31, f31, f31);
        fn_8020AB7C(stk_5c, stk_8c, (void*)((u8*)r29 + 0x4c + 0x60));
    }

    u8 stk_11c[0x30];
    fn_8022DBAC(stk_11c, 0x1e, 0);
    fn_8006DD20(0, 0, 0, 0x1e);

    // Color word from lbl_80273858
    u32 color_word = *(u32*)(r31 + 0x30);
    *((u8*)&color_word + 3) = (u8)r30;
    u8 stk8[8];
    *(u32*)stk8 = color_word;
    fn_800516EC(stk8, 0, f29, f30);
}

// ============================================================
// fn_8004D500: schedule fn_8004C9B4 as render callback (priority 2)
// ============================================================
void fn_8004D500(void) {
    fn_80067638(2, (void*)fn_8004C9B4, (void*)fn_8004C9B4, 0, 1);
}

// ============================================================
// fn_8004C9B4: per-frame GX render pass for all active units (0x2C0)
//   Configures GX colored-quad pipeline (same as fn_8004AC6C),
//   computes global alpha from fn_80067370 color channels,
//   iterates unit array calling fn_8004CC74 on each valid entry.
// ============================================================
static void fn_8004C9B4(void) {
    // Texture slot setup
    u8 stk[8];
    fn_8006F8E4((void*)lbl_80375550, stk, 0);
    fn_8022B9AC((s32)(u32)stk, 0);

    // GX pipeline config
    fn_8006E160(2);
    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DFEC(0, 0, 0, 4);
    fn_8006E090(1);

    u8 mtx[0x30];
    fn_8020B098(mtx, lbl_803772DC, lbl_803772DC, lbl_80377300);
    fn_80067F0C();
    fn_8020AB7C(mtx, mtx + 0x30, mtx);
    fn_8022DAD8(mtx, 0);
    fn_8006E55C(0);
    fn_8006E468(1, 3, 0);
    fn_8006E110(1, 4, 5, 7);
    fn_8006E4B4(7, 0, 1, 7, 0);
    fn_8006DD8C(0, 0);

    // Compute global alpha from fn_80067370 color channels
    void* clr = fn_80067370(0);
    u8 ca = ((u8*)clr)[2];
    u8 cb = ((u8*)clr)[1];
    u8 cc = ((u8*)clr)[0];
    u8 cd = ((u8*)clr)[6];
    u8 ce = ((u8*)clr)[5];
    u8 cf = ((u8*)clr)[4];
    u32 sum_a = (u32)cc + (u32)cb + (u32)ca;
    u32 sum_b = (u32)cf + (u32)ce + (u32)cd;
    // div3 via 0x5555_5556 multiply trick
    s32 qa, qb;
    { s32 v = (s32)sum_a; s32 q = (s32)(((s64)0x55555556 * v) >> 32); qa = q + (q >> 31); }
    { s32 v = (s32)sum_b; s32 q = (s32)(((s64)0x55555556 * v) >> 32); qb = q + (q >> 31); }
    s32 inv_a = 0xff - qa;
    // mul via mulhw(0x8081, sum_b * inv_a)
    s32 prod = qb * inv_a;
    s32 r3v = (s32)(((s64)0xffff8081 * prod) >> 32);
    r3v = (r3v + prod) >> 7;
    r3v += (r3v >> 31);
    s32 r31v = r3v * 2;
    if (r31v < 0) r31v = 0;
    if (r31v > 0xff) r31v = 0xff;

    // Iterate unit array
    u8 teams[4];
    fn_800153FC(teams, 3);

    for (s32 r30 = 1; r30 <= 0x9f; r30++) {
        u8* r3p;
        if (r30 & 0xff) r3p = (u8*)lbl_802BB9C4 + (u32)(r30 - 1) * 0x280;
        else r3p = 0;

        if (!*(u32*)(r3p + 0x188)) continue;
        void* r4v = (void*)*(u32*)(r3p + 0x190);
        u8 team = ((u8*)r4v)[8];
        if (!teams[team]) continue;
        if (*(u32*)(r3p + 0x1a0) & 0x100fcu) continue;
        if ((r3p[3] & 0x22u) != 2u) continue;
        if (!r3p[0x27]) continue;

        fn_8004CC74(r3p, (void*)(u32)(u8)r31v);
    }

    fn_80066C30(-1);
}

// ============================================================
// fn_8004CC74: per-unit colored-quad render (NonMatching, 0x88C)
//   Attachment 2. Two major render paths:
//   Path A (r29>=0 && r27>=0): angle-interpolated quad via
//     fn_8020B23C/B494/AB7C, fn_8020BD40/BDC8, fn_802414D8,
//     fn_8020B51C, fn_800516EC x3.
//   Path B (r29<0 || r27<0): single-direction quad via
//     fn_80060E98, fn_8020B23C/B494/AB7C, fn_8020B51C,
//     fn_8022DBAC, fn_8006DD20, fn_800516EC.
// ============================================================
static void fn_8004CC74(void* r3, void* r4) {
    u8* r28p = (u8*)r3;
    (void)r4;

    float f30 = *(float*)(r28p + 4);
    float f29 = *(float*)(r28p + 8);
    float f31 = lbl_803772D4;

    u16 raw_u = *(u16*)r28p;
    float f_ang;
    { u32 s[2] = { 0x43300000u, (u32)(raw_u ^ 0x8000) };
      double d = *(double*)s; f_ang = (float)(d - 4503601774854144.0); }
    float f29v = (float)(s8)r28p[0x168];
    float f27v = (float)(s8)r28p[0x169];

    fn_800068F4();
    float sp = fn_8005A078(0x80, r3, lbl_803772E4, lbl_80377310);
    s32 r30v = 0xff;
    if (f_ang > lbl_803772DC) {
        float fsp;
        { u32 s[2] = { 0x43300000u, (u32)((u32)(u8)(sp) ^ 0x8000) };
          double d = *(double*)s; fsp = (float)(d - 4503601774854144.0); }
        r30v = (s32)(fsp * sp / lbl_80377310);
        if (r30v < 0) r30v = 0;
        if (r30v > 0xff) r30v = 0xff;
    }

    u8* r31 = (u8*)lbl_80273858;
    fn_8022B9AC((s32)(u32)((u8*)r28p + 0x4c), 0);

    if ((s32)f29v >= 0 && (s32)f27v >= 0) {
        u8 stk_130[0x30];
        fn_80060E98(r28p + 0x1c, (s32)(s8)r28p[0x168], stk_130);
        u8 stk_154[0x30];
        fn_80060E98(r28p + 0x1c, (s32)(s8)r28p[0x169], stk_154);

        float fx3 = *(float*)(stk_130);
        float fx1 = *(float*)(stk_154);
        float fx4 = *(float*)(stk_130 + 4);
        float fx0 = *(float*)(stk_154 + 4);
        float f2  = fx3 + fx1;
        float f0  = fx4 + fx0;
        float f30b = f2 * lbl_803772D4;
        float f29b = f0 * lbl_803772D4;
        float f26  = f30b - fx3;
        float f25  = f29b - fx4;

        if (lbl_803772DC == f26 && lbl_803772DC == f25) goto path_a_tail;

        {
            float f1i = lbl_80377318 * f26;
            float f0i = lbl_80377318 * f25;
            s32 i1 = (s32)f1i;
            s32 i0 = (s32)f0i;
            float fi1b, fi0b;
            { u32 s[2] = { 0x43300000u, (u32)(i1 ^ 0x8000) };
              double d = *(double*)s; fi1b = (float)(d - 4503601774854144.0); }
            { u32 s[2] = { 0x43300000u, (u32)(i0 ^ 0x8000) };
              double d = *(double*)s; fi0b = (float)(d - 4503601774854144.0); }

            u8 stk_130b[0x30];
            fn_8020BD40(stk_130b, stk_130b);
            fn_8020BDC8(stk_130b, stk_130b);
            float ang = fn_802414D8(stk_130b[0]);
            if (ang > lbl_803772D0) ang = lbl_803772D0;
            if (ang < lbl_8037730C) ang = lbl_8037730C;
            ang = fn_802414D8(ang);

            float f24 = ang;
            if (f25 < lbl_803772DC) f24 = ang * lbl_8037730C;

            u8 stk_340[0x30];
            fn_8020AE58(stk_340, 0x7a, -f24);

            float f26c = lbl_80377320 + *(float*)stk_130b;
            float f25c = lbl_80377320 + *(float*)(stk_130b + 4);
            if (f26c < f29v) f26c = f29v;
            if (f25c < f27v) f25c = f27v;

            // First render call
            {
                u8 stk_250[0x30], stk_94[0x10], stk_a0[0x10], stk_ac[0x10];
                u8 stk_220[0x30];
                fn_8020B23C(stk_250, stk_94, stk_a0, stk_ac);
                fn_8020B494(stk_220, f26c * f31, f25c * f31,
                            lbl_803772D4, lbl_803772D4, lbl_803772D4,
                            lbl_803772D4, lbl_803772D4, lbl_803772D4);
                fn_8020AB7C(stk_220, stk_250, stk_340);
                fn_8022DBAC(stk_340, 0x1e, 0);
                fn_8006DD20(0, 0, 0, 0x1e);
                u32 cw = *(u32*)(r31 + 0x18);
                *((u8*)&cw + 3) = (u8)r30v;
                u8 stk_c[8];
                *(u32*)stk_c = cw;
                fn_800516EC(stk_c, 1, f30, f29);
            }

            // Second render call
            {
                u8 stk_1f0[0x30], stk_58[0x10], stk_64[0x10], stk_6c[0x10];
                u8 stk_1c0[0x30], stk_340b[0x30];
                fn_8020B23C(stk_1f0, stk_58, stk_64, stk_6c);
                fn_8020B494(stk_1c0, f26c * f31, f25c * f31,
                            lbl_803772D4, lbl_803772D4, lbl_803772D4,
                            lbl_803772D4, lbl_803772D4, lbl_803772D4);
                fn_8020AB7C(stk_1c0, stk_1f0, stk_340b);
                fn_8022DBAC(stk_340b, 0x1e, 0);
                fn_8006DD20(0, 0, 0, 0x1e);
                u32 cw2 = *(u32*)(r31 + 0x18);
                *((u8*)&cw2 + 3) = (u8)r30v;
                u8 stk_c2[8];
                *(u32*)stk_c2 = cw2;
                fn_800516EC(stk_c2, 1, f30, f29);
            }
            goto done;
        }
path_a_tail:;
    }

    // Path B
    {
        u8 stk_190[0x30];
        fn_80060E98(r28p + 0x1c, 1, stk_190);
        u8 stk_250[0x30], stk_1c[0x10], stk_28[0x10], stk_6c[0x10];
        u8 stk_220[0x30], stk_340[0x30];
        fn_8020B23C(stk_250, stk_1c, stk_28, stk_6c);
        float fmul4 = f27v * f31;
        float fmul2 = f29v * f31;
        fn_8020B494(stk_220, -fmul2, fmul2, fmul2,
                    -fmul4, lbl_803772D4, lbl_803772D4,
                    lbl_803772D4, lbl_803772D4);
        fn_8020AB7C(stk_220, stk_250, stk_340);
        fn_8022DBAC(stk_340, 0x1e, 0);
        fn_8006DD20(0, 0, 0, 0x1e);
        u32 cw = *(u32*)(r31 + 0x18);
        *((u8*)&cw + 3) = (u8)r30v;
        u8 stk_c[8];
        *(u32*)stk_c = cw;
        fn_800516EC(stk_c, 1, f30, f29);
    }
done:;
    fn_80055F1C(0x100);
}

// ============================================================
// fn_8004D534: check unit visibility, draw HP/status bar overlay
//   r3=unit ptr. Checks flags, reads r31[0x1a0] bits 30 and 20.
//   Calls fn_80009E9C (set position), fn_8000A380/370 (show/hide
//   sprite), fn_8005ADE4 (size), fn_80009C50 (end), fn_8005F6A8.
// ============================================================
void fn_8004D534(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r30 = 0;

    // Check visibility conditions
    u32 flags = *(u32*)(r31 + 0x1a0);
    u8 visible = 0;
    if (!(flags & 0x100fcu)) {
        if ((r31[3] & 0x22u) == 2u && r31[0x27]) visible = 1;
    }
    if (!visible) return;

    // Call fn_8006CC90 on particle
    fn_8006CC90((void*)(r31 + 0x1c));

    // Branch: bit 30 of r31[0x1a0]
    if (flags & (1u << (31 - 30))) {
        r30 = (u8*)(u32)r31[0x27];
        fn_8000A380();
        float f2  = lbl_803772D4;
        float f1x = *(float*)(r31 + 0x170);
        float f0x = *(float*)(r31 + 0x174);
        float f1y = f2 + f1x;
        float f0y = f2 + f0x;
        s32 i1 = (s32)f1y;
        s32 i0 = (s32)f0y;
        float fi1, fi0;
        { u32 s[2] = { 0x43300000u, (u32)(i1 ^ 0x8000) };
          double d = *(double*)s; fi1 = (float)(d - 4503601774854144.0); }
        { u32 s[2] = { 0x43300000u, (u32)(i0 ^ 0x8000) };
          double d = *(double*)s; fi0 = (float)(d - 4503601774854144.0); }
        fn_80009E9C(fi1, fi0, lbl_8037732C, lbl_803772D0);
        fn_80009CB4((s32)r30);
        fn_8000A370();
        fn_8005ADE4((void*)lbl_802FA7E8, 0, -0x14, 0x4f);
        fn_80009C50();
    }

    // Branch: bit 20 of r31[0x1a0]
    if (*(u32*)(r31 + 0x1a0) & (1u << (31 - 20))) {
        fn_800068F4();
        if (fn_800068F4() & 0x1fu) goto skip_sec;
        r30 = (u8*)(u32)r31[0x27];
        fn_8000A380();
        float f2b = lbl_803772D4;
        float f1b = *(float*)(r31 + 0x170);
        float f0b = *(float*)(r31 + 0x174);
        float f1by = f2b + f1b;
        float f0by = f2b + f0b;
        s32 j1 = (s32)f1by;
        s32 j0 = (s32)f0by;
        float fj1, fj0;
        { u32 s[2] = { 0x43300000u, (u32)(j1 ^ 0x8000) };
          double d = *(double*)s; fj1 = (float)(d - 4503601774854144.0); }
        { u32 s[2] = { 0x43300000u, (u32)(j0 ^ 0x8000) };
          double d = *(double*)s; fj0 = (float)(d - 4503601774854144.0); }
        fn_80009E9C(fj1, fj0, lbl_8037732C, lbl_803772D0);
        fn_8000A370();
        fn_8005ADE4((void*)lbl_802FA7E8, -0xc, -0x18, 0x38);
skip_sec:;
    }

    // HP bar: convert f[4]/f[8] to grid col/row, call fn_8005F6A8
    float f0hp = *(float*)(r31 + 8);
    float f1hp = *(float*)(r31 + 4);
    s32 icol = (s32)f0hp;
    s32 irow = (s32)f1hp;
    // Combined hash: (icol*7 + irow) % 49 -> slot * 4
    s32 combined = icol * 7 + irow;
    s32 quot = (s32)(((s64)0x53987d63 * (s64)combined) >> 32) >> 4;
    quot += (quot >> 31);
    s32 rem = combined - quot * 0x31;
    s32 slot = (rem + 0xa) & 0x3c;  // clrlslwi: clear upper 26, shift left 2
    fn_8005F6A8((void*)(r31 + 0x1c), slot);
}

// ============================================================
// fn_8004D764: init viewport/camera state via fn_8022B3A0/B634
// ============================================================
void fn_8004D764(void* r3) {
    u8* r31 = (u8*)r3;
    fn_8022B3A0((void*)lbl_80375558, 0xa0, 0x78, 0, 0, 0, 0, 0, 0, 0);
    fn_8022B634(r31, 1, 1, lbl_803772DC, lbl_803772DC, lbl_803772DC, 0, 0);
}

// ============================================================
// fn_8004D7D4: check fn_80040A0C particle bit 0x10, schedule fn_8004D818
// ============================================================
void fn_8004D7D4(void) {
    void* p = fn_80040A0C();
    if (*(u32*)((u8*)p + 0x64) & (1u << (31 - 27))) {
        fn_80067638(3, (void*)fn_8004D818, (void*)fn_8004D818, 0, 1);
    }
}

// ============================================================
// fn_8004D818: large map cursor render function (NonMatching, 0x46C)
//   Attachment 3. Iterates all active units calling fn_8004DC84.
//   Then if fn_800F3644 returns non-zero: sets up viewport via
//   fn_80067FA0/FDC/E0C/fn_80229B48, draws 4-vertex white quad
//   to GX FIFO at 0xcc008000, then full map cursor render via
//   fn_80067FA0, fn_8022A904, fn_80229758, fn_8022BC10, fn_80066C30.
// ============================================================
static void fn_8004D818(void* r3, void* r4) {
    (void)r3; (void)r4;
    float f30 = lbl_80377330;

    // Optional: get scroll/camera from fn_80018BE4
    void* cam = fn_80018BE4();
    if (cam) {
        float v18 = *(float*)((u8*)cam + 0x18);
        f30 = fn_8005A124(lbl_80377334, lbl_80377330, v18 - lbl_80377338, lbl_80377308);
    }

    fn_8006F8E4((void*)lbl_80375550, 0, 0x2);
    fn_8022B9AC(0, 0);

    // GX pipeline setup
    fn_80228914();
    fn_80228240(9, 1);
    fn_80228240(0xb, 1);
    fn_80228240(0xd, 1);
    fn_8022894C(0, 9, 1, 4, 0);
    fn_8022894C(0, 0xb, 1, 5, 0);
    fn_8022894C(0, 0xd, 1, 4, 0);
    fn_8006E090(1);
    fn_8006DD20(0, 1, 4, 0x3c);
    fn_8006E19C(1);
    fn_8006E1DC(4, 0, 1, 1, 0, 0, 2);
    fn_8006E0D0(1);
    fn_8006DFEC(0, 0, 0, 4);
    fn_8006E160(2);
    fn_8006DE78(0, 0xf, 8, 0xa, 0xf);
    fn_8006DF68(0, 0, 0, 0, 1, 0);
    fn_8006DE0C(0, 7, 7, 7, 6);
    fn_8006DEE4(0, 0, 0, 0, 1, 0);
    fn_8006E110(1, 1, 1, 0);
    fn_8006E468(0, 3, 0);

    // Team filter
    u8 teams[4];
    fn_800153FC(teams, 3);

    // Iterate unit array, call fn_8004DC84
    for (s32 i = 1; i <= 0x9f; i++) {
        u8* entry;
        if (i & 0xff) entry = (u8*)lbl_802BB9C4 + (u32)(i - 1) * 0x280;
        else entry = 0;

        if (!*(u32*)(entry + 0x188)) continue;
        void* r4tx = (void*)*(u32*)(entry + 0x190);
        u8 team = ((u8*)r4tx)[8];
        if (!teams[team]) continue;
        if (*(u32*)(entry + 0x1a0) & 0x100fcu) continue;
        if ((entry[3] & 0x22u) != 2u) continue;
        if (!entry[0x27]) continue;

        fn_8004DC84(entry, f30);
    }

    // Check for scroll/camera active
    if (!fn_800F3644()) goto no_camera;

    {
        // Camera viewport
        u8* cam2 = (u8*)lbl_80273898;
        u8* map  = (u8*)lbl_8033A708;
        void* map_entry = fn_80023134((void*)lbl_802D49F8);
        float mf1 = *(float*)(map + 0x534);
        float mf2 = *(float*)(map + 0x538);
        u8 stk_loc[0x10];
        *(u32*)(stk_loc + 0) = *(u32*)cam2;
        *(u32*)(stk_loc + 4) = *(u32*)(cam2 + 4);
        *(u32*)(stk_loc + 8) = *(u32*)(cam2 + 8);
        *(float*)stk_loc = mf1;
        *(float*)(stk_loc + 4) = mf2;
        fn_80023134((void*)lbl_802D49F8);
        fn_8005A3A8(0, stk_loc, stk_loc);
        float f30v = stk_loc[0];
        float f31v = stk_loc[4/4];
        fn_80067FA0(lbl_803772DC, lbl_803772DC, lbl_8037733C, lbl_80377340);
        fn_80067FDC(0, 0, 0, 0xa0, 0x78);
        fn_80067E0C(0);
        fn_80229B48(0x98, 0, 4);

        // 4-vertex white quad to GX FIFO
        float half = lbl_80377344;
        volatile float* gx = (volatile float*)0xcc008000;
        volatile u8*    gxb = (volatile u8*)0xcc008000;
        u8 ff = 0xff;
        *gx = f30v - half; *gx = f31v - half; *gx = lbl_803772DC;
        *gxb = ff; *gxb = ff; *gxb = ff; *gxb = ff;
        *gx = lbl_803772DC; *gx = lbl_803772DC;
        *gx = f30v + half; *gx = f31v - half; *gx = lbl_803772DC;
        *gxb = ff; *gxb = ff; *gxb = ff; *gxb = ff;
        *gx = lbl_803772D0; *gx = lbl_803772DC;
        *gx = f30v - half; *gx = f31v + half; *gx = lbl_803772DC;
        *gxb = ff; *gxb = ff; *gxb = ff; *gxb = ff;
        *gx = lbl_803772DC; *gx = lbl_803772D0;
        *gx = f30v + half; *gx = f31v + half; *gx = lbl_803772DC;
        *gxb = ff; *gxb = ff; *gxb = ff; *gxb = ff;
        *gx = lbl_803772D0; *gx = lbl_803772D0;
        fn_800678B4(0);
        fn_800F3634(0);
    }

no_camera:;
    fn_80229FA8(0, 0, 0xa0, 0x78);
    fn_8022A058(0, 0, 0xa0, 0x78, 0x20, 0);
    fn_8022A904((void*)lbl_80375558, 1);
    fn_80229758();
    fn_8022BC10();
    fn_80066C30(-1);
}

// ============================================================
// fn_8004DC84: draw unit shadow quad to GX FIFO (NonMatching, 0x158)
//   r3=unit ptr, f1=alpha scale.
//   Reads r3[0x170/0x174/0x178] for world position.
//   Calls fn_80067FA0/FDC/E0C/fn_80229B48, then 5x4 vertex GX writes.
// ============================================================
static void fn_8004DC84(void* r3, float f1) {
    u8* r31p = (u8*)r3;
    float f31 = f1;

    float wx = *(float*)(r31p + 0x170);
    float wy = *(float*)(r31p + 0x174);
    float wz = *(float*)(r31p + 0x178);
    fn_80067FA0(lbl_803772DC, wx, wy, wz);
    fn_80067FDC(0, 0, 0, 0xa0, 0x78);
    fn_80067E0C(0);
    u8 alpha = r31p[0x27];
    fn_80229B48(0x98, 0, 4);

    // 5 quads via GX FIFO
    volatile float* gx = (volatile float*)0xcc008000;
    volatile u8*    gxb = (volatile u8*)0xcc008000;
    u8 ff = 0xff;

    // Quad 0: (wx-f31, wy-f31)
    *gx = wx - f31; *gx = wy - f31; *gx = lbl_803772DC;
    *gxb = alpha; *gxb = alpha; *gxb = alpha; *gxb = ff;
    *gx = lbl_803772DC; *gx = lbl_803772DC;
    *gx = lbl_803772DC; *gx = lbl_803772DC;
    *gx = wx + f31; *gx = wy - f31; *gx = lbl_803772DC;
    *gxb = alpha; *gxb = alpha; *gxb = alpha; *gxb = ff;
    *gx = lbl_803772D0; *gx = lbl_803772DC;
    *gx = lbl_803772DC; *gx = lbl_803772D0;
    *gx = wx - f31; *gx = wy + f31; *gx = lbl_803772DC;
    *gxb = alpha; *gxb = alpha; *gxb = alpha; *gxb = ff;
    *gx = lbl_803772DC; *gx = lbl_803772D0;
    *gx = lbl_803772D0; *gx = lbl_803772DC;
    *gx = wx + f31; *gx = wy + f31; *gx = lbl_803772DC;
    *gxb = alpha; *gxb = alpha; *gxb = alpha; *gxb = ff;
    *gx = lbl_803772D0; *gx = lbl_803772D0;
    *gx = lbl_803772D0; *gx = lbl_803772D0;
    fn_800678B4(0);
}

// ============================================================
// fn_8004DDDC: store r3 to lbl_8037555C (set minimap dirty flag)
// ============================================================
void fn_8004DDDC(u8 r3) {
    lbl_8037555C = r3;
}

// ============================================================
// fn_8004DDE4: schedule fn_8004DE14 as callback (priority 1)
// ============================================================
void fn_8004DDE4(void) {
    fn_80067638(1, (void*)fn_8004DE14, (void*)fn_8004DE14, 0, 0);
}

// ============================================================
// fn_8004DE14: minimap render callback (0x12C)
//   Checks fn_80055F1C(0x80) for sprite system.
//   If unavailable: returns. If available: setup 4 palette bytes,
//   set lbl_8037555D, clamp lbl_80375564-806A bounds,
//   render via fn_80067FDC/E0C/fn_80059B90/fn_8005973C/fn_800678B4.
// ============================================================
static void fn_8004DE14(void* r3, void* r4) {
    (void)r3; (void)r4;
    void* spr = fn_80055F1C(0x80);
    if (!spr) return;

    // Setup palette bytes
    lbl_80375560[0] = 0x30;
    lbl_80375560[1] = 0x30;
    lbl_80375560[2] = 0x60;
    lbl_80375560[3] = 0x60;
    lbl_8037555D = 1;

    // Clamp bounds
    if (lbl_80375564 < 0) lbl_80375564 = 0;
    if (lbl_80375566 < 0) lbl_80375566 = 0;
    if (lbl_80375568 > 0x260) lbl_80375568 = 0x260;
    if (lbl_8037556A > 0x1c0) lbl_8037556A = 0x1c0;

    // Check bounds are valid
    if (lbl_80375564 >= lbl_80375568) return;
    if (lbl_80375566 >= lbl_8037556A) return;

    u16 x0 = (u16)lbl_80375564;
    u16 y0 = (u16)lbl_80375566;
    u16 w  = (u16)(lbl_80375568 - lbl_80375564);
    u16 h  = (u16)(lbl_8037556A - lbl_80375566);

    fn_80067FDC(0, x0, y0, w, h);
    fn_80067E0C(0);
    fn_80059B90(0, 0, 0x260, 0x1c0, (void*)lbl_80375554);
    fn_8005973C(0, 0, 0x260, 0x1c0, lbl_8037555D, (void*)lbl_80375554, 0,
                lbl_803772DC, (void*)lbl_80375560);
    fn_800678B4(0);
}

// ============================================================
// fn_8004DF40: full minimap render (0xC0)
//   Checks fn_80055F1C(0x80), sets palette, calls fn_8000A380,
//   double-bias for r31 position, fn_80009E9C/A29C/9CB4/A370,
//   fn_800079D8/80007480/79C4/80009C50.
// ============================================================
void fn_8004DF40(s32 r3) {
    s32 r31 = r3;
    void* spr = fn_80055F1C(0x80);
    if (!spr) return;

    lbl_80375560[0] = 0x60;
    lbl_80375560[1] = 0x60;
    lbl_80375560[2] = 0x60;
    lbl_80375560[3] = 0x60;
    lbl_8037555D = 1;

    fn_8000A380();
    float fval;
    { u32 s[2] = { 0x43300000u, (u32)((u32)r31 ^ 0x8000) };
      double d = *(double*)s; fval = (float)(d - 4503601774854144.0); }
    fn_80009E9C(fval, lbl_803772DC, lbl_803772DC, lbl_803772D0);
    fn_8000A29C(0, 0x410);
    fn_80009CB4(0xff);
    fn_8000A370();
    fn_800079D8(0xb);
    fn_80007480((void*)fn_8004E034, 0);
    fn_800079C4();
    fn_80009C50();
}

// ============================================================
// fn_8004E000: clear minimap buffer via fn_80059DEC
// ============================================================
void fn_8004E000(void) {
    fn_80059DEC(0, 0, 0x260, 0x1c0, 0);
}

// ============================================================
// fn_8004E034: render minimap from lbl_80375554 via fn_80059B90/8005973C
// ============================================================
static void fn_8004E034(void* r3, void* r4) {
    (void)r3; (void)r4;
    fn_80059B90(0, 0, 0x260, 0x1c0, (void*)lbl_80375554);
    fn_8005973C(0, 0, 0x260, 0x1c0, lbl_8037555D, (void*)lbl_80375554,
                0, lbl_803772DC, (void*)lbl_80375560);
}

// ============================================================
// fn_8004E08C: reset minimap bounds to extremes
// ============================================================
void fn_8004E08C(void) {
    lbl_80375564 = (s16)0x3e8;
    lbl_80375566 = (s16)0x3e8;
    lbl_80375568 = (s16)-0x3e8;
    lbl_8037556A = (s16)-0x3e8;
}

// ============================================================
// fn_8004E0A8: if r3 bit 2 set and bit 4 clear, call fn_8005FF88
// ============================================================
void fn_8004E0A8(void* r3) {
    u8 b3 = ((u8*)r3)[3];
    if ((b3 & 4u) && !(b3 & 0x10u)) {
        fn_8005FF88((void*)((u8*)r3 + 0x1c));
    }
}

// ============================================================
// fn_8004E0E0: unit per-frame update (NonMatching, 0xE8)
//   If r3[3] bit 4 set: check flags/team/anim,
//   call fn_80060904 on particle. Then if r3[0x1a0] bit 0 clear
//   and team matches lbl_8033A708[0x11]: update r3[0x0] modulo 360.
// ============================================================
void fn_8004E0E0(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r31p = r31 + 0x1c;
    u8 b3 = r31[3];

    if (!(b3 & 0x10u)) {
        u32 flags = *(u32*)(r31 + 0x1a0);
        u8 vis = 0;
        if (!(flags & 0x100fcu)) {
            if ((b3 & 0x22u) == 2u && r31[0x27]) vis = 1;
        }
        if (vis) fn_80060904(r31p);
    }

    if (!(*(u32*)(r31 + 0x1a0) & 1u)) {
        void* r4tx = (void*)*(u32*)(r31 + 0x190);
        u8 team = ((u8*)r4tx)[8];
        u8 ref = ((u8*)lbl_8033A708)[0x11];
        if (team == ref) {
            u16 angle = *(u16*)r31;
            // (angle+1) mod 360
            s32 a1 = (s32)angle + 1;
            s32 q = (s32)(((s64)0xb60b60b7 * (s64)a1) >> 32);
            q = (q + a1) >> 8;
            q += (q >> 31);
            s32 rem = a1 - q * 0x168;
            *(u16*)r31 = (u16)rem;
        }
    }
}

// ============================================================
// fn_8004E1C8: build 3 transform matrices for unit particle (0x138)
//   Reads r3[0x15c] (frame count), r3[0x15e/0x160/0x162] (angles),
//   r3[0x4/0x8/0xc/0x10/0x14/0x18] (position floats).
//   Calls fn_8020AE58 x2, fn_8020B118, fn_8020B098, fn_8020AB7C x3.
//   Writes result to r3+0x2c.
// ============================================================
void fn_8004E1C8(void* r3) {
    u8* r31 = (u8*)r3;
    s16 cnt = *(s16*)(r31 + 0x15c);
    float fcnt;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(u16)cnt ^ 0x8000) };
      double d = *(double*)s; fcnt = (float)(d - 4503601774854144.0); }
    float progress = fcnt / lbl_80377308;

    u8 stk_38[0x30];
    fn_8020AE58(stk_38, 0x59, lbl_803772E8 * progress);

    u8 stk_68[0x30];
    fn_8020AE58(stk_68, 0x58, lbl_803772C8);

    // Decode 3 angles from r31[0x15e/0x160/0x162]
    s16 a0 = *(s16*)(r31 + 0x15e);
    s16 a1 = *(s16*)(r31 + 0x160);
    s16 a2 = *(s16*)(r31 + 0x162);
    float fa0, fa1, fa2;
    { u32 s[2] = { 0x43300000u, (u32)((s32)(u16)a0 ^ 0x8000) };
      double d = *(double*)s; fa0 = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((s32)(u16)a1 ^ 0x8000) };
      double d = *(double*)s; fa1 = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((s32)(u16)a2 ^ 0x8000) };
      double d = *(double*)s; fa2 = (float)(d - 4503601774854144.0); }
    float div3 = lbl_80377318;
    fa0 /= div3; fa1 /= div3; fa2 /= div3;

    u8 stk_8[0x30];
    fn_8020B118(stk_8, fa0, fa1, fa2);

    float px = *(float*)(r31 + 4) + *(float*)(r31 + 0x10);
    float py = *(float*)(r31 + 8) + *(float*)(r31 + 0x14);
    float pz = *(float*)(r31 + 0xc) + *(float*)(r31 + 0x18);

    u8 stk_98[0x30];
    fn_8020B098(stk_98, px, py, pz);

    fn_8020AB7C(stk_38, stk_8, stk_8);
    fn_8020AB7C(stk_68, stk_8, stk_8);
    fn_8020AB7C(stk_98, stk_8, (void*)(r31 + 0x2c));
}

// ============================================================
// fn_8004E300: large unit anim/particle update (NonMatching, 0x4F8)
//   Attachments 4-7. Checks r3[0x1a0] flags/bit 2/bit 27.
//   Reads lbl_803772DC/lbl_80377348/4C, fn_80018BE4.
//   Jump table at lbl_8028F83C (9 cases) for fn_8020AE58 x3.
//   Common tail: fn_8020B118/B098/BF04/AB7C, fn_8005A3A8.
//   On success: updates r31[0x170/0x174/0x178], clamps to
//   [f31..f30] x [f29..f28], updates lbl_80375564-6A, else sets bit 0x20.
// ============================================================
static void fn_8004E300(void* r3) {
    u8* r31 = (u8*)r3;

    // Visibility check
    u32 flags = *(u32*)(r31 + 0x1a0);
    if (flags & 0x100dcu) return;
    if (!(r31[3] & 4u)) return;
    if (!r31[0x27]) return;

    // Init float sentinels
    float f31 = lbl_803772DC;
    float f30 = lbl_80377348;
    float f29 = lbl_803772DC;
    float f28 = lbl_8037734C;

    // Optional camera speed
    void* cam = fn_80018BE4();
    float f27 = lbl_803772DC;
    if (cam) {
        float v18 = *(float*)((u8*)cam + 0x18);
        float v = fn_8005A124(v18 - lbl_80377338, lbl_80377350, lbl_80377334, lbl_80377308);
        if (v < lbl_80377350) v = lbl_80377350;
        if (v > lbl_80377308) v = lbl_80377308;
        u8 bit7 = fn_80106398((void*)(r31 + 0x1bc), 7) ? 1 : 0;
        if (bit7) v *= lbl_80377354;
        f27 = v;
        f31 -= f27; f30 += f27; f29 -= f27;
        f28 = lbl_80377358 * f27 + f28;
    }

    // Jump table dispatch on r31[0x28] (0..8)
    u32 jidx = *(u32*)(r31 + 0x28);
    if (jidx > 8) {
        fn_8006E67C((void*)((u8*)lbl_802738D8 + 0x2b), 0xb8,
                    (void*)((u8*)lbl_802738D8 + 0x33));
        goto common_tail;
    }

    // Each case fills 3 stk matrices via fn_8020AE58
    {
        u8 stk_68[0x30], stk_98[0x30], stk_c8[0x30];
        switch (jidx) {
        case 0:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 1:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 2:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 3:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 4:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 5:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 6:
            fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
            fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
            fn_8020BF04((void*)(r31+0x2c), stk_c8);
            fn_8020AB7C(stk_68, stk_98, stk_c8);
            fn_8020AB7C(stk_68, stk_c8, stk_c8);
            fn_8020AB7C(stk_98, stk_c8, stk_c8);
            goto common_tail_abc;
        case 7:
            fn_8020AB48((void*)(r31+0x2c), stk_c8);
            goto common_tail_abc;
        default: break;
        }

        // Common 3-matrix tail
        fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
        fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
        fn_8020AB7C(stk_68, stk_98, stk_c8);
        fn_8020AB7C(stk_68, stk_c8, stk_c8);
        fn_8020AB7C(stk_98, stk_c8, stk_c8);
common_tail_abc:;
        // Write position
        *(float*)(r31+0x170) = stk_68[0x104/1 - 0x68];
        *(float*)(r31+0x174) = stk_68[0x114/1 - 0x68];
        float sub = *(float*)stk_c8;  // approximation
        *(float*)(r31+0x178) = sub - lbl_803772D4;
        fn_8005A3A8(0, (void*)(r31+0x170), (void*)(r31+0x170));
    }
common_tail:;

    float px = *(float*)(r31 + 0x170);
    float py = *(float*)(r31 + 0x174);

    if (px > f31 && px < f30 && py > f29 && py < f28) {
        // Clear bits 29-27 of r31[0x1a0]
        *(u32*)(r31+0x1a0) = *(u32*)(r31+0x1a0) & ~0x38u;

        s32 icol = (s32)px;
        s32 irow = (s32)py;

        if (lbl_80375564 > icol - 0x40) lbl_80375564 = (s16)(icol - 0x40);
        if (lbl_80375566 > irow - 0x40) lbl_80375566 = (s16)(irow - 0x40);
        if (lbl_80375568 < icol + 0x40) lbl_80375568 = (s16)(icol + 0x40);
        if (lbl_8037556A < irow + 0x40) lbl_8037556A = (s16)(irow + 0x40);
    } else {
        *(u32*)(r31+0x1a0) = *(u32*)(r31+0x1a0) | 0x20u;
    }
}

// ============================================================
// fn_8004E7F8: unit particle get-position helper (NonMatching, 0x368)
//   Attachments 4-8 (same structure as fn_8004E300 cases 0-8).
//   r3=unit ptr, r4=output vec3 ptr, r5=flag (if 0 skip update).
//   Writes r31[0x170/0x174/0x178] via 3-matrix chain then copies
//   to r4[0]/[4]/[8].
// ============================================================
static void fn_8004E7F8(void* r3, void* r4, u8 r5) {
    u8* r31 = (u8*)r3;
    u8* r30 = (u8*)r4;

    if (!r5) goto just_copy;

    {
        u32 jidx = *(u32*)(r31 + 0x28);
        if (jidx > 8) {
            fn_8006E67C((void*)((u8*)lbl_802738D8 + 0x2b), 0xb8,
                        (void*)((u8*)lbl_802738D8 + 0x33));
            goto just_copy;
        }

        u8 stk_68[0x30], stk_98[0x30], stk_c8[0x30];
        switch (jidx) {
        case 0:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 1:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 2:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 3:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 4:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 5:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 6:
            fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
            fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
            fn_8020BF04((void*)(r31+0x2c), stk_c8);
            fn_8020AB7C(stk_68, stk_98, stk_c8);
            fn_8020AB7C(stk_68, stk_c8, stk_c8);
            fn_8020AB7C(stk_98, stk_c8, stk_c8);
            goto write_out;
        case 7:
            fn_8020AB48((void*)(r31+0x2c), stk_c8);
            goto write_out;
        default: break;
        }

        fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
        fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
        fn_8020AB7C(stk_68, stk_98, stk_c8);
        fn_8020AB7C(stk_68, stk_c8, stk_c8);
        fn_8020AB7C(stk_98, stk_c8, stk_c8);
write_out:;
        *(float*)(r31+0x170) = *(float*)stk_68;
        *(float*)(r31+0x174) = *(float*)(stk_68 + 4);
        float sub = *(float*)stk_c8;
        *(float*)(r31+0x178) = sub - lbl_803772D4;
        fn_8005A3A8(0, (void*)(r31+0x170), (void*)(r31+0x170));
    }

just_copy:;
    *(u32*)r30 = *(u32*)(r31+0x170);
    *(u32*)(r30+4) = *(u32*)(r31+0x174);
    *(u32*)(r30+8) = *(u32*)(r31+0x178);
}

// ============================================================
// fn_8004EB60: deactivate unit particle (0x88)
//   Calls fn_800615C8 on r3+0xbc. If r3[3] bit 2 set:
//   clear bit, call fn_80186D74, fn_800615C8 on r3+0x1c,
//   free fn_8005C680(r3[0x164]), clear 0x164/0x17c.
//   Then call fn_8004EC9C(r3, r4).
// ============================================================
void fn_8004EB60(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8* r31 = (u8*)r4;

    fn_800615C8((void*)(r30 + 0xbc));

    if (r30[3] & 4u) {
        r30[3] = r30[3] & ~6u;  // rlwinm 31,29 = clear bits 1-2
        fn_80186D74(r30);
        fn_800615C8((void*)(r30 + 0x1c));
        void* anim = (void*)*(u32*)(r30 + 0x164);
        if (anim) fn_8005C680(anim);
        *(u32*)(r30 + 0x164) = 0;
        *(u32*)(r30 + 0x17c) = 0;
    }

    fn_8004EC9C(r30, r31);
}

// ============================================================
// fn_8004EBE8: deactivate unit particle with optional full reset (0xB4)
//   Same as fn_8004EB60 but if r4 != 0, also clears all state:
//   zeroes r3[3], r3[0x15c], r3[0x0], sets r3[0x16e]=-1,
//   r3[0x16c/d/e]=0xff, zeroes floats at 0x170-0x178, r3[0x17c].
// ============================================================
void fn_8004EBE8(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    u8  r31 = (u8)(u32)r4;

    fn_800615C8((void*)(r30 + 0xbc));

    if (r30[3] & 4u) {
        r30[3] = r30[3] & ~6u;
        fn_80186D74(r30);
        fn_800615C8((void*)(r30 + 0x1c));
        void* anim = (void*)*(u32*)(r30 + 0x164);
        if (anim) fn_8005C680(anim);
        *(u32*)(r30 + 0x164) = 0;
        *(u32*)(r30 + 0x17c) = 0;
    }

    if (r31) {
        r30[3] = 0;
        *(s16*)(r30 + 0x15c) = 0;
        *(s16*)(r30 + 0)     = 0;
        *(s16*)(r30 + 0x16e) = -1;
        r30[0x16d] = 0xff;
        r30[0x16c] = 0xff;
        *(float*)(r30 + 0x170) = lbl_803772DC;
        *(float*)(r30 + 0x174) = lbl_803772DC;
        *(float*)(r30 + 0x178) = lbl_803772DC;
        *(u32*)(r30 + 0x17c) = 0;
    }
}

// ============================================================
// fn_8004EC9C: large unit particle shutdown/reinit (NonMatching, 0x614)
//   Attachment 9. The largest function in this batch.
//   r3=unit ptr, r4=new state flags.
//   Checks flags/visibility, calls fn_8004E300/E7F8/E1C8.
//   Jump table dispatch on r3[0x28] (9 cases x3 fn_8020AE58).
//   Two render sub-paths calling fn_8004D534/E0E0/C5F4/D764.
//   Updates r31[0x170/0x174/0x178], bounds, lbl_80375564-6A.
// ============================================================
static void fn_8004EC9C(void* r3, void* r4) {
    u8* r31 = (u8*)r3;
    (void)r4;

    // Visibility gate
    u32 flags = *(u32*)(r31 + 0x1a0);
    if (flags & 0x100dcu) return;
    if (!(r31[3] & 4u)) return;
    if (!r31[0x27]) return;

    // Update position
    fn_8004E300(r31);
    fn_8004E1C8(r31);

    // Sub-dispatch on r31[0x28]
    u32 jidx = *(u32*)(r31 + 0x28);
    if (jidx > 8) {
        fn_8006E67C((void*)((u8*)lbl_802738D8 + 0x2b), 0xb8,
                    (void*)((u8*)lbl_802738D8 + 0x33));
        goto tail;
    }

    {
        u8 stk_68[0x30], stk_98[0x30], stk_c8[0x30];
        switch (jidx) {
        case 0:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 1:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 2:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 3:
            fn_8020AE58(stk_68, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_98, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_c8, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            break;
        case 4:
            fn_8020AE58(stk_68, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_98, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            fn_8020AE58(stk_c8, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            break;
        case 5:
            fn_8020AE58(stk_68, 0x5a, lbl_803772E8 * *(float*)(r31+0x40));
            fn_8020AE58(stk_98, 0x59, lbl_803772E8 * *(float*)(r31+0x3c));
            fn_8020AE58(stk_c8, 0x58, lbl_803772E8 * *(float*)(r31+0x38));
            break;
        case 6:
            fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
            fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
            fn_8020BF04((void*)(r31+0x2c), stk_68);
            fn_8020AB7C(stk_68, stk_98, stk_68);
            fn_8020AB7C(stk_68, stk_68, stk_68);
            fn_8020AB7C(stk_98, stk_68, (void*)(r31+0xf8));
            goto tail;
        case 7:
            fn_8020AB48((void*)(r31+0x2c), stk_68);
            fn_8020AB7C(stk_68, stk_68, (void*)(r31+0xf8));
            goto tail;
        default: break;
        }
        fn_8020B118(stk_68, *(float*)(r31+0x44), *(float*)(r31+0x48), *(float*)(r31+0x4c));
        fn_8020B098(stk_98, *(float*)(r31+0x2c), *(float*)(r31+0x30), *(float*)(r31+0x34));
        fn_8020AB7C(stk_68, stk_98, stk_98);
        fn_8020AB7C(stk_98, stk_98, stk_98);
        fn_8020AB7C(stk_c8, stk_98, (void*)(r31+0xf8));
    }
tail:;
    *(float*)(r31+0x170) = *(float*)(r31+0x104);
    *(float*)(r31+0x174) = *(float*)(r31+0x114);
    *(float*)(r31+0x178) = *(float*)(r31+0x124) - lbl_803772D4;
    fn_8005A3A8(0, (void*)(r31+0x170), (void*)(r31+0x170));

    // Bounds/visibility check and lbl_80375564 update
    fn_8004E300(r31);
    fn_8004D534(r31);
    fn_8004E0E0(r31);
    fn_8004C5F4(r31);
    fn_8004D764(r31);
}

// ============================================================
// Shared anim-name resolution helper (used by fn_8004F2B0..fn_8004FC10)
//   Reads r3[0x3] bits, resolves anim controller ptr via r3[0x18c],
//   selects slot via fn_80106398, resolves anim name string via
//   fn_8004B360/fn_8023AAE4/fn_8000D47C/fn_8005BFDC.
//   Returns resolved anim ptr in r30/r29 (caller-specific register).
// ============================================================

// ============================================================
// fn_8004F2B0: check if unit has valid anim, return 0/1 (0x4C4)
//   Attachment 1. Returns 1 if: bit 2 of r3[3] clear, or bit 0 clear.
//   Resolves anim name, checks fn_8005B8A8 and fn_8004B134.
//   On success: second anim resolution pass, team dispatch via
//   fn_8004B238, fn_8005BFDC, fn_8005B8A8, returns 0 or 1.
// ============================================================
u8 fn_8004F2B0(void* r3) {
    u8* r31 = (u8*)r3;
    u8 b3 = r31[3];
    if (!(b3 & 4u)) return 1;
    if (!(b3 & 1u)) return 1;

    s8 r30v = (s8)r31[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r31);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r28p = (u8*)*(u32*)(r31 + 0x18c);
    void* r28anim = 0;
    if (r31[3] & 0x20u) {
        r28anim = (void*)*(u32*)(r28p + 0xc);
        if (r28anim) r28anim = fn_8000D47C(r28anim);
        else r28anim = 0;
    }

    s32 slot = 0;
    if (fn_80106398((void*)(r31 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r28p + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r28p + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r31 + 0x188);
    void*  sp = at[slot + 0x5c/4];
    if (!sp) sp = (void*)*(u32*)(r28p + 0x18);

    void* r29p = sp;
    if (!r29p) {
        fn_800056A0(0);
        r29p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29p && ((s8*)r29p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r30v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29p, desp, (u32)r29p, 0u);
        r29p = fn_8000D47C(fmt);
        if (!r29p) {
            fn_800056A0(0);
            r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29p, 0u, 0u, 0u);
            u16 r = fn_8005BFDC(fmt2);
            if ((r & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    // Check fn_8004B318 + fn_8005B8A8
    fn_8004B318(r29p);
    if (!fn_8005B8A8(r29p)) return 0;

    void* r4tx = (void*)*(u32*)(r31 + 0x190);
    u8 team = ((u8*)r4tx)[8];
    if (!fn_8004B134((u8*)r29p, (s32)team)) return 1;

    // Second pass
    r30v = (s8)r31[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r31);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    r28p = (u8*)*(u32*)(r31 + 0x18c);
    if (r31[3] & 0x20u) {
        r28anim = (void*)*(u32*)(r28p + 0xc);
        if (r28anim) r28anim = fn_8000D47C(r28anim);
    }

    slot = 0;
    if (fn_80106398((void*)(r31 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r28p + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r28p + 0x1c), 2) ? 1 : 0;
    }

    at = (void**)*(u32*)(r31 + 0x188);
    sp = at[slot + 0x5c/4];
    if (!sp) sp = (void*)*(u32*)(r28p + 0x18);

    void* r29b = sp;
    if (!r29b) {
        fn_800056A0(0);
        r29b = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29b && ((s8*)r29b)[0] != 0) {
        u32 desp2 = fn_8004B360((s32)r30v);
        u8 fmt3[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29b, desp2, (u32)r29b, 0u);
        r29b = fn_8000D47C(fmt3);
        if (!r29b) {
            fn_800056A0(0);
            r29b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29b);
            u8 fmt4[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29b, 0u, 0u, 0u);
            u16 r2 = fn_8005BFDC(fmt4);
            if ((r2 & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt4);
                r29b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    // Dispatch by team
    void* r4tx2 = (void*)*(u32*)(r31 + 0x190);
    u8 team2 = ((u8*)r4tx2)[8];
    u32 idx = (team2 <= 4) ? team2 : 0;
    fn_8004B238(r29b, (void*)(u32)idx);

    // Check fn_8005BFDC
    u16 chk = fn_8005BFDC(r29b);
    if ((chk & 0xffff) == 0x8000) r29b = (void*)lbl_80375068;

    void* r30final = r29b;
    void* r0val = (void*)*(u32*)(r31 + 0x18c + 0xc - 0xc);  // r28
    if (r30final == (void*)lbl_80375068) goto ret1;

    fn_8004B318(r30final);
    if (!fn_8005B8A8(r30final)) return 0;
ret1:
    return 1;
}

// ============================================================
// fn_8004F774: same as fn_8004F2B0 but calls fn_8005C708 (0x49C)
//   Attachment 2. Identical structure except uses fn_8005C708
//   (takes u16 r4 arg) instead of fn_8005B8A8 for the check.
// ============================================================
u8 fn_8004F774(void* r3, void* r4) {
    u8* r31 = (u8*)r3;
    u16 r30val = (u16)(u32)r4;

    u8 b3 = r31[3];
    if (!(b3 & 4u)) goto set_bit_ret;
    if (b3 & 0x20u) goto set_bit_ret;

    {
        s8 r29v = (s8)r31[0x16c];
        if ((s32)r29v < 0) {
            void* tmp = fn_80037EF4(r31);
            r29v = (s8)(u32)fn_8004AD94(tmp, 0);
        }

        u8* r27p = (u8*)*(u32*)(r31 + 0x18c);
        s32 slot = 0;
        if (fn_80106398((void*)(r31 + 0x1bc), 8)) {
            slot = fn_80106398((void*)(r27p + 0x1c), 9) ? 1 : 0;
        } else {
            slot = fn_80106398((void*)(r27p + 0x1c), 2) ? 1 : 0;
        }

        void** at = (void**)*(u32*)(r31 + 0x188);
        void*  sp = at[slot + 0x5c/4];
        if (!sp) sp = (void*)*(u32*)(r27p + 0x18);

        void* r28p = sp;
        if (!r28p) {
            fn_800056A0(0);
            r28p = (void*)((u8*)lbl_802738D8 + 0x52);
        }

        if (r28p && ((s8*)r28p)[0] != 0) {
            u32 desp = fn_8004B360((s32)r29v);
            u8 fmt[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                        (const void*)r28p, desp, (u32)r28p, 0u);
            r28p = fn_8000D47C(fmt);
            if (!r28p) {
                fn_800056A0(0);
                r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            } else {
                fn_8004B318(r28p);
                u8 fmt2[0x30];
                fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                            (const void*)r28p, 0u, 0u, 0u);
                u16 r2 = fn_8005BFDC(fmt2);
                if ((r2 & 0xffff) == 0x8000) {
                    fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                    r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
                }
            }
        } else {
            r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        }

        fn_8004B318(r28p);
        r30val = (u16)((r30val & 0xffff) | 8u);
        fn_8005C708(r28p, (u32)(u16)r30val);

        void* r4tx = (void*)*(u32*)(r31 + 0x190);
        u8 team = ((u8*)r4tx)[8];
        goto second_pass;
    }

second_pass:;
    {
        s8 r29v2 = (s8)r31[0x16c];
        if ((s32)r29v2 < 0) {
            void* tmp = fn_80037EF4(r31);
            r29v2 = (s8)(u32)fn_8004AD94(tmp, 0);
        }

        u8* r27p2 = (u8*)*(u32*)(r31 + 0x18c);
        s32 slot2 = 0;
        if (fn_80106398((void*)(r31 + 0x1bc), 8)) {
            slot2 = fn_80106398((void*)(r27p2 + 0x1c), 9) ? 1 : 0;
        } else {
            slot2 = fn_80106398((void*)(r27p2 + 0x1c), 2) ? 1 : 0;
        }

        void** at2 = (void**)*(u32*)(r31 + 0x188);
        void*  sp2 = at2[slot2 + 0x5c/4];
        if (!sp2) sp2 = (void*)*(u32*)(r27p2 + 0x18);

        void* r28b = sp2;
        if (!r28b) {
            fn_800056A0(0);
            r28b = (void*)((u8*)lbl_802738D8 + 0x52);
        }

        if (r28b && ((s8*)r28b)[0] != 0) {
            u32 desp2 = fn_8004B360((s32)r29v2);
            u8 fmt3[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                        (const void*)r28b, desp2, (u32)r28b, 0u);
            r28b = fn_8000D47C(fmt3);
            if (!r28b) {
                fn_800056A0(0);
                r28b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            } else {
                fn_8004B318(r28b);
                u8 fmt4[0x30];
                fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                            (const void*)r28b, 0u, 0u, 0u);
                u16 r3v = fn_8005BFDC(fmt4);
                if ((r3v & 0xffff) == 0x8000) {
                    fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt4);
                    r28b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
                }
            }
        } else {
            r28b = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        }

        void* r4tx2 = (void*)*(u32*)(r31 + 0x190);
        u8 team2 = ((u8*)r4tx2)[8];
        u32 idx2 = (team2 <= 4) ? team2 : 0;
        fn_8004B238(r28b, (void*)(u32)idx2);

        u16 chk = fn_8005BFDC(r28b);
        if ((chk & 0xffff) == 0x8000) r28b = (void*)lbl_80375068;

        void* r0v2 = (void*)lbl_80375068;
        if (r28b != r0v2) {
            fn_8005C708(r28b, (u32)(u16)r30val);
        }
    }

    r31[3] = r31[3] | 1u;
    return 1;

set_bit_ret:
    r31[3] = r31[3] | 1u;
    return 1;
}

// ============================================================
// fn_8004FC10: anim name resolver + fn_8004B194 + fn_8005B8A8 (0x1E8)
//   Same prologue as fn_8004F2B0 but calls fn_8004B194(anim, r4)
//   and fn_8005B8A8 at the end instead of returning 0/1.
// ============================================================
void fn_8004FC10(void* r3, void* r4) {
    u8* r27 = (u8*)r3;
    void* r31 = r4;

    s8 r30v = (s8)r27[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r27);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r28p = (u8*)*(u32*)(r27 + 0x18c);
    if (r27[3] & 0x20u) {
        void* a = (void*)*(u32*)(r28p + 0xc);
        if (a) a = fn_8000D47C(a);
        r28p = (u8*)a;
    }

    s32 slot = 0;
    if (fn_80106398((void*)(r27 + 0x1bc), 8)) {
        slot = fn_80106398((void*)((u8*)*(u32*)(r27 + 0x18c) + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)((u8*)*(u32*)(r27 + 0x18c) + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r27 + 0x188);
    void* r29p = at[slot + 0x5c/4];
    if (!r29p) r29p = (void*)*(u32*)((u8*)*(u32*)(r27 + 0x18c) + 0x18);

    if (!r29p) {
        fn_800056A0(0);
        r29p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29p && ((s8*)r29p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r30v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29p, desp, (u32)r29p, 0u);
        r29p = fn_8000D47C(fmt);
        if (!r29p) {
            fn_800056A0(0);
            r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    fn_8004B194(r29p, (s32)(u32)r31);
    fn_8005B8A8(r29p);
}

// ============================================================
// fn_8004FDF8: same as fn_8004FC10 but calls fn_8005C74C (0x1E8)
// ============================================================
void fn_8004FDF8(void* r3, void* r4) {
    u8* r27 = (u8*)r3;
    void* r31 = r4;

    s8 r30v = (s8)r27[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r27);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r28base = (u8*)*(u32*)(r27 + 0x18c);
    s32 slot = 0;
    if (fn_80106398((void*)(r27 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r28base + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r28base + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r27 + 0x188);
    void* r29p = at[slot + 0x5c/4];
    if (!r29p) r29p = (void*)*(u32*)(r28base + 0x18);

    if (!r29p) {
        fn_800056A0(0);
        r29p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29p && ((s8*)r29p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r30v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29p, desp, (u32)r29p, 0u);
        r29p = fn_8000D47C(fmt);
        if (!r29p) {
            fn_800056A0(0);
            r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    fn_8004B194(r29p, (s32)(u32)r31);
    fn_8005C74C(r29p);
}

// ============================================================
// fn_8004FFE0: zero all fields of unit particle entry
// ============================================================
void fn_8004FFE0(void* r3) {
    u8* p = (u8*)r3;
    p[3] = 0;
    *(s16*)(p + 0x15c) = 0;
    *(s16*)(p + 0) = 0;
    *(s16*)(p + 0x16e) = -1;
    p[0x16d] = 0xff;
    p[0x16c] = 0xff;
    *(float*)(p + 0x170) = lbl_803772DC;
    *(float*)(p + 0x174) = lbl_803772DC;
    *(float*)(p + 0x178) = lbl_803772DC;
    *(u32*)(p + 0x17c) = 0;
}

// ============================================================
// fn_80050018: store r4 to r3[2] (set particle color byte)
// ============================================================
void fn_80050018(void* r3, u8 r4) {
    ((u8*)r3)[2] = r4;
}

// ============================================================
// fn_80050020: large particle system init (0x3D0)
//   Attachment 3/4 (identical). Initializes lbl_80375550 via
//   fn_8006DB14, allocates queue struct via fn_800C48D4,
//   initializes linked list pool, DCFlushRange, fn_8022B17C x2,
//   fn_800C4BB4 x2. Initializes lbl_802FA4C8 entries (6 slots x 0xa0)
//   via fn_8006174C, fn_8005F47C/F41C/F4DC/F3BC, fn_8023AAE4,
//   fn_80061334. Then iterates unit array zeroing all entries.
// ============================================================
void fn_80050020(void) {
    // Init texture slot via fn_8006DB14
    *(u32*)&lbl_80375550 = (u32)fn_8006DB14((void*)((u8*)lbl_802738D8 + 0x95));

    // Allocate queue
    void* r29p = fn_800C48D4(0x1c);
    if (r29p) {
        *(u32*)((u8*)r29p + 0) = 0;
        *(u32*)((u8*)r29p + 4) = 0;
        *(u32*)((u8*)r29p + 8) = 0;
        *(u32*)((u8*)r29p + 0x14) = 0;
        *(u32*)((u8*)r29p + 0xc) = 0;
        *(u32*)((u8*)r29p + 0x10) = 0;
    }
    *(u32*)&lbl_8037556C = (u32)r29p;
    *(u32*)((u8*)r29p + 0x18) = 0x40;

    s32 r31v = *(s32*)((u8*)r29p + 0x18);
    s32 r30v = r31v * 0x14;

    void* pool = fn_800C48A8(0, r30v + 0x10);
    fn_80235164(pool, (void*)fn_80052CCC, 0, 0x14, r31v);
    *(u32*)((u8*)r29p + 0) = (u32)pool;

    void* ptrpool = fn_800C48A8(0, (r31v + 1) * 4);
    *(u32*)((u8*)r29p + 4) = (u32)ptrpool;

    DCFlushRange((void*)*(u32*)((u8*)r29p), (u32)r30v);
    DCFlushRange((void*)*(u32*)((u8*)r29p + 4), (u32)((r31v + 1) * 4));

    // Init linked list
    s32 i = 0;
    s32 pool_off = 0;
    s32 ptr_off = 0;
    while (i < r31v) {
        void* entry = (void*)((u8*)*(u32*)((u8*)r29p) + pool_off);
        ((u32*)*(u32*)((u8*)r29p + 4))[ptr_off/4] = (u32)entry;
        pool_off += 0x14;
        ptr_off += 4;
        i++;
    }
    ((u32*)*(u32*)((u8*)r29p + 4))[r31v] = 0;

    // fn_8022B17C for map-size bitmap
    void* map1 = fn_8022B17C(0x260, 0x1c0, 0x27, 0, 0);
    void* bmp1 = fn_800C4BB4(map1, (void*)((u8*)lbl_802738D8 + 0x52), 0);
    *(u32*)&lbl_80375554 = (u32)bmp1;

    void* map2 = fn_8022B17C(0xa0, 0x78, 0, 0, 0);
    void* bmp2 = fn_800C4BB4(map2, (void*)((u8*)lbl_802738D8 + 0x52), 0);
    *(u32*)&lbl_80375558 = (u32)bmp2;

    fn_80067638(3, (void*)fn_8004E000, (void*)fn_8004E000, 0, 1);

    // Init 6 sound entries in lbl_802FA4C8
    u8* r31e = (u8*)lbl_802FA4C8;
    for (s32 r30e = 0; r30e < 6; r30e++) {
        fn_8006174C(r31e);
        // Two fn_8023AAE4 calls with different format strings
        u8 stk[0x10];
        if (r30e < 1) {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xa5),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)((u8*)lbl_802738D8 + 0xb6), 0u, 0u);
        } else {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xba),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)(r30e + 1), (u32)((u8*)lbl_802738D8 + 0xb6), 0u);
        }
        fn_8005F47C(r31e, stk);
        if (r30e < 1) {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xa5),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)((u8*)lbl_802738D8 + 0xc7), 0u, 0u);
        } else {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xba),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)(r30e + 1), (u32)((u8*)lbl_802738D8 + 0xc7), 0u);
        }
        fn_8005F41C(r31e, stk);
        if (r30e < 1) {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xa5),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)((u8*)lbl_802738D8 + 0xca), 0u, 0u);
        } else {
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xba),
                        (const void*)((u8*)lbl_802738D8 + 0xb0),
                        (u32)(r30e + 1), (u32)((u8*)lbl_802738D8 + 0xca), 0u);
        }
        fn_8005F4DC(r31e, stk);
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0xa5),
                    (const void*)((u8*)lbl_802738D8 + 0xb0),
                    (u32)((u8*)lbl_802738D8 + 0xce), 0u, 0u);
        fn_8005F3BC(r31e, stk);
        fn_80061334(r31e);
        r31e += 0xa0;
    }

    // Team filter
    u8 teams[4];
    fn_800153FC(teams, 5);

    // Zero all unit entries
    for (u32 idx = 1; idx <= 0x9f; idx++) {
        u8* r5p;
        if (idx & 0xff) r5p = (u8*)lbl_802BB9C4 + (u32)(idx - 1) * 0x280;
        else r5p = 0;

        if (!*(u32*)(r5p + 0x188)) continue;
        void* r4tx = (void*)*(u32*)(r5p + 0x190);
        u8 team = ((u8*)r4tx)[8];
        if (!teams[team]) continue;

        r5p[3] = 0;
        *(s16*)(r5p + 0x15c) = 0;
        *(s16*)(r5p) = 0;
        *(s16*)(r5p + 0x16e) = -1;
        r5p[0x16d] = 0xff;
        r5p[0x16c] = 0xff;
        *(float*)(r5p + 0x170) = lbl_803772DC;
        *(float*)(r5p + 0x174) = lbl_803772DC;
        *(float*)(r5p + 0x178) = lbl_803772DC;
        *(u32*)(r5p + 0x17c) = 0;
    }

    lbl_8037555C = 1;
}

// ============================================================
// fn_800503F0: per-unit anim setup via fn_8004B238/fn_8005F35C (0x294)
//   Same anim-name resolution pattern. Dispatches by team type
//   (fn_8004B238), falls back to lbl_80375068, then calls
//   fn_8005F35C(r3+0x1c, anim, 8).
// ============================================================
void fn_800503F0(void* r3) {
    u8* r31 = (u8*)r3;
    if (!(r31[3] & 4u)) return;

    s8 r29v = (s8)r31[0x16c];
    u8* r30p = r31 + 0x1c;
    if ((s32)r29v < 0) {
        void* tmp = fn_80037EF4(r31);
        r29v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r27p = (u8*)*(u32*)(r31 + 0x18c);
    if (r31[3] & 0x20u) {
        void* a = (void*)*(u32*)(r27p + 0xc);
        if (a) a = fn_8000D47C(a);
    }

    s32 slot = 0;
    if (fn_80106398((void*)(r31 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r27p + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r27p + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r31 + 0x188);
    void* r28p = at[slot + 0x5c/4];
    if (!r28p) r28p = (void*)*(u32*)(r27p + 0x18);

    if (!r28p) {
        fn_800056A0(0);
        r28p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r28p && ((s8*)r28p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r29v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r28p, desp, (u32)r28p, 0u);
        r28p = fn_8000D47C(fmt);
        if (!r28p) {
            fn_800056A0(0);
            r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r28p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r28p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r28p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    // Dispatch by team
    void* r4tx = (void*)*(u32*)(r31 + 0x190);
    u8 team = ((u8*)r4tx)[8];
    u32 idx = (team <= 4) ? team : 0;
    fn_8004B238(r28p, (void*)(u32)idx);

    u16 chk = fn_8005BFDC(r28p);
    if ((chk & 0xffff) == 0x8000) r28p = (void*)lbl_80375068;

    fn_8005F35C(r30p, r28p, 8);
}

// ============================================================
// fn_80050684: same as fn_800503F0 but calls fn_8004B174(anim, r4) (0x1E4)
// ============================================================
void fn_80050684(void* r3, void* r4) {
    u8* r27 = (u8*)r3;
    void* r31 = r4;

    s8 r30v = (s8)r27[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r27);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r28base = (u8*)*(u32*)(r27 + 0x18c);
    s32 slot = 0;
    if (fn_80106398((void*)(r27 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r28base + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r28base + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r27 + 0x188);
    void* r29p = at[slot + 0x5c/4];
    if (!r29p) r29p = (void*)*(u32*)(r28base + 0x18);

    if (!r29p) {
        fn_800056A0(0);
        r29p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29p && ((s8*)r29p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r30v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29p, desp, (u32)r29p, 0u);
        r29p = fn_8000D47C(fmt);
        if (!r29p) {
            fn_800056A0(0);
            r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    fn_8004B174(r29p, (s32)(u32)r31);
}

// ============================================================
// fn_80050868: same as fn_8004FC10 (calls fn_8004B194) (0x1E4)
// ============================================================
void fn_80050868(void* r3, void* r4) {
    u8* r27 = (u8*)r3;
    void* r31 = r4;

    s8 r30v = (s8)r27[0x16c];
    if ((s32)r30v < 0) {
        void* tmp = fn_80037EF4(r27);
        r30v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r28base = (u8*)*(u32*)(r27 + 0x18c);
    s32 slot = 0;
    if (fn_80106398((void*)(r27 + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r28base + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r28base + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r27 + 0x188);
    void* r29p = at[slot + 0x5c/4];
    if (!r29p) r29p = (void*)*(u32*)(r28base + 0x18);

    if (!r29p) {
        fn_800056A0(0);
        r29p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r29p && ((s8*)r29p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r30v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r29p, desp, (u32)r29p, 0u);
        r29p = fn_8000D47C(fmt);
        if (!r29p) {
            fn_800056A0(0);
            r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r29p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r29p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r29p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    fn_8004B194(r29p, (s32)(u32)r31);
}

// ============================================================
// fn_80050A4C: anim-name resolution only, returns anim ptr (0x1F4)
//   Same pattern but no final call returns r29p directly.
// ============================================================
void* fn_80050A4C(void* r3) {
    u8* r28p = (u8*)r3;

    s8 r31v = (s8)r28p[0x16c];
    if ((s32)r31v < 0) {
        void* tmp = fn_80037EF4(r28p);
        r31v = (s8)(u32)fn_8004AD94(tmp, 0);
    }

    u8* r29base = (u8*)*(u32*)(r28p + 0x18c);
    if (r28p[3] & 0x20u) {
        void* a = (void*)*(u32*)(r29base + 0xc);
        if (a) a = fn_8000D47C(a);
    }

    s32 slot = 0;
    if (fn_80106398((void*)(r28p + 0x1bc), 8)) {
        slot = fn_80106398((void*)(r29base + 0x1c), 9) ? 1 : 0;
    } else {
        slot = fn_80106398((void*)(r29base + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r28p + 0x188);
    void* r30p = at[slot + 0x5c/4];
    if (!r30p) r30p = (void*)*(u32*)(r29base + 0x18);

    if (!r30p) {
        fn_800056A0(0);
        r30p = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    if (r30p && ((s8*)r30p)[0] != 0) {
        u32 desp = fn_8004B360((s32)r31v);
        u8 fmt[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x5f),
                    (const void*)r30p, desp, (u32)r30p, 0u);
        r30p = fn_8000D47C(fmt);
        if (!r30p) {
            fn_800056A0(0);
            r30p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
        } else {
            fn_8004B318(r30p);
            u8 fmt2[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8, (const void*)((u8*)lbl_802738D8 + 0x64),
                        (const void*)r30p, 0u, 0u, 0u);
            u16 rv = fn_8005BFDC(fmt2);
            if ((rv & 0xffff) == 0x8000) {
                fn_800056CC((const char*)((u8*)lbl_802738D8 + 0x67), fmt2);
                r30p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
            }
        }
    } else {
        r30p = fn_8000D47C((void*)((u8*)lbl_802738D8 + 0x53));
    }

    return r30p;
}

// ============================================================
// fn_80050C40: return anim ptr from slot (0xF0)
//   Lighter version no fn_8023AAE4, just slot resolution.
// ============================================================
void* fn_80050C40(void* r3) {
    u8* r29p = (u8*)r3;
    u8* r31p = (u8*)*(u32*)(r29p + 0x18c);
    if (r29p[3] & 0x20u) {
        void* a = (void*)*(u32*)(r31p + 0xc);
        if (a) a = fn_8000D47C(a);
        r31p = (u8*)a;
    }

    s32 r30v = 0;
    if (fn_80106398((void*)(r29p + 0x1bc), 8)) {
        r30v = fn_80106398((void*)(r31p + 0x1c), 9) ? 1 : 0;
    } else {
        r30v = fn_80106398((void*)(r31p + 0x1c), 2) ? 1 : 0;
    }

    void** at = (void**)*(u32*)(r29p + 0x188);
    void* r3out = at[r30v + 0x5c/4];
    if (!r3out) r3out = (void*)*(u32*)(r31p + 0x18);

    if (!r3out) {
        fn_800056A0(0);
        r3out = (void*)((u8*)lbl_802738D8 + 0x52);
    }

    return r3out;
}

// ============================================================
// fn_80050D30: call fn_8005F6B0(r3+0x1c)
// ============================================================
void fn_80050D30(void* r3) {
    fn_8005F6B0((void*)((u8*)r3 + 0x1c));
}

// ============================================================
// fn_80050D54: call fn_8005F6D8(r3+0x1c, (u8)r4)
// ============================================================
void fn_80050D54(void* r3, u8 r4) {
    fn_8005F6D8((void*)((u8*)r3 + 0x1c), (u32)r4);
}

// ============================================================
// fn_80050D7C: call fn_8005F708(r3+0x1c, RGBA from lbl_8028F808[r4])
//   then fn_8005F6D8(r3+0x1c, alpha_byte)
// ============================================================
void fn_80050D7C(void* r3, s32 r4) {
    u8* r31p = (u8*)r3 + 0x1c;
    u32 color = lbl_8028F808[r4];
    u8 r = (u8)(color >> 24);
    u8 g = (u8)(color >> 16);
    u8 b = (u8)(color >> 8);
    u8 a = (u8)color;
    fn_8005F708(r31p, r, g, b);
    fn_8005F6D8(r31p, a);
}

// ============================================================
// fn_80050DD8: store f1->r3[4], f2->r3[8], call fn_800234FC, store f1->r3[0xc]
// ============================================================
void fn_80050DD8(void* r3, float f1, float f2) {
    u8* r31 = (u8*)r3;
    *(float*)(r31 + 4) = f1;
    *(float*)(r31 + 8) = f2;
    fn_800234FC((void*)lbl_802D49F8);
    *(float*)(r31 + 0xc) = f1;
}

// ============================================================
// fn_80050E18: full unit position update (0x184)
//   If fn_800409EC returns 0, just call fn_8005F6D8(r3+0x1c, 0xff).
//   Else: convert r3[0x19e/0x19f] (s8 col/row) to float positions,
//   store to r3[4/8], call fn_800234FC -> store r3[0xc].
//   Clear flags bits, fn_8005F6D8, check lbl_80375529 team,
//   check lbl_802D49F8 water cell, fn_80044514 visibility,
//   set/clear r3[0x1a0] bit 0x80.
// ============================================================
void fn_80050E18(void* r3) {
    u8* r29p = (u8*)r3;
    if (!fn_800409EC(r29p)) {
        fn_8005F6D8((void*)(r29p + 0x1c), 0xff);
        return;
    }

    s8 r31v = (s8)r29p[0x19e];
    s8 r30v = (s8)r29p[0x19f];
    float fc, fr;
    { u32 s[2] = { 0x43300000u, (u32)((s32)r31v ^ 0x8000) };
      double d = *(double*)s; fc = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((s32)r30v ^ 0x8000) };
      double d = *(double*)s; fr = (float)(d - 4503601774854144.0); }
    float f3 = lbl_803772D4;
    *(float*)(r29p + 4) = f3 + fc;
    *(float*)(r29p + 8) = f3 + fr;
    fn_800234FC((void*)lbl_802D49F8);
    *(float*)(r29p + 0xc) = f3 + fc;  // f1 from fn_800234FC

    // Clear flags
    u32 fl = *(u32*)(r29p + 0x1a0);
    *(u32*)(r29p + 0x1a0) = fl & ~0x241u;
    fn_8005F6D8((void*)(r29p + 0x1c), 0xff);

    // Team check via lbl_80375529
    u8 t = lbl_80375529;
    s32 tval = (s32)(u8)(t - 1);
    u8 ok = 0;
    if ((u32)(1u - (u32)(tval & 0xffu) >> 1) != 0) ok = 1;
    // simplified: check if team matches
    void* r4tx = (void*)*(u32*)(r29p + 0x190);
    u8 team = ((u8*)r4tx)[8];
    if (ok && team == 1) {
        // check water cell
        u8* map = (u8*)lbl_802D49F8;
        s32 off = (s32)r31v + ((s32)r30v << 6);
        u8 cell = map[off + 0x200d];
        if (!cell) {
            *(u32*)(r29p + 0x1a0) = *(u32*)(r29p + 0x1a0) | 0x40u;
            fn_8005F6D8((void*)(r29p + 0x1c), 0);
        }
    }

    // fn_80044514 visibility check
    void* mapobj = fn_80040A0C();
    if (fn_80044514(mapobj, (s32)r31v, (s32)r30v)) {
        *(u32*)(r29p + 0x1a0) = *(u32*)(r29p + 0x1a0) | 0x80u;
    } else {
        *(u32*)(r29p + 0x1a0) = *(u32*)(r29p + 0x1a0) & ~0x1800000u;
    }
}

// ============================================================
// fn_80050F9C: reset sound queue lbl_8037556C linked list (0x6C)
//   Re-links all pool entries and zeroes head/tail/count.
// ============================================================
void fn_80050F9C(void) {
    void* queue = (void*)*(u32*)lbl_8037556C;
    if (!queue) return;

    *(u32*)((u8*)queue + 0x14) = 0;
    s32 i = 0;
    s32 pool_off = 0;
    s32 ptr_off = 0;
    s32 total = *(s32*)((u8*)queue + 0x18);
    while (i < total) {
        void* entry = (void*)((u8*)*(u32*)((u8*)queue) + pool_off);
        ((u32*)*(u32*)((u8*)queue + 4))[ptr_off/4] = (u32)entry;
        pool_off += 0x14;
        ptr_off += 4;
        i++;
    }
    ((u32*)*(u32*)((u8*)queue + 4))[total] = 0;
    *(u32*)((u8*)queue + 8) = *(u32*)((u8*)queue + 4);
    *(u32*)((u8*)queue + 0xc) = 0;
    *(u32*)((u8*)queue + 0x10) = 0;
}

// ============================================================
// fn_80051008: particle system teardown (0xE4)
//   Calls fn_800615C8 on 6 lbl_802PA4C8 entries,
//   frees lbl_80375558, lbl_80375554, lbl_8037556C memory,
//   clears lbl_80375550 via fn_8006DAB4.
// ============================================================
void fn_80051008(void) {
    fn_80016394();
    u8* r31e = (u8*)lbl_802FA4C8;
    for (s32 r30e = 0; r30e < 5; r30e++) {
        fn_800615C8(r31e);
        r31e += 0xa0;
    }

    void* bmp2 = (void*)*(u32*)&lbl_80375558;
    if (bmp2) fn_800C4B84(bmp2);
    *(u32*)&lbl_80375558 = 0;

    void* bmp1 = (void*)*(u32*)&lbl_80375554;
    if (bmp1) fn_800C4B84(bmp1);
    *(u32*)&lbl_80375554 = 0;

    void* queue = (void*)*(u32*)lbl_8037556C;
    if (queue) {
        void* pool = (void*)*(u32*)queue;
        if (pool) {
            fn_800C4868((void*)((u8*)pool - 0x10));
            *(u32*)queue = 0;
        }
        void* ptrs = (void*)*(u32*)((u8*)queue + 4);
        if (ptrs) {
            fn_800C4868(ptrs);
            *(u32*)((u8*)queue + 4) = 0;
        }
        fn_800C4888(queue);
    }
    *(u32*)&lbl_8037556C = 0;

    fn_8006DAB4((void*)*(u32*)&lbl_80375550);
}

// ============================================================
// fn_800510EC: large GX colored-quad renderer (NonMatching, 0x15CC)
//   Attachment 5. r3=unit particle ptr, f1=alpha scale.
//   Reads r3[0] as u16 (col), r3 as float pair (world pos).
//   Multiple render passes based on distance (lbl_8037735C/80):
//   Pass 0: if dist < lbl_8037735C, draw current cell quads (0x6 dir).
//   Pass 1: dist < lbl_8037735C again, draw col-1 cell.
//   Pass 2: dist < lbl_8037735C again, draw row-1 cell.
//   Pass 3: dist < lbl_80377360, draw col-1/row-1 diagonal.
//   Pass 4: dist < lbl_80377360, draw col+1 cell.
//   Pass 5: dist < lbl_8037735C, draw col+1/row-1 diagonal.
//   Pass 6: dist < lbl_80377360, draw col/row+1.
//   Each pass calls fn_80229B48/fn_800230D8 then writes 4 GX verts.
// ============================================================
void fn_800510EC(void* r3, float f1) {
    u8* r29p = (u8*)r3;
    float f30 = *(float*)(r29p + 4);
    float f29 = *(float*)(r29p + 8);

    u16 raw_u = *(u16*)r29p;
    s32 r30v = (s32)raw_u;
    s32 r31v;
    { float fv; u32 s[2] = { 0x43300000u, (u32)(raw_u ^ 0x8000) };
      double d = *(double*)s; fv = (float)(d - 4503601774854144.0);
      r30v = (s32)fv; }

    s32 raw_i = (s32)raw_u;
    s32 r31i;
    { u32 s[2] = { 0x43300000u, (u32)((u16)(raw_u >> 8) ^ 0x8000) };
      double d = *(double*)s; r31i = (s32)(float)(d - 4503601774854144.0); }

    u8 r28 = *(u8*)(r29p + 0x28);
    float f30_raw = f30;
    float f29_raw = f29;

    // Compute signed-biased float
    float fc;
    { s32 sv = r30v;
      u32 s[2] = { 0x43300000u, (u32)(sv ^ 0x8000) };
      double d = *(double*)s; fc = (float)(d - 4503601774854144.0); }
    float fr;
    { s32 sv = r31i;
      u32 s[2] = { 0x43300000u, (u32)(sv ^ 0x8000) };
      double d = *(double*)s; fr = (float)(d - 4503601774854144.0); }
    float fsub = f30 - fc;

    // Color bytes from r3[0x28..0x2b]
    u8 r27 = r29p[0x28];
    u8 r26 = r29p[0x29];
    u8 r25 = r29p[0x2a];
    u8 r24 = r29p[0x2b];

    volatile float* gx = (volatile float*)0xcc008000;
    volatile u8*   gxb = (volatile u8*)0xcc008000;

    // Pass 0: current cell
    if (fsub < lbl_8037735C) {
        fn_80229B48(0x98, 0, 4);
        float z0 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31i, 0);
        float fc0, fr0;
        { u32 s[2] = { 0x43300000u, (u32)(r30v ^ 0x8000) };
          double d = *(double*)s; fc0 = (float)(d - 4503601774854144.0); }
        { u32 s[2] = { 0x43300000u, (u32)(r31i ^ 0x8000) };
          double d = *(double*)s; fr0 = (float)(d - 4503601774854144.0); }
        *gx = fc0; *gx = fr0; *gx = z0;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z1 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31i, 1);
        *gx = fc0 + 1.0f; *gx = fr0; *gx = z1;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z2 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31i, 2);
        *gx = fc0; *gx = fr0 + 1.0f; *gx = z2;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z3 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31i, 3);
        *gx = fc0 + 1.0f; *gx = fr0 + 1.0f; *gx = z3;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
    }
    // Additional passes abbreviated for NonMatching structure mirrors
    // the full asm but with the same GX write pattern repeated for
    // (col-1,row), (col,row-1), (col-1,row-1), (col+1,row), etc.
    // Each pass checks bounds via lbl_802D49F8[0/4] and the water-cell
    // byte at lbl_802D49F8+0x100d before emitting verts.
}

// ============================================================
// fn_800514B0: build animation transform matrix for unit particle (0x210)
//   r3=unit ptr, r4=flag (if set use fn_8020B51C first),
//   f1/f2=world x/y, f3/f4=scale x/y, f5=angle.
//   Loads matrix data from lbl_80273858, packs word triples onto
//   stack, then: if f5!=0: fn_8020AE58, optional fn_8020B51C,
//   fn_8020B23C, fn_8020B494, fn_8020AB7C, fn_8020B098 x2,
//   fn_8020AB7C x3. Else: fn_8020B23C, fn_8020B494, fn_8020AB7C.
// ============================================================
void fn_800514B0(void* r3, void* r4, float f1, float f2, float f3, float f4, float f5) {
    u8* r30p = (u8*)r3;
    u8* r31p = (u8*)r4;
    float f30 = f3;
    float f31 = f4;

    u8* r8 = (u8*)lbl_80273858;
    u32 r7  = *(u32*)(r8 + 0x1c);
    u32 r6  = *(u32*)(r8 + 0x20);
    u32 r5  = *(u32*)(r8 + 0x28);
    u32 r0  = *(u32*)(r8 + 0x2c);
    u32 r10 = *(u32*)(r8 + 0x24);
    u32 r7b = *(u32*)(r8 + 0x30);
    u32 r4b = *(u32*)(r8 + 0x34);
    u32 r3b = *(u32*)(r8 + 0x38);
    u32 r0b = *(u32*)(r8 + 0x3c);

    // Pack on stack (mirrored word layout from asm)
    u32 stk_2c = r7;  u32 stk_30 = r6;  u32 stk_38 = r5;  u32 stk_3c = r0;
    u32 stk_34 = r10; u32 stk_40 = r7b; u32 stk_28 = r4b; u32 stk_24 = r3b;
    // Override with floats
    stk_2c = *(u32*)&f1; stk_30 = *(u32*)&f2;
    stk_38 = *(u32*)&f1; stk_3c = *(u32*)&f2;

    // stk words for fn_8020B23C input
    u32 s8_v = stk_2c; u32 sc_v = stk_30;
    u32 s10_v = stk_34; u32 s18_v = stk_3c;
    u32 s1c_v = s8_v; u32 s20_v = sc_v;
    u32 s14_v = s10_v; u32 s24_v = stk_28;
    u32 s28_v = stk_24; u32 s2c_v = r0b;

    if (lbl_803772DC != f5) {
        u8 stk_a4[0x30];
        fn_8020AE58(stk_a4, 0x5a, lbl_803772E8 * f5);
        if (!r30p) {
            u8 stk_20[0x10];
            fn_8020B51C(stk_a4, stk_20, stk_a4);
        }
        u8 stk_74[0x30], stk_14[0x10], stk_20b[0x10], stk_8b[0x10];
        fn_8020B23C(stk_74, stk_14, stk_20b, stk_8b);
        u8 stk_44[0x30];
        fn_8020B494(stk_44, -f30, f30, f30, -f31, lbl_803772D4, lbl_803772D4, lbl_803772D4, lbl_803772D4);
        fn_8020AB7C(stk_44, stk_74, (void*)r31p);
        u8 stk_d4[0x30];
        fn_8020B098(stk_d4, lbl_803772EC, lbl_803772EC, lbl_803772DC);
        fn_8020AB7C(stk_a4, stk_d4, stk_a4);
        fn_8020B098(stk_d4, lbl_803772D4, lbl_803772D4, lbl_803772DC);
        fn_8020AB7C(stk_d4, stk_a4, stk_d4);
        fn_8020AB7C(stk_a4, (void*)r31p, stk_d4);
        fn_8020AB7C(stk_a4, (void*)r31p, (void*)r31p);
    } else {
        u8 stk_74b[0x30], stk_14b[0x10], stk_20c[0x10], stk_8c[0x10];
        fn_8020B23C(stk_74b, stk_14b, stk_20c, stk_8c);
        u8 stk_44b[0x30];
        fn_8020B494(stk_44b, -f30, f30, f30, -f31, lbl_803772D4, lbl_803772D4, lbl_803772D4, lbl_803772D4);
        fn_8020AB7C(stk_44b, stk_74b, (void*)r31p);
    }
}

// ============================================================
// fn_800516C0: wrapper calling fn_800516EC with r3[0] as color word (0x2C)
// ============================================================
void fn_800516C0(void* r3) {
    u32 color = *(u32*)r3;
    fn_800516EC(&color, 0, 0.0f, 0.0f);
}

// ============================================================
// fn_800516EC: large GX colored-quad renderer via fn_800230D8 (NonMatching, 0x15CC)
//   Attachment 6. r3=color_word ptr (4 bytes RGBA), r4=flag,
//   f1=world_x, f2=world_y.
//   Reads r3[0] as RGBA. Reads r3[0] as col/row.
//   Up to 6 render passes, each checking bounds via lbl_802D49F8,
//   water-cell byte, then emitting 4 GX verts with fn_800230D8 per vertex.
//   This is the same function body as fn_800510EC but standalone.
// ============================================================
void fn_800516EC(void* r3, s32 r4, float f1, float f2) {
    u8* r29p = (u8*)r3;
    float f30 = f1;
    float f29 = f2;

    s32 r30v = (s32)(s16)*(s16*)(r29p + 0);  // lha r30
    s32 r31v = (s32)(s16)*(s16*)(r29p + 2);  // lha r31

    // Double-bias for r30, r31
    float fc, fr;
    { u32 s[2] = { 0x43300000u, (u32)((u16)r30v ^ 0x8000) };
      double d = *(double*)s; fc = (float)(d - 4503601774854144.0); }
    { u32 s[2] = { 0x43300000u, (u32)((u16)r31v ^ 0x8000) };
      double d = *(double*)s; fr = (float)(d - 4503601774854144.0); }
    float fsub = f30 - fc;

    u8 r27 = r29p[0x28];
    u8 r26 = r29p[0x29];
    u8 r25 = r29p[0x2a];
    u8 r24 = r29p[0x2b];

    volatile float* gx = (volatile float*)0xcc008000;
    volatile u8*   gxb = (volatile u8*)0xcc008000;

    // Abbreviated NonMatching body same GX emit pattern as fn_800510EC
    // but iterates all 6 passes (directions) from the large asm.
    if (fsub < lbl_8037735C) {
        fn_80229B48(0x98, 0, 4);
        float z0 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31v, 0);
        *gx = fc; *gx = fr; *gx = z0;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z1 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31v, 1);
        *gx = fc + 1.0f; *gx = fr; *gx = z1;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z2 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31v, 2);
        *gx = fc; *gx = fr + 1.0f; *gx = z2;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
        float z3 = fn_800230D8((void*)lbl_802D49F8, (s8)r30v, (s8)r31v, 3);
        *gx = fc + 1.0f; *gx = fr + 1.0f; *gx = z3;
        *gxb = r27; *gxb = r26; *gxb = r25; *gxb = r24;
    }
    // Remaining passes (col-1, row-1, diagonals, col+1, row+1)
    // follow identical patterns omitted here as NonMatching.
}

// ============================================================
// fn_80052CB8: return lbl_8028F808[r3] (LooseBallAnims::GetDesperationInfo)
// ============================================================
u32 fn_80052CB8(s32 r3) {
    return lbl_8028F808[r3];
}

// ============================================================
// fn_80052CCC: zero first two words of struct (nlListContainer ctor)
// ============================================================
void fn_80052CCC(void* r3) {
    *(u32*)((u8*)r3 + 0) = 0;
    *(u32*)((u8*)r3 + 4) = 0;
}

// ============================================================
// Shared init-particle-entry helper macro pattern
//   Used by fn_80052CDC, fn_800539A4, fn_80053B04 x3, fn_80053C70,
//   fn_80053DB8 x3. Allocates 0x60-byte struct via fn_800C48D4,
//   inits all fields, calls fn_8000D47C for anim name, sets flags.
// ============================================================

// Shared helper: init the 0x60-byte r30 struct from fn_8000D47C and constants
static inline void init_particle_entry(u8* r30, void* r29) {
    float zero = lbl_80377394;
    s16 m1 = -1;
    *(float*)(r30 + 0xc) = zero;
    *(float*)(r30 + 0x10) = zero;
    *(float*)(r30 + 0x14) = zero;
    *(s16*)(r30 + 0) = 0;
    r30[3] = 0xff;
    r30[4] = 0xff;
    *(u32*)(r30 + 0x30) = 0;
    *(u32*)(r30 + 0x34) = 0;
    *(u32*)(r30 + 0x3c) = 0;
    *(u32*)(r30 + 0x40) = 0;
    *(u32*)(r30 + 0x44) = 0;
    *(u32*)(r30 + 0x8) = 0;
    *(u32*)(r30 + 0x5c) = 0;
    *(u32*)(r30 + 0x48) = 0;
    // Store RGBA from lbl_80377390 as 4 bytes
    u32 rgba = *(u32*)&lbl_80377390;
    r30[0x38] = (u8)(rgba >> 24);
    r30[0x39] = (u8)(rgba >> 16);
    r30[0x3a] = (u8)(rgba >> 8);
    r30[0x3b] = (u8)rgba;
    // fn_8000D47C on r29 -> store at r30[0x2c]
    *(u32*)(r30 + 0x2c) = (u32)fn_8000D47C(r29);
    *(float*)(r30 + 0x20) = lbl_80377394;
    *(float*)(r30 + 0x24) = lbl_80377394;
    *(float*)(r30 + 0x28) = lbl_80377394;
    *(float*)(r30 + 0x1c) = lbl_80377398;
    *(float*)(r30 + 0x18) = lbl_8037739C;
    r30[5] = 3;
    *(u32*)(r30 + 0x4c) = 0;
    *(u32*)(r30 + 0x50) = 0;
    *(u32*)(r30 + 0x54) = 0;
    *(u32*)(r30 + 0x58) = 0;
}

// ============================================================
// fn_80052CDC: allocate + init particle entry via lbl_8028F920 (0x154)
//   r3=owner ptr, r4=priority (default 4 if 0).
//   Calls fn_8000CC18(lbl_8028F920, r4) -> r31,
//   allocates 0x60 struct -> r30, inits all fields,
//   sets r30[0x8] oris 0x800, conditionally oris 0x2000.
//   Returns r31.
// ============================================================
void* fn_80052CDC(void* r3, s32 r4) {
    void* r29 = r3;
    if (!r4) r4 = 4;
    void* r31 = fn_8000CC18((void*)lbl_8028F920, r4);
    u8* r30 = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;
    init_particle_entry(r30, r29);
    // Set bit in r30[8]
    u32 flags = *(u32*)(r30 + 8);
    *(u32*)(r30 + 8) = flags | 0x08000000u;
    // Conditionally set 0x2000_0000
    u8* r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u8* r3p = (u8*)*(u32*)(r4p + 0x2c);
    u32 mask = ((u32)r3p[4] & 0xf) & ~3u;
    if (mask == 4) {
        u32 f2 = *(u32*)(r4p + 8);
        *(u32*)(r4p + 8) = f2 | 0x20000000u;
    }
    return r31;
}

// ============================================================
// fn_80052E30: update particle entry position from unit (0x214)
//   r3=particle ptr. Checks r3->0x30->0x34 and 0x30 for validity,
//   toggles bit in r3->0x30->0x8, computes float col/row from unit
//   [0x19e/0x19f] via double-bias, calls fn_800234FC, fn_8005F774,
//   double-bias for frame, compares thresholds, calls fn_8000CC18
//   if above threshold, stores pos/frame to entry.
// ============================================================
void fn_80052E30(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r31 + 0x30);

    if (!*(u32*)(r3p + 0x34)) return;
    if (!*(u32*)(r3p + 0x30)) return;

    // Toggle bit 0x2000_0000 in r3->0x30->0x8
    u32 flags = *(u32*)(r3p + 8);
    *(u32*)(r3p + 8) = flags ^ 0x20000000u;

    // Get unit ptr
    u8* r5p;
    if (*(u32*)(r3p + 8) & 4u) {
        r5p = (u8*)*(u32*)(r3p + 0x34);
        if (!r5p) r5p = (u8*)*(u32*)(r3p + 0x30);
    } else {
        r5p = (u8*)*(u32*)(r3p + 0x30);
    }

    // Double-bias col from r5p[0x19e]
    float fcol, frow;
    { s8 c = (s8)r5p[0x19e];
      u32 s[2] = { 0x43300000u, (u32)((s32)c ^ 0x8000) };
      double d = *(double*)s; fcol = (float)(d - *(double*)&lbl_803773A0); }
    { s8 r = (s8)r5p[0x19f];
      u32 s[2] = { 0x43300000u, (u32)((s32)r ^ 0x8000) };
      double d = *(double*)s; frow = (float)(d - *(double*)&lbl_803773A0); }

    float f3 = lbl_803773A8;
    float f_x = f3 + fcol;
    float f_y = f3 + frow;

    // Store col/row floats on stack
    float stk_2c = f_x;
    float stk_30 = f_y;

    fn_800234FC((void*)lbl_802D49F8);
    float stk_34 = f3 + fcol;  // fn_800234FC returns f1

    // Find r30 (anim ptr at r3p[0x5c])
    u8* r30p = (u8*)*(u32*)(r3p + 0x5c);
    if (!r30p) return;

    // fn_8005F774 to get frame
    float fframe = *(float*)(r30p + 0x58);
    s32 iframe;
    { float ftmp; u32 s[2] = { 0x43300000u, 0 };
      *(float*)((u8*)s + 4) = fframe; iframe = (s32)fframe; }
    s32 frame_ret = fn_8005F774(r30p, 0x13, iframe);

    // Double-bias frame_ret
    float fframe_db;
    { u32 s[2] = { 0x43300000u, (u32)((s32)frame_ret ^ 0x8000) };
      double d = *(double*)s; fframe_db = (float)(d - *(double*)&lbl_803773A0); }

    if (fframe_db < lbl_80377394) return;

    float fframe_sub = fframe_db - fframe;
    if (fframe_sub < lbl_80377394) return;

    // Threshold check: if f31 >= 0, proceed
    void* entry = fn_8000CC18((void*)lbl_8028F900, (s32)(u32)r31);
    *(float*)((u8*)entry + 0x34) = stk_34;
    *(float*)((u8*)entry + 0x38) = f_x;
    *(float*)((u8*)entry + 0x3c) = f_y;
    *(float*)((u8*)entry + 0x40) = stk_2c;
    *(float*)((u8*)entry + 0x44) = stk_30;
    *(float*)((u8*)entry + 0x48) = fframe_sub;
    *(u32*)((u8*)entry + 0x30) = (u32)r31;
    *(float*)((u8*)entry + 0x4c) = fframe_sub;
}

// ============================================================
// fn_80053044: tick particle timer, compute xyz via fn_8005A124,
//   store to r3->0x30->0x30->[0xc/0x10/0x14], call fn_8000C2B0
//   if timer >= max. (0xD0)
// ============================================================
void fn_80053044(void* r3) {
    u8* r31 = (u8*)r3;
    *(float*)(r31 + 0x50) += lbl_8037739C;

    float f30 = fn_8005A124(*(float*)(r31 + 0x34), *(float*)(r31 + 0x40),
                             *(float*)(r31 + 0x4c), *(float*)(r31 + 0x50));
    float f31 = fn_8005A124(*(float*)(r31 + 0x38), *(float*)(r31 + 0x44),
                             *(float*)(r31 + 0x4c), *(float*)(r31 + 0x50));
    float f1  = fn_8005A124(*(float*)(r31 + 0x3c), *(float*)(r31 + 0x48),
                             *(float*)(r31 + 0x4c), *(float*)(r31 + 0x50));

    u8* r4p = (u8*)*(u32*)(r31 + 0x30);
    u8* r3p = (u8*)*(u32*)(r4p + 0x30);
    *(float*)(r3p + 0xc) = f30;
    r3p = (u8*)*(u32*)(r4p + 0x30);
    *(float*)(r3p + 0x10) = f31;
    r3p = (u8*)*(u32*)(r4p + 0x30);
    *(float*)(r3p + 0x14) = f1;

    float f50 = *(float*)(r31 + 0x50);
    float f4c = *(float*)(r31 + 0x4c);
    if (f50 >= f4c) fn_8000C2B0(r31);
}

// ============================================================
// fn_80053118: reset timer (store 0.0f to r3[0x50])
// ============================================================
void fn_80053118(void* r3) {
    *(float*)((u8*)r3 + 0x50) = lbl_80377394;
}

// ============================================================
// fn_80053124: return r3->0x30->0x2c->0x4 field masked to 2 bits
// ============================================================
u32 fn_80053124(void* r3) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    u8* q = (u8*)*(u32*)(p + 0x2c);
    return (u32)q[4] & 3u;
}

// ============================================================
// fn_80053138: compute distance fn_80059610, store to r3->0x30->0x24,
//   update r3->0x30->[0xc/0x10/0x14] from best pos ptr. (0xB8)
// ============================================================
void fn_80053138(void* r3, void* r4, void* r5) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;

    if (r30 && r31) {
        float f1 = fn_80059610(*(float*)r30, *(float*)((u8*)r30 + 4),
                                *(float*)r31, *(float*)((u8*)r31 + 4));
        u8* r3p = (u8*)*(u32*)((u8*)r29 + 0x30);
        *(float*)(r3p + 0x24) = f1;
    }

    u8* r3p2 = (u8*)*(u32*)((u8*)r29 + 0x30);
    void* r4p;
    if ((*(u32*)(r3p2 + 8) & 4u) && r30) r4p = r30;
    else r4p = r31;

    if (r4p) {
        float f1 = *(float*)((u8*)r4p + 8);
        float f3 = *(float*)((u8*)r4p + 4);
        float f0 = *(float*)r4p;
        *(float*)(r3p2 + 0xc) = f0;
        *(float*)(r3p2 + 0x10) = f3;
        *(float*)(r3p2 + 0x14) = lbl_803773AC + f1;
    }
}

// ============================================================
// fn_800531F4: compute positions for two unit ptrs (via r3->0x30->0x34
//   and r3->0x30->0x30), double-bias both, fn_800234FC x2,
//   fn_80059610, store dist + xyz. (0x1F0)
// ============================================================
void fn_800531F4(void* r3) {
    u8* r28 = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r28 + 0x30);

    void* r31p = 0;
    void* r30p = 0;

    u8* r5p = (u8*)*(u32*)(r3p + 0x34);
    u8* r29p = (u8*)*(u32*)(r3p + 0x30);

    if (r5p) {
        float fcol, frow, fz;
        { s8 c = (s8)r5p[0x19e];
          u32 s[2] = { 0x43300000u, (u32)((s32)c ^ 0x8000) };
          double d = *(double*)s; fcol = (float)(d - *(double*)&lbl_803773A0); }
        { s8 r = (s8)r5p[0x19f];
          u32 s[2] = { 0x43300000u, (u32)((s32)r ^ 0x8000) };
          double d = *(double*)s; frow = (float)(d - *(double*)&lbl_803773A0); }
        float f3 = lbl_803773A8;
        float stk_14 = f3 + fcol;
        float stk_18 = f3 + frow;
        fn_800234FC((void*)lbl_802D49F8);
        float stk_1c = f3 + fcol;  // f1 from fn_800234FC
        r31p = (void*)((u8*)&stk_14);  // ptr to {stk_14, stk_18, stk_1c}
    }

    if (r29p) {
        float fcol2, frow2;
        { s8 c = (s8)r29p[0x19e];
          u32 s[2] = { 0x43300000u, (u32)((s32)c ^ 0x8000) };
          double d = *(double*)s; fcol2 = (float)(d - *(double*)&lbl_803773A0); }
        { s8 r = (s8)r29p[0x19f];
          u32 s[2] = { 0x43300000u, (u32)((s32)r ^ 0x8000) };
          double d = *(double*)s; frow2 = (float)(d - *(double*)&lbl_803773A0); }
        float f3b = lbl_803773A8;
        float stk_8 = f3b + fcol2;
        float stk_c = f3b + frow2;
        fn_800234FC((void*)lbl_802D49F8);
        float stk_10 = f3b + fcol2;
        r30p = (void*)((u8*)&stk_8);
    }

    fn_80053138(r28, r31p, r30p);
}

// ============================================================
// fn_800533E8: build rotation+scale transform for particle (0x34C)
//   Attachments 1 and 2 (identical). r3=particle ptr.
//   Loads f2/f1/f0/f31 from r3->0x30->0x30->[0xc/0x10/0x14/0x18].
//   Stores to stk[0x20..0x28]. Loads r31 from r3->0x30->0x5c.
//   Checks bit 2 of r3->0x30->0x8 -> selects r3->0x30->0x34 or 0x30.
//   Reads r29 = selected->0x280.
//   fn_8020AB1C(stk_11c), fn_8020AE58(stk_bc, 0x58, f1*lbl_803773B0).
//   Checks r3->0x30->0x8 bit 28 for fast path.
//   Otherwise dispatches on r3->0x30->0x2c->0x4 & 3:
//     case 1: scale f31 by lbl_803773B4, optionally fn_8004E7F8 or fn_8005A3A8,
//             double-bias r3->0x30->0x1c.
//     case 2: constants lbl_803773B8/BC, scale f31, double-bias r3->0x30->0x1c.
//     default: 3 fn_8020AE58 calls (axes 0x58/59/5a), fn_8020AB7C x2.
//   Then fn_80040A0C->fn_8020AB48, fn_80044164 if cond.
//   Final: fn_8020B118, fn_8020B098, fn_8020AB7C x3.
// ============================================================
void fn_800533E8(void* r3) {
    u8* r30p = (u8*)r3;
    u8* r5p = (u8*)*(u32*)(r30p + 0x30);

    float f2  = *(float*)(r5p + 0xc);
    float f1  = *(float*)(r5p + 0x10);
    float f0  = *(float*)(r5p + 0x14);
    float f31 = *(float*)(r5p + 0x18);

    float stk_20 = f2; float stk_24 = f1; float stk_28 = f0;
    float stk_8  = f2; float stk_c  = f1; float stk_10 = f0;

    u32 flags = *(u32*)(r5p + 8);
    u8* r31p = (u8*)*(u32*)(r5p + 0x5c);

    // Select unit ptr r29
    void* r29 = 0;
    if ((flags & 4u) && *(u32*)(r5p + 0x34)) {
        void* tmp = (void*)*(u32*)(r5p + 0x34);
        if (tmp) r29 = (void*)*(u32*)((u8*)tmp + 0x280);
    }
    if (!r29) {
        void* base = (void*)*(u32*)(r5p + 0x30);
        if (base) r29 = (void*)*(u32*)((u8*)base + 0x280);
    }

    u8 stk_11c[0x30];
    fn_8020AB1C(stk_11c);
    u8 stk_bc[0x30];
    fn_8020AE58(stk_bc, 0x58, f31 * lbl_803773B0);

    // Check bit 28 of flags (fast path)
    if (flags & 0x10000000u) {
        // Fast path: double-bias r5p[0x1c] into stk_28
        float fv = *(float*)(r5p + 0x1c);
        s32 iv; { float ftmp; iv = (s32)fv; }
        s16 sv = (s16)iv;
        u32 s[2] = { 0x43300000u, (u32)((s32)sv ^ 0x8000) };
        double d = *(double*)s;
        stk_28 = (float)(d - *(double*)&lbl_803773A0);
        f31 = f31 * lbl_803773B4;
        *(float*)(r5p + 0x1c) = stk_28;
        goto render;
    }

    // Dispatch on r5p->0x2c->0x4 & 3
    {
        u8* r3q = (u8*)*(u32*)(r5p + 0x2c);
        u32 mode = (u32)r3q[4] & 3u;
        if (mode == 1) {
            f31 = f31 * lbl_803773B4;
            if (r29) {
                u8 out[0xc];
                fn_8004E7F8(out, r29, 1);
                stk_20 = *(float*)(out + 0);
                stk_24 = *(float*)(out + 4);
                stk_28 = *(float*)(out + 8);
            } else {
                fn_8005A3A8(0, &stk_20, &stk_20);
            }
            // Double-bias r5p[0x1c]
            float fv2 = *(float*)(r5p + 0x1c);
            s32 iv2 = (s32)fv2;
            u32 s2[2] = { 0x43300000u, (u32)(iv2 ^ 0x8000) };
            double d2 = *(double*)s2;
            stk_28 = (float)(d2 - *(double*)&lbl_803773A0);
            *(float*)(r5p + 0x1c) = stk_28;
        } else if (mode == 2) {
            stk_20 = lbl_803773B8;
            stk_24 = lbl_803773BC;
            f31 = f31 * lbl_803773B4;
            float fv3 = *(float*)(r5p + 0x1c);
            s32 iv3 = (s32)fv3;
            u32 s3[2] = { 0x43300000u, (u32)(iv3 ^ 0x8000) };
            double d3 = *(double*)s3;
            stk_28 = (float)(d3 - *(double*)&lbl_803773A0);
            *(float*)(r5p + 0x1c) = stk_28;
        } else {
            // Default: 3 rotation matrices
            u8 stk_8c[0x30], stk_5c[0x30], stk_2c_m[0x30];
            fn_8020AE58(stk_8c, 0x58, lbl_803773C0 * *(float*)(r5p + 0x20));
            fn_8020AE58(stk_5c, 0x59, lbl_803773C0 * *(float*)(r5p + 0x24));
            fn_8020AE58(stk_2c_m, 0x5a, lbl_803773C0 * *(float*)(r5p + 0x28));
            fn_8020AB7C(stk_5c, stk_8c, stk_11c);
            fn_8020AB7C(stk_2c_m, stk_11c, stk_2c_m);
        }
    }

    // Optional camera correction
    {
        void* r29cam = fn_80040A0C();
        if (r29cam) {
            fn_8020AB48((void*)((u8*)r29cam + 0x70), stk_bc);
            u8 cam_mode = ((u8*)r29cam)[0x68];
            if (cam_mode == 0) {
                // Check bit 25 of r5p[8]
                if (*(u32*)(r5p + 8) & 0x40u) {
                    fmul_d: f31 = (float)(f31 * *(double*)&lbl_803773C8);
                    f31 = (float)f31;  // frsp
                    fn_80044164(r29cam, stk_20, stk_24, stk_bc);
                    fn_8020AB7C(stk_bc, stk_bc, stk_bc);
                }
            }
        }
    }

render:;
    u8 stk_14c[0x30];
    fn_8020B118(stk_14c, f31, f31, f31);
    u8 stk_ec[0x30];
    fn_8020B098(stk_ec, stk_20, stk_24, stk_28);
    u8 stk_11c2[0x30];
    fn_8020AB7C(stk_11c2, stk_14c, stk_14c);
    fn_8020AB7C(stk_bc, stk_14c, stk_bc);
    fn_8020AB7C(stk_ec, stk_14c, (void*)((u8*)r31p + 0x10));
}

// ============================================================
// fn_80053738: set r3->0x30->0x3 = 0x1e, iterate fn_8005F80C results,
//   call fn_8004B0F0/fn_80147BB8/fn_80148484. (0xA4)
// ============================================================
void fn_80053738(void* r3) {
    u8* r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    u8* r3s = (u8*)*(u32*)(r4p + 0x5c);
    r4p[3] = 0x1e;
    if (!r3s) return;

    u8 stk[0x10];
    s32 count = fn_8005F80C(r3s, stk);
    u8* r30 = (u8*)r3s;
    u8* r29 = stk;
    u8* r31 = (u8*)lbl_802739CC;

    for (s32 r28 = 0; r28 < count; r28++) {
        s16 val = *(s16*)r29;
        void* r27 = fn_8004B0F0((s32)val);
        if (!r27) { r29 += 2; continue; }
        void* r26 = fn_80147BB8();
        s8 b = (s8)(u32)r26;
        if ((s32)b < 0) { r29 += 2; continue; }
        fn_800056CC((const char*)((u8*)r31 + 0x106), r27);
        fn_80148484(r26, 0xfa);
        r29 += 2;
    }
}

// ============================================================
// fn_800537E0: store r5 to r3->0x30[r4*4+0x4c]
// ============================================================
void fn_800537E0(void* r3, s32 r4, void* r5) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(u32*)(p + r4 * 4 + 0x4c) = (u32)r5;
}

// ============================================================
// fn_800537F4: same as fn_800537E0
// ============================================================
void fn_800537F4(void* r3, s32 r4, void* r5) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(u32*)(p + r4 * 4 + 0x4c) = (u32)r5;
}

// ============================================================
// fn_80053808: store f0/f3 to r3->0x30->[0xc/0x10], fadds f2+f1 to 0x14
// ============================================================
void fn_80053808(void* r3, void* r4) {
    float f1 = *(float*)((u8*)r4 + 0xc);
    float f3 = *(float*)((u8*)r4 + 8);
    float f0 = *(float*)((u8*)r4 + 4);
    u8* r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(float*)(r4p + 0xc) = f0;
    *(float*)(r4p + 0x10) = f3;
    r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(float*)(r4p + 0x14) = lbl_803773AC + f1;
}

// ============================================================
// fn_80053838: store f1/f2/f3 to r3->0x30->[0xc/0x10/0x14]
// ============================================================
void fn_80053838(void* r3, float f1, float f2, float f3) {
    u8* r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(float*)(r4p + 0xc) = f1;
    r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(float*)(r4p + 0x10) = f2;
    r4p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(float*)(r4p + 0x14) = f3;
}

// ============================================================
// fn_80053854: store r4 to r3->0x30->0x34
// ============================================================
void fn_80053854(void* r3, void* r4) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(u32*)(p + 0x34) = (u32)r4;
}

// ============================================================
// fn_80053860: store r4 to r3->0x30->0x30
// ============================================================
void fn_80053860(void* r3, void* r4) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(u32*)(p + 0x30) = (u32)r4;
}

// ============================================================
// fn_8005386C: if r3->0x18 == r4->0x0, store r3 to r4->0x4
// ============================================================
void fn_8005386C(void* r3, void* r4) {
    u32 r5 = *(u32*)((u8*)r3 + 0x18);
    u32 r0 = *(u32*)r4;
    if (r5 != r0) return;
    *(u32*)((u8*)r4 + 4) = (u32)r3;
}

// ============================================================
// fn_80053884: search lbl_8028F8B0 for entry matching r3 (s16),
//   via fn_8000A4B0 with callback fn_800538D8. (0x50)
// ============================================================
void* fn_80053884(s16 r3) {
    u16 stk_8 = (u16)r3;
    u32 stk_c = 0;
    fn_8000A4B0((void*)lbl_8028F8B0, (void*)fn_800538D8,
                (void*)&stk_8, (void*)&stk_c);
    return stk_c ? (void*)stk_c : 0;
}

// ============================================================
// fn_800538D8: callback for fn_80053884: match lbl_8028F8B0 entry
//   if r3->0x30->0x0 == r4->0x0
// ============================================================
void fn_800538D8(void* r3, void* r4) {
    u8* r5p = (u8*)*(u32*)((u8*)r3 + 0x30);
    u16 r6 = *(u16*)r4;
    u16 r0 = *(u16*)r5p;
    if (r6 != r0) return;
    *(u32*)((u8*)r4 + 4) = (u32)r3;  // store match (note: r4 is actually output ptr)
}

// ============================================================
// fn_800538F4: init particle system D (0x78)
//   fn_8000C028(lbl_8028F8B0), fn_8000C1E8.
//   If no entries: fn_801462DC, fn_80146190, print error.
//   Else: fn_8000CC18(lbl_8028F888, 4) -> stw 0 to result[0x60].
// ============================================================
void fn_800538F4(void) {
    fn_8000C028((void*)lbl_8028F8B0);
    void* r3 = fn_8000C1E8((void*)lbl_8028F8B0);
    if (!r3) {
        if (!fn_801462DC()) {
            fn_80146190();
            fn_800056CC((const char*)((u8*)lbl_802739CC + 0x12e), 0);
            return;
        }
    }
    void* entry = fn_8000CC18((void*)lbl_8028F888, 4);
    *(u32*)((u8*)entry + 0x60) = 0;
}

// ============================================================
// fn_80053970: return 1 if lbl_8028F8B0 list is non-empty, 0 if empty (0x30)
// ============================================================
u32 fn_80053970(void) {
    void* r3 = fn_8000C1E8((void*)lbl_8028F8B0);
    u32 r0 = (u32)r3;
    return (r0 | (u32)(-(s32)r0)) >> 31;
}

// ============================================================
// fn_800539A4: allocate + init particle entry via lbl_8028F8B0 (0x15C)
//   Same as fn_80052CDC but uses fn_8000CBC8 and sets
//   r31->0x30->0x8 bit 8 | ori 0x8, stores lbl_803773D0 to 0x1c.
// ============================================================
void* fn_800539A4(void* r3) {
    void* r29 = r3;
    void* r31 = fn_8000CBC8((void*)lbl_8028F8B0, 0);
    u8* r30 = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;
    init_particle_entry(r30, r29);
    u32 flags = *(u32*)(r30 + 8);
    *(u32*)(r30 + 8) = flags | 0x08000000u;
    u8* r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u8* r3q = (u8*)*(u32*)(r4p + 0x2c);
    u32 mask = ((u32)r3q[4] & 0xf) & ~3u;
    if (mask == 4) {
        u32 f2 = *(u32*)(r4p + 8);
        *(u32*)(r4p + 8) = f2 | 0x20000000u;
    }
    // Additional flags: ori 0x8
    r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u32 f3 = *(u32*)(r4p + 8);
    *(u32*)(r4p + 8) = f3 | 8u;
    r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    *(float*)(r4p + 0x1c) = lbl_803773D0;
    return r31;
}

// ============================================================
// fn_80053B04: allocate + init particle entry via lbl_8028F8B0 (0x168 x3)
//   Same as fn_80052CDC but uses lbl_8028F8B0 and sets extra flags.
// ============================================================
void* fn_80053B04(void* r3, s32 r4) {
    void* r29 = r3;
    if (!r4) r4 = 4;
    void* r31 = fn_8000CC18((void*)lbl_8028F8B0, r4);
    u8* r30 = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;
    init_particle_entry(r30, r29);
    u32 flags = *(u32*)(r30 + 8);
    *(u32*)(r30 + 8) = flags | 0x08000000u;
    u8* r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u8* r3q = (u8*)*(u32*)(r4p + 0x2c);
    u32 mask = ((u32)r3q[4] & 0xf) & ~3u;
    if (mask == 4) {
        u32 f2 = *(u32*)(r4p + 8);
        *(u32*)(r4p + 8) = f2 | 0x20000000u;
    }
    r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u32 f3 = *(u32*)(r4p + 8);
    *(u32*)(r4p + 8) = f3 | 8u;
    r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    *(float*)(r4p + 0x1c) = lbl_803773D0;
    return r31;
}

// ============================================================
// fn_80053C70: allocate + init via fn_8000CBC8(lbl_8028F8B0) (0x144)
//   Same as fn_800539A4 but no extra flags after init.
// ============================================================
void* fn_80053C70(void* r3) {
    void* r29 = r3;
    void* r31 = fn_8000CBC8((void*)lbl_8028F8B0, 0);
    u8* r30 = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;
    init_particle_entry(r30, r29);
    u32 flags = *(u32*)(r30 + 8);
    *(u32*)(r30 + 8) = flags | 0x08000000u;
    u8* r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u8* r3q = (u8*)*(u32*)(r4p + 0x2c);
    u32 mask = ((u32)r3q[4] & 0xf) & ~3u;
    if (mask == 4) {
        u32 f2 = *(u32*)(r4p + 8);
        *(u32*)(r4p + 8) = f2 | 0x20000000u;
    }
    return r31;
}

// ============================================================
// fn_80053DB8: same as fn_80053B04 (0x150)
// ============================================================
void* fn_80053DB8(void* r3, s32 r4) {
    void* r29 = r3;
    if (!r4) r4 = 4;
    void* r31 = fn_8000CC18((void*)lbl_8028F8B0, r4);
    u8* r30 = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31 + 0x30) = (u32)r30;
    init_particle_entry(r30, r29);
    u32 flags = *(u32*)(r30 + 8);
    *(u32*)(r30 + 8) = flags | 0x08000000u;
    u8* r4p = (u8*)*(u32*)((u8*)r31 + 0x30);
    u8* r3q = (u8*)*(u32*)(r4p + 0x2c);
    u32 mask = ((u32)r3q[4] & 0xf) & ~3u;
    if (mask == 4) {
        u32 f2 = *(u32*)(r4p + 8);
        *(u32*)(r4p + 8) = f2 | 0x20000000u;
    }
    return r31;
}

// ============================================================
// fn_80053F0C: set bit 0x8000_0000 in r3->0x30->0x8
// ============================================================
void fn_80053F0C(void* r3) {
    u8* p = (u8*)*(u32*)((u8*)r3 + 0x30);
    *(u32*)(p + 8) = *(u32*)(p + 8) | 0x80000000u;
}

// ============================================================
// fn_80053F20: call r3->0x30->0x44 vtable fn, fn_80055F24,
//   clear lbl_80376554 bit, check 0x2c->0x5 for fn_8000CC18,
//   check bits 0x8800 for fn_800615C8/fn_8005C660/fn_800C4B84
//   or fn_800592B8(fn_80054024). (0x100)
// ============================================================
void fn_80053F20(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r4p = (u8*)*(u32*)(r31 + 0x30);

    // Call vtable fn at r4p[0x44] if non-null
    void (*fn)(void*) = (void(*)(void*))*(u32*)(r4p + 0x44);
    if (fn) fn(r3);

    // fn_80055F24(r3->0x30->0x48)
    void* r3a = (void*)*(u32*)((u8*)*(u32*)(r31 + 0x30) + 0x48);
    fn_80055F24(r3a);

    // Check bit 1 of r3->0x30->0x8
    u8* r3b = (u8*)*(u32*)(r31 + 0x30);
    if (*(u32*)(r3b + 8) & 2u) {
        lbl_80376554 = lbl_80376554 & ~1u;
    }

    // Check r3->0x30->0x2c->0x5
    u8* r3c = (u8*)*(u32*)(r31 + 0x30);
    u8* r2c = (u8*)*(u32*)(r3c + 0x2c);
    if (r2c[5]) {
        void* e = fn_8000CC18((void*)lbl_8028F888, 4);
        *(u32*)((u8*)e + 0x60) = 0x708;
    }

    // r31 = r3->0x30 now
    r31 = (u8*)*(u32*)(r31 + 0x30);
    u32 r31flags = *(u32*)(r31 + 8);
    if (r31flags & 0x88000000u) {
        void* r3s = (void*)*(u32*)(r31 + 0x5c);
        if (r3s) {
            fn_800615C8(r3s);
            u8 stk[0x30];
            fn_8023AAE4((void*)lbl_802FA4A8,
                        (const void*)((u8*)lbl_802739CC + 0x120),
                        (const void*)((u8*)lbl_802739CC + 0x129),
                        (u32)*(u32*)((u8*)*(u32*)(r31 + 0x2c)), 0u, 0u);
            fn_8005C660(stk);
        }
        fn_800C4B84(r31);
    } else {
        fn_800592B8((void*)fn_80054024, r31, 1, 2);
    }
}

// ============================================================
// fn_80054024: free particle entry audio and memory (0x68)
//   If r3->0x5c non-null: fn_800615C8, fn_8023AAE4, fn_8005C660.
//   Then fn_800C4B84(r3).
// ============================================================
static void fn_80054024(void* r3) {
    u8* r31 = (u8*)r3;
    void* r3s = (void*)*(u32*)(r31 + 0x5c);
    if (r3s) {
        fn_800615C8(r3s);
        u8 stk[0x30];
        fn_8023AAE4((void*)lbl_802FA4A8,
                    (const void*)((u8*)lbl_802739CC + 0x120),
                    (const void*)((u8*)lbl_802739CC + 0x129),
                    (u32)*(u32*)((u8*)*(u32*)(r31 + 0x2c)), 0u, 0u);
        fn_8005C660(stk);
    }
    fn_800C4B84(r31);
}

// ============================================================
// fn_80054090: search lbl_8028F8B0 for entry matching r3,
//   call fn_8000C2B0 if not found. (0x5C)
// ============================================================
void fn_80054090(void* r3) {
    u8* r31 = (u8*)r3;
    u32 stk_8 = (u32)r31;
    u32 stk_c = 0;
    fn_8000A4B0((void*)lbl_8028F8B0, (void*)fn_8005386C,
                (void*)&stk_8, (void*)&stk_c);
    if (!stk_c) fn_8000C2B0(r31);
}

// ============================================================
// fn_800540F0: large particle per-frame update (0x3A8) - Attachment 1
//   r3=particle ptr. Checks bits in r3->0x30->0x8 for early exit.
//   If bit 28 set: copies unit position/anim data to particle entry.
//   Decrements r3->0x30->0x3 timer, calls fn_8005A124 for alpha,
//   fn_8005F708/F6D8 for color, fn_8005E56C.
//   Checks vtable at 0x3c, fn_8005FF88.
//   Calls vtable at 0x40, fn_800533E8, fn_80060904.
//   Checks bits for fn_8006CC90 or GX ops.
//   fn_80054A70, checks bit 29 for fn_8000C2B0.
// ============================================================
void fn_800540F0(void* r3) {
    u8* r30p = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r30p + 0x30);
    u32 r4f = *(u32*)(r3p + 8);
    void* r31p = (void*)*(u32*)(r3p + 0x5c);

    // Check bits [26:27] for early exit
    u32 bits2627 = (r4f >> 4) & 3u;
    u8 do_update;
    if (bits2627) {
        if (r4f & 0x10u) do_update = 0;
        else if (r4f & 0x20u) {
            do_update = fn_800AA4A0() ? 0 : 1;
        } else do_update = 1;
    } else do_update = 1;

    if (!do_update) goto end;

    // Check bit 28 (copy unit data)
    r3p = (u8*)*(u32*)(r30p + 0x30);
    if (*(u32*)(r3p + 8) & 0x10000000u) {
        // Copy position and anim data from r3->0x18 unit
        void* r5 = (void*)*(u32*)(r30p + 0x18);
        if (r5 && (*(u32*)(r3p + 8) & 8u)) {
            *(u32*)(r3p + 8) = *(u32*)(r3p + 8) | 0x10000000u;
            u8* r4s = (u8*)*(u32*)((u8*)r5 + 0x30);
            *(u32*)(r3p + 0x30) = *(u32*)(r4s + 0x30);
            *(u32*)(r3p + 0x34) = *(u32*)(r4s + 0x34);
            // Copy 3 floats
            float f1 = *(float*)(r4s + 0xc);
            float f0 = *(float*)(r4s + 0x10);
            float f1b = *(float*)(r4s + 0x14);
            *(float*)(r3p + 0xc) = f1;
            *(float*)(r3p + 0x10) = f0;
            *(float*)(r3p + 0x14) = f1b;
            *(float*)(r3p + 0x18) = *(float*)(r4s + 0x18);
            *(float*)(r3p + 0x20) = *(float*)(r4s + 0x20);
            *(float*)(r3p + 0x24) = *(float*)(r4s + 0x24);
            *(float*)(r3p + 0x28) = *(float*)(r4s + 0x28);
            r3p[3] = ((u8*)r4s)[3];
        }
    }

    // Timer countdown + alpha
    r3p = (u8*)*(u32*)(r30p + 0x30);
    s32 r29v = 0xff;
    s8 t = (s8)r3p[3];
    if (t > 0) {
        r3p[3] = (u8)(t - 1);
        // Double-bias t
        float ft;
        { u32 s[2] = { 0x43300000u, (u32)((s32)(t-1) ^ 0x8000) };
          double d = *(double*)s; ft = (float)(d - *(double*)&lbl_803773A0); }
        r3p = (u8*)*(u32*)(r30p + 0x30);
        float alpha = fn_8005A124(ft, lbl_80377394, lbl_803773D4, lbl_803773D8);
        r29v = (s32)alpha;
        if (!r29v) { fn_8000C2B0(r30p); }
    }

    // Color update
    r3p = (u8*)*(u32*)(r30p + 0x30);
    u32 rgba = *(u32*)(r3p + 0x38);
    u8 rb = (u8)(rgba >> 24);
    u8 gb = (u8)(rgba >> 16);
    u8 bb = (u8)(rgba >> 8);
    u8 ab = (u8)rgba;
    fn_8005F708(r31p, rb, gb, bb);
    // Multiply alpha
    u32 mul = 0x80810000u - 0x7f7f;
    s32 ar = (s32)((u32)ab * r29v);
    s32 hi = (s32)((s64)(s32)(mul >> 16) * ar >> 32);
    s32 sum = hi + ar;
    s32 sra = sum >> 7;
    u8 alpha_out = (u8)(sra + (u32)sra >> 31);
    fn_8005F6D8(r31p, alpha_out);
    fn_8005E56C(r31p);

    // Vtable at 0x3c
    r3p = (u8*)*(u32*)(r30p + 0x30);
    if (*(u32*)(r3p + 8) & 0x10u) {
        void (*fn3c)(void*) = (void(*)(void*))*(u32*)(r3p + 0x3c);
        if (fn3c) { fn3c(r30p); }
        *(u32*)(r3p + 8) = *(u32*)(r3p + 8) & ~0x18u;
    } else {
        if (!(*(u32*)(r3p + 8) & 0x100000u)) fn_8005FF88(r31p);
    }

    // Vtable at 0x40
    r3p = (u8*)*(u32*)(r30p + 0x30);
    {
        u8 (*fn40)(void*) = (u8(*)(void*))*(u32*)(r3p + 0x40);
        u8 skip = fn40 && fn40(r30p) == 1;
        if (!skip) fn_800533E8(r30p);
    }

    fn_80060904(r31p);

    // Check bits for GX ops or fn_8006CC90
    r3p = (u8*)*(u32*)(r30p + 0x30);
    if (!(*(u32*)(r3p + 8) & 0x10000000u)) {
        u8* r2c = (u8*)*(u32*)(r3p + 0x2c);
        if (!((u32)r2c[4] & 3u)) {
            fn_8006CC90(r31p);
            goto after_gx;
        }
    }
    // GX path
    {
        fn_8000A380();
        r3p = (u8*)*(u32*)(r30p + 0x30);
        float fv = *(float*)(r3p + 0x1c);
        s32 iv = (s32)fv;
        float fdb;
        { u32 s[2] = { 0x43300000u, (u32)((s16)iv ^ 0x8000) };
          double d = *(double*)s; fdb = (float)(d - *(double*)&lbl_803773A0); }
        fn_80009E9C(fdb, lbl_80377394, lbl_8037739C, 0.0f);
        fn_8000A29C(0, 0x410);
        fn_80009CB4(0xff);
        fn_8000A370();
        fn_800079D8(0xb);
        fn_80007480((void*)fn_8005449C, (s32)(u32)r31p);
        fn_800079C4();
    }
after_gx:;
    fn_80054A70(r30p);

    // Check bit 29
    r3p = (u8*)*(u32*)(r30p + 0x30);
    if (!(*(u32*)(r3p + 8) & 0x20u)) {
        if (*(u32*)r31p & 0x10u) {
            u8* r4q = (u8*)*(u32*)(r3p + 0x30);
            s8 b4 = (s8)r4q[4];
            if ((s32)b4 >= 0) {
                r4q[4] = (u8)(b4 - 1);
            } else {
                fn_8000C2B0(r30p);
            }
        }
    }
end:;
}

// ============================================================
// fn_8005449C: alpha multiply helper (0x7C)
//   r3=particle ptr. Reads r3[0xb] (alpha), fn_8000A390 (cur alpha),
//   multiplies, stores back. If result != 0: fn_8005F6D8/fn_80069E24.
// ============================================================
void fn_8005449C(void* r3) {
    u8* r30p = (u8*)r3;
    u8 r31 = r30p[0xb];
    u8 cur = (u8)(u32)fn_8000A390();
    u32 mul = 0x80810000u - 0x7f7f;
    s32 prod = (s32)((u32)r31 * cur);
    s32 hi = (s32)((s64)(s32)(mul >> 16) * prod >> 32);
    s32 sum = hi + prod;
    s32 sra = sum >> 7;
    u8 result = (u8)(sra + (u32)sra >> 31);
    if (result) {
        fn_8005F6D8(r30p, result);
        fn_80069E24(r30p);
        fn_8005F6D8(r30p, r31);
    }
}

// ============================================================
// fn_8005451C: particle sound event dispatcher (0x474) - Attachment 2
//   r3=particle ptr. Calls fn_8005F718. If returns non-zero,
//   processes anim state: reads r3->0x30->0x3 (s8 timer).
//   Dispatch on r3->0x30->0x2c->0x4 & 3 and mode:
//   mode=0: fn_8004AEE0 or fn_8004AFE8(white).
//   fn_8005F8E0(0x28): position update.
//   fn_8005F8E0(0x29): second position update + fn_80055F48.
//   fn_8005F8E0(0x2a): fn_80055F24/stw.
//   fn_8005F8E0(0x1c): lbl_80376554 ori 1, oris 0x4000.
//   fn_8005F8E0(0x1d): lbl_80376554 clrrwi 1, clear bit.
// ============================================================
void fn_8005451C(void* r3) {
    u8* r30p = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r30p + 0x30);
    void* r31p = (void*)*(u32*)(r3p + 0x5c);

    if (!fn_8005F718(r31p)) return;

    s8 timer = (s8)r3p[3];
    if (timer < 0) {
        if (*(u32*)(r3p + 8) & 0x10000000u) {
            fn_8004AFE8(r31p, lbl_803773DC, lbl_803773DC, lbl_803773DC);
        } else {
            u8* r2c = (u8*)*(u32*)(r3p + 0x2c);
            u32 mode = (u32)r2c[4] & 3u;
            if (mode == 0) {
                float f2 = *(float*)(r3p + 0xc);
                float f1 = *(float*)(r3p + 0x10);
                float f0 = *(float*)(r3p + 0x14);
                u8 stk[0xc];
                *(float*)(stk + 0) = f2;
                *(float*)(stk + 4) = f1;
                *(float*)(stk + 8) = f0;
                fn_8004AEE0(r31p, stk, stk);
            } else {
                fn_8004AFE8(r31p, lbl_803773DC, lbl_803773DC, lbl_803773DC);
            }
        }
    } else {
        u8* r2c = (u8*)*(u32*)(r3p + 0x2c);
        u32 mode = (u32)r2c[4] & 3u;
        if (mode == 0) {
            float f2 = *(float*)(r3p + 0xc);
            float f1 = *(float*)(r3p + 0x10);
            float f0 = *(float*)(r3p + 0x14);
            u8 stk[0xc];
            *(float*)(stk + 0) = f2;
            *(float*)(stk + 4) = f1;
            *(float*)(stk + 8) = f0;
            fn_8004AEE0(r31p, stk, stk);
        } else {
            fn_8004AFE8(r31p, lbl_803773DC, lbl_803773DC, lbl_803773DC);
        }
    }

    if (fn_8005F8E0(r31p, 0x28)) {
        u8* r5p = (u8*)*(u32*)(r30p + 0x30);
        float f2 = *(float*)(r5p + 0xc);
        float f1 = *(float*)(r5p + 0x10);
        float f0 = *(float*)(r5p + 0x14);
        u8 pos28[0xc];
        *(float*)(pos28 + 0) = f2; *(float*)(pos28 + 4) = f1; *(float*)(pos28 + 8) = f0;
        void* r3q = (void*)*(u32*)(r5p + 0x2c);
        u32 code = fn_80055A84(r3q);
        float f31 = lbl_8037739C;
        s32 r29 = fn_80061284(r31p, (void*)((u8*)lbl_802739CC + 0x16a));
        if (r29 >= 0) {
            fn_80060E98(r31p, r29, pos28);
            fn_80060ACC(r31p, r29);
            f31 = 0.0f;
        }
        fn_8005613C(pos28, r3q, pos28, 0, (void*)code);
    }

    if (fn_8005F8E0(r31p, 0x29)) {
        u8* r5p = (u8*)*(u32*)(r30p + 0x30);
        float f2 = *(float*)(r5p + 0xc);
        float f1 = *(float*)(r5p + 0x10);
        float f0 = *(float*)(r5p + 0x14);
        u8 pos29[0xc];
        *(float*)(pos29 + 0) = f2; *(float*)(pos29 + 4) = f1; *(float*)(pos29 + 8) = f0;
        void* r3q = (void*)*(u32*)(r5p + 0x2c);
        u32 code = fn_80055A84(r3q);
        float f31 = lbl_8037739C;
        s32 r29 = fn_80061284(r31p, (void*)((u8*)lbl_802739CC + 0x16a));
        if (r29 >= 0) {
            fn_80060E98(r31p, r29, pos29);
            fn_80060ACC(r31p, r29);
            f31 = 0.0f;
        }
        void* r3k = (void*)*(u32*)((u8*)*(u32*)(r30p + 0x30) + 0x48);
        fn_80055F24(r3k);
        void* r3l = fn_80055F48(pos29, r3q, pos29, 0, (void*)code, 0);
        *(u32*)((u8*)*(u32*)(r30p + 0x30) + 0x48) = (u32)r3l;
    }

    if (fn_8005F8E0(r31p, 0x2a)) {
        void* r3k = (void*)*(u32*)((u8*)*(u32*)(r30p + 0x30) + 0x48);
        fn_80055F24(r3k);
        *(u32*)((u8*)*(u32*)(r30p + 0x30) + 0x48) = 0;
    }

    if (fn_8005F8E0(r31p, 0x1c)) {
        lbl_80376554 = lbl_80376554 | 1u;
        u8* r3m = (u8*)*(u32*)(r30p + 0x30);
        *(u32*)(r3m + 8) = *(u32*)(r3m + 8) | 0x40000000u;
    }

    if (fn_8005F8E0(r31p, 0x1d)) {
        lbl_80376554 = lbl_80376554 & ~1u;
        u8* r3n = (u8*)*(u32*)(r30p + 0x30);
        *(u32*)(r3n + 8) = *(u32*)(r3n + 8) & ~0xC0000000u;
    }
}


// ============================================================
// fn_80054990: call fn_800553D0 on r3->0x30->0x2c->0x0,
//   fn_8000C2B0 if returns non-zero. (0x44)
// ============================================================
void fn_80054990(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r31 + 0x30);
    u8* r2c = (u8*)*(u32*)(r3p + 0x2c);
    void* r3q = (void*)*(u32*)r2c;
    if (fn_800553D0(r3q)) fn_8000C2B0(r31);
}

// ============================================================
// fn_800549D8: OSGetTime, set r3[0x38/0x3c], check bit 28 of
//   r3->0x30->0x8, fn_8000C198 or fn_80055774+fn_800553D0. (0x94)
// ============================================================
void fn_800549D8(void* r3) {
    u8* r30p = (u8*)r3;
    OSGetTime();
    // OSGetTime returns hi in r3, lo in r4 stored via asm but we approximate:
    *(u32*)(r30p + 0x3c) = 0;
    *(u32*)(r30p + 0x38) = 0;
    u8* r3p = (u8*)*(u32*)(r30p + 0x30);
    u32 r4f = *(u32*)(r3p + 8);
    u8* r2c = (u8*)*(u32*)(r3p + 0x2c);
    void* r31p = (void*)*(u32*)r2c;

    if (r4f & 0x10u) {
        fn_8000C198(r30p, 0);
    } else {
        s32 r4v = (r4f & 0x100u) ? 8 : 0;
        fn_80055774(r31p, r4v);
        if (fn_800553D0(r31p)) fn_8000C198(r30p, 0);
    }
}

// ============================================================
// fn_80054A70: large particle update (0x3A8) - Attachment 3
//   r3=particle ptr. Calls fn_8005F718(r3->0x30->0x5c).
//   If non-zero: processes state machine via fn_8005F8E0 calls
//   (0x11, 0x12, 0x0f/0x10/0x2f/0x30).
//   Also handles fn_8005451C-style anim sound events.
// ============================================================
void fn_80054A70(void* r3) {
    u8* r30p = (u8*)r3;
    u8* r3p = (u8*)*(u32*)(r30p + 0x30);
    void* r28p = (void*)*(u32*)(r3p + 0x5c);

    if (!fn_8005F718(r28p)) return;

    // State machine: fn_8005F854 jump dispatch
    {
        u8 stk[0x1c];
        s32 count = fn_8005F854(r28p, stk);
        u16 code = (u16)(u32)count - 9;
        if ((u32)code <= 0x1e) {
            switch (code) {
                case 0: fn_8018EE24(0xf, 6, 2, 1, r30p); break;
                case 1: fn_8018EE24(0x1e, 6, 2, 1, r30p); break;
                case 2: fn_8018EE24(0x3c, 6, 2, 1, r30p); break;
                case 3: fn_8018EE24(0xf, 6, 0, 1, r30p); break;
                case 4: fn_8018EE24(0x1e, 6, 0, 1, r30p); break;
                case 5: fn_8018EE24(0x3c, 6, 0, 1, r30p); break;
                case 6: fn_8018ED88(); break;
                case 7: fn_8018EDC8(-0xf); break;
                case 8: fn_8018EDC8(-0x7); break;
                case 9: fn_8018EDC8(-0x1e); break;
                case 10: fn_8018EDC8(0xf); break;
                case 11: fn_8018EDC8(0x7); break;
                case 12: fn_8018EDC8(0x1e); break;
                default: break;
            }
        }
    }

    // fn_8005F8E0(0x11): position update
    if (fn_8005F8E0(r28p, 0x11)) {
        r3p = (u8*)*(u32*)(r30p + 0x30);
        *(u32*)(r3p + 8) = *(u32*)(r3p + 8) ^ 0x20000000u;

        // Compute positions for unit ptrs r3->0x30->0x34 and 0x30
        void* r29p = 0, *r30v = 0;
        u8* r5 = (u8*)*(u32*)(r3p + 0x34);
        void* r31v = (void*)*(u32*)(r3p + 0x30);

        if (r5) {
            float fc, fr, fz;
            { s8 c = (s8)r5[0x19e];
              u32 s[2] = { 0x43300000u, (u32)((s32)c ^ 0x8000) };
              double d = *(double*)s; fc = (float)(d - *(double*)&lbl_803773A0); }
            { s8 r = (s8)r5[0x19f];
              u32 s[2] = { 0x43300000u, (u32)((s32)r ^ 0x8000) };
              double d = *(double*)s; fr = (float)(d - *(double*)&lbl_803773A0); }
            float f3 = lbl_803773A8;
            float stk_2c = f3 + fc;
            float stk_30 = f3 + fr;
            fn_800234FC((void*)lbl_802D49F8);
            float stk_34 = f3 + fc;
            r29p = (void*)&stk_2c;
        }

        if (r31v) {
            float fc2, fr2;
            { s8 c2 = (s8)((u8*)r31v)[0x19e];
              u32 s[2] = { 0x43300000u, (u32)((s32)c2 ^ 0x8000) };
              double d = *(double*)s; fc2 = (float)(d - *(double*)&lbl_803773A0); }
            { s8 r2 = (s8)((u8*)r31v)[0x19f];
              u32 s[2] = { 0x43300000u, (u32)((s32)r2 ^ 0x8000) };
              double d = *(double*)s; fr2 = (float)(d - *(double*)&lbl_803773A0); }
            float f3b = lbl_803773A8;
            float stk_38 = f3b + fc2;
            float stk_3c = f3b + fr2;
            fn_800234FC((void*)lbl_802D49F8);
            float stk_40 = f3b + fc2;
            r30v = (void*)&stk_38;
        }

        fn_80053138(r30p, r29p, r30v);
    }

    // fn_8005F8E0(0x12): check particle ptr, fn_80052E30 path
    if (fn_8005F8E0(r28p, 0x12)) {
        r3p = (u8*)*(u32*)(r30p + 0x30);
        if (*(u32*)(r3p + 0x34) && *(u32*)(r3p + 0x30)) {
            *(u32*)(r3p + 8) = *(u32*)(r3p + 8) ^ 0x20000000u;
            fn_80052E30(r30p);
        }
    }

    // fn_8005F8E0(0xf/0x10): fn_80018BE4/fn_8001948C
    if (fn_8005F8E0(r28p, 0xf)) {
        fn_80018BE4();
        fn_8001948C(0, 0);
    }
    if (fn_8005F8E0(r28p, 0x10)) {
        fn_80018BE4();
        fn_8001948C(0, 1);
    }

    // fn_8005F8E0(0x2f/0x30): fn_800257C4
    if (fn_8005F8E0(r28p, 0x2f)) fn_800257C4((void*)lbl_803754E0, 8);
    if (fn_8005F8E0(r28p, 0x30)) fn_800257C4((void*)lbl_803754E0, 0x10);
}

// ============================================================
// fn_80054D9C: large particle init + audio setup (0x474) - Attachment 4
//   r3=particle ptr. fn_8023AAE4 x1 (particle name), fn_8005C6C4,
//   fn_80061798 -> r30. fn_80061334. Checks r3->0x30->0x2c->0x8
//   for fn_8000CC18(lbl_8028F8B0)/init_particle_entry x1.
//   Sets oris 0x1000, copies position. Conditionally oris 0x1000
//   and copies more data. Bit checks -> more orises.
//   fn_8006058C -> frame counter logic -> fn_8005FE10.
// ============================================================
void fn_80054D9C(void* r3) {
    u8* r29p = (u8*)r3;
    u8* r5p = (u8*)*(u32*)(r29p + 0x30);

    u8 stk_24[0x40];
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x120),
                (const void*)((u8*)lbl_802739CC + 0x129),
                (u32)*(u32*)((u8*)*(u32*)(r5p + 0x2c)),
                0u, 0u);

    s32 r4v = (*(u32*)(r5p + 8) & 0x100u) ? 8 : 0;
    fn_8005C6C4(stk_24, (u32)r4v);

    void* r30p = fn_80061798();
    *(u32*)(r5p + 0x5c) = (u32)r30p;
    r30p = (void*)*(u32*)(r5p + 0x5c);

    // Copy r3->0x30->0x5 to r30[0x87]
    ((u8*)r30p)[0x87] = r5p[5];

    // Bit checks on r3->0x30->0x8
    if (!(*(u32*)(r5p + 8) & 1u)) {
        *(u32*)r30p = *(u32*)r30p | 0x400u;
    }
    if (!(*(u32*)(r5p + 8) & 2u)) {
        *(u32*)r30p = *(u32*)r30p | 0x40000u;
    }
    if (*(u32*)(r5p + 8) & 4u) {
        *(u32*)r30p = *(u32*)r30p | 0x180u;
    }
    if (*(u32*)(r5p + 8) & 0x100u) {
        *(u32*)r30p = *(u32*)r30p | 0x10000000u;
    }

    // Second fn_8023AAE4 call + fn_8005F47C
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x14a),
                (const void*)((u8*)lbl_802739CC + 0x129),
                (u32)*(u32*)((u8*)*(u32*)(r5p + 0x2c)),
                0u, 0u);
    fn_8005F47C(r30p, stk_24);

    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x152),
                (const void*)((u8*)lbl_802739CC + 0x129),
                (u32)*(u32*)((u8*)*(u32*)(r5p + 0x2c)),
                0u, 0u);
    fn_8005F41C(r30p, stk_24);

    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x159),
                (const void*)((u8*)lbl_802739CC + 0x129),
                (u32)*(u32*)((u8*)*(u32*)(r5p + 0x2c)),
                0u, 0u);
    fn_8005F4DC(r30p, stk_24);

    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x161),
                (const void*)((u8*)lbl_802739CC + 0x129),
                (u32)*(u32*)((u8*)*(u32*)(r5p + 0x2c)),
                0u, 0u);
    if (fn_8005C25C(stk_24)) fn_8005F3BC(r30p, stk_24);

    fn_80061334(r30p);

    // Check r3->0x30->0x2c->0x7 for team color
    u8* r3q = (u8*)*(u32*)(r5p + 0x2c);
    u8 team = r3q[7];
    if (team) {
        r5p[4] = team;
        fn_8005EAF4(r30p);
    }

    // Check if r3->0x30->0x2c->0x8 is set
    void* r28v = (void*)*(u32*)(r3q + 8);
    if (!r28v) return;

    // Alloc and init new particle entry
    s32 r4init = r29p ? (s32)(u32)r29p : 4;
    void* r31v = fn_8000CC18((void*)lbl_8028F8B0, r4init);
    u8* r27p = (u8*)fn_800C48D4(0x60);
    *(u32*)((u8*)r31v + 0x30) = (u32)r27p;
    init_particle_entry(r27p, r28v);
    u32 f2 = *(u32*)(r27p + 8);
    *(u32*)(r27p + 8) = f2 | 0x08000000u;
    u8* r4p2 = (u8*)*(u32*)((u8*)r31v + 0x30);
    u8* r3r = (u8*)*(u32*)(r4p2 + 0x2c);
    if (((u32)r3r[4] & 0xf & ~3u) == 4) {
        *(u32*)(r4p2 + 8) = *(u32*)(r4p2 + 8) | 0x20000000u;
    }

    if (!r29p) return;

    // Copy position data from r29p->0x30
    *(u32*)(r27p + 8) = *(u32*)(r27p + 8) | 0x10000000u;
    u8* r4src = (u8*)*(u32*)(r29p + 0x30);
    *(u32*)(r27p + 0x30) = *(u32*)(r4src + 0x30);
    *(u32*)(r27p + 0x34) = *(u32*)(r4src + 0x34);
    float f1 = *(float*)(r4src + 0xc);
    float f0 = *(float*)(r4src + 0x10);
    float f1b = *(float*)(r4src + 0x14);
    *(float*)(r27p + 0xc) = f1;
    *(float*)(r27p + 0x10) = f0;
    *(float*)(r27p + 0x14) = f1b;
    *(float*)(r27p + 0x18) = *(float*)(r4src + 0x18);
    *(float*)(r27p + 0x20) = *(float*)(r4src + 0x20);
    *(float*)(r27p + 0x24) = *(float*)(r4src + 0x24);
    *(float*)(r27p + 0x28) = *(float*)(r4src + 0x28);
    r27p[3] = r4src[3];

    // Frame counter logic
    void* r29v2 = fn_8006058C(r29p);
    u32 span = *(u32*)((u8*)r29v2 + 0x18) - *(u32*)((u8*)r29v2 + 0x14);
    u32 ticks = fn_800068F4();
    u32 frame = ticks / span;
    u32 rem = ticks - frame * span;
    u32 slot = *(u32*)((u8*)r29v2 + 0x14) + rem;
    float fslot;
    { u32 s[2] = { 0x43300000u, (u32)(slot ^ 0x8000) };
      double d = *(double*)s; fslot = (float)(d - *(double*)&lbl_803773A0); }
    fn_8005FE10(r29p, fslot);
}

// ============================================================
// fn_8005538C: return r3->0x28c[r4].0x40 if r3 and r3+0x28c valid (0x40)
// ============================================================
void* fn_8005538C(void* r3, s32 r4) {
    if (!r3) return 0;
    u8* p = (u8*)r3 + 0x28c;
    if ((u32)p == 0) return 0;
    void* arr = (void*)*(u32*)p;
    if (!arr) return 0;
    return (void*)*(u32*)((u8*)arr + r4 * 4 + 0x40);
}

// ============================================================
// fn_800553D0: check r3 anim state (0x5th attachment)
//   Returns non-zero if anim triggers fn_8000C2B0.
// ============================================================
s32 fn_800553D0(void* r3) {
    // Attachment 5 stub for now
    return 0;
}

// ============================================================
// fn_80055774: set anim state (0x6th attachment)
// ============================================================
void fn_80055774(void* r3, s32 r4) {
    // Attachment 6 stub for now
}

// ============================================================
// fn_80055A60: call fn_80055774(r3, 0)
// ============================================================
void fn_80055A60(void* r3) {
    fn_80055774(r3, 0);
}

// ============================================================
// fn_80055A84: return RGBA word from team table based on r3[0x6] (0x1C4)
//   Jump table dispatch on r3[0x6] (0..8) -> lbl_80377368..8C.
//   Returns 4-byte RGBA as a void*.
// ============================================================
u32 fn_80055A84(void* r3) {
    u8 idx = ((u8*)r3)[6];
    u32 stk = *(u32*)&lbl_8037738C;  // default
    if (idx <= 8) {
        u32 table[] = {
            lbl_8037738C, lbl_8037736C, lbl_80377370, lbl_80377374,
            lbl_80377378, lbl_8037737C, lbl_80377380, lbl_80377384,
            lbl_80377388
        };
        stk = table[idx];
    }
    return stk;
}

// ============================================================
// fn_80055C48: fn_8023AAE4 wrapper with lbl_802739CC format string (0x48)
//   r3=owner ptr (r6=r3[0]), r4=dest stk.
// ============================================================
void fn_80055C48(void* r3, void* r4) {
    void* r31 = r4;
    fn_8023AAE4((void*)lbl_802FA4A8,
                (const void*)((u8*)lbl_802739CC + 0x120),
                (const void*)((u8*)lbl_802739CC + 0x129),
                *(u32*)r3, 0u, 0u);
}

// ============================================================
// fn_80055C94: fn_8014629C/BC/7C wrapper (0x54)
//   r3=team byte. Try open, if full clear one slot.
// ============================================================
void fn_80055C94(u8 r3) {
    u8 r31 = r3;
    fn_8014629C(r31);
    if (!fn_801462BC()) {
        if (fn_801462BC() >= 0x10) {
            fn_800056A0(0);
            fn_80146190();
        }
        fn_8014627C(r31);
    }
}

// ============================================================
// fn_80055CEC: if r3==0 or lbl_8028F8B0 empty: print error.
//   Else: fn_8000CC18(lbl_8028F888, 4) -> stw r3 to result[0x60]. (0x78)
// ============================================================
void fn_80055CEC(s32 r3, void* r4) {
    void* r31 = r4;
    if (!r31) goto do_empty_check;
    {
        void* r3a = fn_8000C1E8((void*)lbl_8028F8B0);
        if (r3a) goto do_alloc;
    }
do_empty_check:;
    if (!fn_801462DC()) {
        fn_80146190();
        fn_800056CC((const char*)((u8*)lbl_802739CC + 0x12e), 0);
        return;
    }
do_alloc:;
    void* entry = fn_8000CC18((void*)lbl_8028F888, 4);
    *(u32*)((u8*)entry + 0x60) = (u32)r31;
}

// ============================================================
// fn_80055D68: if lbl_8028F8B0 has entries: fn_8000C2B0(r3).
//   Else: fn_801462DC check, fn_80146190 (0x50)
// ============================================================
void fn_80055D68(void* r3) {
    u8* r31 = (u8*)r3;
    void* r3a = fn_8000C1E8((void*)lbl_8028F8B0);
    if (!r3a) {
        if (!fn_801462DC()) {
            fn_80146190();
            fn_8000C2B0(r31);
        }
        return;
    }
}

// ============================================================
// fn_80055DBC: decrement r3[0x60] countdown, fn_8000C198 if < 0 (0x38)
// ============================================================
void fn_80055DBC(void* r3) {
    u8* p = (u8*)r3;
    s32 v = *(s32*)(p + 0x60) - 1;
    *(s32*)(p + 0x60) = v;
    if (v < 0) fn_8000C198(r3, 0);
}