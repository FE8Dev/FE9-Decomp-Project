#include <dolphin/types.h>

// Forward declarations of called functions
void fn_80234F38(void*, void*, s32, s32);
void fn_80234FB0(void*, void*, void*, s32, s32);
void fn_8014D838(void*);
void fn_8000E20C(void*);
void fn_80016A84(void);
void fn_8001C874(void);
void fn_8001C700(void);
void fn_80016CB8(void*);
void fn_80106398(void*, s32);
void fn_8017C3F4(void*);
void fn_8017C420(void*);
void fn_8017C008(void*, s32);
void fn_8017C030(void*, s32);
void fn_8000D00C(s32);
void fn_8000C1E8(void*);
void fn_8000CC18(void*, void*);
void fn_800C4C34(s32, void*, s32);
void fn_8000C028(void*);
void fn_8000C2B0(void*);
void fn_8005A124(f32, f32, f32, f32);
void fn_8005A138(s32, f32, f32, f32, f32);
void fn_8005A1E8(s32, f32, f32, f32, f32);
void fn_800596D0(f32, f32, f32, f32, f32);
void fn_80017D24(void*);
void fn_80018514(void*);
void fn_8001869C(void*);
void fn_8000C198(void*, s32);
void fn_800C4B84(void*);
void fn_8014DF60(f32, f32);
void fn_80068478(void*);
void fn_8020AE58(void*, f32);
void fn_8020AB7C(void*, void*, void*);
void fn_8020B51C(void*, void*, void*);
void fn_80067F18(void*, void*, void*);
void fn_8006778C(s32, void*, void*);
void fn_80040A0C(void*);
void fn_80148640(void*, s32);
void fn_8005A2A0(s32, void*, void*);

// External data labels
extern u8 lbl_802BB9C4[];
extern u8 lbl_80270EA0[];
extern u8 lbl_8033A708[];
extern u8 lbl_802710A8[];
extern u8 lbl_8027109C[];
extern u8 lbl_80271090[];
extern u8 lbl_802D4914[];
extern u8 lbl_802D47A8[];
extern u8 lbl_802D49F8[];
extern u8 lbl_80271040[];
extern u8 lbl_8028E0C8[];
extern u32 jumptable_8028E068[];

// SDA globals (non-float)
extern u32 lbl_803753B0;
extern u32 lbl_80375464;
extern u8  lbl_80375468;
extern u8  lbl_80375460;
extern u8  lbl_80375461;
extern u8  lbl_8037552B;
extern u8  lbl_80375050;

// SDA float constants
extern f32 lbl_80376F98;
extern f32 lbl_80376F9C;
extern f32 lbl_80376FA0;
extern f32 lbl_80376FA4;
extern f32 lbl_80376FA8;
extern f32 lbl_80376FB0;
extern f32 lbl_80376FB4;
extern f32 lbl_80376FB8;
extern f32 lbl_80376FBC;
extern f32 lbl_80376FC0;
extern f32 lbl_80376FC4;
extern f32 lbl_80376FC8;
extern f32 lbl_80376FCC;
extern f32 lbl_80376FD0;
extern f32 lbl_80376FD4;
extern f32 lbl_80376FD8;
extern f32 lbl_80376FDC;
extern f32 lbl_80376FE0;
extern f32 lbl_80376FE4;
extern f32 lbl_80376FE8;
extern f32 lbl_80376FEC;
extern f32 lbl_80376FF0;
extern f32 lbl_80376FF4;

void fn_8001701C(void) {}

void fn_80017054(void* r3) {}

void* fn_800170EC(void* r3) { return 0; }

void* fn_8001731C(void* r3) { return 0; }

s32 fn_8001736C(void* r3) { return -1; }

s32 fn_800173B0(void* r3) { return -1; }

s32 fn_800173F4(void* r3) { return 0; }

void fn_80017490(void* r3, void* r4) {}

void fn_800174F0(void* r3, void* r4) {}

void fn_80017584(void* r3, void* r4) {}

void fn_80017618(void* r3) {}

void* fn_8001764C(s32 r3) { return 0; }

s32 fn_80017808(void) { return 0; }

void fn_80017850(void) {}

void fn_80017878(u8 r3) {}

void fn_800178BC(void* r3, void* r4) {}

void fn_8001791C(void* r3, void* r4, f32 f1, f32 f2, f32 f3) {}

void fn_80017AA0(void* r3) {}

void fn_80017D04(void) {}

void fn_80017D24(void* r3) {}

void fn_800181FC(void* r3, u8 r4) {}

void fn_80018514(void* r3) {}

void fn_8001869C(void* r3) {}

void fn_800188F8(void) {}

void fn_80018964(void) {}

s32 fn_800189AC(void* r3, u8 r4) { return 0; }

s32 fn_80018B10(void* r3, u8 r4) { return 0; }

void fn_80018BB4(void) {}

void* fn_80018BE4(void) { return 0; }

void fn_80018BEC(void) {}

void fn_80018BFC(void) {}

void fn_80018C0C(void) {}

void fn_80018C20(void) {}

void fn_80018C2C(void* r3) {}

void fn_80018F14(void) {}

void fn_80018FC8(void) {}

void fn_80019010(void) {}

void fn_80019310(void* r3) {}

void fn_8001948C(void* r3, u32 r4) {}

void fn_800194D4(void* r3, f32 f1) {}

void fn_800194E0(void* r3) {}