#include <dolphin/types.h>

extern u8 lbl_8033BFB8[];
extern void fn_80226370(void);
extern void OSGetTime(void);
extern void IPCGetBufferLo_8021A3EC(void);
extern void fn_8020FDF8(void);
extern void OSGetLanguage(void);
extern void memset(void*, s32, u32);
extern void fn_8001C700(void);
extern void __register_global_object(void*, void*, void*);

void fn_801E7898(void) {
    u32* r31 = (u32*)lbl_8033BFB8;
    r31[0] = 0x53595346 + 0x201 * 0x10000 + 0x5346;
    r31[1] = 0x20050201;

    fn_80226370();
    // OSGetTime and IPCGetBufferLo used for seed calculation
    // (complex seed init omitted for stub)

    u8 r29 = 1;
    if (!(fn_8020FDF8(), 1)) {
        // language detection
    }
    lbl_8033BFB8[0x44] = r29;
    lbl_8033BFB8[0x47] = 0;
    memset(lbl_8033BFB8 + 0x12, 0, 0x1e);
    memset(lbl_8033BFB8 + 0x45, 0, 0x2);
    r31[0x3c/4] = 0; r31[0x38/4] = 0; r31[0x34/4] = 0; r31[0x30/4] = 0;
    r31[0] = (u32)-1;
    r31[1] = (u32)-1;

    lbl_8033BFB8[0x44] = 1;
    __register_global_object((void*)fn_8001C700, lbl_8033BFB8, 0);
}

#pragma init (fn_801E7898)