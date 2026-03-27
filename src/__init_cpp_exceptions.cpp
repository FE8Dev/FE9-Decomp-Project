#include <dolphin/types.h>

extern "C" {
    extern u8 _eti_init_info[];
    extern s32 fragmentID_803752F8;

    void* __register_fragment(u8* eti, void* r2);
    void __unregister_fragment(s32 fragmentID);
    void __destroy_global_chain(void);
}

extern "C" void __fini_cpp_exceptions(void) {
    if (fragmentID_803752F8 != -2) {
        __unregister_fragment(fragmentID_803752F8);
        fragmentID_803752F8 = -2;
    }
}

extern "C" void __init_cpp_exceptions(void) {
    register void* rtoc = (void*)0;
    __asm { mr rtoc, r2 }
    if (fragmentID_803752F8 == -2) {
        fragmentID_803752F8 = (s32)__register_fragment(_eti_init_info, rtoc);
    }
}

__declspec(section ".ctors") extern void (* const __init_cpp_exceptions_reference)(void) = __init_cpp_exceptions;
__declspec(section ".dtors") extern void (* const __destroy_global_chain_reference)(void) = __destroy_global_chain;
__declspec(section ".dtors") extern void (* const __fini_cpp_exceptions_reference)(void) = __fini_cpp_exceptions;