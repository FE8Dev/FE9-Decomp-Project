#include <dolphin/types.h>

extern "C" void* memcpy(void* dst, const void* src, u32 size);
extern "C" void __flush_cache(void* base, u32 size);
extern "C" void* memset(void* dst, int val, u32 size);

typedef struct {
    void* src;
    void* dst;
    u32 size;
} ROMCopyInfo;

typedef struct {
    void* dst;
    u32 size;
} BSSInitInfo;

extern ROMCopyInfo _rom_copy_info[];
extern BSSInitInfo _bss_init_info[];

static void __init_data(void) {
    ROMCopyInfo* p = _rom_copy_info;
    for (;;) {
        u32 size = p->size;
        if (size == 0) break;
        void* src = p->src;
        void* dst = p->dst;
        if (src != 0 && src != dst) {
            memcpy(dst, src, size);
            __flush_cache(dst, size);
        }
        p++;
    }
    BSSInitInfo* b = _bss_init_info;
    for (;;) {
        u32 size = b->size;
        if (size == 0) break;
        void* dst = b->dst;
        if (dst != 0) {
            memset(dst, 0, size);
        }
        b++;
    }
}