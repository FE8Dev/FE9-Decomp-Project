#pragma once

static inline unsigned long PPCMfmsr(void) {
    register unsigned long msr;
    asm { mfmsr msr; }
    return msr;
}

static inline void PPCMtmsr(unsigned long val) {
    register unsigned long msr = val;
    asm { mtmsr msr; }
}