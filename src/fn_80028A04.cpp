#include <dolphin/types.h>

// Object at 0x802F99A8
struct UnkStruct_802F99A8 {
    u8 unk_00[0x13];
    u8 unk_13;
    u8 unk_14[0x01];
    u8 unk_15;
    u8 unk_16;
};

extern UnkStruct_802F99A8 lbl_802F99A8;

void fn_80028A04(void) {
    lbl_802F99A8.unk_13 = 0;
    lbl_802F99A8.unk_16 = 0;
}