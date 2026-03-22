#include <dolphin/PPCArch.h>

extern void __OSPSInit(void);
extern void __OSFPRInit(void);
extern void __OSCacheInit(void);

void __init_hardware(void) {
    PPCMtmsr(PPCMfmsr() | 0x2000);
    __OSPSInit();
    __OSFPRInit();
    __OSCacheInit();
}