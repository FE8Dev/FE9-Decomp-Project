#include <dolphin/types.h>

extern "C" void __fill_mem(void* dst, int val, u32 size);

void* memset(void* dst, int val, u32 size) {
    void* saved = dst;
    __fill_mem(dst, val, size);
    return saved;
}