#include <dolphin/types.h>

extern u8 Debug_BBA_80376828;

void __set_debug_bba(void) {
    Debug_BBA_80376828 = 1;
}

int __get_debug_bba(void) {
    return Debug_BBA_80376828;
}