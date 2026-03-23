#include <dolphin/types.h>

extern "C" void* fn_802315EC(void* ptr);

void* fn_80003458(void* ptr) {
    fn_802315EC(ptr);
    return ptr;
}