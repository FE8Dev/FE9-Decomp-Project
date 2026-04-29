#include <dolphin/types.h>

extern "C" void* fn_800C48D4(s32);
extern "C" void  fn_8023ADA8(void*, void*, ...);
extern "C" void  fn_80235CC8(void);
extern "C" void  fn_800D7468(void*, void*);

extern u8 __files[];
extern u8 lbl_8028B168[];

// =============================================================
// fn_80200844: init a file node — zero first two words,
//              store byte from r4[0] to r3[8],
//              then overwrite r3[8] with &r3[4] (self-link)
// =============================================================
void fn_80200844(void* r3, void* r4) {
    *(u32*)((u8*)r3 + 0x0) = 0;
    u8 r4b = ((u8*)r4)[0];
    *(u32*)((u8*)r3 + 0x4) = 0;
    ((u8*)r3)[0x8] = r4b;
    *(u32*)((u8*)r3 + 0x8) = (u32)((u8*)r3 + 0x4);
}

// =============================================================
// fn_80200864: allocate and link a file struct into a list
//   r3=list_head_ptr, r4=list_tail_ptr, r5=u8 append_flag,
//   r6=u8 last_flag, r7=extra_data_ptr
// =============================================================
void* fn_80200864(void* r3, void* r4, u8 r5, u8 r6, void* r7) {
    void* r28 = r3;
    void* r29 = r4;
    u8    r30 = r5;
    u8    r31 = r6;
    void* r26 = r7;

    if ((u32)*(u32*)((u8*)r28 + 0) > 0xFFFFFFFEu) {
        fn_8023ADA8(
            (void*)((u8*)__files + 0xa0),
            (void*)((u8*)lbl_8028B168 + 0xad9));
        fn_80235CC8();
    }

    void* r27 = fn_800C48D4(0x10);
    if (!r27) {
        fn_8023ADA8(
            (void*)((u8*)__files + 0xa0),
            (void*)((u8*)lbl_8028B168 + 0xaf4));
        fn_80235CC8();
    }

    // If r27+0xc is non-null, copy u16 from r26
    void* r3c = (void*)((u8*)r27 + 0xc);
    if (r3c) {
        *(u16*)r3c = *(u16*)((u8*)r26 + 0);
    }

    // Zero first two words, preserve low bit of r27[8], OR in r29
    *(u32*)((u8*)r27 + 0x4) = 0;
    *(u32*)((u8*)r27 + 0x0) = 0;
    u32 flags = *(u32*)((u8*)r27 + 0x8);
    flags = (flags & 1u) | (u32)r29;
    *(u32*)((u8*)r27 + 0x8) = flags;

    // Link: if r30 != 0, store to r29[0], else store to r29[4]
    if (r30 & 0xff) {
        *(u32*)((u8*)r29 + 0x0) = (u32)r27;
    } else {
        *(u32*)((u8*)r29 + 0x4) = (u32)r27;
    }

    // Increment count, call fn_800D7468
    u32 count = *(u32*)((u8*)r28 + 0x0);
    *(u32*)((u8*)r28 + 0x0) = count + 1;
    fn_800D7468(r27, (void*)*(u32*)((u8*)r28 + 0x4));

    // If r31 != 0, store r27 to r28[8]
    if (r31 & 0xff) {
        *(u32*)((u8*)r28 + 0x8) = (u32)r27;
    }

    return r27;
}
