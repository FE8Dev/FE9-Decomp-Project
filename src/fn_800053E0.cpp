#include <dolphin/types.h>

extern "C" void OSResetSystem(s32 reset, s32 resetCode, s32 forceMenu);

void fn_800053E0(void) {
    OSResetSystem(0, 0, 0);
}