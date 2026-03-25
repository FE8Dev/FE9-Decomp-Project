#include <dolphin/types.h>

extern "C" void __init_registers(void);
extern "C" void __init_hardware(void);
extern "C" void __init_data(void);
extern "C" void __set_debug_bba(void);
extern "C" int __get_debug_bba(void);
extern "C" void __check_pad3(void);
extern "C" void DBInit(void);
extern "C" void OSInit(void);
extern "C" void InitMetroTRK(void);
extern "C" void InitMetroTRK_BBA(void);
extern "C" void __init_user(void);
extern "C" int main(int argc, char** argv);
extern "C" void exit(int code);

__declspec(weak) void __start(void) {
    __init_registers();
    __init_hardware();

    *(s32*)0x80000044 = -1;
    u32 stackBottom = -1;
    u32 stackTop = -1;
    *(u32*)(*(u32*)0x800000f4 + 0x44) = 0;

    __init_data();

    u32 resetType = 0;
    u32* appLoaderHeader = *(u32**)0x800000f4;
    u32 r7;

    if (appLoaderHeader != 0) {
        r7 = appLoaderHeader[3];
    } else {
        u32* osInfo = *(u32**)0x80000034;
        if (osInfo == 0) goto skip_trk;
        r7 = *(u32*)0x800030e8;
    }

    if (r7 == 2 || r7 == 3) {
        resetType = (r7 == 3) ? 1 : 0;
        InitMetroTRK();
    } else if (r7 == 4) {
        resetType = 2;
        __set_debug_bba();
    }

skip_trk:
    // relocate
    u32* p = *(u32**)0x800000f4;
    if (p != 0) {
        u32 offset = p[2];
        if (offset != 0) {
            u32* relocs = (u32*)((u8*)p + offset);
            u32 count = relocs[0];
            if (count != 0) {
                // process relocations
            }
        }
    }

    DBInit();
    OSInit();

    u16 pad = *(u16*)0x800030e6;
    if ((pad & 0x8000) == 0 || (pad & 0x7fff) == 1) {
        __check_pad3();
    }

    if (__get_debug_bba() == 1) {
        InitMetroTRK_BBA();
    }

    __init_user();
    exit(main(0, 0));
}