#include <dolphin/types.h>

// -------------------------------------------------------
// Extern functions
// -------------------------------------------------------
extern "C" void  fn_8000D514(void*, void*);
extern "C" void  fn_800056CC(const char* fmt, ...);
extern "C" void  fn_801A6DE4(void*, u8);

// Forward declarations for functions defined later in this file
void fn_801A9A24(void*, void*, s32);
void fn_801A9BDC(void*, void*, void*);
void fn_801A5F78(void*, void*, void*);
void fn_801A8454(void*, void*, void*, s32);
void fn_801A8930(void*, void*, void*);
void fn_801A9060(void*, void*, s32);
extern "C" void  fn_800362F0(void*);
extern "C" void  fn_8019EBB0(void*, s32);
extern "C" void  fn_80028760(void*);
extern "C" void* fn_80037D5C(void*, u8);
extern "C" s32   fn_8001D410(void*);
extern "C" void  fn_8000CBC8(void*, void*);
extern "C" void  fn_8002A224(void*, void*);
extern "C" void  fn_8002A45C(void*, void*);
extern "C" void  fn_8002AA6C(void*, void*);
extern "C" void  fn_8002ABD4(void*, void*);
extern "C" void  fn_8002AD3C(void*, void*);
extern "C" void  fn_80026910(void*, void*);
extern "C" void  fn_80031B88(void*);
extern "C" s8    fn_8003B470(void*);
extern "C" void  fn_8003838C(void*, s8);
extern "C" void  fn_80104C58(void*);
extern "C" void  fn_80104CB8(void*);
extern "C" void  fn_800153FC(void*, s32);
extern "C" u8    fn_8003D190(void*, void*);
extern "C" u8    fn_8000CF90(u8);
extern "C" u8    fn_8003C970(void*);
extern "C" void  fn_801A6E5C(void*, s32);
extern "C" void  fn_8003830C(void*, u8, u8);
extern "C" void  fn_8003CE50(void*, void*, void*);
extern "C" void  fn_8019E014(void*, s8, s8);
extern "C" void  fn_8019DFA4(void*, s8, s8);
extern "C" void  fn_8002A924(void*, void*);

// -------------------------------------------------------
// Forward declarations
// -------------------------------------------------------
void fn_801A5418(void);
void fn_801A5B64(void);

// -------------------------------------------------------
// Extern labels
// -------------------------------------------------------
extern u8 lbl_80284F48[];
extern u8 lbl_802A1240[];
extern u8 lbl_802A126C[];
extern u8 lbl_802F99A8[];
extern u8 lbl_802F99C0[];
extern u8 lbl_8033AEAC[];
extern u8 lbl_802BB9C4[];
extern u8 lbl_802D49F8[];
extern u8 lbl_80375529;

// -------------------------------------------------------
// fn_801A4EFC: register strings from lbl_80284F48 into lbl_802A1240+0x58..0x118
// -------------------------------------------------------
void fn_801A4EFC(void) {
    u8* r31 = lbl_802A1240;

    fn_8000D514((void*)(lbl_80284F48 + 0xe1), (void*)(r31 + 0x58));
    fn_8000D514((void*)(lbl_80284F48 + 0xee), (void*)(r31 + 0x58));
    fn_8000D514((void*)(lbl_80284F48 + 0xfd), (void*)(r31 + 0x58));
    fn_8000D514((void*)(lbl_80284F48 + 0x10c), (void*)(r31 + 0x58));
    fn_8000D514((void*)(lbl_80284F48 + 0x11c), (void*)(r31 + 0x68));
    fn_8000D514((void*)(lbl_80284F48 + 0x12c), (void*)(r31 + 0x78));
    fn_8000D514((void*)(lbl_80284F48 + 0x139), (void*)(r31 + 0x88));
    fn_8000D514((void*)(lbl_80284F48 + 0x149), (void*)(r31 + 0x98));
    fn_8000D514((void*)(lbl_80284F48 + 0x157), (void*)(r31 + 0xa8));
    fn_8000D514((void*)(lbl_80284F48 + 0x167), (void*)(r31 + 0xb8));
    fn_8000D514((void*)(lbl_80284F48 + 0x177), (void*)(r31 + 0xc8));
    fn_8000D514((void*)(lbl_80284F48 + 0x184), (void*)(r31 + 0xd8));
    fn_8000D514((void*)(lbl_80284F48 + 0x193), (void*)(r31 + 0xe8));
    fn_8000D514((void*)(lbl_80284F48 + 0x1a2), (void*)(r31 + 0xf8));
    fn_8000D514((void*)(lbl_80284F48 + 0x1b3), (void*)(r31 + 0x108));
    fn_8000D514((void*)(lbl_80284F48 + 0x1c1), (void*)(r31 + 0x118));
}

// -------------------------------------------------------
// fn_801A5068
// -------------------------------------------------------
s32 fn_801A5068(void* r3) {
    void* r31 = r3;

    fn_801A9A24((void*)lbl_8033AEAC, (void*)*(u32*)(lbl_802F99A8 + 0), -1);

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    {
        u8 r0 = lbl_8033AEAC[0x1a6];
        r0 = (u8)((r0 & ~(7u << 2)) | (4u << 2));
        lbl_8033AEAC[0x1a6] = r0;
    }

    fn_8019EBB0(r31, 0);
    return 0;
}

// -------------------------------------------------------
// fn_801A50F8: check lbl_80375529 >= 1, call fn_80104CB8 if so
// -------------------------------------------------------
void* fn_801A50F8(void) {
    u32 r4 = 1;
    u8 r3b = lbl_80375529;
    u8 r0 = (u8)((u32)r3b - 1);
    // clrlwi r3, r0, 24 -> r3 = r0 & 0xff
    u32 r3u = (u32)r0;
    // subfic r0, r3, 1 -> r0 = 1 - r3u
    u32 subfic_r0 = (u32)(1u - r3u);
    // orc r3, r4, r3 -> r3 = r4 | ~r3u
    u32 orc_r3 = r4 | ~r3u;
    // srwi r0, r0, 1
    u32 shr_r0 = subfic_r0 >> 1;
    // subf r0, r0, r3 -> r0 = r3 - r0
    u32 sub_r0 = orc_r3 - shr_r0;
    // srwi. r0, r0, 31
    u32 result = sub_r0 >> 31;
    // bne 38: if result != 0, fall through; else li r4, 0
    if (!result) {
        r4 = 0;
    }

    // clrlwi. r0, r4, 24
    if (!(u8)r4) {
        return (void*)0;
    }

    void* r3p = (void*)*(u32*)(lbl_802F99A8 + 0);
    fn_80104CB8((void*)((u8*)r3p + 0x1a4));
    return (void*)0;
}

// -------------------------------------------------------
// fn_801A5164
// -------------------------------------------------------
s32 fn_801A5164(void* r3) {
    void* r31 = r3;
    u8* r30;

    fn_80028760((void*)lbl_802F99A8);

    {
        s32 r4v = fn_8001D410((void*)lbl_80284F48);
        fn_800056CC((const char*)(lbl_80284F48 + 0x1d4), r4v);
    }

    r30 = lbl_802F99A8;

    {
        void* r3u = (void*)*(u32*)(r30 + 4);
        u8 r4u = ((u8*)r30)[0x14];
        fn_80037D5C(r3u, r4u);
    }

    {
        s32 r4v = fn_8001D410((void*)lbl_80284F48);
        fn_800056CC((const char*)(lbl_80284F48 + 0x1dd), r4v);
    }

    {
        void* r3u = (void*)*(u32*)(r30 + 4);
        u8 r4u = ((u8*)r30)[0x14];
        void* r3ret = (void*)fn_80037D5C(r3u, r4u);
        void* r4p = (void*)*(u32*)((u8*)r3ret + 0);
        u8 r0;
        if (r4p) {
            r0 = ((u8*)r4p)[0x18];
        } else {
            r0 = 0;
        }
        ((u8*)r3ret)[0x4] = r0;
    }

    {
        void* r4u = (void*)*(u32*)(lbl_802F99A8 + 0);
        void* r5u = (void*)*(u32*)((u8*)r30 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5274: call fn_8000CBC8 with lbl_802A126C
// -------------------------------------------------------
void fn_801A5274(void* r3) {
    fn_8000CBC8((void*)lbl_802A126C, r3);
}

// -------------------------------------------------------
// fn_801A52A0: fn_8002A224(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A52A0(void) {
    ((void(*)(void))fn_8002A224)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A52D8
// -------------------------------------------------------
void fn_801A52D8(void* r3) {
    void* r31 = r3;
    u8 stk = 0x43;
    fn_80026910((void*)lbl_802F99A8, (void*)&stk);
    fn_80031B88(r31);
}

// -------------------------------------------------------
// fn_801A5324
// -------------------------------------------------------
s32 fn_801A5324(void) {
    u8 stk_c = 0x43;
    fn_80026910((void*)lbl_802F99A8, (void*)&stk_c);

    {
        u8 r0 = lbl_802F99A8[0x13];
        void* r3u = (void*)*(u32*)(lbl_802F99A8 + 0);
        u8 stk_8 = r0;
        fn_8002A924(r3u, (void*)&stk_8);
    }

    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A538C
// -------------------------------------------------------
s32 fn_801A538C(void* r3) {
    void* r31 = r3;

    fn_801A9A24((void*)lbl_8033AEAC, (void*)*(u32*)(lbl_802F99A8 + 0), -1);

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)fn_801A5418);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5418: iterate unit array, compute/update class stats
// -------------------------------------------------------
void fn_801A5418(void) {
    u8 stk[4];
    fn_800153FC((void*)stk, 2);

    s32 r30 = 1;
    do {
        u8* r31;
        if ((u8)r30) {
            r31 = lbl_802BB9C4 + (u32)((u8)r30 - 1) * 0x280;
        } else {
            r31 = 0;
        }

        if (*(u32*)(r31 + 0x188)) {
            void* r4p = (void*)*(u32*)(r31 + 0x190);
            u8 team = ((u8*)r4p)[0x8];
            if (stk[team]) {
                s8 cls = fn_8003B470((void*)r31);
                fn_8003838C((void*)r31, cls);
                fn_80104C58((void*)(r31 + 0x1a4));
            }
        }

        r30++;
    } while (r30 <= 0x9f);

    {
        s8 cls = fn_8003B470((void*)lbl_8033AEAC);
        fn_8003838C((void*)lbl_8033AEAC, cls);
        fn_80104C58((void*)(lbl_8033AEAC + 0x1a4));
    }
}

// -------------------------------------------------------
// fn_801A54F0 (gdev_cc_shutdown): return 1
// -------------------------------------------------------
s32 fn_801A54F0(void) {
    return 1;
}

// -------------------------------------------------------
// fn_801A54F8
// -------------------------------------------------------
s32 fn_801A54F8(void* r3) {
    void* r31 = lbl_802F99A8;
    void* r30 = r3;

    {
        void* r3u = (void*)*(u32*)((u8*)r31 + 4);
        u8 r4u = ((u8*)r31)[0xf];
        u8 r5u = ((u8*)r31)[0x10];
        fn_8003830C(r3u, r4u, r5u);
    }

    {
        void* r4u = (void*)*(u32*)((u8*)r31 + 4);
        void* r5u = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A9BDC((void*)lbl_8033AEAC, r5u, r4u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    {
        s8 r3s = (s8)((u8*)r31)[0xf];
        s8 r4s = (s8)((u8*)r31)[0x10];
        fn_8019E014(r30, r3s, r4s);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A559C: call fn_8000CBC8 with lbl_802A1240
// -------------------------------------------------------
void fn_801A559C(void* r3) {
    fn_8000CBC8((void*)lbl_802A1240, r3);
}

// -------------------------------------------------------
// fn_801A55C8: fn_8002A45C(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A55C8(void) {
    ((void(*)(void))fn_8002A45C)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A5600
// -------------------------------------------------------
s32 fn_801A5600(void* r3) {
    void* r31 = r3;
    u8* r30 = lbl_802F99A8;

    void* r29 = (void*)*(u32*)(r30 + 4);  // unit1 ptr

    u8 stk_9;  // col
    u8 stk_8;  // row

    {
        void* r8 = (void*)*(u32*)(r30 + 0);  // unit0 ptr
        s8 col = (s8)((u8*)r8)[0x19e];
        s8 row = (s8)((u8*)r8)[0x19f];
        stk_9 = (u8)col;
        stk_8 = (u8)row;

        // lbl_802D49F8 + col + row*64 -> cell; set cell[0xd] = 0xff
        s32 idx = (s32)col + ((s32)row << 6);
        ((u8*)lbl_802D49F8)[idx + 0xd] = 0xff;
    }

    fn_8003CE50(r29, (void*)&stk_9, (void*)&stk_8);
    fn_8003830C(r29, stk_9, stk_8);

    {
        void* r4u = (void*)*(u32*)(r30 + 4);
        void* r5u = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A9BDC((void*)lbl_8033AEAC, r5u, r4u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    {
        s8 r3s = (s8)stk_9;
        s8 r4s = (s8)stk_8;
        fn_8019DFA4(r31, r3s, r4s);
    }

    return 1;
}

// -------------------------------------------------------
// fn_801A56F8: fn_8002AA6C(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A56F8(void) {
    ((void(*)(void))fn_8002AA6C)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A5730
// -------------------------------------------------------
s32 fn_801A5730(void* r3) {
    void* r31 = r3;
    u8* r5 = lbl_802F99A8;

    {
        void* r4u = (void*)*(u32*)(r5 + 0);
        void* r5u = (void*)*(u32*)(r5 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    {
        u8 r0 = lbl_8033AEAC[0x486];
        r0 = (u8)((r0 & ~(7u << 5)) | (7u << 5));
        lbl_8033AEAC[0x486] = r0;
    }

    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A57C8
// -------------------------------------------------------
s32 fn_801A57C8(void* r3) {
    void* r31 = r3;
    u8* r30 = lbl_802F99A8;

    {
        void* r4u = (void*)*(u32*)(r30 + 0);
        void* r5u = (void*)*(u32*)(r30 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    {
        void* r3u = (void*)*(u32*)(lbl_802F99A8 + 0);
        void* r4u = (void*)*(u32*)(r30 + 4);
        u8 r3b = (u8)(u32)fn_8003D190(r3u, r4u);
        u8 chk = (u8)(u32)fn_8000CF90(r3b);
        if ((u8)chk) {
            void* r3u2 = (void*)*(u32*)(r30 + 4);
            u8 chk2 = (u8)(u32)fn_8003C970(r3u2);
            if (!((u8)chk2)) {
                fn_801A6E5C((void*)lbl_8033AEAC, 1);
                goto done;
            }
        }
        fn_801A6E5C((void*)lbl_8033AEAC, 0);
    }
done:
    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A58B0
// -------------------------------------------------------
s32 fn_801A58B0(void* r3) {
    void* r31 = r3;
    u8* r30 = lbl_802F99A8;

    {
        void* r4u = (void*)*(u32*)(r30 + 0);
        void* r5u = (void*)*(u32*)(r30 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    {
        void* r3u = (void*)*(u32*)(lbl_802F99A8 + 0);
        void* r4u = (void*)*(u32*)(r30 + 4);
        u8 r3b = (u8)(u32)fn_8003D190(r3u, r4u);
        u8 chk = (u8)(u32)fn_8000CF90(r3b);
        if ((u8)chk) {
            void* r3u2 = (void*)*(u32*)(r30 + 4);
            u8 chk2 = (u8)(u32)fn_8003C970(r3u2);
            if (!((u8)chk2)) {
                u8 r0 = lbl_8033AEAC[0x485];
                r0 = (u8)((r0 & ~(7u << 4)) | (5u << 4));
                lbl_8033AEAC[0x485] = r0;
                fn_801A6E5C((void*)lbl_8033AEAC, 1);
                goto done2;
            }
        }
        fn_801A6E5C((void*)lbl_8033AEAC, 0);
    }
done2:
    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A59A8
// -------------------------------------------------------
s32 fn_801A59A8(void* r3) {
    void* r31 = r3;
    u8* r30 = lbl_802F99A8;

    {
        void* r4u = (void*)*(u32*)(r30 + 0);
        void* r5u = (void*)*(u32*)(r30 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    {
        void* r3u = (void*)*(u32*)(lbl_802F99A8 + 0);
        void* r4u = (void*)*(u32*)(r30 + 4);
        u8 r3b = (u8)(u32)fn_8003D190(r3u, r4u);
        u8 chk = (u8)(u32)fn_8000CF90(r3b);
        if ((u8)chk) {
            void* r3u2 = (void*)*(u32*)(r30 + 4);
            u8 chk2 = (u8)(u32)fn_8003C970(r3u2);
            if (!((u8)chk2)) {
                u16 r0 = *(u16*)(lbl_8033AEAC + 0x484);
                r0 = (u16)((r0 & ~(7u << 7)) | (5u << 7));
                *(u16*)(lbl_8033AEAC + 0x484) = r0;
                fn_801A6E5C((void*)lbl_8033AEAC, 1);
                goto done3;
            }
        }
        fn_801A6E5C((void*)lbl_8033AEAC, 0);
    }
done3:
    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5AA0: fn_8002ABD4(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A5AA0(void) {
    ((void(*)(void))fn_8002ABD4)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A5AD8
// -------------------------------------------------------
s32 fn_801A5AD8(void* r3) {
    void* r31 = r3;
    u8* r5 = lbl_802F99A8;

    {
        void* r4u = (void*)*(u32*)(r5 + 0);
        void* r5u = (void*)*(u32*)(r5 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);

    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)fn_801A5B64);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5B64
// -------------------------------------------------------
void fn_801A5B64(void) {
    u8* r31 = lbl_8033AEAC;

    fn_80104C58((void*)(r31 + 0x484));

    {
        void* r3p = (void*)*(u32*)(r31 + 0x560);
        fn_80104C58((void*)((u8*)r3p + 0x1a4));
    }
}

// -------------------------------------------------------
// fn_801A5BA4: fn_8002AD3C(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A5BA4(void) {
    ((void(*)(void))fn_8002AD3C)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// ================================================================
// BATCH 2
// ================================================================

// Additional externs
extern "C" void* fn_80019F0C(void*);
extern "C" void  fn_8019ED30(void*, s32);
extern "C" void  fn_8019EDC0(void*, s32);
extern "C" void  fn_8019ED78(void*, s32);
extern "C" void  fn_8019ECE8(void*, s32);
extern "C" void  fn_8019EBF8(void*, s32);
extern "C" void  fn_8019EA18(void*, s32);
extern "C" void  fn_8019E9D0(void*, s32);
extern "C" void  fn_8019E988(void*, s32);
extern "C" void  fn_8019E940(void*, s32);
extern "C" void  fn_8019E850(void*, void*);
extern "C" void  fn_8019E808(void*, void*);
extern "C" void  fn_8019E7C0(void*, s32);
extern "C" void  fn_8019E778(void*, s32);
extern "C" void  fn_8019E730(void*, s32);
extern "C" void  fn_8019E6E8(void*, s32);
extern "C" void  fn_801A6F78(void*, s8);
extern "C" s8    fn_8003B140(void*);
extern "C" void  fn_8002AEA4(void*, void*);
extern "C" void* fn_8002F7F8(void*, s32);
extern "C" void* fn_8002F8E0(void*);
extern "C" void  fn_801AA6B0(void*);
extern "C" void  fn_801AA458(void*);
extern "C" void  fn_801ABB44(void*, s32);
extern "C" void  fn_801ABF40(void*);
extern "C" void  fn_800350E0(void*);
extern "C" void* fn_8005B43C(void*, s32, void*);
extern "C" void* fn_8005B394(u8);
extern "C" void  fn_80034208(void*, s32, s32);
extern "C" void  fn_80034030(void*, s32);
extern "C" void  fn_80034010(void*);
extern "C" u8    fn_80106398(void*, s32);
extern "C" u8    fn_800382C8(void*, void*);
extern "C" void  fn_8001F9A4(void*, u8, u8, u8, u8);
extern "C" void* fn_80037EF4(void*);
extern "C" void  fn_800230A4(void*, s32);
extern "C" void  fn_80022E78(void*, s32, s32);
extern "C" u8    fn_8001DE9C(void*, void*);
extern "C" void  fn_800201E8(void*, u8, u8, u8, void*, s32, s32);
extern "C" void  fn_8003539C(void*, s32, void*, void*, s32);
extern "C" s8    fn_80038850(void*);
extern "C" u8    fn_8003D234(void*, u8);
extern "C" u8    fn_8003D2DC(void*);
extern "C" void  fn_801AADA4(void*, void*);
extern "C" void* fn_8011072C(void*, u8, u8, s32);
extern "C" void  fn_80110610(void*, u8, u8, s32);
extern "C" void  fn_801AB3C8(void*, void*);
extern "C" void  fn_801AB1EC(void*);
extern "C" void  fn_801AB35C(void*, void*);
extern "C" void  fn_801AAF90(void*, void*);
extern "C" void  fn_801AAF3C(void*);
extern "C" void  fn_801AA9E4(void*);
extern "C" s8    fn_800AAA84(s8, s8, s8);
extern "C" s8    fn_8003B0C8(void*);
extern "C" s8    fn_8003A754(void*);
extern "C" s8    fn_8003B3F8(void*);
extern "C" u8    fn_8001DF0C(u8);
extern "C" void  fn_8003AE98(void*);
extern "C" u8    fn_800387DC(void*);
extern "C" void* fn_801AA43C(void*);
extern "C" void* fn_8001CC6C(void*);
extern "C" void* fn_80037DC0(void*);

extern u8  lbl_802FA298[];
extern u8  lbl_8037552A;
extern u8  lbl_8033A708[];
extern u8  lbl_802D4744[];
extern u8  lbl_802A1368[];
extern u8  lbl_80335B58[];

// -------------------------------------------------------
// fn_801A5BDC: look up tempo from action string, update all units' class
// -------------------------------------------------------
s32 fn_801A5BDC(void* r3) {
    void* r31 = r3;
    void* r29 = (void*)*(u32*)(lbl_802F99A8 + 0);

    fn_80028760((void*)lbl_802F99A8);
    void* r28 = (void*)*(u32*)((u8*)lbl_802F99A8 + 0); // action ptr from fn_80028760 result

    // String-based tempo lookup
    s32 r30;
    if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x1e6))) {
        r30 = 0xa;
    } else if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x1ef))) {
        r30 = 0x14;
    } else if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x1fa))) {
        r30 = 0x50;
    } else if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x206))) {
        r30 = 0xa;
    } else if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x211))) {
        r30 = 0xa;
    } else if (r28 == fn_80019F0C((void*)(lbl_80284F48 + 0x21d))) {
        r30 = 0x50;
    } else {
        r30 = 0;
    }

    s8 tempo = fn_8003B140(r29);
    s32 r28v = r30 + (s32)tempo;

    fn_8002AEA4(r29, (void*)r28);

    // Iterate lbl_802F99C0 entries, update class for each
    {
        u8* r30p = lbl_802F99C0;
        s32 r29i = 0;
        while (r29i < *(s32*)r30p) {
            void* entry = fn_8002F7F8((void*)r30p, r29i);
            void* unit = fn_8002F8E0(entry);
            s8 base = (s8)((u8*)unit)[0x1a8];
            s8 cls = (s8)((s32)r28v + (s32)base);
            fn_8003838C(unit, cls);
            r29i++;
        }
    }

    fn_801A9A24((void*)lbl_8033AEAC, (void*)*(u32*)(lbl_802F99A8 + 0), -1);

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);
    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5DB0: like fn_801A5BDC but calls fn_801A6F78 on lbl_8033AEAC
// -------------------------------------------------------
s32 fn_801A5DB0(void* r3) {
    void* r31 = r3;

    {
        void* r4u = (void*)*(u32*)(lbl_802F99A8 + 0);
        void* r5u = (void*)*(u32*)(lbl_802F99A8 + 4);
        fn_801A9BDC((void*)lbl_8033AEAC, r4u, r5u);
    }

    {
        u8 r4 = lbl_802F99A8[0xa];
        fn_801A6DE4((void*)lbl_8033AEAC, r4);
    }

    fn_80028760((void*)lbl_802F99A8);
    void* r30 = (void*)*(u32*)(lbl_802F99A8 + 0); // action ptr
    void* r29 = lbl_802F99A8;                       // base struct ptr

    // String lookup for tempo multiplier
    s32 r30v;
    if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x1e6))) {
        r30v = 0xa;
    } else if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x1ef))) {
        r30v = 0x14;
    } else if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x1fa))) {
        r30v = 0x50;
    } else if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x206))) {
        r30v = 0xa;
    } else if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x211))) {
        r30v = 0xa;
    } else if (r30 == fn_80019F0C((void*)(lbl_80284F48 + 0x21d))) {
        r30v = 0x50;
    } else {
        r30v = 0;
    }

    s8 tempo = fn_8003B140((void*)*(u32*)(lbl_802F99A8 + 0));
    s8 cls = (s8)((s32)r30v + (s32)tempo);

    fn_801A6F78((void*)lbl_8033AEAC, cls);
    fn_800362F0((void*)lbl_8033AEAC);

    fn_80028760((void*)lbl_802F99A8);
    {
        void* r3e = (void*)*(u32*)(lbl_802F99A8 + 0);
        fn_801A5F78(r3e, r31, (void*)0);
    }

    return 0;
}

// -------------------------------------------------------
// fn_801A5F40: fn_8002AEA4(), check lbl_802F99C0 nonzero
// -------------------------------------------------------
s32 fn_801A5F40(void) {
    ((void(*)(void))fn_8002AEA4)();
    u32 val = *(u32*)(lbl_802F99C0 + 0);
    u32 neg = (u32)(-(s32)val);
    u32 orv = neg | val;
    return (s32)(orv >> 31);
}

// -------------------------------------------------------
// fn_801A625C: string-to-tempo-value lookup
// -------------------------------------------------------
s32 fn_801A625C(void* r3) {
    void* r31 = r3;

    if (r31 == fn_80019F0C((void*)(lbl_80284F48 + 0x1e6))) return 0xa;
    if (r31 == fn_80019F0C((void*)(lbl_80284F48 + 0x1ef))) return 0x14;
    if (r31 == fn_80019F0C((void*)(lbl_80284F48 + 0x1fa))) return 0x50;
    if (r31 == fn_80019F0C((void*)(lbl_80284F48 + 0x206))) return 0xa;
    if (r31 == fn_80019F0C((void*)(lbl_80284F48 + 0x211))) return 0xa;

    // Last entry: nor/srawi/and pattern -> 0x50 if match, 0 if not
    {
        void* r3s = fn_80019F0C((void*)(lbl_80284F48 + 0x21d));
        u32 r4 = (u32)r31 - (u32)r3s;
        u32 r0 = (u32)r3s - (u32)r31;
        u32 nor_val = ~(r4 | r0);
        s32 masked = (s32)nor_val >> 31;
        return 0x50 & masked;
    }
}

// -------------------------------------------------------
// fn_801A634C: large battle forecast/combat resolve (stub)
// -------------------------------------------------------
s32 fn_801A634C(void* r3, void* r4, void* r5, void* r6) {
    (void)r3; (void)r4; (void)r5; (void)r6;
    return 1;
}

// -------------------------------------------------------
// fn_801A6864: update lbl_802FA298 motion data from lbl_8033A708
// -------------------------------------------------------
void fn_801A6864(void* r3) {
    void* r31 = r3;

    // Pick the right sub-unit based on cac bit 31
    void* target;
    if (*(u32*)((u8*)r31 + 0xcac) & 1u) {
        target = r31;
    } else {
        target = (void*)((u8*)r31 + 0x2e0);
    }

    // Get motion sound object
    void* r3p = (void*)*(u32*)((u8*)target + 0x2b0);
    if (!r3p) {
        *(u32*)((u8*)r31 + 0xcb0) = 0;
    } else {
        void* result = fn_8005B43C((void*)((u8*)lbl_8033A708 + 0x504), 0, (void*)0);
        *(u32*)((u8*)r31 + 0xcb0) = (u32)result;
    }

    u8 sda = lbl_8037552A;
    void* cb4 = fn_8005B394(sda);
    *(u32*)((u8*)r31 + 0xcb4) = (u32)cb4;
    *(u32*)((u8*)r31 + 0xcb8) = (u32)sda;
}

// -------------------------------------------------------
// fn_801A68E4: compute r30 = speed factor for unit based on state
// -------------------------------------------------------
s32 fn_801A68E4(void* r3, s32 r4) {
    void* r31 = r3;
    s32 r30;

    if (!r4) {
        // Check primary unit (r31)
        void* r3eq = fn_801AA43C(r31);
        void* eq0 = (void*)*(u32*)((u8*)r3eq + 0);
        if (!eq0) {
            r30 = 0;
            goto done;
        }
        // Check flags
        {
            u16 f = *(u16*)((u8*)r31 + 0x1a4);
            if (((f >> (31 - 24)) & 7) || (((u8*)r31)[0x1a5] & 7)) {
                r30 = 0;
                goto done;
            }
        }
        r30 = 1;
        // Check equip item flags via fn_8001CC6C
        {
            void* r3cc = fn_8001CC6C(r31);
            u32 w0 = *(u32*)((u8*)r3cc + 0);
            u32 w1 = *(u32*)((u8*)r3cc + 4);
            if ((w0 & 0) | (w1 & 0x20)) { // li r4, 0; li r3, 0x20
                r30 <<= 1;
            }
        }
        // Check cac bit 22
        {
            u32 cac = *(u32*)((u8*)r31 + 0xcac);
            if (cac & (1u << (31 - 22))) goto done;
        }
        // Check hp range
        {
            s16 hp57c = *(s16*)((u8*)r31 + 0x57c);
            s16 hp29c = *(s16*)((u8*)r31 + 0x29c);
            if (hp29c < hp57c + 4) goto done;
            r30 <<= 1;
        }
    } else {
        // Check secondary unit (r31+0x2e0)
        void* r3eq = fn_801AA43C((void*)((u8*)r31 + 0x2e0));
        void* eq0 = (void*)*(u32*)((u8*)r3eq + 0);
        if (!eq0) {
            r30 = 0;
            goto done2;
        }
        {
            u16 f = *(u16*)((u8*)r31 + 0x484);
            if (((f >> (31 - 24)) & 7) || (((u8*)r31)[0x485] & 7)) {
                r30 = 0;
                goto done2;
            }
        }
        r30 = 1;
        {
            void* r3cc = fn_8001CC6C((void*)((u8*)r31 + 0x2e0));
            u32 w0 = *(u32*)((u8*)r3cc + 0);
            u32 w1 = *(u32*)((u8*)r3cc + 4);
            if ((w0 & 0) | (w1 & 0x20)) {
                r30 <<= 1;
            }
        }
        {
            u32 cac = *(u32*)((u8*)r31 + 0xcac);
            if (cac & (1u << (31 - 22))) goto done2;
        }
        {
            s16 hp29c = *(s16*)((u8*)r31 + 0x29c);
            s16 hp57c = *(s16*)((u8*)r31 + 0x57c);
            if (hp57c < hp29c + 4) goto done2;
            r30 <<= 1;
        }
done2:;
    }
    goto ret;
done:;
ret:
    return r30;
}

// -------------------------------------------------------
// fn_801A6A5C: resolve which sub-unit slot is "active" for r3
// Returns: r3 itself, r3+0x2e0, or 0
// -------------------------------------------------------
void* fn_801A6A5C(void* r3) {
    u32 cac = *(u32*)((u8*)r3 + 0xcac);

    // Check bit 23 (rlwinm. r0, r4, 0, 23, 23)
    if (cac & (1u << (31 - 23))) {
        return (void*)0;
    }

    // Check bit 31 (clrlwi. r0, r4, 31)
    if (cac & 1u) {
        // Primary path: check 0x1a8
        s8 v = (s8)((u8*)r3)[0x1a8];
        if (!v) return r3;
        return (void*)0;
    } else {
        // Secondary path: check 0x488
        s8 v488 = (s8)((u8*)r3)[0x488];
        if (!v488) return (void*)((u8*)r3 + 0x2e0);
        // Also check 0x1a8
        s8 v1a8 = (s8)((u8*)r3)[0x1a8];
        if (!v1a8) return r3;
        return (void*)0;
    }
}

// -------------------------------------------------------
// fn_801A6AF4: simplified version - returns r3, r3+0x2e0, or 0
// -------------------------------------------------------
void* fn_801A6AF4(void* r3) {
    u32 cac = *(u32*)((u8*)r3 + 0xcac);

    if (cac & (1u << (31 - 23))) return (void*)0;

    if (cac & 1u) {
        s8 v = (s8)((u8*)r3)[0x1a8];
        if (!v) return r3;
        return (void*)0;
    } else {
        s8 v488 = (s8)((u8*)r3)[0x488];
        if (!v488) return (void*)((u8*)r3 + 0x2e0);
        s8 v1a8 = (s8)((u8*)r3)[0x1a8];
        if (!v1a8) return r3;
        return (void*)0;
    }
}

// -------------------------------------------------------
// fn_801A6B4C: set cac|8, call fn_801ABB44, then init battle sequence
// -------------------------------------------------------
void fn_801A6B4C(void* r3) {
    void* r31 = r3;

    *(u32*)((u8*)r31 + 0xcac) |= 8u;
    fn_801ABB44(r31, 0);

    fn_801A8454(r31, r31, (void*)((u8*)r31 + 0x2e0), 0);

    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x54, 0);

    fn_801AA6B0(r31);

    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x20, 0);
    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x50, 0);
    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x25, 0);

    fn_801AA458(r31);
}

// -------------------------------------------------------
// fn_801A6BE8: set cac|8, run battle sequence with extra cls arg
// -------------------------------------------------------
void fn_801A6BE8(void* r3, void* r4, void* r5) {
    void* r29 = r3;
    void* r30 = r5;

    *(u32*)((u8*)r29 + 0xcac) |= 8u;
    fn_801ABB44(r29, 0);

    fn_801A8454(r29, r29, (void*)((u8*)r29 + 0x2e0), 0);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x54, 0);
    fn_801AA6B0(r29);

    void* r31 = r30;
    {
        s8 cls = fn_8003B470(r29);
        s8 base = (s8)((u8*)r29)[0x1a8];
        s8 extra = (s8)(u32)r30;
        s8 result = fn_800AAA84(cls, base, extra); // extsb r4,r3; extsb r3,r31; extsb r5,r30
        s8 combined = (s8)((s32)result + (s32)(s8)((u8*)r29)[0x1a8]);
        fn_8003838C(r29, combined);
    }

    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x20, 0);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x9, (s32)(u32)r31);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x50, 0);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x25, 0);

    fn_801AA458(r29);
    (void)r4;
}

// -------------------------------------------------------
// fn_801A6CDC: set speed target for unit, dispatch speed events
// -------------------------------------------------------
void fn_801A6CDC(void* r3, s32 r4) {
    void* r30 = r3;

    u8 target = fn_8003D234(r30, (u8)r4);
    u8 max_spd = fn_8003D2DC(r30);

    u8 r31 = (u8)target;
    if ((u32)r31 > (u32)(u8)max_spd) {
        r31 = fn_8003D2DC(r30);
    }

    if (!(u8)r31) return;

    fn_80034208((void*)((u8*)r30 + 0x8a0), 0x25, 0);

    {
        s8 spd = fn_80038850(r30);
        fn_80034208((void*)((u8*)r30 + 0x8a0), 0x27, (s32)spd);
    }

    fn_80034208((void*)((u8*)r30 + 0x8a0), 0x28, (s32)(s8)r31);

    fn_8003539C(r30, (s32)r31, r30, (void*)((u8*)r30 + 0x8a0), 0);
}

// -------------------------------------------------------
// fn_801A6D90: set cac|4, call fn_801A8454, dispatch 0x54 event
// -------------------------------------------------------
void fn_801A6D90(void* r3) {
    void* r31 = r3;

    *(u32*)((u8*)r31 + 0xcac) |= 4u;
    fn_801A8454(r31, r31, (void*)((u8*)r31 + 0x2e0), 0);
    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x54, 0);
}

// -------------------------------------------------------
// fn_801A6DE4: set cac|4, call fn_801ABB44, fn_801A8454, dispatch events
// -------------------------------------------------------
void fn_801A6DE4(void* r3, u8 r4) {
    void* r31 = r3;

    *(u32*)((u8*)r31 + 0xcac) |= 4u;
    fn_801ABB44(r31, 0);
    fn_801A8454(r31, r31, (void*)((u8*)r31 + 0x2e0), 0);
    fn_80034208((void*)((u8*)r31 + 0x8a0), 0x54, 0);

    {
        void* r4eq = fn_801AA43C(r31);
        fn_801AADA4(r31, r4eq);
    }

    fn_801AA458(r31);
    (void)r4;
}

// -------------------------------------------------------
// fn_801A6E5C: dispatch 0x20 event, then 0x52 or 0x50 based on r4
// -------------------------------------------------------
void fn_801A6E5C(void* r3, s32 r4) {
    void* r30 = r3;
    s32 r31 = r4;

    fn_80034208((void*)((u8*)r30 + 0x8a0), 0x20, 0);

    u32 code = r31 ? 0x52u : 0x50u;
    fn_80034208((void*)((u8*)r30 + 0x8a0), (s32)(u8)code, 0);
}

// -------------------------------------------------------
// fn_801A6EC0: update class with tempo offset, dispatch events
// -------------------------------------------------------
void fn_801A6EC0(void* r3, s32 r4) {
    void* r29 = r3;
    s32 r30 = r4;

    u8 r31b = ((u8*)r29)[0x1a8];
    s8 cls = fn_8003B470(r29);
    s8 base = (s8)r31b;
    s8 extra = (s8)r30;
    s8 result = fn_800AAA84(cls, base, extra);
    s8 combined = (s8)((s32)result + (s32)(s8)((u8*)r29)[0x1a8]);
    fn_8003838C(r29, combined);

    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x20, 0);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x9, (s32)result);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x50, 0);

    {
        s8 v1a8 = (s8)((u8*)r29)[0x1a8];
        if (v1a8 <= 0) {
            fn_80034208((void*)((u8*)r29 + 0x8a0), 0xb, 0);
        }
    }
}

// -------------------------------------------------------
// fn_801A6F78: update secondary slot class with tempo offset
// -------------------------------------------------------
void fn_801A6F78(void* r3, s8 r4) {
    void* r29 = r3;
    s8 r30 = r4;

    u8 r31b = ((u8*)r29)[0x488];
    s8 cls = fn_8003B470((void*)((u8*)r29 + 0x2e0));
    s8 base = (s8)r31b;
    s8 result = fn_800AAA84(cls, base, r30);
    s8 combined = (s8)((s32)result + (s32)(s8)((u8*)r29)[0x488]);
    fn_8003838C((void*)((u8*)r29 + 0x2e0), combined);

    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x20, 0);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x15, (s32)result);
    fn_80034208((void*)((u8*)r29 + 0x8a0), 0x50, 0);
}

// -------------------------------------------------------
// fn_801A7018: call fn_801ABF40 on both slots, fn_800350E0,
//              conditionally update lbl_80335B58 with unit position
// -------------------------------------------------------
void fn_801A7018(void* r3) {
    void* r31 = r3;

    fn_801ABF40(r31);
    if (!(*(u32*)((u8*)r31 + 0xcac) & 1u)) {
        fn_801ABF40((void*)((u8*)r31 + 0x2e0));
    }

    fn_800350E0(r31);
    if (!(*(u32*)((u8*)r31 + 0xcac) & 1u)) {
        fn_800350E0((void*)((u8*)r31 + 0x2e0));
    }

    if (*(u32*)((u8*)r31 + 0xcac) & (1u << (31 - 23))) {
        void* r3r = fn_8011072C((void*)lbl_80335B58,
            ((u8*)r31)[0x47e], ((u8*)r31)[0x47f], 4);
        ((u8*)r3r)[4] = ((u8*)r31)[0x488];

        if (!(s8)((u8*)r31)[0x488]) {
            fn_80110610((void*)lbl_80335B58,
                ((u8*)r31)[0x47e], ((u8*)r31)[0x47f], 4);
        }
    }
}

// -------------------------------------------------------
// fn_801A70C4: large battle init (stub)
// -------------------------------------------------------
void fn_801A70C4(void* r3) {
    (void)r3;
}

// -------------------------------------------------------
// fn_801A7440: large battle update (stub)
// -------------------------------------------------------
void fn_801A7440(void* r3, void* r4, void* r5, void* r6) {
    (void)r3; (void)r4; (void)r5; (void)r6;
}

// -------------------------------------------------------
// fn_801A76A0: large battle phase update (stub)
// -------------------------------------------------------
void fn_801A76A0(void* r3, void* r4, void* r5, void* r6) {
    (void)r3; (void)r4; (void)r5; (void)r6;
}

// -------------------------------------------------------
// fn_801A7A0C: very large battle dispatch (stub)
// -------------------------------------------------------
s32 fn_801A7A0C(void* r3, void* r4, void* r5, void* r6) {
    (void)r3; (void)r4; (void)r5; (void)r6;
    return 1;
}

// fn_801A8454 is extern declared above


// ================================================================
// BATCH 3
// ================================================================

// Additional externs for batch 3
extern "C" void  fn_801AC300(void*);
extern "C" void  fn_80034290(void*);
extern "C" void  fn_801AC100(void*, void*);
extern "C" void  fn_801ABC64(void*, s32, s8);
extern "C" void  fn_801ABA48(void*, void*);
extern "C" void  fn_801ABE30(void*, void*);
extern "C" void  fn_801AB8F8(void*);
extern "C" void  fn_801AAAD0(void*);
extern "C" void  fn_801AAA3C(void*);
extern "C" s8    fn_801AAE70(void*);
extern "C" u8    fn_801064C4(void*, s32);
extern "C" void  fn_80106524(void*, s32);
extern "C" void  fn_801AB8E4(void*);
extern "C" void  fn_800342C0(void*);
extern "C" void  fn_8003357C(void*, s32);
extern "C" void  fn_800334DC(void*, s32);
extern "C" void  fn_80033374(void*, s32);
extern "C" void  fn_8001D6C8(void*);
extern "C" void  fn_801AC054(void*, void*);

extern u8  lbl_80285200[];
extern u8  lbl_80285210[];
extern u8  lbl_80285220[];

// -------------------------------------------------------
// Static inline helper: check equip flags via fn_8001CC6C
// Pattern: li r4, 0x0; li r3, N; and/xor/or. -> nonzero if (w1 & N)
// -------------------------------------------------------
static inline s32 check_equip_flags(void* ptr, u32 mask1) {
    void* r3 = fn_8001CC6C(ptr);
    u32 w0 = *(u32*)((u8*)r3 + 0);
    u32 w1 = *(u32*)((u8*)r3 + 4);
    u32 r0 = w0 & 0;
    u32 r3v = w1 & mask1;
    return (s32)(r0 | r3v);
}

// -------------------------------------------------------
// fn_801A5F78: large action dispatch table
// -------------------------------------------------------
void fn_801A5F78(void* r3, void* r4, void* r5) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;

    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x22c))) {
        fn_8019ED30(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x23a))) {
        fn_8019EDC0(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x248))) {
        fn_8019ED78(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x256))) {
        fn_8019ECE8(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x261))) {
        fn_8019EBF8(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x1e6))) {
        fn_8019EA18(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x1ef))) {
        fn_8019E9D0(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x1fa))) {
        fn_8019E988(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x206))) {
        fn_8019E940(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x211))) {
        fn_8019E850(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x26f))) {
        fn_8019E808(r30, r31); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x278))) {
        fn_8019E7C0(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x284))) {
        fn_8019E778(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x28e))) {
        fn_8019E730(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x29b))) {
        fn_8019E6E8(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x2a7))) {
        fn_8019EBB0(r30, 0); return;
    }
    if (r29 == fn_80019F0C((void*)(lbl_80284F48 + 0x21d))) {
        fn_8019E850(r30, r31); return;
    }
}

// -------------------------------------------------------
// Static inline helper used by fn_801A8454, fn_801A93FC, etc.
// Pattern: li r4,0; and r0,r0,r4; li r3,N; and r3,r5,r3; xor/or.
// Returns nonzero if w1 & mask is nonzero
// -------------------------------------------------------
static inline s32 equip_flag_check(void* r3cc, u32 mask) {
    u32 w0 = *(u32*)((u8*)r3cc + 0);
    u32 w1 = *(u32*)((u8*)r3cc + 4);
    u32 a = w0 & 0;
    u32 b = w1 & mask;
    u32 xa = a ^ 0;
    u32 xb = b ^ 0;
    return (s32)(xa | xb);
}

// -------------------------------------------------------
// fn_801A8454: full battle init
// -------------------------------------------------------
void fn_801A8454(void* r3, void* r4, void* r5, s32 r6) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;

    // Initialize structs at r29, r29+0x2e0, r29+0x5c0
    // Pack lbl_80285210 fields and unit positions into stack frame
    u32 stk8  = *(u32*)(lbl_80285210 + 0);
    u32 stk_c = *(u32*)(lbl_80285210 + 4);
    u32 stk10 = *(u32*)(lbl_80285210 + 8);
    u32 stk14 = *(u32*)(lbl_80285210 + 0xc);
    u32 stk18 = *(u32*)(lbl_80285200 + 0);
    u32 stk1c = *(u32*)(lbl_80285200 + 4);
    u32 stk20 = *(u32*)(lbl_80285200 + 8);
    u32 stk24 = *(u32*)(lbl_80285200 + 0xc);

    u8 r10 = ((u8*)r31)[0x19e];
    u8 r9  = ((u8*)r31)[0x19f];
    u8 r6b = ((u8*)r30)[0x19e];
    u8 r0b = ((u8*)r30)[0x19f];

    fn_801AC300(r29);
    fn_801AC300((void*)((u8*)r29 + 0x2e0));
    fn_801AC300((void*)((u8*)r29 + 0x5c0));
    fn_80034290((void*)((u8*)r29 + 0x8a0));

    *(u32*)((u8*)r29 + 0xca8) = 0;
    *(u32*)((u8*)r29 + 0xcac) = 0;
    *(u32*)((u8*)r29 + 0xcb0) = 0;
    *(u32*)((u8*)r29 + 0xcb4) = 0;
    *(u32*)((u8*)r29 + 0xcbc) = 0;
    *(u32*)((u8*)r29 + 0xcc0) = 0;

    fn_801AC100(r29, r30);
    fn_801AC100((void*)((u8*)r29 + 0x2e0), r31);

    fn_8003830C(r29, (s8)r6b, (s8)r0b);
    fn_8003830C((void*)((u8*)r29 + 0x2e0), (s8)r10, (s8)r9);

    fn_800230A4((void*)lbl_802D49F8, 6);
    fn_800201E8((void*)lbl_802D49F8,
        ((u8*)r29)[0x19e], ((u8*)r29)[0x19f],
        0x64, (void*)0, 0xf, 0);

    // Compute attack range index from cursor position
    {
        s8 col = (s8)((u8*)r29)[0x47e];
        s8 row = (s8)((u8*)r29)[0x47f];
        s32 idx = (s32)col + ((s32)row << 6);
        u8* tbl = (u8*)lbl_802D49F8 + 0x10000;
        u16* range_tbl = (u16*)((u8*)tbl + 0x4190);
        s32 score = (s32)(s16)range_tbl[idx];
        *(u32*)((u8*)r29 + 0xca8) = (u32)score;
    }

    void* r30p = (void*)*(u32*)((u8*)r30 + 0); // stk18 (unit ptr from r30)
    (void)r30p;

    if (!r6) {
        // No partner override
        if (!((u8*)r31)[0]) {
            // No extra flag at r31[0]
            s8 mode = (s8)((u8*)r31)[0];
            fn_801ABC64(r29, (s32)*(u32*)((u8*)r29 + 0xca8), mode);
        } else {
            s8 mode = (s8)((u8*)r31)[0];
            fn_801ABB44(r29, (s32)mode);
        }
    } else {
        fn_801ABA48(r29, r6);

        void* r3cc = fn_8001CC6C(r6);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r29);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r29 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r29 + 0x2e0));
                fn_8001D6C8(r29);
            }
        }
    }

    // Secondary unit setup
    {
        void* r31p2 = r31;
        (void)r31p2;
        if (!((u8*)r31)[0x10]) {
            if (!((u8*)r31)[0xf]) {
                s8 mode = (s8)((u8*)r31)[0xe];
                fn_801ABC64((void*)((u8*)r29 + 0x2e0),
                    (s32)*(u32*)((u8*)r29 + 0xca8), mode);
            } else {
                s8 mode = (s8)((u8*)r31)[0xe];
                fn_801ABB44((void*)((u8*)r29 + 0x2e0), (s32)mode);
            }
        } else {
            fn_801ABA48((void*)((u8*)r29 + 0x2e0), r31);
        }
    }

    fn_801ABE30((void*)((u8*)r29 + 0x2e0), r29);

    if (((u8*)r29)[0x24]) fn_801AB8F8(r29);
    if (((u8*)r29)[0x14]) fn_801AB8F8((void*)((u8*)r29 + 0x2e0));
    (void)stk8; (void)stk_c; (void)stk10; (void)stk14;
    (void)stk18; (void)stk1c; (void)stk20; (void)stk24;
    (void)r6b; (void)r0b; (void)r10; (void)r9;
}

// -------------------------------------------------------
// fn_801A8930: large battle phase update (stub)
// -------------------------------------------------------
void fn_801A8930(void* r3, void* r4, void* r5) {
    (void)r3; (void)r4; (void)r5;
}

// -------------------------------------------------------
// fn_801A9060: large battle process (stub)
// -------------------------------------------------------
void fn_801A9060(void* r3, void* r4, s32 r5) {
    (void)r3; (void)r4; (void)r5;
}

// -------------------------------------------------------
// fn_801A937C: call fn_801A8454 twice, fn_801A9060, reset ca4, dispatch 0x54
// -------------------------------------------------------
void fn_801A937C(void* r3, void* r4) {
    void* r30 = r3;
    void* r31 = r4;

    fn_801A8454(r30, r30, (void*)((u8*)r30 + 0x2e0), 0);

    fn_801A9060(r30, r31, 1);

    ((u8*)r30)[0xca4] = 0;
    fn_801A8454(r30, r30, (void*)((u8*)r30 + 0x2e0), 0);
    fn_80034208((void*)((u8*)r30 + 0x8a0), 0x54, 0);
}

// -------------------------------------------------------
// Helper: setup stack block from lbl_80285220 + unit coords
// Used by fn_801A93FC, fn_801A9660, fn_801A9A24
// -------------------------------------------------------
static inline void setup_ac300_block_220(void* stk8, void* r4, s8 extra_e) {
    // stk block: [0]=unit ptr, [4..7]=col, [8..b]=row, [c]=flags byte
    // This just does the AC300 calls
    (void)stk8; (void)r4; (void)extra_e;
}

// -------------------------------------------------------
// fn_801A93FC: init battle from lbl_80285220, then fn_801A8454
// -------------------------------------------------------
void fn_801A93FC(void* r3, void* r4, void* r5) {
    void* r30 = r3;
    void* r31 = r5;

    // Read lbl_80285220 block onto stack
    // Build stack block (cols/rows from r4->0x19e/0x19f)
    u8 col = ((u8*)r4)[0x19e];
    u8 row = ((u8*)r4)[0x19f];

    fn_801AC300(r30);
    fn_801AC300((void*)((u8*)r30 + 0x2e0));
    fn_801AC300((void*)((u8*)r30 + 0x5c0));
    fn_80034290((void*)((u8*)r30 + 0x8a0));

    *(u32*)((u8*)r30 + 0xca8) = 0;
    *(u32*)((u8*)r30 + 0xcac) = 0;
    *(u32*)((u8*)r30 + 0xcb0) = 0;
    *(u32*)((u8*)r30 + 0xcb4) = 0;
    *(u32*)((u8*)r30 + 0xcbc) = 0;
    *(u32*)((u8*)r30 + 0xcc0) = 0;

    fn_801AC100(r30, r4);
    fn_8003830C(r30, (s8)col, (s8)row);

    *(u32*)((u8*)r30 + 0xcac) |= 1u;

    void* r29 = (void*)*(u32*)(lbl_80285220 + 0x8); // from stk[0x10]

    if (!r29) {
        // No override partner
        u8 fl = ((u8*)lbl_80285220)[0xf - 0x8]; // from stk[0xf]
        if (!fl) {
            s8 mode = (s8)((u8*)lbl_80285220)[0xe - 0x8];
            fn_801ABC64(r30, (s32)*(u32*)((u8*)r30 + 0xca8), mode);
        } else {
            s8 mode = (s8)((u8*)lbl_80285220)[0xe - 0x8];
            fn_801ABB44(r30, (s32)mode);
        }
    } else {
        fn_801ABA48(r30, r29);
        void* r3cc = fn_8001CC6C(r29);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r30);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r30 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r30 + 0x2e0));
                fn_8001D6C8(r30);
            }
        }
    }

    if (((u8*)lbl_80285220)[0x14 - 0x8]) fn_801AB8F8(r30);

    fn_801ABA48(r30, r31);
    void* r3cc3 = fn_8001CC6C(r31);
    if (equip_flag_check(r3cc3, 0x1000)) {
        void* r3eq2 = fn_801AA43C(r30);
        void* r3cc4 = fn_8001CC6C(r3eq2);
        if (equip_flag_check(r3cc4, 0x4f)) {
            *(u32*)((u8*)r30 + 0xcac) |= 0x200;
            fn_801AA43C((void*)((u8*)r30 + 0x2e0));
            fn_8001D6C8(r30);
        }
    }

    fn_801A8454(r30, r30, (void*)0, 0);
    (void)col; (void)row;
}

// -------------------------------------------------------
// fn_801A9660: init from lbl_80285220, single unit, then fn_801A8454
// -------------------------------------------------------
void fn_801A9660(void* r3, void* r4, s8 r5) {
    void* r31 = r3;

    u8 col = ((u8*)r4)[0x19e];
    u8 row = ((u8*)r4)[0x19f];

    fn_801AC300(r31);
    fn_801AC300((void*)((u8*)r31 + 0x2e0));
    fn_801AC300((void*)((u8*)r31 + 0x5c0));
    fn_80034290((void*)((u8*)r31 + 0x8a0));

    *(u32*)((u8*)r31 + 0xca8) = 0;
    *(u32*)((u8*)r31 + 0xcac) = 0;
    *(u32*)((u8*)r31 + 0xcb0) = 0;
    *(u32*)((u8*)r31 + 0xcb4) = 0;
    *(u32*)((u8*)r31 + 0xcbc) = 0;
    *(u32*)((u8*)r31 + 0xcc0) = 0;

    fn_801AC100(r31, r4);
    fn_8003830C(r31, (s8)col, (s8)row);

    *(u32*)((u8*)r31 + 0xcac) |= 1u;

    void* r30 = (void*)*(u32*)(lbl_80285220 + 0x8);

    if (!r30) {
        u8 fl = (u8)(lbl_80285220)[0xf - 0x8];
        if (!fl) {
            fn_801ABC64(r31, (s32)*(u32*)((u8*)r31 + 0xca8), r5);
        } else {
            fn_801ABB44(r31, (s32)r5);
        }
    } else {
        fn_801ABA48(r31, r30);
        void* r3cc = fn_8001CC6C(r30);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r31);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r31 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r31 + 0x2e0));
                fn_8001D6C8(r31);
            }
        }
    }

    if (lbl_80285220[0x14 - 0x8]) fn_801AB8F8(r31);

    fn_801A8454(r31, r31, (void*)0, 0);
    (void)col; (void)row;
}

// -------------------------------------------------------
// fn_801A982C: init battle from data blocks r30/r31, with single unit
// -------------------------------------------------------
void fn_801A982C(void* r3, void* r4, void* r5) {
    void* r30 = r3;
    void* r29 = r4;
    void* r31 = r5;

    fn_801AC300(r30);
    fn_801AC300((void*)((u8*)r30 + 0x2e0));
    fn_801AC300((void*)((u8*)r30 + 0x5c0));
    fn_80034290((void*)((u8*)r30 + 0x8a0));

    *(u32*)((u8*)r30 + 0xca8) = 0;
    *(u32*)((u8*)r30 + 0xcac) = 0;
    *(u32*)((u8*)r30 + 0xcb0) = 0;
    *(u32*)((u8*)r30 + 0xcb4) = 0;
    *(u32*)((u8*)r30 + 0xcbc) = 0;
    *(u32*)((u8*)r30 + 0xcc0) = 0;

    fn_801AC100(r30, r29);
    fn_801AC054((void*)((u8*)r30 + 0x2e0), (void*)0);

    *(u32*)((u8*)r30 + 0x560) = 0;

    fn_800230A4((void*)lbl_802D49F8, 6);
    fn_800201E8((void*)lbl_802D49F8,
        ((u8*)r30)[0x19e], ((u8*)r30)[0x19f],
        0x64, (void*)0, 0xf, 0);

    // Compute range score from cursor position
    {
        s8 col = (s8)((u8*)r30)[0x47e];
        s8 row = (s8)((u8*)r30)[0x47f];
        s32 idx = (s32)col + ((s32)row << 6);
        u16* tbl = (u16*)((u8*)lbl_802D49F8 + 0x10000 + 0x4190);
        *(u32*)((u8*)r30 + 0xca8) = (u32)(s32)(s16)tbl[idx];
    }

    ((u8*)r30)[0x48b] = ((u8*)r31)[5];
    fn_8003838C((void*)((u8*)r30 + 0x2e0), (s8)((u8*)r31)[4]);

    *(u32*)((u8*)r30 + 0x474) = 0;
    fn_8003830C((void*)((u8*)r30 + 0x2e0), ((u8*)r31)[0], ((u8*)r31)[1]);

    *(u32*)((u8*)r30 + 0xcac) |= 0x101u;

    fn_801ABC64(r30, (s32)*(u32*)((u8*)r30 + 0xca8), (s8)-1);
    fn_801AB8F8(r30);
}

// -------------------------------------------------------
// fn_801A9970: check equip flags on r30, conditionally set cac|0x200
// -------------------------------------------------------
void fn_801A9970(void* r3, void* r4) {
    void* r31 = r3;
    void* r30 = r4;

    fn_801ABA48(r31, r30);

    {
        void* r3cc = fn_8001CC6C(r30);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r31);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r31 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r31 + 0x2e0));
                fn_8001D6C8(r31);
            }
        }
    }
}

// -------------------------------------------------------
// fn_801A9A24: init from lbl_80285220, with unit r4 and signed byte r5
// -------------------------------------------------------
void fn_801A9A24(void* r3, void* r4, s32 r5) {
    void* r31 = r3;

    u8 col = ((u8*)r4)[0x19e];
    u8 row = ((u8*)r4)[0x19f];

    fn_801AC300(r31);
    fn_801AC300((void*)((u8*)r31 + 0x2e0));
    fn_801AC300((void*)((u8*)r31 + 0x5c0));
    fn_80034290((void*)((u8*)r31 + 0x8a0));

    *(u32*)((u8*)r31 + 0xca8) = 0;
    *(u32*)((u8*)r31 + 0xcac) = 0;
    *(u32*)((u8*)r31 + 0xcb0) = 0;
    *(u32*)((u8*)r31 + 0xcb4) = 0;
    *(u32*)((u8*)r31 + 0xcbc) = 0;
    *(u32*)((u8*)r31 + 0xcc0) = 0;

    fn_801AC100(r31, r4);
    fn_8003830C(r31, (s8)col, (s8)row);

    *(u32*)((u8*)r31 + 0xcac) |= 1u;

    void* r30 = (void*)*(u32*)(lbl_80285220 + 0x8); // from stk[0x10]

    if (!r30) {
        u8 fl = lbl_80285220[0xf - 0x8];
        if (!fl) {
            fn_801ABC64(r31, (s32)*(u32*)((u8*)r31 + 0xca8), (s8)r5);
        } else {
            fn_801ABB44(r31, (s32)(s8)r5);
        }
    } else {
        fn_801ABA48(r31, r30);
        void* r3cc = fn_8001CC6C(r30);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r31);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r31 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r31 + 0x2e0));
                fn_8001D6C8(r31);
            }
        }
    }

    if (lbl_80285220[0x14 - 0x8]) fn_801AB8F8(r31);
    (void)col; (void)row;
}

// -------------------------------------------------------
// fn_801A9BDC: full two-unit battle init (stub - 5th attachment)
// -------------------------------------------------------
void fn_801A9BDC(void* r3, void* r4, void* r5) {
    (void)r3; (void)r4; (void)r5;
}

// -------------------------------------------------------
// fn_801A9EB0: init battle from data blocks r30/r31 (two units)
// -------------------------------------------------------
void fn_801A9EB0(void* r3, void* r4, void* r5) {
    void* r29 = r3;
    void* r30 = r4;
    void* r31 = r5;

    fn_801AC300(r29);
    fn_801AC300((void*)((u8*)r29 + 0x2e0));
    fn_801AC300((void*)((u8*)r29 + 0x5c0));
    fn_80034290((void*)((u8*)r29 + 0x8a0));

    *(u32*)((u8*)r29 + 0xca8) = 0;
    *(u32*)((u8*)r29 + 0xcac) = 0;
    *(u32*)((u8*)r29 + 0xcb0) = 0;
    *(u32*)((u8*)r29 + 0xcb4) = 0;
    *(u32*)((u8*)r29 + 0xcbc) = 0;
    *(u32*)((u8*)r29 + 0xcc0) = 0;

    fn_801AC100(r29, (void*)*(u32*)((u8*)r30 + 0));
    fn_801AC100((void*)((u8*)r29 + 0x2e0), (void*)*(u32*)((u8*)r31 + 0));

    fn_8003830C(r29, (s8)((u8*)r30)[4], (s8)((u8*)r30)[5]);
    fn_8003830C((void*)((u8*)r29 + 0x2e0), (s8)((u8*)r31)[4], (s8)((u8*)r31)[5]);

    fn_800230A4((void*)lbl_802D49F8, 6);
    fn_800201E8((void*)lbl_802D49F8,
        ((u8*)r29)[0x19e], ((u8*)r29)[0x19f],
        0x64, (void*)0, 0xf, 0);

    {
        s8 col = (s8)((u8*)r29)[0x47e];
        s8 row = (s8)((u8*)r29)[0x47f];
        s32 idx = (s32)col + ((s32)row << 6);
        u16* tbl = (u16*)((u8*)lbl_802D49F8 + 0x10000 + 0x4190);
        *(u32*)((u8*)r29 + 0xca8) = (u32)(s32)(s16)tbl[idx];
    }

    void* r28 = (void*)*(u32*)((u8*)r30 + 8);

    if (!r28) {
        if (!((u8*)r30)[7]) {
            fn_801ABC64(r29, (s32)*(u32*)((u8*)r29 + 0xca8), (s8)((u8*)r30)[6]);
        } else {
            fn_801ABB44(r29, (s32)(s8)((u8*)r30)[6]);
        }
    } else {
        fn_801ABA48(r29, r28);
        void* r3cc = fn_8001CC6C(r28);
        if (equip_flag_check(r3cc, 0x1000)) {
            void* r3eq = fn_801AA43C(r29);
            void* r3cc2 = fn_8001CC6C(r3eq);
            if (equip_flag_check(r3cc2, 0x4f)) {
                *(u32*)((u8*)r29 + 0xcac) |= 0x200;
                fn_801AA43C((void*)((u8*)r29 + 0x2e0));
                fn_8001D6C8(r29);
            }
        }
    }

    if (((u8*)r30)[0xc]) fn_801AB8F8(r29);

    // Secondary unit setup
    {
        void* r28s = (void*)*(u32*)((u8*)r31 + 8);
        if (!r28s) {
            if (!((u8*)r31)[7]) {
                fn_801ABC64((void*)((u8*)r29 + 0x2e0),
                    (s32)*(u32*)((u8*)r29 + 0xca8), (s8)((u8*)r31)[6]);
            } else {
                fn_801ABB44((void*)((u8*)r29 + 0x2e0), (s32)(s8)((u8*)r31)[6]);
            }
        } else {
            fn_801ABA48((void*)((u8*)r29 + 0x2e0), r28s);
        }
    }

    fn_801ABE30((void*)((u8*)r29 + 0x2e0), r29);

    if (((u8*)r31)[0xc]) fn_801AB8F8((void*)((u8*)r29 + 0x2e0));
}

// -------------------------------------------------------
// fn_801AA124: zero all cac fields, call fn_801AC300 x3 and fn_80034290
// -------------------------------------------------------
void fn_801AA124(void* r3) {
    void* r31 = r3;

    fn_801AC300(r31);
    fn_801AC300((void*)((u8*)r31 + 0x2e0));
    fn_801AC300((void*)((u8*)r31 + 0x5c0));
    fn_80034290((void*)((u8*)r31 + 0x8a0));

    *(u32*)((u8*)r31 + 0xca8) = 0;
    *(u32*)((u8*)r31 + 0xcac) = 0;
    *(u32*)((u8*)r31 + 0xcb0) = 0;
    *(u32*)((u8*)r31 + 0xcb4) = 0;
    *(u32*)((u8*)r31 + 0xcbc) = 0;
    *(u32*)((u8*)r31 + 0xcc0) = 0;
}