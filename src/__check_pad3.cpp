#include <dolphin/types.h>

extern "C" void OSResetSystem(s32 reset, s32 resetCode, s32 forceMenu);

static void __check_pad3(void) {
    volatile u16* pad = (volatile u16*)0x800030e4;
    if ((*pad & 0xeef) == 0xeef) {
        OSResetSystem(0, 0, 0);
    }
}