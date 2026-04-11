#include <dolphin/types.h>

extern "C" u32  OSGetTick(void);
extern "C" void fn_800AAFF4(void);
extern "C" void* fn_80019EC4(u8);
extern "C" void fn_800063F0(void*, u32, s32);
extern "C" void fn_80022E78(void*, s32, s32);
extern "C" s32  fn_800FF030(void*, s8);
extern "C" s32  fn_80106398(void*, s32);
extern "C" s32  fn_8000D00C(s32);
extern "C" void fn_800153D4(void*, s32, s32, s32, s32, s32, s32, s32, s32);
extern "C" void fn_8003A364(void*);
extern "C" void fn_801102B0(void);
extern "C" void fn_8001F288(void*);
extern "C" void fn_8002307C(u32);
extern "C" s32   fn_80023090(void);

extern "C" void* fn_8000CB8C(void*, void*);
extern "C" void* fn_8000CC18(u8*, s16);
extern "C" void  fn_8000BA48(void*);
extern "C" void* fn_8000BA30(void*);
extern "C" void  fn_8000C734(void*);
extern "C" void  fn_8000C094(void*, void*);
extern "C" void  fn_8000C2B0(void*);
extern "C" void* fn_80040A0C(void);
extern "C" u8    fn_80047CD8(void*);
extern "C" void  fn_80044618(void*, s32);
extern "C" void  fn_8000A380(void);
extern "C" void  fn_80009E9C(float, float, float, float, float, float);
extern "C" void  fn_8000A29C(s32, s32);
extern "C" void  fn_8000A370(void);
extern "C" void  fn_800079D8(s32);
extern "C" void  fn_80007998(float, float);
extern "C" void  fn_80007264(void);
extern "C" void  fn_800073BC(float);
extern "C" void  fn_800073D0(s32, s32, s32, s32);
extern "C" void  fn_800079C4(void);
extern "C" void  fn_80148640(void*, s32);
extern "C" void fn_8020BDE8(void*, void*, void*);
extern "C" void fn_8020BDE8(void*, void*, void*);

extern "C" u8    fn_80168188(void*);
extern "C" void  fn_80168820(void*);
extern "C" void  fn_801688BC(void*, void*, float, float, void*);
extern "C" void  fn_801689EC(void*, void*, float, float);
extern "C" void  fn_801685E0(void*, void*, float, float);
extern "C" void  fn_801681CC(void*, void*, float, float, void*);
extern "C" void  fn_80009D28(float);
extern "C" void  fn_80009D1C(float);
extern "C" void  fn_80009CB4(s32);
extern "C" void  fn_80007918(float, float, float);
extern "C" void  fn_80007718(void);
extern "C" void  fn_800073F0(void*, void*, void*, void*);
extern "C" void  fn_80009C50(void);
extern "C" void fn_8021BA1C(u8, u8);
extern "C" void OSGetTime(void);  // actually returns u64 across r3:r4
extern "C" void fn_80235530(void*, void*, void*, void*);
extern "C" void fn_8021B71C(void);
extern "C" void fn_8021AA1C(void*);
extern "C" void fn_8002586C(void*);
extern "C" void fn_8021B3A8(u32);
extern "C" void SISetSamplingRate(s32);
extern "C" void fn_8021B5CC(void);
extern "C" void fn_8021B4B8(void);
extern "C" u8   fn_8017C420(void*);
extern "C" void fn_8017C254(void*, s32, void*);
extern "C" void fn_8017C030(void*, u8);
extern "C" void fn_8017BE74(void*, s32, void*);
extern "C" void fn_8003EA7C(void*);
extern "C" void fn_801A7018(void*);
extern "C" void fn_801A9A24(void*, void*, s32);
extern "C" void fn_801A6D90(void*);
extern "C" void fn_801A6EC0(void*, s32);
extern "C" void fn_8019DA58(void*, s32);
extern "C" void fn_800BF0D4(s32, s32, u8, u8);
extern "C" s32  fn_801F10C4(void*);
extern "C" s32  fn_801F1104(void*);
extern "C" void fn_80050E18(void*);
extern "C" void fn_801A6CDC(void*, s32);
extern "C" void fn_8019E1A8(void*, void*);
extern "C" void fn_8019E414(void*, void*);
extern "C" void fn_8019E464(void*, void*);
extern "C" void fn_8019E3C4(void*, void*);
extern "C" void fn_8019E360(void*, s32);
extern "C" void fn_8000C198(void*, s32);
extern "C" void fn_800335B8(void*);
extern "C" void fn_8002AEA4(void*, void*);
extern "C" void fn_8002AD3C(void*, void*);
extern "C" void* fn_8002F7F8(void*, s32);
extern "C" void* fn_8002F8E0(void*);  // returns void*
extern "C" void* fn_80019F0C(void*);
extern "C" s32  fn_8003B140(void);
extern "C" void fn_8021B3A8(u32);
extern "C" void* fn_8000CBC8(void*, void*);

extern u32  lbl_803753B0;
extern u8   lbl_803754D8;
extern u8   lbl_803754D9;
extern u8   lbl_803754DA;
extern u32  lbl_803754E0;
extern u8   lbl_8033AD68[];
extern u8   lbl_80271B20[];
extern u32  lbl_803770D4;
extern u32  lbl_803770B4;
extern u32  lbl_803770B0;
extern u32  lbl_8037A914;
extern u32  lbl_8037A910;
extern u32  lbl_803770AC;
extern u32  lbl_803770A8;
extern u32  lbl_803770A4;
extern u32  lbl_803770A0;
extern float lbl_803770BC;

extern u8    lbl_80271A78[];
extern u8    lbl_8028E460[];
extern u8    lbl_8028E4A0[];
extern u32   lbl_803754DC;
extern float lbl_803770B8;
extern float lbl_803770BC;
extern double lbl_803770C0;
extern float lbl_803770C8;
extern float lbl_803770CC;
extern float lbl_8037709C;
extern float lbl_80377098;

extern u8   lbl_802D49F8[];
extern u8   lbl_802D4744[];
extern u8   lbl_8033A708[];
extern u8   lbl_802BB9C4[];
extern u8   lbl_80375058[];
extern u8   lbl_80375529;
extern float lbl_80377088;
extern float lbl_8037708C;
extern double lbl_80377090;
extern float lbl_803770D0;

extern u8   lbl_802F98E8[];
extern u8   lbl_802F9918[];
extern u8   lbl_802F99A8[];
extern u8   lbl_802F99C0[];
extern u8   lbl_80271BC0[];
extern u8   lbl_80271BD0[];
extern u8   lbl_8033AEAC[];
extern u8   lbl_8028E7FC[];
extern u8   lbl_8028E6E8[];
extern u8   lbl_8028E70C[];
extern u32  lbl_803754EC;
extern u32  lbl_803754E8;
extern u8   lbl_803770D8;

void fn_80023F9C(void);
void fn_80023EE4(void*);
void fn_800263A4(void*);
void fn_80026514(void*, void*);
void fn_800266E4(void*, void*);
void fn_800267CC(void*, void*);

// fn_8001F034: loop through byte array, remap opcodes
void fn_8001F034(u8* r3) {
    while (1) {
        s8 op = (s8)r3[0];
        u8 out;
        if      (op == 0x00) { r3[0]=0x10; r3++; continue; }
        else if (op == 0x32) { out=0x4; }
        else if (op == 0x34) { out=0x1; }
        else if (op == 0x36) { out=0x2; }
        else if (op >= 0x37 && op < 0x39) { out=0x8; }
        else { r3++; continue; }
        r3[0]=out;
        r3++;
    }
}

void fn_8001F0C4(void) { }

void fn_8001F0C8(void* r3, s8 r4, s8 r5, u8 r6) {
    u8* r31   = (u8*)lbl_802D49F8;
    void* r20 = r3;
    u8 r27    = r6;
    u8* r28   = (u8*)(lbl_802D49F8 + 0x10000);
    s8 r26    = r4;
    s8 r25    = r5;
    s8 r22    = (s8)r31[9];

    while (1) {
        s8 r22e = r22;
        u8 r21  = r31[8];
        s32 r30 = (s32)r22e << 6;
        s8 r21e = (s8)r21;
        u8* r29 = r31 + r30;

        while (1) {
            s8 r21s = r21e;
            s32* r4p  = (s32*)((u8*)r28 + 0x4190);
            s32 r23  = (s32)r21s + r30;
            s32 r24  = r23 * 2;
            s32 lhax = ((s16*)r4p)[r23];
            if (lhax < 0) { r21e++; goto next_col; }
            {
                u8* rp = r29 + r21e - 0x1e72;
                if ((s8)rp[0]) { r21e++; goto next_col; }
            }
            {
                s8 r4b = r22e;
                s32 res = fn_800FF030(r3, r4b);
                if (!res) { r21e++; goto next_col; }
            }
            switch (r27) {
            case 1:
                if (r26 < r21e) {
                    s16* tp=(s16*)((u8*)r28+0x4190); tp[r23]=-1;
                    u8* rp2=(u8*)r20+(r24+0x10000)-0x3e72; *(u16*)rp2=0;
                }
                break;
            case 2:
                if (r21e < r26) {
                    s16* tp=(s16*)((u8*)r28+0x4190); tp[r23]=-1;
                    u8* rp2=(u8*)r20+(r24+0x10000)-0x3e72; *(u16*)rp2=0;
                }
                break;
            case 8:
                if (r25 < r22e) {
                    s16* tp=(s16*)((u8*)r28+0x4190); tp[r23]=-1;
                    u8* rp2=(u8*)r20+(r24+0x10000)-0x3e72; *(u16*)rp2=0;
                }
                break;
            case 4:
                if (r22e < r25) {
                    s16* tp=(s16*)((u8*)r28+0x4190); tp[r23]=-1;
                    u8* rp2=(u8*)r20+(r24+0x10000)-0x3e72; *(u16*)rp2=0;
                }
                break;
            }
            next_col: r21e++;
            {
                s8 lim = (s8)r31[10]-1;
                if (r21e > lim) break;
            }
        }
        r22++;
        {
            s8 lim = (s8)r31[11]-1;
            if (r22 > lim) break;
        }
    }
}

// fn_8001F614: bounds + direction check
s32 fn_8001F614(void* r3, s8 r4, s8 r5) {
    u8* p=(u8*)r3;
    s8 min_x=(s8)p[8], max_x=(s8)p[0xa];
    s8 min_y=(s8)p[9], max_y=(s8)p[0xb];
    if (r4 < min_x) return 0;
    if (r4 >= max_x) return 0;
    if (r5 < min_y) return 0;
    // xor/srawi/and/subf/srwi pattern: checks if r5 < max_y
    s8 m = (s8)p[0xb];
    s32 xorv = (s32)m ^ (s32)r5;
    s32 t = (xorv>>1) & xorv & m;
    t -= (xorv>>1);
    return (u32)t >> 31;
}

// fn_8001F9A4: adjacency check between two grid positions
s32 fn_8001F9A4(void* r3, s8 r4, s8 r5, s8 r6, s8 r7) {
    s32 dy = (s32)r5 - (s32)r7; if (dy<0) dy=-dy;
    s32 dx = (s32)r4 - (s32)r6; if (dx<0) dx=-dx;
    if (dx+dy != 1) return 0;
    s32 col=(s32)r4; s32 row=(s32)r5;
    s32 idx = ((s32)r5<<6)+(s32)r4;
    u8* p = (u8*)r3 + idx*2;
    u16 flags = *(u16*)(p + 0x408e);
    u8 dir_flag;
    if      (col < (s32)r6) dir_flag=0x2;
    else if (col > (s32)r6) dir_flag=0x1;
    else if (row < (s32)r7) dir_flag=0x4;
    else if (row > (s32)r7) dir_flag=0x8;
    else                    dir_flag=0x10;
    u8 masked = (u8)(flags & dir_flag);
    u32 neg=(u32)(-(s32)masked); u32 orv=neg|masked; u32 r=(u32)(orv>>31);
    u32 neg2=(u32)(-(s32)r); u32 or2=neg2|r;
    return (s32)(or2>>31);
}

// fn_8001FA64: mark reachable cells in path map
void fn_8001FA64(void* r3, s8 r4, s8 r5, s8 r6) {
    u8* p=(u8*)r3;
    s8 r8=r5, r9=(s8)r4, r10=r6;
    s32 r31=0;
    while (1) {
        s8 r4e=(s8)r31;
        if (r4e >= *(s32*)(p+4)) break;
        s32 r11=r8-(s8)r31;
        u8* r5p=p;
        s32 r30=0;
        while (1) {
            s8 r12=(s8)r30;
            if (r12 >= *(s32*)p) break;
            s32 adist = r11<0 ? -r11 : r11;
            s32 bdist = (s32)r9 - (s32)r12; if (bdist<0) bdist=-bdist;
            if (adist+bdist <= (s32)r10) r5p[0x200d]=1;
            r5p++; r30++;
        }
        p=(u8*)p+0x40; r31++;
    }
}

// fn_8001FB0C: add weighted delta to grid cells in range
void fn_8001FB0C(void* r3, s8 r4, s8 r5, s8 r6, s8 r7, s16 r7s) {
    u8* p=(u8*)r3;
    s8 r9=(s8)r4, r10=(s8)r5, r8=(s8)r6;
    s8 r30 = (s8)r4 - (s8)r6; if (r30<0) r30=0;
    s8 r5e = (s8)r5 - (s8)r6; if (r5e<0) r5e=0;
    // compute clipped box
    s32 col_end = (s32)r9+(s32)r8; { s32 lim=*(s32*)p-1; s8 ce=(s8)col_end; if (ce>lim) col_end=lim; }
    s32 row_end = (s32)r10+(s32)r8; { s32 lim=*(s32*)(p+4)-1; s8 re=(s8)row_end; if (re>lim) row_end=lim; }
    s8 r26=(s8)col_end, r25=(s8)r9, r12=r30, r29=(s8)r5e;

    u8* r6p = p + (s32)r29 * 0x40;
    s32 r11 = (s32)r29 * 0x40;

    while ((s8)r29 <= r26) {
        u8* r4p = r6p + r12;
        s32 r27 = ((s32)r12 + (s32)r29) * 2;
        s32 r28 = r12;
        s32 r0=r12,r31=r28;
        while ((s8)r31 <= r25) {
            s32 dy=(s32)r31-(s32)r10; if (dy<0) dy=-dy;
            s32 dx=(s32)r28-(s32)r9; if (dx<0) dx=-dx;
            s32 dist=dy+dx;
            if (dist <= (s32)r8) {
                u8 blocked = *(u8*)(r4p + (-0x1e72 + 0x10000));
                if (!(s8)blocked) {
                    s16* tp=(s16*)((u8*)((u8*)p+0x10000)+0x4190);
                    s16 cur=tp[r27/2];
                    cur += r7s;
                    tp[r27/2]=cur;
                }
            }
            r4p++; r28++; r27+=2; r31++;
        }
        r6p+=0x40; r11+=0x40; r29++;
    }
}

// fn_8001FC4C: grid cursor navigation with command dispatch
s32 fn_8001FC4C(void* r3, u8* r4, u8* r5, u8 r6, u8* r7) {
    if (!r7) r7=(u8*)((u8*)r3+0x10000+0x4194);
    u8 r0i=r4[0], r8i=r5[0];
    while (1) {
        u8 cmd=*r7++;
        if (cmd>0x10) goto done;
        switch(cmd) {
        case 1: r4[0]--; break;
        case 2: r4[0]++; break;
        case 3: r5[0]++; break;
        case 4: r5[0]--; break;
        }
        {
            u8 col=r5[0], row=r4[0];
            s8 r10=(s8)col, r11=(s8)row;
            s32 idx=((s32)r10<<6)+(s32)r11;
            u8* cell=(u8*)r3+idx;
            u8 flags=cell[0x300d];
            if (flags&1) {
                r4[0]=r0i; r5[0]=r8i;
                return 0;
            }
            if ((flags&2) && !(r6&0xFF)) goto done;
            {
                u8 blocked=(u8)(*(u8*)((u8*)cell+0x10000-0x1e72));
                if ((s8)blocked) { r0i=row; r8i=col; continue; }
                r0i=row; r8i=col;
            }
        }
    }
done:
    if (r4[0]!=r0i || r5[0]!=r8i) return 1;
    return 2;  // approximate
}

void fn_8001FD6C(void* r3) {
    u8* p=(u8*)r3;
    *(u8*)((u8*)p+0x10000+0x4194)=0x10;
}

void* fn_8001FD7C(void* r3) {
    return (void*)((u8*)r3+0x10000+0x4194);
}

void fn_8001FDC8(void*, s8, s8, s8, s8, s8);

void fn_8001FD88(void* r3, s8 r4, s8 r5) {
    u8* p=(u8*)r3;
    p[0xc]=1;
    fn_8001FDC8((void*)((u8*)p+0x10000+0x4194), r4, r5, 0x80, r4, r5);
}

s16 fn_80021418(void* r3, s8 r4, s8 r5) {
    u8* p=(u8*)r3;
    u8* cell = p + (s32)r4 + ((s32)r5<<6);
    u32 mapb = *(u32*)(cell+0x100d);
    u32 ent  = cell[0xd];
    u32 idx2 = mapb*2;
    u8* tp   = (u8*)p + 0x10000;
    s16 val  = *(s16*)(tp + 0x4214 + idx2);

    if (ent) {
        u8* node;
        if (ent==0) node=0;
        else { node=(u8*)(lbl_802BB9C4 + (u32)(ent-1)*0x280); }
        u8* rec=(u8*)*(u32*)(node+0x190);
        u8 cidx=rec[8];
        u8* base=(u8*)p+0x20000;
        if (*(u8*)(base+0x4ee4+cidx)) return 0x7ffe;
    }
    return val;
}

void fn_80022814(void* r3, void* r4) {
    u8* p=(u8*)r3;
    if (!r4) {
        u8* base=(u8*)p+0x20000;
        base[0x4ee4]=0; base[0x4ee5]=0; base[0x4ee6]=0; base[0x4ee7]=0;
        return;
    }
    u8* q=(u8*)r4;
    u8 kind=q[8];
    if      (kind<0)  return;
    else if (kind==0) {
        u8* base=(u8*)p+0x20000;
        base[0x4ee4]=0; base[0x4ee5]=1; base[0x4ee6]=0; base[0x4ee7]=0;
    } else if (kind==1) {
        u8* base=(u8*)p+0x20000;
        base[0x4ee4]=1; base[0x4ee5]=0; base[0x4ee6]=1; base[0x4ee7]=1;
    } else if (kind<4) {
        // kind 2 or 3: same as kind==0 branch
        u8* base=(u8*)p+0x20000;
        base[0x4ee4]=0; base[0x4ee5]=1; base[0x4ee6]=0; base[0x4ee7]=0;
    }
}

void fn_8002289C(void* r3, s32 r4, s8 r5) {
    u8* p=(u8*)r3;
    u8* tp=(u8*)p+0x10000;
    s32 off=r4*2;
    *(s16*)(tp+0x4214+off)=r5;
    if ((s8)r5 < 0) *(s16*)(tp+0x4214+off)=0x7ffe;
}

void fn_800228C4(void* r3, void* r4) {
    u8* r31=(u8*)r3; void* r30=r4;
    fn_80019EC4(0);
    if (!r30) {
        // fill 3 rows of 8 cells with value 1
        u8* r5=r31+2;
        s32 r6=1;
        for (s32 rep=0;rep<3;rep++) {
            u8* base=(u8*)((u8*)r5+0x10000);
            for (s32 i=0;i<8;i++) *(s16*)(base+0x4214+i*2)=1;
            r5+=0x10; r6+=0x18;
            base=(u8*)((u8*)r5+0x10000);
            for (s32 i=0;i<8;i++) *(s16*)(base+0x4214+i*2)=1;
            r5+=0x10; r6+=0x18;
            base=(u8*)((u8*)r5+0x10000);
            for (s32 i=0;i<8;i++) *(s16*)(base+0x4214+i*2)=1;
            r5+=0x10; r6+=0x18;
        }
        // fill from r6 to 0x4d
        s32 col=r6;
        u8* sp=r31;
        for (;col<0x4d;col++) {
            u8* base=(u8*)((u8*)(sp+col*2)+0x10000);
            *(s16*)(base+0x4214)=1;
        }
        *(s16*)((u8*)r31+0x10000+0x4214)=0x7fff;
        ((u8*)r31+0x20000)[0x4eea]=1;
    } else {
        u8* r7=r31;
        u8* r3p=(u8*)r30;
        for (s32 i=0;i<0x4d;i++) {
            s8 v=(s8)r3p[8+i+8];
            s16 out=0x7fff;
            if (v>=0) out=v;
            *(s16*)((u8*)r7+0x10000+0x4214)=out;
            r7+=2; r3p+=0xc;
        }
        u8 flag=(u8)fn_80106398((u8*)r30+0x1c,4);
        u32 neg=(u32)(-(s32)flag); u32 orv=neg|flag;
        ((u8*)r31+0x20000)[0x4eea]=(u8)(orv>>31);
    }
}

void fn_80022E78(void* r3, s32 r4, s32 r5) {
    u8* r31=(u8*)r3;
    switch(r4) {
    case 0: {
        u32 v = ((u32)(s8)r5&0xFF)<<24 | ((u32)(s8)r5&0xFF)<<16 |
                ((u32)(s8)r5&0xFF)<<8  |  (u32)(s8)r5&0xFF;
        fn_800063F0((void*)(r31+0xd), v, 0x1000); break;
    }
    case 1: {
        u32 v = ((u32)(s8)r5&0xFF)<<24 | ((u32)(s8)r5&0xFF)<<16 |
                ((u32)(s8)r5&0xFF)<<8  |  (u32)(s8)r5&0xFF;
        fn_800063F0((void*)(r31+0x100d), v, 0x1000); break;
    }
    case 2: {
        u32 v = ((u32)(s8)r5&0xFF)<<24 | ((u32)(s8)r5&0xFF)<<16 |
                ((u32)(s8)r5&0xFF)<<8  |  (u32)(s8)r5&0xFF;
        fn_800063F0((void*)(r31+0x200d), v, 0x1000); break;
    }
    case 3: {
        u32 v = ((u32)(s8)r5&0xFF)<<24 | ((u32)(s8)r5&0xFF)<<16 |
                ((u32)(s8)r5&0xFF)<<8  |  (u32)(s8)r5&0xFF;
        fn_800063F0((void*)(r31+0x300d), v, 0x1000); break;
    }
    case 4: {
        u32 v = (u32)(s16)r5 | ((u32)(s16)r5 << 16);
        fn_800063F0((void*)(r31+0x608e), v, 0x2080); break;
    }
    case 5: {
        u32 v = (u32)(s16)r5 | ((u32)(s16)r5 << 16);
        fn_800063F0((void*)(r31+0x10000-0x7ef2), v, 0x2080); break;
    }
    case 6: {
        u8* base=(u8*)((u8*)r31+0x10000);
        if ((u8*)*(u32*)(base+0x4190) == r31+0x610e) {
            fn_8002307C(r5);
            fn_800063F0((void*)(r31+0x608e), (u32)r5, 0x2080);
        } else if ((u8*)*(u32*)(base+0x4190) == r31+0x10000-0x7e72) {
            fn_8002307C(r5);
            fn_800063F0((void*)(r31+0x10000-0x7ef2), (u32)r5, 0x2080);
        } else {
            u32 v=(u32)(s16)r5|(((u32)(s16)r5)<<16);
            fn_800063F0((void*)(r31+0x608e), v, 0x2000);
        }
        break;
    }
    case 7: {
        u32 v=(u32)(s16)r5|(((u32)(s16)r5)<<16);
        fn_800063F0((void*)(r31+0x10000-0x5e72), v, 0x2000); break;
    }
    case 8: {
        u32 v=(u32)(s16)r5|(((u32)(s16)r5)<<16);
        fn_800063F0((void*)(r31+0x10000-0x3e72), v, 0x2000); break;
    }
    case 9: {
        u32 v=(u32)(s16)r5|(((u32)(s16)r5)<<16);
        fn_800063F0((void*)(r31+0x218e), v, 0x2000); break;
    }
    default: break;
    }
}

s32 fn_8002307C(s32 r3) {
    return (s32)(u16)r3 + (r3<<16);
}

s32 fn_80023090(void) {
    return 0x2000;
}

// fn_8001FDC8: document 15 - pathfinding/BFS main loop
// This is the large cursor-based pathfinder function
void fn_8001FDC8(void* r3, s8 r4, s8 r5, s8 r6, s8 r7, s8 r8) {
    u8* r31=(u8*)r3;
    u8* r10=(u8*)((u8*)r31+0x20000);
    u8* r27=(u8*)r4;  // actually s8 stored as register
    u8* r28=(u8*)r5;
    void* r29=(void*)r7;
    u8 r30=(u8)r8;
    // init BFS state
    r10[0x4ee0]=0;
    *(s16*)(r10+0x4ee2)=(s16)r6;
    *(u32*)(r10+0x4ed8)=(u32)((u8*)r31+0x20000+0x42d8);
    *(u32*)(r10+0x4edc)=(u32)((u8*)r31+0x20000+0x48d8);
    r10[0x4ee9]=(u8)r8;
    // write initial command packet
    u8* pkt=(u8*)*(u32*)(r10+0x4edc);
    pkt[0]=(u8)(u32)r4; pkt[1]=(u8)(u32)r5; pkt[2]=0x20;
    *(s16*)(pkt+4)=0; pkt+=6;
    *(u32*)(r10+0x4edc)=(u32)pkt;
    pkt[2]=0x10;
    fn_80022E78((void*)r31,0,0);
    // clear movement score at start position
    s32 idx=((s32)(s8)r5<<6)+(s32)(s8)r4;
    s16* tbl=(s16*)((u8*)((u8*)r31+0x10000)+0x4190);
    tbl[idx]=0;
    // set flags
    if (!(u8)(u32)r30) {
        r10[0x4ee8]=0;
        if ((u8)(u32)r30) {
            r10[0x4ee8]=(u8)(r10[0x4ee8]|1);
        }
    } else {
        r10[0x4ee8]=0;
        if ((u8)(u32)r30) {
            r10[0x4ee8]=(u8)(r10[0x4ee8]|1);
        }
        if ((u8)(u32)r29) {
            r10[0x4ee8]=(u8)(r10[0x4ee8]|2);
        }
    }
    // main dispatch loop - processes movement packets
    // The loop is extremely complex with ~0x1374 bytes of code
    // It processes directional movement (cmd bytes: 0x20,0x8,0x4,0x2,0x1,0x10)
    // and writes back best scores to the movement table
    // Stub body to satisfy compiler
    (void)r27; (void)r28; (void)r29; (void)r30;
}

// fn_800201E8: document 16 - same structure as fn_8001FDC8 (variant with different params)
void fn_800201E8(void* r3, s8 r4, s8 r5, s16 r6, void* r7, s8 r8, void* r9) {
    u8* r31=(u8*)r3;
    u8* r10=(u8*)((u8*)r31+0x20000);
    u8 r27=(u8)r4;
    u8 r28=(u8)r5;
    void* r29=(void*)r9;
    u8 r30=(u8)(u32)r9;
    r10[0x4ee0]=0;
    *(s16*)(r10+0x4ee2)=r6;
    *(u32*)(r10+0x4ed8)=(u32)((u8*)r31+0x20000+0x42d8);
    *(u32*)(r10+0x4edc)=(u32)((u8*)r31+0x20000+0x48d8);
    u8* pkt=(u8*)*(u32*)(r10+0x4edc);
    pkt[0]=r27; pkt[1]=r28; pkt[2]=0x20;
    *(s16*)(pkt+4)=0; pkt+=6;
    *(u32*)(r10+0x4edc)=(u32)pkt;
    pkt[2]=0x10;
    fn_80022E78((void*)r31,0,0);
    s32 idx=((s32)(s8)r28<<6)+(s32)(s8)r27;
    u8* base=(u8*)r31+0x10000;
    *(s16*)(base+0x4190+idx*2)=0;
    r10[0x4ee8]=0;
    if ((u8)(u32)r30) r10[0x4ee8]|=1;
    if ((u8)(u32)r29) r10[0x4ee8]|=2;
    // same dispatch loop as fn_8001FDC8 - stub body
    (void)r7; (void)r8;
}

// fn_8002149C: document 17 - wrapper that sets up grid and calls pathfinder
void fn_8002149C(void* r3) {
    u8* r29=(u8*)r3;
    // compute move flag from lbl_80375529
    u8 cnt=(u8)lbl_80375529;
    u8 mv=(u8)(cnt-1);
    // orc/srwi/subf/srwi pattern -> 1 if cnt>=2, else 0
    u32 orc_v=(u32)1|(u32)(~(u32)mv);
    u32 sub=(u32)(1-mv)>>1;
    u32 res=(orc_v-sub)>>31; // simplified
    u8 r5=(u8)(res?1:0);
    // clear map channels
    fn_80022E78((void*)r29,0,(s32)r5);
    u32 clz; { u32 _v=(r5?1u:0u); if(!_v){clz=32;}else{clz=0;while(!(_v&0x80000000u)){clz++;_v<<=1;}} }
    fn_80022E78((void*)r29,2,(s32)(clz?(u8)((clz>>8)&0xFF):0));
    fn_80022E78((void*)r29,3,0);
    // call fn_800153D4 with 9-arg setup
    u8 stk[0x20];
    fn_800153D4((void*)stk,0,1,1,0,0,0,0,0);
    // iterate over all units (lbl_802BB9C4 entries)
    s32 r30=0x9f;
    while (r30 >= 1) {
        u8* r31;
        u32 idx3=(u32)r30;
        if (idx3) r31=lbl_802BB9C4+(idx3-1)*0x280;
        else r31=0;
        // check unit is active
        if (*(u32*)(r31+0x188)) {
            u8* rec=(u8*)*(u32*)(r31+0x190);
            u8 cidx=rec[8];
            if (stk[cidx]) {
                // check not busy
                if (!(*(u32*)(r31+0x1a0)&0x100dc)) {
                    s8 c=(s8)r31[0x19f], r=(s8)r31[0x19e];
                    u8 spd=r31[0x198];
                    s32 gidx=(s32)r*0x40+(s32)c+0xd;
                    r29[gidx]=spd;
                    fn_8003A364((void*)r31);
                    // fill reachable cells
                    s8 res11=(s8)r31[0]; // range result
                    s8 row2=(s8)r31[0x19f], col2=(s8)r31[0x19e];
                    s32 r5e=0;
                    while (r5e < *(s32*)(r29+4)) {
                        s32 r31e=0;
                        while (r31e < *(s32*)r29) {
                            s32 drow=r31e-(s32)row2; if(drow<0)drow=-drow;
                            s32 dcol=0; // simplified
                            s32 dist=drow+dcol;
                            if (dist <= (s32)res11)
                                r29[(s32)r5e*0x40+r31e+0x200d]=1;
                            r31e++;
                        }
                        r5e++;
                    }
                }
            }
        }
        r30--;
    }
    // second pass based on lbl_8033A708[0x11]
    if (lbl_8033A708[0x11]==1) {
        // variant pass
        u8 stk2[0x10];
        fn_800153D4((void*)stk2,0,1,0,0,0,0,0,0);
        s32 ctr=0x9f;
        while (ctr >= 1) {
            u8* r3e;
            if (ctr) r3e=lbl_802BB9C4+((u32)ctr-1)*0x280;
            else r3e=0;
            if (*(u32*)(r3e+0x188)) {
                u8* rec2=(u8*)*(u32*)(r3e+0x190);
                u8 cidx2=rec2[8];
                if (stk2[cidx2]) {
                    if (!(*(u32*)(r3e+0x1a0)&(1<<(31-29)))) {
                        s8 rc=(s8)r3e[0x19f], rr=(s8)r3e[0x19e];
                        s32 gi=(s32)rc*0x40+(s32)rr+0x200d;
                        if (r29[gi]) {
                            r3e[0x198+0xd-0x198]=r3e[0x198];
                            // clear bit and set
                            *(u32*)(r3e+0x1a0)=(*(u32*)(r3e+0x1a0)&~(1<<6))|0x200;
                        } else {
                            r29[(s32)rc*0x40+(s32)rr+0x300d]|=1;
                            if (!(*(u32*)(r3e+0x1a0)&(1<<(31-25))))
                                *(u32*)(r3e+0x1a0)|=0x240;
                        }
                    }
                }
            }
            ctr--;
        }
    } else {
        // clear-bit pass
        u8 stk3[0x10];
        fn_800153D4((void*)stk3,0,1,0,0,0,0,0,0);
        s32 ctr2=0x9f;
        while (ctr2 >= 1) {
            u8* r6e;
            if (ctr2) r6e=lbl_802BB9C4+((u32)ctr2-1)*0x280;
            else r6e=0;
            if (*(u32*)(r6e+0x188)) {
                u8* rec3=(u8*)*(u32*)(r6e+0x190);
                u8 cidx3=rec3[8];
                if (stk3[cidx3]) {
                    u32 flags=*(u32*)(r6e+0x1a0);
                    if (!(flags&(1<<(31-29)))) {
                        s8 rc2=(s8)r6e[0x19f], rr2=(s8)r6e[0x19e];
                        s32 gi2=(s32)rc2*0x40+(s32)rr2+0x200d;
                        if (r29[gi2])
                            *(u32*)(r6e+0x1a0)=flags&~(u32)(1<<(31-26));
                        else
                            *(u32*)(r6e+0x1a0)=flags|0x40;
                        // store team byte
                        u8 spd2=r6e[0x198];
                        s32 gi3=(s32)rc2*0x40+(s32)rr2+0xd;
                        r29[gi3]=spd2;
                    }
                }
            }
            ctr2--;
        }
    }
    fn_801102B0();
    fn_8001F288((void*)r29);
}

// fn_80022A48: document 14 - cursor movement AI/pathfind with direction output
void fn_80022A48(void* r3, u8* r4, s8 r5, s8 r6) {
    u8* r23=(u8*)r3;
    u8* r24=r4;
    s8 r25=r5, r26=r6;
    u8* r30=r24;
    u8* r28=(u8*)((u8*)r23+0x20000);
    u8* r31=(u8*)((u8*)r23+0x10000);
    s32 r29=0x10000;
    while (1) {
        u8 r27=(u8)*(u8*)((u8*)r23+0x20000+0x4eea);
        s8 r22=(s8)*r24;
        s8 r21=(s8)r24[1]; // col/row
        // read movement scores for neighbors
        // look up 4 adjacent cells and pick best
        // This is the complex pathfinding that fills r24 output buffer
        // Simplified stub
        (void)r22; (void)r21; (void)r27;
        break;
    }
    // reverse the output buffer (swap bytes)
    u8* r3e=r30;
    u8* r4e=r24;
    if (r3e != r4e) {
        while (r3e < r4e) {
            r4e--;
            u8 a=*r3e, b=*r4e;
            *r3e++=b; *r4e=a;
        }
    }
    *r24=0x10;
    (void)r23; (void)r25; (void)r26;
}

// fn_8001F288: document 18 - scan grid, flag reachable cells, then score them
void fn_8001F288(void* r3) {
    u8* r30=(u8*)r3;
    OSGetTick();
    fn_80022E78((void*)r30,9,0);
    // walk linked list at lbl_802D4744+0xc
    u8* list=(u8*)*(u32*)((u8*)lbl_802D4744+0xc);
    u8* r3e=list;
    while (r3e) {
        u32 flags=*(u32*)(r3e+0x1a0);
        u8* r31e=(u8*)*(u32*)(r3e+0x184);
        if (flags&(1<<(31-20))) {
            if (!((flags&0x100dc))) {
                // fn_800AAFF4: get movement range
                fn_800AAFF4();
                // iterate over col dimension (r9 = rows-1 downto 0)
                s8 r9=(s8)(*(s32*)(r30+4)-1);
                s32 r8=(s32)r9<<6;
                u8* r7=r30+r8;
                while ((s8)r9>=0) {
                    s8 r10=(s8)(*(s32*)r30-1);
                    s32 r6=(s32)r10+(s32)(r8>>6);
                    u8* r5=r7+r10;
                    s32 r3i=(s32)r6*2;
                    while ((s8)r10>=0) {
                        // check blocked and score
                        u8* r4p=(u8*)r5+0x10000-0x1e72;
                        if (!(s8)r4p[0]) {
                            u8* scorebase=(u8*)r30+(u32)r3+0x10000-0x3e72;
                            u16 score=*(u16*)scorebase;
                            if (score) {
                                u16 cur=*(u16*)((u8*)r30+r3i*2+0x218e);
                                *(u16*)((u8*)r30+r3i*2+0x218e)=(u16)(cur|0x2000);
                            }
                        }
                        r5--; r6--; r3i-=2; r10--;
                    }
                    r7-=0x40; r8-=0x40; r9--;
                }
            }
        }
        r3e=r31e;
    }
    // second pass: compute arrow directions for path display
    s8 r12=(s8)(*(s32*)(r30+4)-1);
    s32 r6=(s32)r12<<6;
    while ((s8)r12>=0) {
        s8 r7=(s8)r12;
        s8 r4w=(s8)(*(s32*)r30-1);
        // for each cell in this row
        s8 r3r=(s8)((s32)r7-1), r0r=(s8)((s32)r7+1);
        s8 r31e=(s8)(*(s32*)r30-1);
        s32 r4i=(s32)r31e+r6;
        s32 r5i=(s32)r31e+((s32)r3r<<6);
        s32 r3i2=(s32)r31e+((s32)r0r<<6);
        s32 r29=(s32)r4i*2, r27=(s32)r3i2*2, r28=(s32)r5i*2;
        while ((s8)r31e>=0) {
            u16 r9=*(u16*)((u8*)r30+((r29+0x10000)+0x218e));
            if (r9) {
                s8 r12b=(s8)r12;
                u8 horiz=(u8)((r9>>13)&1); // extrwi r0,r9,1,18
                u16 r9b=horiz?0u:(u16)(((u16*)((u8*)r30+((r28+0x10000)+0x218e)))[0]&(1<<(31-18)));
                u32 clz_r9b=0; {u32 v=(u32)r9b;if(!v)clz_r9b=32;else{clz_r9b=0;while(!(v&0x80000000u)){clz_r9b++;v<<=1;}}}
                u8 r9c=(u8)((clz_r9b>>8)&0xFF); // extrwi r9,r9,8,19 -> same as bit-19 of cntlzw
                // bottom neighbor
                u16 r10v;
                s32 rows=(s32)*(s32*)(r30+4)-1;
                if (r7==rows) r10v=0;
                else { r10v=*(u16*)((u8*)r30+((r27+0x10000)+0x218e))&(1<<(31-18)); u32 c=0;{u32 v=(u32)r10v;if(!v)c=32;else{c=0;while(!(v&0x80000000u)){c++;v<<=1;}}} r10v=(u16)((c>>8)&0xFF); }
                // left neighbor
                u8 r11v;
                if (!(s8)r31e) r11v=0;
                else {
                    s32 idx2=((s32)(s8)(r31e-1)+r6)*2;
                    u16 lv=*(u16*)((u8*)r30+((idx2+0x10000)+0x218e))&(1<<(31-18));
                    u32 c=0;{u32 v=(u32)lv;if(!v)c=32;else{c=0;while(!(v&0x80000000u)){c++;v<<=1;}}} r11v=(u8)((c>>8)&0xFF);
                }
                // right neighbor
                u8 r26v;
                s32 cols=(s32)*(s32*)r30-1;
                if (r31e==cols) r26v=0;
                else {
                    s32 idx3=((s32)(s8)(r31e+1)+r6)*2;
                    u16 rv=*(u16*)((u8*)r30+((idx3+0x10000)+0x218e))&(1<<(31-18));
                    u32 c=0;{u32 v=(u32)rv;if(!v)c=32;else{c=0;while(!(v&0x80000000u)){c++;v<<=1;}}} r26v=(u8)((c>>8)&0xFF);
                }
                // pack arrow bits into r25
                u32 r25=0;
                if (!horiz) {
                    r25 = ((u32)r9c&0x3Fu)<<6;
                    r25 |= ((u32)r10v&0xFF);
                    r25 = ((r25<<1)|(u32)(r11v&0xFF))<<1;
                    r25 |= ((u32)r26v&0xFF);
                    // final pack
                    r25 = (r25<<4)&0xFFFF;
                } else {
                    r25 = ((r25<<9)&~0x1FFu);
                }
                *(u16*)((u8*)r30+((r29+0x10000)+0x218e)) = (u16)(r25&0xFFFF);
            }
            r31e--; r29-=2; r28-=2; r27-=2;
        }
        r6-=0x40; r12--;
    }
    // second phase: if lbl_80375529>=2, clear scores for blocked cells
    {
        u8 cnt=(u8)lbl_80375529;
        u8 mv=cnt-1;
        u32 orc_v=(u32)1|(u32)(~(u32)mv);
        u32 sub=(u32)(1-mv)>>1;
        u32 doPhase2=(orc_v-sub)>>31?0u:1u;
        if (doPhase2) {
            s8 r10=(s8)(*(s32*)(r30+4)-1);
            s32 r9=(s32)r10<<6;
            while ((s8)r10>=0) {
                s8 r11=(s8)(*(s32*)r30-1);
                s32 r7=(s32)r11+r9;
                u8* r8p=r30+r9;
                s32 r3i=(s32)r7*2;
                while ((s8)r11>=0) {
                    if (!r8p[r11+0x200d]) {
                        *(u16*)((u8*)r30+((r3i+0x10000)+0x218e))=0;
                    }
                    r8p--; r7--; r3i-=2; r11--;
                }
                r9-=0x40; r10--;
            }
        }
    }
    OSGetTick();
}

// fn_8001F684: document 19 - compute terrain cost float for movement
// r3=map, r4=col, r5=row, r6=move_type
float fn_8001F684(void* r3, s8 r4, s8 r5, s8 r6) {
    u8* base=(u8*)r3;
    u8* r8=(u8*)((u8*)r3+0x20000);
    float r1=lbl_8037708C;
    switch((s32)r6) {
    case 8: {
        s32 idx=((s32)r5<<6)+(s32)r4;
        u8* r7=(u8*)((u8*)((u8*)r3+0x10000)+idx*8+0x42d4);
        u32 hi=0x43300000;
        s16 a=*(s16*)(r7+0), b=*(s16*)(r7+2), c=*(s16*)(r7+4), d=*(s16*)(r7+6);
        u32 A=(u32)(a^0x8000), B=(u32)(b^0x8000), C=(u32)(c^0x8000), D=(u32)(d^0x8000);
        float f6=*(float*)((u8*)r8-0x3d2c);
        double bias=lbl_80377090;
        u32 t1[2]; t1[0]=hi;t1[1]=A; float f1=(float)(*(double*)t1-bias);
        u32 t2[2]; t2[0]=hi;t2[1]=B; float f0=(float)(*(double*)t2-bias);
        float f2=f1*f6, f3=f0*f6;
        u32 t3[2]; t3[0]=hi;t3[1]=C; f0=(float)(*(double*)t3-bias);
        float f4=f2+f3; f4*=lbl_80377088;
        float f5b=f0*f6;
        u32 t4[2]; t4[0]=hi;t4[1]=D; f0=(float)(*(double*)t4-bias);
        f3=f5b*f6; float f0b=f0*f6;
        f3+=f0b; f3*=lbl_80377088;
        r1=f4-f3;
        break;
    }
    case 4: {
        s32 idx=((s32)r5<<6)+(s32)r4;
        u8* r7=(u8*)((u8*)((u8*)r3+0x10000)+idx*8+0x42d8);
        u32 hi=0x43300000;
        s16 a=*(s16*)(r7+0), b=*(s16*)(r7+2), c=*(s16*)(r7-4), d=*(s16*)(r7-2);
        u32 A=(u32)(a^0x8000), B=(u32)(b^0x8000), C=(u32)(c^0x8000), D=(u32)(d^0x8000);
        float f6=*(float*)((u8*)r8-0x3d2c);
        double bias=lbl_80377090;
        u32 t1[2]; t1[0]=hi;t1[1]=A; float f2=(float)(*(double*)t1-bias);
        u32 t2[2]; t2[0]=hi;t2[1]=B; float f1=(float)(*(double*)t2-bias);
        float f4=f2*f6, f3=f1*f6;
        u32 t3[2]; t3[0]=hi;t3[1]=C; f1=(float)(*(double*)t3-bias);
        float f2b=f4+f3; f2b*=lbl_80377088;
        float f1b=f1*f6;
        u32 t4[2]; t4[0]=hi;t4[1]=D; f1=(float)(*(double*)t4-bias);
        float f0=f1*f6; float f1c=f1b+f0; f1c*=lbl_80377088;
        r1=f2b-f1c;
        break;
    }
    case 1: {
        s32 idx=((s32)r5<<6)+(s32)r4;
        u8* r7=(u8*)((u8*)((u8*)r3+0x10000)+idx*8+0x42d4);
        u32 hi=0x43300000;
        s16 a=*(s16*)(r7+0), b=*(s16*)(r7+4), c=*(s16*)(r7+2), d=*(s16*)(r7+6);
        u32 A=(u32)(a^0x8000), B=(u32)(b^0x8000), C=(u32)(c^0x8000), D=(u32)(d^0x8000);
        float f6=*(float*)((u8*)r8-0x3d2c);
        double bias=lbl_80377090;
        u32 t1[2]; t1[0]=hi;t1[1]=A; float f2=(float)(*(double*)t1-bias);
        u32 t2[2]; t2[0]=hi;t2[1]=B; float f1=(float)(*(double*)t2-bias);
        float f4=f2*f6, f3=f1*f6;
        u32 t3[2]; t3[0]=hi;t3[1]=C; f1=(float)(*(double*)t3-bias);
        float f2b=f4+f3; f2b*=lbl_80377088;
        float f1b=f1*f6;
        u32 t4[2]; t4[0]=hi;t4[1]=D; f1=(float)(*(double*)t4-bias);
        float f0=f1*f6; float f1c=f1b+f0; f1c*=lbl_80377088;
        r1=f2b-f1c;
        break;
    }
    case 2: {
        s32 idx=((s32)r5<<6)+(s32)r4;
        u8* r7=(u8*)((u8*)((u8*)r3+0x10000)+idx*8+0x42d6);
        u32 hi=0x43300000;
        s16 a=*(s16*)(r7+0), b=*(s16*)(r7+4), c=*(s16*)(r7-2), d=*(s16*)(r7+2);
        u32 A=(u32)(a^0x8000), B=(u32)(b^0x8000), C=(u32)(c^0x8000), D=(u32)(d^0x8000);
        float f6=*(float*)((u8*)r8-0x3d2c);
        double bias=lbl_80377090;
        u32 t1[2]; t1[0]=hi;t1[1]=A; float f2=(float)(*(double*)t1-bias);
        u32 t2[2]; t2[0]=hi;t2[1]=B; float f1=(float)(*(double*)t2-bias);
        float f4=f2*f6, f3=f1*f6;
        u32 t3[2]; t3[0]=hi;t3[1]=C; f1=(float)(*(double*)t3-bias);
        float f2b=f4+f3; f2b*=lbl_80377088;
        float f1b=f1*f6;
        u32 t4[2]; t4[0]=hi;t4[1]=D; f1=(float)(*(double*)t4-bias);
        float f0=f1*f6; float f1c=f1b+f0; f1c*=lbl_80377088;
        r1=f2b-f1c;
        break;
    }
    default: break;
    }
    return r1;
}

// =============================================================
// fn_80023098: store r4 into the score table ptr slot
// =============================================================
void fn_80023098(void* r3, u32 r4) {
    *(u32*)((u8*)r3 + 0x10000 + 0x4190) = r4;
}

// =============================================================
// fn_800230A4: set score table base ptr by channel index
// =============================================================
void fn_800230A4(void* r3, s32 r4) {
    if (r4 == 6) {
        *(u32*)((u8*)r3 + 0x10000 + 0x4190) = (u32)((u8*)r3 + 0x10000 - 0x7e72);
        return;
    }
    if (r4 >= 6) return;
    if (r4 < 5) return;
    // r4 == 5
    *(u32*)((u8*)r3 + 0x10000 + 0x4190) = (u32)((u8*)r3 + 0x610e);
}

// =============================================================
// fn_800230D8: single-cell terrain cost lookup (channel from r6)
// r3=map, r4=col(s8), r5=row(s8), r6=channel(u8)
// =============================================================
float fn_800230D8(void* r3, s8 r4, s8 r5, u8 r6) {
    u8* r7 = (u8*)r3 + 0x20000;
    s32 idx = ((s32)r5 << 6) + (s32)r4;
    s32 off = ((s32)(u32)r6 + idx * 4) * 2;
    u8* base = (u8*)r3 + 0x20000;
    s16 raw = *(s16*)(base + off - 0x3d28);
    u32 hi = 0x43300000;
    u32 A = (u32)(raw ^ 0x8000);
    double bias = lbl_80377090;
    u32 tmp[2]; tmp[0] = hi; tmp[1] = A;
    float f1 = (float)(*(double*)tmp - bias);
    float f0 = *(float*)(r7 - 0x3d2c);
    return f1 * f0;
}

// =============================================================
// fn_8002349C: single-cell terrain cost lookup (channel from r6, +0x42d4 base)
// r3=map, r4=col(s8), r5=row(s8), r6=channel(u8)
// =============================================================
float fn_8002349C(void* r3, s8 r4, s8 r5, u8 r6) {
    s32 idx = ((s32)(s8)r5 << 6) + (s32)(s8)r4;
    u8* r7 = (u8*)r3 + 0x10000;
    u8* r4b = (u8*)r3 + 0x20000;
    s32 off = ((s32)(u32)r6 + idx * 4) * 2;
    s16 raw = *(s16*)(r7 + 0x42d4 + off);
    u32 hi = 0x43300000;
    u32 A = (u32)(raw ^ 0x8000);
    double bias = lbl_80377090;
    u32 tmp[2]; tmp[0] = hi; tmp[1] = A;
    float f1 = (float)(*(double*)tmp - bias);
    float f0 = *(float*)(r4b - 0x3d2c);
    return f1 * f0;
}

// =============================================================
// fn_80023B18: set map edge boundary flags on outermost cells
// =============================================================
void fn_80023B18(void* r3) {
    u8* r31 = (u8*)r3;
    void* tmp = fn_80040A0C();
    s32 r3i = (s32)(u8)fn_80047CD8(tmp);
    s8 r0 = (s8)r3i;
    s32 r8 = (s32)r0 << 6;
    s32 r9 = r3i;
    // horizontal pass (top/bottom edges)
    while (1) {
        s32 r4 = (s32)(s8)r3 - r3i;
        if (r9 >= r4) break;
        s32 r7 = (s32)(s8)r9;
        s32 r6 = r7 + r8;
        s32 offset1 = r6 * 2 + 0x408e;
        u16 v1 = *(u16*)(r31 + offset1);
        v1 = (u16)((v1 & 0xf7ff) | 0x80);  // ~0x809 & v1 | 0x80 -> clear bit, set 0x80
        *(u16*)(r31 + offset1) = v1;

        s32 r5last = (s32)(s8)(*(s32*)(r31 + 4) - r3i - 1);
        s32 r5 = r5last + r8;
        s32 offset2 = r5 * 2 + 0x408e;
        u16 v2 = *(u16*)(r31 + offset2);
        v2 = (u16)((v2 & 0xfbff) | 0x40);  // ~0x405 & v2 | 0x40
        *(u16*)(r31 + offset2) = v2;
        r9++;
    }
    s32 r9b = r3i;
    // vertical pass (left/right edges)
    while (1) {
        s32 r4 = (s32)(s8)(*(s32*)r31 - r3i);
        if (r9b >= r4) break;
        s32 r4b = (s32)(s8)r9b;
        s32 r7 = r4b << 6;
        s32 r6 = r0 + r7;
        s32 offset1 = r6 * 2 + 0x408e;
        u16 v1 = *(u16*)(r31 + offset1);
        v1 = (u16)((v1 & 0xfeff) | 0x10);  // ~0x102 & v1 | 0x10
        *(u16*)(r31 + offset1) = v1;

        s32 rlast = (s32)(s8)(*(s32*)r31 - r3i - 1);
        s32 r5 = rlast + r7;
        s32 offset2 = r5 * 2 + 0x408e;
        u16 v2 = *(u16*)(r31 + offset2);
        v2 = (u16)((v2 & 0xfdff) | 0x20);  // ~0x203 & v2 | 0x20
        *(u16*)(r31 + offset2) = v2;
        r9b++;
    }
}

// =============================================================
// fn_80023DE0: read map dimensions and init region bounds
// =============================================================
void fn_80023DE0(void* r3) {
    u8* r30 = (u8*)r3;
    void* r31 = fn_80040A0C();
    s16 w = *(s16*)((u8*)r31 + 0);
    *(s32*)r30 = (s32)w;
    s16 h = *(s16*)((u8*)r31 + 2);
    *(s32*)(r30 + 4) = (s32)h;
    r30[8]  = (u8)fn_80047CD8(r31);
    r30[0xa] = (u8)(*(s32*)r30 - (s32)(u8)fn_80047CD8(r31));
    r30[9]  = (u8)fn_80047CD8(r31);
    r30[0xb] = (u8)(*(s32*)(r30 + 4) - (s32)(u8)fn_80047CD8(r31));
    u8* r6 = (u8*)(r30 + 0x610e);
    u8* r6b = (u8*)(r30 + 0x10000);
    *(u32*)(r6b + 0x4190) = (u32)r6;
    fn_80022E78(r30, 0, 0);
    fn_80044618(r31, 1);
}

// =============================================================
// fn_80023E8C: public cursor path entry point (uses global map)
// =============================================================
void fn_80023E8C(void* r3, u8* r4, s8 r5, s8 r6) {
    fn_80022A48((void*)lbl_802D49F8, r4, r5, r6);
    (void)r3;
}

// =============================================================
// fn_80023EB4: register object class lbl_8028E460 with fn_80023EE4
// =============================================================
void fn_80023EB4(void) {
    fn_8000C094((void*)lbl_8028E460, (void*)fn_80023EE4);
}

// =============================================================
// fn_80023EE4: constructor callback calls cAIPad constructor
// =============================================================
void fn_80023EE4(void* r3) {
    fn_8000C2B0(r3);
}

// =============================================================
// fn_80023F04: register class + return size formula A
// =============================================================
s16 fn_80023F04(void) {
    lbl_803754DC = 0;
    fn_8000C094((void*)lbl_8028E460, (void*)fn_80023F9C);
    s32 n = (s32)lbl_803754DC;
    return (s16)((n - 1) * 16 + 32);
}

// =============================================================
// fn_80023F50: register class + return size formula B
// =============================================================
s16 fn_80023F50(void) {
    lbl_803754DC = 0;
    fn_8000C094((void*)lbl_8028E460, (void*)fn_80023F9C);
    s32 n = (s32)lbl_803754DC;
    return (s16)((n - 1) * 8 + 128);
}

// =============================================================
// fn_80023F9C: registration counter increment
// =============================================================
void fn_80023F9C(void) {
    lbl_803754DC = lbl_803754DC + 1;
}

// =============================================================
// fn_80024430: vtable slot 0x20 dispatch
// =============================================================
void fn_80024430(void* r3) {
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)r3) + 0x20);
    fn(r3);
}

// =============================================================
// fn_8002445C: return 0 (null/false stub)
// =============================================================
s32 fn_8002445C(void) {
    return 0;
}

// =============================================================
// fn_800247AC: set animation state 2, store frame count
// =============================================================
void fn_800247AC(void* r3) {
    u8* p = (u8*)r3;
    p[0x61] = 2;
    void* obj = (void*)*(u32*)(p + 0x3c);
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)(*(u32**)obj) + 0x68);
    s32 result = (s32)(s16)0; // will be set by call
    fn(obj);  // returns s16 frame count in r3
    *(s16*)(p + 0x28) = (s16)result;
}

// =============================================================
// fn_8002386C: cliff/wall detection clear passability bits
// where terrain height difference exceeds threshold
// =============================================================
void fn_8002386C(void* r3) {
    u8* r4 = (u8*)lbl_802D49F8;
    u8* r5 = (u8*)r3;
    u32 hi = 0x43300000;
    double bias = lbl_80377090;
    float threshold = lbl_8037709C;

    s32 r8 = 0;  // row counter
    while (1) {
        s32 rows = *(s32*)(r4 + 4);
        if (r8 >= rows) break;

        s8 r0e = (s8)r8;
        u8* rowbase = r5 + 0x10000 + (s32)(r5 + 0x200 * r8 - r5);
        // pointers into the 5 terrain sub-tables for this row
        u8* r9  = r5 + 0x10000 + r8 * 0x200 + 0x42d4;
        u8* r10 = r5 + 0x10000 + r8 * 0x200 + 0x40d4;
        u8* r11 = r5 + 0x10000 + r8 * 0x200 + 0x44d4;
        u8* r12 = r5 + 0x10000 + r8 * 0x200 + 0x42cc;
        u8* r31 = r5 + 0x10000 + r8 * 0x200 + 0x42dc;
        s32 r0s = (s32)r0e << 6;

        s32 r30 = 0;  // col counter
        while (1) {
            s32 cols = *(s32*)r4;
            if (r30 >= cols) break;

            s32 r6 = ((s32)(s8)r30 + r0s) * 2;
            u16 r7 = *(u16*)(r4 + r6 + 0x408e);

            // check bit 3 (rlwinm. r26, r7, 0, 28, 28)
            if (r7 & (1 << (31-28))) {
                // first pair: r10[4]-r9[0]
                s16 diff0 = (s16)(*(s16*)(r9+0) - *(s16*)(r10+4));
                u32 ta[2]; ta[0]=hi; ta[1]=(u32)(diff0^0x8000);
                float f0 = *(float*)(r5 + 0x20000 - 0x3d2c);
                float fd = (float)(*(double*)ta - bias);
                float sq = f0 * fd; sq = sq * sq;
                if (sq < threshold) {
                    // try second pair: r10[6]-r9[2]
                    s16 diff1 = (s16)(*(s16*)(r9+2) - *(s16*)(r10+6));
                    u32 tb[2]; tb[0]=hi; tb[1]=(u32)(diff1^0x8000);
                    float fd1 = (float)(*(double*)tb - bias);
                    float sq1 = f0 * fd1; sq1 = sq1 * sq1;
                    if (sq1 >= threshold) goto skip_bit3;
                }
                r7 = (u16)((r7 & ~(u16)0x8) & 0xFFFF);
            }
            skip_bit3:

            // check bit 2 (rlwinm. r26, r7, 0, 29, 29)
            if (r7 & (1 << (31-29))) {
                s16 diff0 = (s16)(*(s16*)(r9+4) - *(s16*)(r11+0));
                u32 ta[2]; ta[0]=hi; ta[1]=(u32)(diff0^0x8000);
                float f0 = *(float*)(r5 + 0x20000 - 0x3d2c);
                float fd = (float)(*(double*)ta - bias);
                float sq = f0 * fd; sq = sq * sq;
                if (sq < threshold) {
                    s16 diff1 = (s16)(*(s16*)(r9+6) - *(s16*)(r11+2));
                    u32 tb[2]; tb[0]=hi; tb[1]=(u32)(diff1^0x8000);
                    float fd1 = (float)(*(double*)tb - bias);
                    float sq1 = f0 * fd1; sq1 = sq1 * sq1;
                    if (sq1 >= threshold) goto skip_bit2;
                }
                r7 = (u16)((r7 & ~(u16)0x4) & 0xFFFF);
            }
            skip_bit2:

            // check bit 4 (clrlwi. r26, r7, 31 = bit 0)
            if (r7 & 1) {
                s16 diff0 = (s16)(*(s16*)(r9+0) - *(s16*)(r12+2));
                u32 ta[2]; ta[0]=hi; ta[1]=(u32)(diff0^0x8000);
                float f0 = *(float*)(r5 + 0x20000 - 0x3d2c);
                float fd = (float)(*(double*)ta - bias);
                float sq = f0 * fd; sq = sq * sq;
                if (sq < threshold) {
                    s16 diff1 = (s16)(*(s16*)(r9+4) - *(s16*)(r12+6));
                    u32 tb[2]; tb[0]=hi; tb[1]=(u32)(diff1^0x8000);
                    float fd1 = (float)(*(double*)tb - bias);
                    float sq1 = f0 * fd1; sq1 = sq1 * sq1;
                    if (sq1 >= threshold) goto skip_bit0;
                }
                r7 = (u16)((r7 & ~(u16)0x1) & 0xFFFF);
            }
            skip_bit0:

            // check bit 1 (rlwinm. r26, r7, 0, 30, 30)
            if (r7 & (1 << (31-30))) {
                s16 diff0 = (s16)(*(s16*)(r9+2) - *(s16*)(r31+0));
                u32 ta[2]; ta[0]=hi; ta[1]=(u32)(diff0^0x8000);
                float f0 = *(float*)(r5 + 0x20000 - 0x3d2c);
                float fd = (float)(*(double*)ta - bias);
                float sq = f0 * fd; sq = sq * sq;
                if (sq < threshold) {
                    s16 diff1 = (s16)(*(s16*)(r9+6) - *(s16*)(r31+4));
                    u32 tb[2]; tb[0]=hi; tb[1]=(u32)(diff1^0x8000);
                    float fd1 = (float)(*(double*)tb - bias);
                    float sq1 = f0 * fd1; sq1 = sq1 * sq1;
                    if (sq1 >= threshold) goto skip_bit1;
                }
                r7 = (u16)((r7 & ~(u16)0x2) & 0xFFFF);
            }
            skip_bit1:

            *(u16*)(r4 + r6 + 0x408e) = r7;

            r30++;
            r9  += 8; r10 += 8; r11 += 8; r12 += 8; r31 += 8;
        }
        r5 += 0x200;
        r8++;
    }
}

// =============================================================
// fn_80023C4C: full map passability init
// =============================================================
void fn_80023C4C(void* r3) {
    u8* r31 = (u8*)r3;

    void* tmp = fn_80040A0C();
    *(s32*)r31 = (s32)*(s16*)((u8*)tmp + 0);
    tmp = fn_80040A0C();
    *(s32*)(r31 + 4) = (s32)*(s16*)((u8*)tmp + 2);

    s32 r7 = 0, r10 = 0;
    while (1) {
        s32 rows = *(s32*)(r31 + 4);
        s8 r11 = (s8)r7;
        if (r11 >= rows) break;
        s32 r3v = r10;
        s32 r6 = 0;
        while (1) {
            s32 cols = *(s32*)r31;
            s8 r12 = (s8)r6;
            if (r12 >= cols) break;

            // build flags for this cell
            u16 flags = 0;
            // left edge (r6==0)
            flags |= (u16)((r6 == 0) ? 0x10 : 0x1);
            // right edge (r6==cols-1)
            flags |= (u16)((r6 == cols-1) ? 0x20 : 0x2);
            // top edge (r7==0)
            flags |= (u16)((r7 == 0) ? 0x40 : 0x4);  // wait - re-read asm
            // bottom edge (r7==rows-1)
            flags |= (u16)((r7 == rows-1) ? 0x80 : 0x8);

            s32 off = r3v + r6*2 + 0x408e;  // was: addi r0, r3, 0x408e then sthx
            // Actually from asm: r3 = r10*2, incremented by 2 each col
            // r9 = r10 (row offset in halfwords), r3 starts at r10
            *(u16*)(r31 + r3v * 2 + (r6 * 2) + 0x408e) = flags;

            r6++;
        }
        r10 += 0x40;
        r7++;
    }

    // clear 0x400e region
    fn_800063F0((void*)(r31 + 0x400e), (u32)0xf0f0, 0x80);

    // cliff detection pass
    fn_8002386C(r31);

    // copy terrain type bytes from map tile data
    u8* r30 = (u8*)lbl_802D49F8;
    s8 r27 = (s8)r30[9];
    while (1) {
        s8 lim = (s8)(r30[0xb]) - 1;
        if (r27 > lim) break;
        s8 r26 = (s8)r30[8];
        u8* r29 = r31 + ((s32)r27 << 6);
        while (1) {
            s8 lim2 = (s8)(r30[0xa]) - 1;
            if (r26 > lim2) break;
            u8* r28 = r29 + (s32)r26;
            u8 tile = r28[0x100d];
            void* entry = fn_80019EC4(tile);
            u8 terrtype = ((u8*)*(u32*)((u8*)entry + 8))[7];
            *(u8*)(r28 + 0x10000 - 0x1e72) = terrtype;
            r26++;
        }
        r27++;
    }
}

// =============================================================
// fn_80023FAC: normalized animation progress float
// r3 = action node ptr, returns float 0.0..1.0 or constant
// =============================================================
float fn_80023FAC(void* r3) {
    u8* p = (u8*)r3;
    u8 state = p[0x61];
    s32 r31 = (s32)*(s16*)(p + 0x28) + 1;
    u32 hi = 0x43300000;
    double bias = lbl_803770C0;

    if (state == 1) {
        void* obj = (void*)*(u32*)(p + 0x3c);
        s32 (*vtfn)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)obj + 0x64);
        s32 cur = vtfn(obj);
        s32 top = cur + 1;
        s32 denom = top - r31;
        u32 ta[2]; ta[0]=hi; ta[1]=(u32)(top^0x8000);
        u32 tb[2]; tb[0]=hi; tb[1]=(u32)(denom^0x8000);
        float ftop = (float)(*(double*)ta - bias);
        float fdenom = (float)(*(double*)tb - bias);
        float f1 = lbl_803770B8;
        float frac = f1 / ftop;
        u32 tc[2]; tc[0]=hi; tc[1]=(u32)((u32)(r31-1)^0x8000); // wait, r31 is saved as r31=lha+1
        // from asm: subf r0, r31, r0  -> r0 = (cur+1) - r31
        // then xoris r0, r0, 0x8000; stw r0, 0x14(r1); stw r3, 0x10(r1)
        // lfd f0, 0x10(r1); fsubs f0, f0, bias; fdivs f1, f1, f0; lfd f0, 0x10; fsubs f0, f0, bias; fmuls f1, f1, f0
        u32 td[2]; td[0]=hi; td[1]=(u32)(denom^0x8000);
        float fdiv = (float)(*(double*)td - bias);
        frac = f1 / fdiv;
        u32 tm[2]; tm[0]=hi; tm[1]=(u32)((u32)top^0x8000);
        float fmul = (float)(*(double*)tm - bias);
        return frac * fmul;
    } else if (state >= 2 && state < 3) {
        // state == 2
        void* obj = (void*)*(u32*)(p + 0x3c);
        s32 (*vtfn)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)obj + 0x68);
        s32 cur = vtfn(obj);
        s32 top = cur + 1;
        u32 ta[2]; ta[0]=hi; ta[1]=(u32)((u32)top^0x8000);
        u32 tb[2]; tb[0]=hi; tb[1]=(u32)((u32)r31^0x8000);
        float ftop = (float)(*(double*)ta - bias);
        float fr31 = (float)(*(double*)tb - bias);
        float f1 = lbl_803770B8;
        float frac = f1 / ftop;
        return frac * fr31;
    } else if (state == 0) {
        return lbl_803770B8;
    } else {
        return lbl_803770BC;
    }
}

// =============================================================
// fn_800240C0: destroy child nodes then rebuild action sequence
// =============================================================
void fn_800240C0(void* r3) {
    u8* r28 = (u8*)r3;

    // destroy all child nodes
    s32 r25 = 0;
    while (1) {
        s8 lim = (s8)r28[0x60];
        if (r25 >= lim) break;
        u8 slot = r28[0x40 + r25];
        void* node = fn_8000BA30((void*)(u32)slot);
        fn_8000C734(node);
        r25++;
    }

    void* r29 = (void*)*(u32*)(r28 + 0x3c);
    s32 r30 = 0;
    s32 r31 = 0;
    r28[0x60] = 0;
    r28[0x62] = (u8)-1;

    while (1) {
        // vtable +0x44: get next item
        void* (*get_item)(void*, s32) = (void*(*)(void*, s32))*(u32*)((u8*)*(u32**)r29 + 0x44);
        void* r25p = get_item(r29, r31);
        if (!r25p) break;

        // vtable +0x24 on item: classify
        u8 (*classify)(void*, void*, u8) = (u8(*)(void*, void*, u8))*(u32*)((u8*)*(u32**)r25p + 0x24);
        u8 r26 = classify(r25p, r25p, (u8)r31);

        if ((u32)(r26 & 0xFF) == 3) { r31++; continue; }
        if ((u32)(r26 & 0xFF) == 1) {
            if ((s8)r28[0x62] < 0) r28[0x62] = r28[0x60];
            r26 = 0;
        }

        void* r27 = fn_8000CC18((u8*)lbl_8028E4A0, (s16)(u32)r28);
        *(u32*)((u8*)r27 + 0x34) = (u32)r25p;
        ((u8*)r27)[0x3a] = (u8)r31;
        ((u8*)r27)[0x3b] = r28[0x60];
        ((u8*)r27)[0x39] = r26;

        s32 (*vt48)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r29 + 0x48);
        *(s16*)((u8*)r27 + 0x30) = (s16)vt48(r29);
        s32 (*vt4c)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r29 + 0x4c);
        *(s16*)((u8*)r27 + 0x32) = (s16)(r30 + vt4c(r29));
        *(u32*)((u8*)r27 + 0x3c) = 0;
        s32 (*vt58)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r29 + 0x58);
        r30 += vt58(r29);

        fn_8000BA48(r27);
        s8 slot = (s8)r28[0x60];
        r28[0x60] = (u8)(slot + 1);
        r28[0x40 + slot] = (u8)(u32)r27;  // stbx r3, r28, r0  (r3=r27 low byte, r0=slot+0x40)
        r31++;
    }

    if ((s8)r28[0x62] < 0) r28[0x62] = 0;

    // final: re-read active slot, get BA30 node, dispatch vtable +0x40
    s8 active = (s8)r28[0x62];
    void* slot_node = fn_8000BA30((void*)(u32)r28[0x40 + active]);
    void* r5p = slot_node;
    void* base = (void*)*(u32*)((u8*)slot_node + 0x34);
    void (*vt40)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x40);
    vt40(base, r28, r5p);

    void* obj2 = (void*)*(u32*)(r28 + 0x3c);
    void (*vt1c)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)obj2 + 0x1c);
    vt1c(obj2, r28);
}

// =============================================================
// fn_80024294: linked list search find node matching r3->0x0
// =============================================================
void* fn_80024294(void* r3) {
    u8* p = (u8*)r3;
    void* r5 = r3;
    void* r6 = (void*)*(u32*)(p + 0x18);
    while (r6) {
        u32 r4 = *(u32*)r6;
        u32 r0 = *(u32*)p;
        if (r4 != r0) return r5;
        if (!r6) return r5;
        r5 = r6;
        r6 = (void*)*(u32*)((u8*)r6 + 0x18);
    }
    return 0;
}

// =============================================================
// fn_800242E0: render update for action node (position + color)
// r3 = unused, r4 = action obj ptr, r5 = target obj ptr
// =============================================================
void fn_800242E0(void* r3, void* r4, void* r5) {
    u8* r30 = (u8*)r4;
    u8* r31 = (u8*)r5;
    (void)r3;

    fn_8000A380();

    void* r3v = (void*)*(u32*)(r30 + 0x3c);
    void (*vt6c)(void*, float) = (void(*)(void*, float))*(u32*)((u8*)*(u32**)r3v + 0x6c);
    vt6c(r3v, fn_80023FAC(r30));

    // convert s16 fields to floats via double bias trick
    u32 hi = 0x43300000;
    double bias = lbl_803770C0;
    s16 x0 = *(s16*)(r30 + 0x30), y0 = *(s16*)(r30 + 0x32);
    u32 ta[2]; ta[0]=hi; ta[1]=(u32)(x0^0x8000);
    u32 tb[2]; tb[0]=hi; tb[1]=(u32)(y0^0x8000);
    float fx = (float)(*(double*)ta - bias);
    float fy = (float)(*(double*)tb - bias);
    float fofs = lbl_803770C8;
    float f3 = fn_80023FAC(r30) - fofs;
    float f1v = fx - (float)(*(double*)ta - bias);  // fsubs f1,f0,f2 with rebias
    float f2v = fy - (float)(*(double*)tb - bias);
    fn_80009E9C(f3, f1v, f2v, 0.0f, 0.0f, 0.0f);  // 6 floats, approximate
    fn_8000A29C(0, 0x13);
    fn_8000A370();
    fn_800079D8(5);

    // target position
    s16 x1 = *(s16*)(r31 + 0x30), y1 = *(s16*)(r31 + 0x32);
    u32 tc[2]; tc[0]=hi; tc[1]=(u32)(x1^0x8000);
    u32 td[2]; td[0]=hi; td[1]=(u32)(y1^0x8000);
    float fx1 = (float)(*(double*)tc - bias);
    float fy1 = (float)(*(double*)td - bias);
    fn_80007998(fx1, fy1);

    // draw with vtable +0x18
    void* base2 = (void*)*(u32*)(r31 + 0x34);
    void (*vt18)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)base2 + 0x18);
    vt18(base2, r31);

    fn_80007264();
    fn_800073BC(lbl_803770CC);

    // color overrides
    if (r31[0x38]) fn_800073D0(0xff, 0xff, 0, 0xff);
    if (r31[0x39] == 2) fn_800073D0(0, 0, 0, 0xff);

    fn_800079C4();
}

// =============================================================
// fn_80024464: spawn action node with full setup
// r3=owner ptr, r4=vtable obj ptr, r5=u8 flag
// =============================================================
void fn_80024464(void* r3, void* r4, u8 r5) {
    u8* r28 = (u8*)r3;
    u8* r25_flag = (u8*)(u32)r5;

    void* r29 = fn_8000CB8C((void*)lbl_8028E460, r4);
    if (r5) ((u8*)r29)[0x2b] = r5;

    ((u8*)r29)[0x60] = 0;
    ((u8*)r29)[0x62] = (u8)-1;
    s32 r30 = 0, r31 = 0;

    while (1) {
        // vtable +0x44 on r28: get item r31
        void* (*get_item)(void*, s32) = (void*(*)(void*, s32))*(u32*)((u8*)*(u32**)r28 + 0x44);
        void* r25p = get_item(r28, r31);
        if (!r25p) break;

        u8 (*classify)(void*, void*, u8) = (u8(*)(void*, void*, u8))*(u32*)((u8*)*(u32**)r25p + 0x24);
        u8 r26 = classify(r25p, r25p, (u8)r31);

        if ((u32)(r26 & 0xFF) == 3) { r31++; continue; }
        if ((u32)(r26 & 0xFF) == 1) {
            if ((s8)((u8*)r29)[0x62] < 0) ((u8*)r29)[0x62] = ((u8*)r29)[0x60];
            r26 = 0;
        }

        void* r27 = fn_8000CC18((u8*)lbl_8028E4A0, (s16)(u32)r29);
        *(u32*)((u8*)r27 + 0x34) = (u32)r25p;
        ((u8*)r27)[0x3a] = (u8)r31;
        ((u8*)r27)[0x3b] = ((u8*)r29)[0x60];
        ((u8*)r27)[0x39] = r26;

        s32 (*vt48)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x48);
        *(s16*)((u8*)r27 + 0x30) = (s16)vt48(r28);
        s32 (*vt4c)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x4c);
        *(s16*)((u8*)r27 + 0x32) = (s16)(r30 + vt4c(r28));
        *(u32*)((u8*)r27 + 0x3c) = 0;
        s32 (*vt58)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x58);
        r30 += vt58(r28);

        fn_8000BA48(r27);
        s8 slot = (s8)((u8*)r29)[0x60];
        ((u8*)r29)[0x60] = (u8)(slot + 1);
        ((u8*)r29)[0x40 + (s32)slot] = (u8)(u32)r27;
        r31++;
    }

    if ((s8)((u8*)r29)[0x62] < 0) ((u8*)r29)[0x62] = 0;

    // finalize: write r28 as owner, call vtable sequence
    *(u32*)((u8*)r29 + 0x3c) = (u32)r28;

    s16 (*vt5c)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x5c);
    *(s16*)((u8*)r29 + 0x30) = vt5c(r28);
    s16 (*vt60)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x60);
    *(s16*)((u8*)r29 + 0x32) = vt60(r28);
    s16 (*vt50)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x50);
    *(s16*)((u8*)r29 + 0x34) = vt50(r28);

    s16 (*vt54)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x54);
    s16 v54 = vt54(r28);
    if ((s32)(s16)v54 != 0) {
        *(s16*)((u8*)r29 + 0x36) = v54;
    } else {
        s16 (*vt58b)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x58);
        s16 (*vt4c2)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x4c);
        s32 vt58r = (s32)vt58b(r28);
        s32 count = (s32)(s8)((u8*)r29)[0x60];
        s32 vt4cr = (s32)vt4c2(r28);
        *(s16*)((u8*)r29 + 0x36) = (s16)(vt58r * count + vt4cr);
    }

    ((u8*)r29)[0x63] = ((u8*)r29)[0x62];
    *(s16*)((u8*)r29 + 0x38) = -1;
    *(s16*)((u8*)r29 + 0x3a) = -1;

    void (*vt14)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)r28 + 0x14);
    vt14(r28, r29);
    void (*vt1c)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)r28 + 0x1c);
    vt1c(r28, r29);

    s8 active = (s8)((u8*)r29)[0x62];
    void* node_a = fn_8000BA30((void*)(u32)((u8*)r29)[0x40 + active]);
    void* r25n = node_a;
    s8 active2 = (s8)((u8*)r29)[0x62];
    void* node_b = fn_8000BA30((void*)(u32)((u8*)r29)[0x40 + active2]);
    void* base2 = (void*)*(u32*)((u8*)node_b + 0x34);
    void (*vt40)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base2 + 0x40);
    vt40(base2, r29, r25n);

    s16 (*vt64)(void*) = (s16(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x64);
    *(s16*)((u8*)r29 + 0x28) = vt64(r28);

    ((u8*)r29)[0x61] = 1;

    s32 (*vt70)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x70);
    s32 v70 = vt70(r28);
    if (v70) fn_80148640(r28, 0x64);

    s32 (*vt0c)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r28 + 0x0c);
    s32 v0c = (s32)(u8)vt0c(r28);
    if (v0c) ((u8*)r29)[0x62] = (u8)-1;
}

// =============================================================
// fn_800247F4: clear animation state flag
// =============================================================
void fn_800247F4(void* r3) {
    ((u8*)r3)[0x61] = 0;
}

// =============================================================
// fn_80024800: call vtable +0x18 on sub-object
// =============================================================
void fn_80024800(void* r3) {
    u8* r4 = (u8*)r3;
    void* obj = (void*)*(u32*)(r4 + 0x3c);
    void (*vt18)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)obj + 0x18);
    vt18(obj, r3);
}

// =============================================================
// fn_80023134: bilinear terrain cost interpolation
// Uses lbl_80271A78 offsets 0x4c..0x78, cell base at map+0x20000
// f1=col(float), f2=row(float), returns float cost
// =============================================================
float fn_80023134(void* r3, float f1, float f2) {
    u8* r6 = (u8*)lbl_80271A78;
    u32 hi = 0x43300000;
    double bias = lbl_80377090;
    float threshold = lbl_80377098;
    float f29 = f1, f30 = f2;

    // truncate floats to integer col/row via fctiwz (truncate toward zero)
    s32 icol = (s32)f29;
    s32 irow = (s32)f30;
    s8 r30 = (s8)icol;
    s8 r31 = (s8)irow;

    // convert truncated ints back to float via double bias trick
    u32 tc[2]; tc[0]=hi; tc[1]=(u32)((u32)(s32)r30^0x8000);
    u32 td[2]; td[0]=hi; td[1]=(u32)((u32)(s32)r31^0x8000);
    float fcol = (float)(*(double*)tc - bias);
    float frow = (float)(*(double*)td - bias);

    // fractional test: (f30 + (f29 - fcol)) - frow
    float test = (f30 + (f29 - fcol)) - frow;

    float f31v, f4, f5, f6;
    u32 stk[0xd0/4];   // mirror of the 0xd0-byte stack frame
    u8* stk8 = (u8*)stk;

    if (test > threshold) {
        // upper-right triangle
        u8* r8 = (u8*)r3 + 0x20000;
        s32 idx = (s32)r30 + ((s32)r31 << 6);
        u8* r28 = r8 + (idx << 3);
        float f2s = *(float*)(r8 - 0x3d2c);

        // two terrain values, xoris pattern
        s16 tv_r4 = *(s16*)(r28 - 0x3d24);
        s16 tv_r7 = *(s16*)(r28 - 0x3d22);
        u32 xv_r9 = (u32)(tv_r4 ^ 0x8000);
        u32 xv_r7 = (u32)(tv_r7 ^ 0x8000);

        // build doubles on stack for bias subtraction
        *(u32*)(stk8+0x80) = hi;  *(u32*)(stk8+0x84) = xv_r7;
        *(u32*)(stk8+0x78) = hi;  *(u32*)(stk8+0x7c) = xv_r9;

        // f1 = double[0x80] - bias; f31 = f1 * f2s
        float fA = (float)(*(double*)(stk8+0x80) - bias);
        float fB = (float)(*(double*)(stk8+0x78) - bias);
        f31v = fA * f2s;
        float f0 = fB * f2s;
        f0 = f0 - f31v;
        // stfs f0, 0x34; lwz r0, 0x34; stw r0, 0x64
        *(float*)(stk8+0x34) = f0;
        *(u32*)(stk8+0x64) = *(u32*)(stk8+0x34);

        // third terrain value
        s16 tv_r0 = *(s16*)(r28 - 0x3d26);
        u32 xv_r0 = (u32)(tv_r0 ^ 0x8000);
        *(u32*)(stk8+0x70) = hi;  *(u32*)(stk8+0x74) = xv_r0;
        float fC = (float)(*(double*)(stk8+0x70) - bias);
        float f0c = fC * f2s;
        f0c = f0c - f31v;
        // stfs f0, 0x28; lwz r0, 0x28; stw r0, 0x58
        *(float*)(stk8+0x28) = f0c;
        *(u32*)(stk8+0x58) = *(u32*)(stk8+0x28);

        // integer table values from lbl_80271A78
        *(u32*)(stk8+0x34) = *(u32*)(r6+0x54);   // stw r10
        *(u32*)(stk8+0x5c) = *(u32*)(r6+0x4c);   // stw r12
        *(u32*)(stk8+0x60) = *(u32*)(r6+0x50);   // stw r11
        *(u32*)(stk8+0x70) = hi;                   // stw r0 (0x4330)
        *(u32*)(stk8+0x28) = *(u32*)(r6+0x60);   // stw r7
        *(u32*)(stk8+0x2c) = *(u32*)(r6+0x4c);   // stw r12
        *(u32*)(stk8+0x30) = *(u32*)(r6+0x50);   // stw r11
        *(u32*)(stk8+0x20) = *(u32*)(r6+0x58);   // stw r8
        *(u32*)(stk8+0x24) = *(u32*)(r6+0x5c);   // stw r6
        *(u32*)(stk8+0x50) = *(u32*)(r6+0x58);   // stw r8
        *(u32*)(stk8+0x54) = *(u32*)(r6+0x5c);   // stw r6

        fn_8020BDE8(stk8+0x5c, stk8+0x50, stk8+0x5c);

        f4 = *(float*)(stk8+0x60);
        f5 = *(float*)(stk8+0x5c);
        f6 = *(float*)(stk8+0x64);

        // r31+1 and r30+1 as floats
        u32 tn[2]; tn[0]=hi; tn[1]=(u32)((u32)((s32)r31+1)^0x8000);
        u32 tm[2]; tm[0]=hi; tm[1]=(u32)((u32)((s32)r30+1)^0x8000);
        *(u32*)(stk8+0x88) = hi;   *(u32*)(stk8+0x8c) = (u32)((u32)((s32)r31+1)^0x8000);
        *(u32*)(stk8+0x68) = hi;   *(u32*)(stk8+0x6c) = (u32)((u32)((s32)r30+1)^0x8000);
        float frow1 = (float)(*(double*)(stk8+0x88) - bias);
        float fcol1 = (float)(*(double*)(stk8+0x68) - bias);

        float f0r = f4 * f30;
        f0r = f5 * f29 + f0r;                    // fmadds f0, f5, f29, f0
        float f1r = f4 * frow1;
        f1r = f5 * fcol1 + f1r;                  // fmadds f1, f5, f2, f1
        f1r = -(f6 * f31v + f1r);                // fnmadds f1, f6, f31, f1
        f0r = f1r + f0r;                         // fadds f0, f1, f0
        f0r = -f0r;                              // fneg
        return f0r / f6;                         // fdivs f1, f0, f6

    } else {
        // lower-left triangle offsets 0x64/0x68/0x6c/0x70/0x74/0x78
        u8* r8 = (u8*)r3 + 0x20000;
        s32 idx = (s32)r30 + ((s32)r31 << 6);
        u8* r30p = r8 + (idx << 3);    // NOTE: result stored in r30 register
        float f2s = *(float*)(r8 - 0x3d2c);

        s16 tv_r7 = *(s16*)(r30p - 0x3d28);
        s16 tv_r4 = *(s16*)(r30p - 0x3d26);
        u32 xv_r7 = (u32)(tv_r7 ^ 0x8000);
        u32 xv_r9 = (u32)(tv_r4 ^ 0x8000);

        *(u32*)(stk8+0x88) = hi;  *(u32*)(stk8+0x8c) = xv_r7;
        *(u32*)(stk8+0x80) = hi;  *(u32*)(stk8+0x84) = xv_r9;

        float fA = (float)(*(double*)(stk8+0x88) - bias);
        float fB = (float)(*(double*)(stk8+0x80) - bias);
        f31v = fA * f2s;
        float f0 = fB * f2s;
        f0 = f0 - f31v;
        *(float*)(stk8+0x1c) = f0;
        *(u32*)(stk8+0x4c) = *(u32*)(stk8+0x1c);

        s16 tv_r0 = *(s16*)(r30p - 0x3d24);
        u32 xv_r0 = (u32)(tv_r0 ^ 0x8000);
        *(u32*)(stk8+0x78) = hi;  *(u32*)(stk8+0x7c) = xv_r0;
        float fC = (float)(*(double*)(stk8+0x78) - bias);
        float f0c = fC * f2s;
        f0c = f0c - f31v;
        *(float*)(stk8+0x10) = f0c;
        *(u32*)(stk8+0x40) = *(u32*)(stk8+0x10);

        *(u32*)(stk8+0x1c) = *(u32*)(r6+0x6c);   // stw r10
        *(u32*)(stk8+0x44) = *(u32*)(r6+0x64);   // stw r12
        *(u32*)(stk8+0x48) = *(u32*)(r6+0x68);   // stw r11
        *(u32*)(stk8+0x78) = hi;
        *(u32*)(stk8+0x10) = *(u32*)(r6+0x78);   // stw r7
        *(u32*)(stk8+0x14) = *(u32*)(r6+0x64);   // stw r12
        *(u32*)(stk8+0x18) = *(u32*)(r6+0x68);   // stw r11
        *(u32*)(stk8+0x08) = *(u32*)(r6+0x70);   // stw r8
        *(u32*)(stk8+0x0c) = *(u32*)(r6+0x74);   // stw r6
        *(u32*)(stk8+0x38) = *(u32*)(r6+0x70);   // stw r8
        *(u32*)(stk8+0x3c) = *(u32*)(r6+0x74);   // stw r6

        fn_8020BDE8(stk8+0x44, stk8+0x38, stk8+0x44);

        f4 = *(float*)(stk8+0x48);
        f5 = *(float*)(stk8+0x44);
        f6 = *(float*)(stk8+0x4c);

        // r31 and r30 as floats (no +1 in lower branch)
        *(u32*)(stk8+0x68) = hi;   *(u32*)(stk8+0x6c) = (u32)((u32)(s32)r31^0x8000);
        *(u32*)(stk8+0x70) = hi;   *(u32*)(stk8+0x74) = (u32)((u32)(s32)r30^0x8000);  // mr r0,r31 then extsb r4,r29 -> uses r30 (=r29=col int)
        // NOTE: lower branch uses mr r0, r31 (=irow) and extsb r4, r29 (=icol)
        // so frow uses r31 unchanged, fcol uses r29 (=icol = r30 the s8)
        float frow0 = (float)(*(double*)(stk8+0x68) - bias);
        float fcol0 = (float)(*(double*)(stk8+0x70) - bias);

        float f0r = f4 * f30;
        f0r = f5 * f29 + f0r;
        float f1r = f4 * frow0;
        f1r = f5 * fcol0 + f1r;
        f1r = -(f6 * f31v + f1r);
        f0r = f1r + f0r;
        f0r = -f0r;
        return f0r / f6;
    }
}

// =============================================================
// fn_800234FC: bilinear terrain cost interpolation
// Uses lbl_80271A78 offsets 0x1c..0x48, cell base at map+0x10000
// f1=col(float), f2=row(float), returns float cost
// =============================================================
float fn_800234FC(void* r3, float f1, float f2) {
    u8* r6 = (u8*)lbl_80271A78;
    u32 hi = 0x43300000;
    double bias = lbl_80377090;
    float threshold = lbl_80377098;
    float f29 = f1, f30 = f2;

    s32 icol = (s32)f29;
    s32 irow = (s32)f30;
    s8 r30 = (s8)icol;
    s8 r31 = (s8)irow;

    u32 tc[2]; tc[0]=hi; tc[1]=(u32)((u32)(s32)r30^0x8000);
    u32 td[2]; td[0]=hi; td[1]=(u32)((u32)(s32)r31^0x8000);
    float fcol = (float)(*(double*)tc - bias);
    float frow = (float)(*(double*)td - bias);
    float test = (f30 + (f29 - fcol)) - frow;

    float f31v, f4, f5, f6;
    u32 stk[0xd0/4];
    u8* stk8 = (u8*)stk;

    if (test > threshold) {
        // upper-right triangle: cell at map+0x10000, reads +0x42da/0x42d8/0x42d6
        u8* r7 = (u8*)r3 + 0x20000;   // addis r7, r3, 0x2 (scale factor source)
        u8* r3b = (u8*)r3 + 0x10000;  // addis r3, r3, 0x1 (cell base)
        s32 idx = (s32)r30 + ((s32)r31 << 6);
        u8* r12 = r3b + (idx << 3);
        float f2s = *(float*)(r7 - 0x3d2c);  // lfs f2, -0x3d2c(r7) -- same scale

        s16 tv_r8 = *(s16*)(r12 + 0x42da);   // lha r8
        s16 tv_r4 = *(s16*)(r12 + 0x42d8);   // lha r4
        u32 xv_r10 = (u32)(tv_r8 ^ 0x8000);  // xoris r10
        u32 xv_r8  = (u32)(tv_r4 ^ 0x8000);  // xoris r8

        *(u32*)(stk8+0x80) = hi;  *(u32*)(stk8+0x84) = xv_r10;
        *(u32*)(stk8+0x78) = hi;  *(u32*)(stk8+0x7c) = xv_r8;   // wait stw r0,0x80 comes before stw r8,0x7c

        // from asm: stw r10,0x84; stw r0,0x80; stw r8,0x7c; stw r0,0x78
        // f0 = lfd 0x80 - bias; f1 = lfd 0x78 - bias
        // so: 0x80/0x84 = (hi, xv_r10), 0x78/0x7c = (hi, xv_r8)
        float fA = (float)(*(double*)(stk8+0x80) - bias);  // from r10 (lha +0x42da)
        float fB = (float)(*(double*)(stk8+0x78) - bias);  // from r8  (lha +0x42d8)
        f31v = fA * f2s;
        float f0 = fB * f2s;
        f0 = f0 - f31v;
        *(float*)(stk8+0x34) = f0;
        *(u32*)(stk8+0x64) = *(u32*)(stk8+0x34);

        s16 tv_r0 = *(s16*)(r12 + 0x42d6);   // lha r0
        u32 xv_r0 = (u32)(tv_r0 ^ 0x8000);
        *(u32*)(stk8+0x70) = hi;  *(u32*)(stk8+0x74) = xv_r0;
        float fC = (float)(*(double*)(stk8+0x70) - bias);
        float f0c = fC * f2s - f31v;
        *(float*)(stk8+0x28) = f0c;
        *(u32*)(stk8+0x58) = *(u32*)(stk8+0x28);

        *(u32*)(stk8+0x34) = *(u32*)(r6+0x24);   // stw r9  [+0x24]
        *(u32*)(stk8+0x5c) = *(u32*)(r6+0x1c);   // stw r11 [+0x1c]
        *(u32*)(stk8+0x60) = *(u32*)(r6+0x20);   // stw r10 [+0x20]
        *(u32*)(stk8+0x70) = hi;
        *(u32*)(stk8+0x28) = *(u32*)(r6+0x30);   // stw r7  [+0x30]
        *(u32*)(stk8+0x2c) = *(u32*)(r6+0x1c);   // stw r11 [+0x1c]
        *(u32*)(stk8+0x30) = *(u32*)(r6+0x20);   // stw r10 [+0x20]
        *(u32*)(stk8+0x20) = *(u32*)(r6+0x28);   // stw r8  [+0x28]
        *(u32*)(stk8+0x24) = *(u32*)(r6+0x2c);   // stw r6  [+0x2c]
        *(u32*)(stk8+0x50) = *(u32*)(r6+0x28);   // stw r8
        *(u32*)(stk8+0x54) = *(u32*)(r6+0x2c);   // stw r6

        fn_8020BDE8(stk8+0x5c, stk8+0x50, stk8+0x5c);

        f4 = *(float*)(stk8+0x60);
        f5 = *(float*)(stk8+0x5c);
        f6 = *(float*)(stk8+0x64);

        *(u32*)(stk8+0x88) = hi;   *(u32*)(stk8+0x8c) = (u32)((u32)((s32)r31+1)^0x8000);
        *(u32*)(stk8+0x68) = hi;   *(u32*)(stk8+0x6c) = (u32)((u32)((s32)r30+1)^0x8000);
        float frow1 = (float)(*(double*)(stk8+0x88) - bias);
        float fcol1 = (float)(*(double*)(stk8+0x68) - bias);

        float f0r = f4 * f30;
        f0r = f5 * f29 + f0r;
        float f1r = f4 * frow1;
        f1r = f5 * fcol1 + f1r;
        f1r = -(f6 * f31v + f1r);
        f0r = f1r + f0r;
        return -(f0r) / f6;

    } else {
        // lower-left triangle: reads +0x42d4/0x42d6/0x42d8, table offsets 0x34..0x48
        u8* r7 = (u8*)r3 + 0x20000;
        u8* r3b = (u8*)r3 + 0x10000;
        s32 idx = (s32)r30 + ((s32)r31 << 6);
        u8* r12 = r3b + (idx << 3);
        float f2s = *(float*)(r7 - 0x3d2c);

        s16 tv_r8 = *(s16*)(r12 + 0x42d4);   // lha r8
        s16 tv_r4 = *(s16*)(r12 + 0x42d6);   // lha r4
        u32 xv_r10 = (u32)(tv_r8 ^ 0x8000);
        u32 xv_r8  = (u32)(tv_r4 ^ 0x8000);

        *(u32*)(stk8+0x88) = hi;  *(u32*)(stk8+0x8c) = xv_r10;
        *(u32*)(stk8+0x80) = hi;  *(u32*)(stk8+0x84) = xv_r8;

        float fA = (float)(*(double*)(stk8+0x88) - bias);
        float fB = (float)(*(double*)(stk8+0x80) - bias);
        f31v = fA * f2s;
        float f0 = fB * f2s - f31v;
        *(float*)(stk8+0x1c) = f0;
        *(u32*)(stk8+0x4c) = *(u32*)(stk8+0x1c);

        s16 tv_r0 = *(s16*)(r12 + 0x42d8);   // lha r0
        u32 xv_r0 = (u32)(tv_r0 ^ 0x8000);
        *(u32*)(stk8+0x78) = hi;  *(u32*)(stk8+0x7c) = xv_r0;
        float fC = (float)(*(double*)(stk8+0x78) - bias);
        float f0c = fC * f2s - f31v;
        *(float*)(stk8+0x10) = f0c;
        *(u32*)(stk8+0x40) = *(u32*)(stk8+0x10);

        *(u32*)(stk8+0x1c) = *(u32*)(r6+0x3c);   // stw r9  [+0x3c]
        *(u32*)(stk8+0x44) = *(u32*)(r6+0x34);   // stw r11 [+0x34]
        *(u32*)(stk8+0x48) = *(u32*)(r6+0x38);   // stw r10 [+0x38]
        *(u32*)(stk8+0x78) = hi;
        *(u32*)(stk8+0x10) = *(u32*)(r6+0x48);   // stw r7  [+0x48]
        *(u32*)(stk8+0x14) = *(u32*)(r6+0x34);   // stw r11 [+0x34]
        *(u32*)(stk8+0x18) = *(u32*)(r6+0x38);   // stw r10 [+0x38]
        *(u32*)(stk8+0x08) = *(u32*)(r6+0x40);   // stw r8  [+0x40]
        *(u32*)(stk8+0x0c) = *(u32*)(r6+0x44);   // stw r6  [+0x44]
        *(u32*)(stk8+0x38) = *(u32*)(r6+0x40);   // stw r8
        *(u32*)(stk8+0x3c) = *(u32*)(r6+0x44);   // stw r6

        fn_8020BDE8(stk8+0x44, stk8+0x38, stk8+0x44);

        f4 = *(float*)(stk8+0x48);
        f5 = *(float*)(stk8+0x44);
        f6 = *(float*)(stk8+0x4c);

        // lower branch: mr r0, r31 (=irow); extsb r4, r30 (=icol, stored as r29 in registers but r30 is the s8 var)
        // Doc 10 at 0x2d4: mr r0, r31; 0x2e8: mr r4, r30
        *(u32*)(stk8+0x68) = hi;   *(u32*)(stk8+0x6c) = (u32)((u32)(s32)r31^0x8000);
        *(u32*)(stk8+0x70) = hi;   *(u32*)(stk8+0x74) = (u32)((u32)(s32)r30^0x8000);
        float frow0 = (float)(*(double*)(stk8+0x68) - bias);
        float fcol0 = (float)(*(double*)(stk8+0x70) - bias);

        float f0r = f4 * f30;
        f0r = f5 * f29 + f0r;
        float f1r = f4 * frow0;
        f1r = f5 * fcol0 + f1r;
        f1r = -(f6 * f31v + f1r);
        f0r = f1r + f0r;
        return -(f0r) / f6;
    }
}

// =============================================================
// fn_80024834: main action update dispatch
// r3 = owner ptr
// =============================================================
void fn_80024834(void* r3) {
    u8* r30 = (u8*)r3;
    void* r31 = (void*)*(u32*)(r30 + 0x3c);
    s32 r29 = 0;

    if (lbl_803753B0 & (1u << (31-24))) goto done_80024834;

    if ((s8)r30[0x62] < 0) {
        void (*vt3c)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)r31 + 0x3c);
        vt3c(r31, r30);
        goto done_80024834;
    }

    {
        void (*vt34)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)r31 + 0x34);
        vt34(r31, r30);
    }
    {
        void* obj2 = (void*)*(u32*)(r30 + 0x3c);
        void (*vt38)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)obj2 + 0x38);
        vt38(obj2, r30);
    }

    if (r30[0x2b] != 0x7b) {
        s8 active = (s8)r30[0x62];
        void* node = fn_8000BA30((void*)(u32)r30[0x40 + active]);
        lbl_803754D8 = ((u8*)node)[0x3a];
        active = (s8)r30[0x62];
        node = fn_8000BA30((void*)(u32)r30[0x40 + active]);
        lbl_803754D9 = ((u8*)node)[0x3b];
    }

    {
        void* obj2 = (void*)*(u32*)(r30 + 0x3c);
        s32 (*vt40)(void*, void*) = (s32(*)(void*, void*))*(u32*)((u8*)*(u32**)obj2 + 0x40);
        r29 = vt40(obj2, r30);
    }

    if (r30[0x2b] != 0x7b)
        lbl_803754DA = (u8)r29;

    // bit 29: vtable +0x80
    if (r29 & (1 << (31-29))) {
        s32 (*vt80)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r31 + 0x80);
        if (vt80(r31)) {
            vt80(r31);
            fn_80148640(r31, 0x64);
        }
    }

    // bit 28: vtable +0x78
    if ((u8)r29 & (1 << (31-28))) {
        s32 (*vt78)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r31 + 0x78);
        if (vt78(r31)) {
            vt78(r31);
            fn_80148640(r31, 0x64);
        }
    }

    // bit 27: vtable +0x7c
    if ((u8)r29 & (1 << (31-27))) {
        s32 (*vt7c)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r31 + 0x7c);
        if (vt7c(r31)) {
            vt7c(r31);
            fn_80148640(r31, 0x64);
        }
    }

    // bit 0 (clrlwi. r0, r29, 31): construct + activate + vtable +0x74
    if ((u8)r29 & 1) {
        fn_8000C2B0(r30);
        s8 active = (s8)r30[0x62];
        void* node = fn_8000BA30((void*)(u32)r30[0x40 + active]);
        void* r5p = node;
        void* base = (void*)*(u32*)((u8*)node + 0x34);
        void (*vt44)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x44);
        vt44(base, r30, r5p);

        s32 (*vt74)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r31 + 0x74);
        if (vt74(r31)) {
            vt74(r31);
            fn_80148640(r31, 0x64);
        }
        goto done_80024834;
    }

    // bit 30: vtable +0x74 then walk lbl_8028E460 list
    if ((u8)r29 & (1 << (31-30))) {
        void* r29p = r30;
        s32 (*vt74)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r31 + 0x74);
        if (vt74(r31)) {
            vt74(r31);
            fn_80148640(r31, 0x64);
        }
        // walk linked list rooted at node->0x18, matching node->0x0 == lbl_8028E460
        while (r29p) {
            fn_8000C2B0(r29p);
            u8* p = (u8*)r29p;
            u8 flags = p[0x2c];
            if (flags & (1 << (31-30))) {
                p[0x2c] = (u8)(flags & ~(u8)(1 << (31-30)));
                void* parent = (void*)*(u32*)(p + 0x18);
                u8 cnt = ((u8*)parent)[0x2d];
                ((u8*)parent)[0x2d] = cnt - 1;
            }
            r29p = (void*)*(u32*)(p + 0x18);
            if (!r29p) break;
            if (*(u32*)r29p != *(u32*)(u8*)lbl_8028E460) break;
        }
        goto done_80024834;
    }

    // bit 26: float position update path
    if ((u8)r29 & (1 << (31-26))) {
        s8 active = (s8)r30[0x62];
        void* node = fn_8000BA30((void*)(u32)r30[0x40 + active]);

        // first position sum: r30[0x30] + node[0x30] as float via double bias
        s16 x30a = *(s16*)(r30 + 0x30);
        s16 x30b = *(s16*)((u8*)node + 0x30);
        s32 xsum = (s32)x30a + (s32)x30b;
        u32 hi = 0x43300000;
        double bias = lbl_803770C0;
        u32 tx[2]; tx[0]=hi; tx[1]=(u32)(xsum^0x8000);
        float f31 = (float)(*(double*)tx - bias);

        // second position sum: r30[0x32] + node[0x32]
        s16 y30a = *(s16*)(r30 + 0x32);
        s16 y30b = *(s16*)((u8*)node + 0x32);
        s32 ysum = (s32)y30a + (s32)y30b;
        u32 ty[2]; ty[0]=hi; ty[1]=(u32)(ysum^0x8000);
        float f30f = (float)(*(double*)ty - bias);

        // get sub-node for vtable +0x10
        active = (s8)r30[0x62];
        node = fn_8000BA30((void*)(u32)r30[0x40 + active]);
        void* base = (void*)*(u32*)((u8*)node + 0x34);
        s32 (*vt10)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)base + 0x10);
        void* r5p = (void*)vt10(base);

        if (r5p) {
            fn_801689EC((void*)lbl_8033AD68, r30, f31, f30f);
        } else {
            active = (s8)r30[0x62];
            node = fn_8000BA30((void*)(u32)r30[0x40 + active]);
            void* base2 = (void*)*(u32*)((u8*)node + 0x34);
            void* (*vt48)(void*) = (void*(*)(void*))*(u32*)((u8*)*(u32**)base2 + 0x48);
            void* r5b = vt48(base2);
            fn_801688BC((void*)lbl_8033AD68, r30, f31, f30f, r5b);
        }

        // set lbl_8033AD68 flags
        *(u32*)(u8*)lbl_8033AD68 = *(u32*)(u8*)lbl_8033AD68 | lbl_803770D4;
        goto done_80024834;
    }

    // bit 25: fn_80168820
    if ((u8)r29 & (1 << (31-25))) {
        fn_80168820((void*)lbl_8033AD68);
    }

done_80024834:;
}

// =============================================================
// fn_80024C80: input-driven action dispatch
// r3=owner, r4=action node ptr
// =============================================================
void fn_80024C80(void* r3, void* r4) {
    u8* r31 = (u8*)r4;
    u32* ctrl = (u32*)lbl_803754E0;
    u32 r5 = ctrl[1];
    u32 r4v = ctrl[2];
    u32 r0 = r4v ^ r5;
    u32 r30 = r5 & r0;   // newly pressed bits

    s8 active = (s8)r31[0x62];
    void* r29 = fn_8000BA30((void*)(u32)r31[0x40 + (s32)active]);

    // bit 23 (rlwinm. r0, r30, 0, 23, 23)
    if (r30 & (1u << (31-23))) {
        u8 v = fn_80168188((void*)lbl_8033AD68);
        if (!(v & 0xFF)) {
            void* base = (void*)*(u32*)((u8*)r29 + 0x34);
            void (*vt2c)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x2c);
            vt2c(base, r4, r29);
            return;
        }
    }

    // bit 22
    if (r30 & (1u << (31-22))) {
        void* obj = (void*)*(u32*)(r31 + 0x3c);
        void (*vt20)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)obj + 0x20);
        vt20(obj, r4, r29);
        return;
    }

    // bit 21
    if (r30 & (1u << (31-21))) {
        void* base = (void*)*(u32*)((u8*)r29 + 0x34);
        void (*vt30)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x30);
        vt30(base, r4, r29);
        return;
    }

    // bit 20
    if (r30 & (1u << (31-20))) {
        void* obj = (void*)*(u32*)(r31 + 0x3c);
        void (*vt24)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)obj + 0x24);
        vt24(obj, r4, r29);
        return;
    }

    // bit 27: two vtable calls combined
    if (r30 & (1u << (31-27))) {
        void* base = (void*)*(u32*)((u8*)r29 + 0x34);
        u8 (*vt34)(void*, void*, void*) = (u8(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x34);
        u32 ra = (u32)vt34(base, r4, r29);
        void* obj = (void*)*(u32*)(r31 + 0x3c);
        u8 (*vt28)(void*, void*, void*) = (u8(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)obj + 0x28);
        u32 rb = (u32)vt28(obj, r4, r29);
        return; // clrlwi r3, (rb|ra), 24
        (void)ra; (void)rb;
    }

    // bit 19
    if (r30 & (1u << (31-19))) {
        void* obj = (void*)*(u32*)(r31 + 0x3c);
        void (*vt2c)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)obj + 0x2c);
        vt2c(obj, r4, r29);
        return;
    }

    // default (fallthrough)
    {
        void* base = (void*)*(u32*)((u8*)r29 + 0x34);
        void (*vt3c)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x3c);
        vt3c(base, r4, r29);
    }
}

// =============================================================
// fn_80024E2C: check input flags, call vtable +0x84 conditionally
// r3=owner, r4=action node ptr
// =============================================================
void fn_80024E2C(void* r3, void* r4) {
    void* r31 = r3;
    u32* ctrl = (u32*)lbl_803754E0;
    u32 r7 = ctrl[1];
    u32 r5 = ctrl[2];
    u32 r0 = r5 ^ r7;
    u32 r5v = r7 & r0;
    u32 mask = (u32)(0xc00 + 0xc);   // lis r5, 0xc00; addi r0, r5, 0xc
    if (!(r5v & mask)) return;

    ((u8*)r4)[0x62] = 0;
    s32 (*vt84)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r3 + 0x84);
    if (vt84(r3)) {
        vt84(r3);
        fn_80148640(r3, 0x64);
    }
}

// =============================================================
// fn_80024EB4: check input flags, call vtable +0x38 on active node
// r3=owner, r4=action node ptr
// =============================================================
void fn_80024EB4(void* r3, void* r4) {
    u8* r31 = (u8*)r4;
    u32* ctrl = (u32*)lbl_803754E0;
    u32 r3v = ctrl[1];
    u32 mask = 0x300 + 3;   // lis r3, 0x300; addi r0, r3, 0x3
    if (!(r3v & mask)) return;

    s8 active = (s8)r31[0x62];
    void* node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
    void* r5p = node;
    void* base = (void*)*(u32*)((u8*)node + 0x34);
    void (*vt38)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x38);
    vt38(base, r4, r5p);
    (void)r3;
}

// =============================================================
// fn_80024F24: input-driven animation step
// r3=owner, r4=action node ptr
// =============================================================
void fn_80024F24(void* r3, void* r4) {
    u8* r31 = (u8*)r4;
    u8* r30 = (u8*)r3;

    u32* ctrl_ptr = (u32*)lbl_803754E0;
    u32 r6 = ctrl_ptr[3];   // +0xc
    u32 r4v = ctrl_ptr[1];  // +0x4
    u32 r3v = ctrl_ptr[2];  // +0x8
    u32 r0 = r3v ^ r4v;
    u32 r5 = r4v & r0;      // newly pressed

    r31[0x63] = r31[0x62];  // save previous active slot

    u32 down_mask = 0x8008;  // lis r4, 0x800; addi r0, r4, 0x8
    if (r6 & down_mask) {
        if (!(s8)r31[0x62]) {
            if (r5 == r6) {
                r31[0x62] = r31[0x60];
            }
        }
        u8 cur = r31[0x62];
        r31[0x62] = (u8)(cur - 1);
    }

    u32 up_mask = 0x4004;   // lis r3, 0x400; addi r0, r3, 0x4
    if (r6 & up_mask) {
        s8 cur = (s8)r31[0x60];
        s8 idx = (s8)r31[0x62];
        if (idx == cur - 1) {
            if (r5 == r6) {
                r31[0x62] = (u8)-1;
            }
        }
        r31[0x62] = (u8)(r31[0x62] + 1);
    }

    // if active slot unchanged, goto tail
    if ((s8)r31[0x62] == (s8)r31[0x63]) goto tail_80024F24;

    {
        s8 active = (s8)r31[0x63];
        void* node_old = fn_8000BA30((void*)(u32)r31[0x40 + active]);
        void* r5p = node_old;
        void* base_old = (void*)*(u32*)((u8*)node_old + 0x34);
        void (*vt44)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base_old + 0x44);
        vt44(base_old, r4, r5p);
    }
    {
        s8 active = (s8)r31[0x62];
        void* node_new = fn_8000BA30((void*)(u32)r31[0x40 + active]);
        void* r5p = node_new;
        void* base_new = (void*)*(u32*)((u8*)node_new + 0x34);
        void (*vt40)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base_new + 0x40);
        vt40(base_new, r4, r5p);
    }

    {
        u8 v = fn_80168188((void*)lbl_8033AD68);
        if (v & 0xFF) {
            // float position calculation
            s8 active = (s8)r31[0x62];
            void* node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
            s16 x30a = *(s16*)(r31 + 0x30);
            s16 x30b = *(s16*)((u8*)node + 0x30);
            s32 xsum = (s32)x30a + (s32)x30b;
            u32 hi = 0x43300000;
            double bias = lbl_803770C0;
            u32 tx[2]; tx[0]=hi; tx[1]=(u32)(xsum^0x8000);
            float f31v = (float)(*(double*)tx - bias);

            active = (s8)r31[0x62];
            node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
            s16 y30a = *(s16*)(r31 + 0x32);
            s16 y30b = *(s16*)((u8*)node + 0x32);
            s32 ysum = (s32)y30a + (s32)y30b;
            u32 ty[2]; ty[0]=hi; ty[1]=(u32)(ysum^0x8000);
            float f30v = (float)(*(double*)ty - bias);

            active = (s8)r31[0x62];
            node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
            void* base = (void*)*(u32*)((u8*)node + 0x34);
            s32 (*vt10)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)base + 0x10);
            void* r4p = (void*)vt10(base);

            if (r4p) {
                fn_801685E0((void*)lbl_8033AD68, r4, f31v, f30v);
            } else {
                active = (s8)r31[0x62];
                node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
                void* base2 = (void*)*(u32*)((u8*)node + 0x34);
                void* (*vt48)(void*) = (void*(*)(void*))*(u32*)((u8*)*(u32**)base2 + 0x48);
                void* r3p = vt48(base2);
                fn_801681CC((void*)lbl_8033AD68, r4, f31v, f30v, r3p);
            }
        }
    }

tail_80024F24:
    {
        s32 (*vt84)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)r30 + 0x84);
        if (vt84(r30)) {
            vt84(r30);
            fn_80148640(r30, 0x64);
        }
    }
}

// =============================================================
// fn_800251D8: animation step with position lerp
// r3=owner, r4=action node ptr
// =============================================================
void fn_800251D8(void* r3, void* r4) {
    u8* r31 = (u8*)r4;

    // update r31[0x3a]: lerp toward node[0x32]
    s8 active = (s8)r31[0x62];
    void* node = fn_8000BA30((void*)(u32)r31[0x40 + active]);
    s16 node_y = *(s16*)((u8*)node + 0x32);
    s16 cur = *(s16*)(r31 + 0x3a);
    if ((s32)cur < 0) {
        *(s16*)(r31 + 0x3a) = node_y;
    } else {
        s32 sum = (s32)cur + (s32)node_y;
        // average: (sum + (sum>>31)) >> 1  (arithmetic divide by 2)
        s32 avg = (sum + (s32)((u32)sum >> 31)) >> 1;
        *(s16*)(r31 + 0x3a) = (s16)avg;
    }

    fn_8000A380();

    void* obj = (void*)*(u32*)(r31 + 0x3c);
    void (*vt6c)(void*, float) = (void(*)(void*, float))*(u32*)((u8*)*(u32**)obj + 0x6c);
    vt6c(obj, fn_80023FAC(r4));

    // position floats via double bias
    u32 hi = 0x43300000;
    double bias = lbl_803770C0;
    float fbase = lbl_803770B8;
    s16 x30 = *(s16*)(r31 + 0x30);
    s16 y30 = *(s16*)(r31 + 0x32);
    u32 tx[2]; tx[0]=hi; tx[1]=(u32)(x30^0x8000);
    u32 ty[2]; ty[0]=hi; ty[1]=(u32)(y30^0x8000);
    float fx = (float)(*(double*)tx - bias);
    float fy = (float)(*(double*)ty - bias);
    float f3 = fn_80023FAC(r4) - fbase;  // fsubs f3, f1, f4
    fn_80009E9C(f3, fx, fy, 0.0f, 0.0f, 0.0f);
    fn_8000A29C(0, 0x12);
    fn_8000A370();
    fn_800079D8(3);

    // vtable +0x58 for height value
    s32 (*vt58)(void*) = (s32(*)(void*))*(u32*)((u8*)*(u32**)obj + 0x58);
    s32 vheight = vt58(obj);
    s16 vh = (s16)vheight;  // extsh

    // 3 s16 fields converted to float
    s16 v3a = *(s16*)(r31 + 0x3a);
    s16 v34 = *(s16*)(r31 + 0x34);
    u32 tvh[2]; tvh[0]=hi; tvh[1]=(u32)(vh^0x8000);
    u32 tv3a[2]; tv3a[0]=hi; tv3a[1]=(u32)(v3a^0x8000);
    u32 tv34[2]; tv34[0]=hi; tv34[1]=(u32)(v34^0x8000);
    float ff4 = (float)(*(double*)tvh - bias);
    float ff1 = lbl_803770BC;
    float ff2 = (float)(*(double*)tv3a - bias);
    float ff3 = (float)(*(double*)tv34 - bias);
    fn_80007918(ff1, ff2, ff3);
    fn_80007718();

    // 4 lbl values passed as stack args to fn_800073F0
    u32 v8  = lbl_803770B4;
    u32 vc  = lbl_803770B0;
    u32 v10 = lbl_8037A914;
    u32 v14 = lbl_8037A910;
    u32 stk[4]; stk[0]=v8; stk[1]=vc; stk[2]=v10; stk[3]=v14;
    fn_800073F0((void*)(stk+3), (void*)(stk+2), (void*)(stk+1), (void*)stk);
    fn_800079C4();
    (void)ff4;
}

// =============================================================
// fn_8002535C: animation render with optional idle indicator
// r3=owner, r4=action node ptr
// =============================================================
void fn_8002535C(void* r3, void* r4) {
    u8* r31 = (u8*)r4;

    fn_8000A380();

    void* obj = (void*)*(u32*)(r31 + 0x3c);
    void (*vt6c)(void*, float) = (void(*)(void*, float))*(u32*)((u8*)*(u32**)obj + 0x6c);
    vt6c(obj, fn_80023FAC(r4));

    u32 hi = 0x43300000;
    double bias = lbl_803770C0;
    s16 x30 = *(s16*)(r31 + 0x30);
    s16 y30 = *(s16*)(r31 + 0x32);
    u32 tx[2]; tx[0]=hi; tx[1]=(u32)(x30^0x8000);
    u32 ty[2]; ty[0]=hi; ty[1]=(u32)(y30^0x8000);
    float f1 = (float)(*(double*)tx - bias);
    float f2 = (float)(*(double*)ty - bias);
    fn_80009E9C(fn_80023FAC(r4), f1, f2, 0.0f, 0.0f, 0.0f);
    fn_8000A29C(0, 0x12);

    // idle indicator: if r31[0x2d]==0 && r31[0x2e]==0, pass 1 else 0
    s32 idle = (r31[0x2d] == 0 && r31[0x2e] == 0) ? 1 : 0;
    if (!idle) fn_80009CB4(0x50);

    fn_8000A370();
    fn_800079D8(3);

    s16 v34 = *(s16*)(r31 + 0x34);
    s16 v36 = *(s16*)(r31 + 0x36);
    u32 tv34[2]; tv34[0]=hi; tv34[1]=(u32)(v34^0x8000);
    u32 tv36[2]; tv36[0]=hi; tv36[1]=(u32)(v36^0x8000);
    float ff1 = lbl_803770BC;
    float ff2 = ff1;
    float ff3 = (float)(*(double*)tv34 - bias);
    float ff4 = (float)(*(double*)tv36 - bias);
    fn_80007918(ff2, ff3, ff4);
    fn_80007718();

    u32 v8  = lbl_803770AC;
    u32 vc  = lbl_803770A8;
    u32 v10 = lbl_803770A4;
    u32 v14 = lbl_803770A0;
    u32 stk[4]; stk[0]=v8; stk[1]=vc; stk[2]=v10; stk[3]=v14;
    fn_800073F0((void*)(stk+3), (void*)(stk+2), (void*)(stk+1), (void*)stk);
    fn_800079C4();
    (void)r3;
}

// =============================================================
// fn_800254A8: per-slot visibility update
// r3=owner, r4 unused
// =============================================================
void fn_800254A8(void* r3, void* r4) {
    u8* r29 = (u8*)r3;
    (void)r4;

    void* obj = (void*)*(u32*)(r29 + 0x3c);
    void (*vt10)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)obj + 0x10);
    vt10(obj, r29);

    fn_80009D28(fn_80023FAC(r3));

    s32 r30 = 0;
    while (1) {
        s8 lim = (s8)r29[0x60];
        if (r30 >= lim) break;

        void* node_i = fn_8000BA30((void*)(u32)r29[0x40 + r30]);
        void* r31p = node_i;

        s8 active = (s8)r29[0x62];
        void* node_a = fn_8000BA30((void*)(u32)r29[0x40 + active]);

        // is node_i == node_a? cntlzw trick
        u32 diff = (u32)node_i - (u32)node_a;
        u32 is_same; { u32 _v=diff; if(!_v){is_same=1;}else{u32 _c=0;while(!(_v&0x80000000u)){_c++;_v<<=1;}is_same=_c>>5;} }
        ((u8*)node_i)[0x38] = (u8)is_same;

        void* base = (void*)*(u32*)((u8*)node_i + 0x34);
        void (*vt28)(void*, void*, void*) = (void(*)(void*, void*, void*))*(u32*)((u8*)*(u32**)base + 0x28);
        vt28(base, r29, r31p);

        fn_80009D1C(fn_80023FAC(r3));
        r30++;
    }

    // if state == 0 and active >= 0, call vtable +0x30
    if (!r29[0x61] && (s8)r29[0x62] >= 0) {
        void* obj2 = (void*)*(u32*)(r29 + 0x3c);
        void (*vt30)(void*, void*) = (void(*)(void*, void*))*(u32*)((u8*)*(u32**)obj2 + 0x30);
        vt30(obj2, r29);
    }

    fn_80009C50();
}

// =============================================================
// fn_800255B0: return 0x20 or 0x40 based on lbl_8033AD68 state
// =============================================================
s32 fn_800255B0(void) {
    u8 v = fn_80168188((void*)lbl_8033AD68);
    return (v & 0xFF) ? 0x40 : 0x20;
}

// =============================================================
// fn_800255E8: return 0x9 or 0x40 based on lbl_8033AD68 state
// =============================================================
s32 fn_800255E8(void) {
    u8 v = fn_80168188((void*)lbl_8033AD68);
    return (v & 0xFF) ? 0x40 : 0x9;
}

// =============================================================
// fn_80025620: call vtable +0x8 on r3
// =============================================================
void fn_80025620(void* r3) {
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32**)r3 + 0x8);
    fn(r3);
}

// =============================================================
// fn_8002564C: return lbl_80271B20 + 0x1a
// =============================================================
void* fn_8002564C(void) {
    return (void*)((u8*)lbl_80271B20 + 0x1a);
}

// =============================================================
// fn_8002565C: call vtable +0xc on r3
// =============================================================
void fn_8002565C(void* r3) {
    void (*fn)(void*) = (void(*)(void*))*(u32*)((u8*)*(u32**)r3 + 0xc);
    fn(r3);
}

// =============================================================
// fn_80025688: return lbl_80271B20 + 0x1e
// =============================================================
void* fn_80025688(void) {
    return (void*)((u8*)lbl_80271B20 + 0x1e);
}

// =============================================================
// fn_80025698: return lbl_80271B20 + 0x2e
// =============================================================
void* fn_80025698(void) {
    return (void*)((u8*)lbl_80271B20 + 0x2e);
}

// =============================================================
// Constant return stubs
// =============================================================
s32 fn_800256A8(void) { return 0; }
s32 fn_800256B0(void) { return 5; }
s32 fn_800256B8(void) { return 0; }
s32 fn_800256C0(void) { return 0; }
s32 fn_800256C8(void) { return 0; }
s32 fn_800256D0(void) { return 0; }
s32 fn_800256D8(void) { return 0; }
s32 fn_800256E0(void) { return 0; }
s32 fn_800256E8(void) { return 0; }

s32 fn_800256F0(void) { return 0; }
s32 fn_800256F8(void) { return 1; }
s32 fn_80025700(void) { return 0x10; }
s32 fn_80025708(void) { return 0; }
s32 fn_80025710(void) { return 0x10; }

void* fn_80025718(void* r3, s32 r4) {
    return (void*)((u32*)*(u32**)r3)[r4];
}

void fn_80025728(void) { }

float fn_8002572C(void) {
    return lbl_803770D0;
}

s32 fn_80025734(void) { return 0; }
s32 fn_8002573C(void) { return 0; }
void fn_80025744(void) { }
s32 fn_80025748(void) { return 0; }
s32 fn_80025750(void) { return 0xc0; }
void fn_80025758(void) { }
s32 fn_8002575C(void) { return 0; }

void* fn_80025764(void) {
    return (void*)((u8*)lbl_80271B20 + 0x43);
}

void* fn_80025774(void) {
    return (void*)((u8*)lbl_80271B20 + 0x51);
}

void* fn_80025784(void) {
    return (void*)((u8*)lbl_80271B20 + 0x61);
}

s32 fn_80025794(void) { return 0; }
s32 fn_8002579C(void) { return 0; }

void* fn_800257A4(void) {
    return (void*)((u8*)lbl_80271B20 + 0x71);
}

void* fn_800257B4(void) {
    return (void*)((u8*)lbl_80271B20 + 0x8d);
}

void fn_800257C4(void* r3, u8 r4) {
    u8* r30 = (u8*)r3;
    u8 r31 = r4;
    u8 r0 = lbl_8033A708[0x9e];
    u32 bit = ((u32)r0 >> 1) & 1;   // extrwi r0, r0, 1, 30
    if (bit != 1) {
        fn_8021BA1C(r30[0x1c], 1);
        r30[0x20] = r31;
    }
}

void fn_80025820(void* r3, u32 r4) {
    u8* p = (u8*)r3;
    u32 val = *(u32*)(p + 0x18);
    *(u32*)(p + 0x18) = val & ~r4;
}

// =============================================================
// fn_80025830: set bits in r3+0x18 with r4 mask
// =============================================================
void fn_80025830(void* r3, u32 r4) {
    u8* p = (u8*)r3;
    u32 val = *(u32*)(p + 0x18);
    *(u32*)(p + 0x18) = val | r4;
}

// =============================================================
// fn_80025840: clear r4 bits from three fields at +0x4, +0xc, +0x10
// =============================================================
void fn_80025840(void* r3, u32 r4) {
    u8* p = (u8*)r3;
    u32 mask = ~r4;
    *(u32*)(p + 0x04) &= mask;
    *(u32*)(p + 0x0c) &= mask;
    *(u32*)(p + 0x10) &= mask;
}

// =============================================================
// fn_8002586C: read controller stick axes, set flag bits, clamp
// r3 = controller state struct ptr
// =============================================================
void fn_8002586C(void* r3) {
    u8* p = (u8*)r3;
    void* raw = (void*)*(u32*)p;   // r3[0x0] = pointer to raw SI data

    // load current button/axis state
    u16 buttons = *(u16*)((u8*)raw + 0);
    *(u32*)(p + 4) = (u32)buttons;

    // check stick X axis (raw[2] as s8) against thresholds
    {
        s8 vx = (s8)((u8*)raw)[2];
        if (vx < -0x23) *(u32*)(p+4) = *(u32*)(p+4) | (0x100u << 16);  // oris 0x100
        vx = (s8)((u8*)raw)[2];
        if (vx > 0x23)  *(u32*)(p+4) = *(u32*)(p+4) | (0x200u << 16);  // oris 0x200
    }
    // check stick Y axis (raw[3])
    {
        s8 vy = (s8)((u8*)raw)[3];
        if (vy < -0x23) *(u32*)(p+4) = *(u32*)(p+4) | (0x400u << 16);
        vy = (s8)((u8*)raw)[3];
        if (vy > 0x23)  *(u32*)(p+4) = *(u32*)(p+4) | (0x800u << 16);
    }
    // check C-stick X axis (raw[4])
    {
        s8 cx = (s8)((u8*)raw)[4];
        if (cx < -0x23) *(u32*)(p+4) = *(u32*)(p+4) | (0x1000u << 16);
        cx = (s8)((u8*)raw)[4];
        if (cx > 0x23)  *(u32*)(p+4) = *(u32*)(p+4) | (0x2000u << 16);
    }
    // check C-stick Y axis (raw[5])
    {
        s8 cy = (s8)((u8*)raw)[5];
        if (cy < -0x23) *(u32*)(p+4) = *(u32*)(p+4) | (0x4000u << 16);
        cy = (s8)((u8*)raw)[5];
        if (cy > 0x23)  *(u32*)(p+4) = *(u32*)(p+4) | (0x8000u << 16);
    }

    // apply clamp mask from r3[0x18]
    u32 cmask = *(u32*)(p + 0x18);
    if (!cmask) return;
    *(u32*)(p+4) &= ~cmask;

    // for each clamp bit, zero the corresponding axis if out of range
    if (cmask & (1u << (31-7))) { s8 v = (s8)((u8*)raw)[2]; if (v < 0) ((u8*)raw)[2] = 0; }
    if (cmask & (1u << (31-6))) { s8 v = (s8)((u8*)raw)[2]; if (v > 0) ((u8*)raw)[2] = 0; }
    if (cmask & (1u << (31-5))) { s8 v = (s8)((u8*)raw)[3]; if (v < 0) ((u8*)raw)[3] = 0; }
    if (cmask & (1u << (31-4))) { s8 v = (s8)((u8*)raw)[3]; if (v > 0) ((u8*)raw)[3] = 0; }
    if (cmask & (1u << (31-3))) { s8 v = (s8)((u8*)raw)[4]; if (v < 0) ((u8*)raw)[4] = 0; }
    if (cmask & (1u << (31-2))) { s8 v = (s8)((u8*)raw)[4]; if (v > 0) ((u8*)raw)[4] = 0; }
    if (cmask & (1u << (31-1))) { s8 v = (s8)((u8*)raw)[5]; if (v < 0) ((u8*)raw)[5] = 0; }
    if (cmask & 1u)              { s8 v = (s8)((u8*)raw)[5]; if (v > 0) ((u8*)raw)[5] = 0; }
    if (cmask & (1u << (31-25))){ u8 v = ((u8*)raw)[6]; if (v) ((u8*)raw)[6] = 0; }
    if (cmask & (1u << (31-26))){ u8 v = ((u8*)raw)[7]; if (v) ((u8*)raw)[7] = 0; }
}

// =============================================================
// fn_80025AFC: get ptr to controller entry N (stride 0x24)
// =============================================================
void* fn_80025AFC(s32 r3) {
    return (void*)((u8*)lbl_802F9918 + (u32)r3 * 0x24);
}

// =============================================================
// fn_80025B10: main controller polling loop (Doc 12)
// Waits until 1000ms elapsed, then reads 4 SI controllers,
// updates button state struct array lbl_802F9918
// =============================================================
void fn_80025B10(void) {
    u32 r28 = 0xc000 + (0x431cu << 16) - 0x217du;  // = 0x431bde83 (multiplier for OSTime->ms)
    u32 r27 = 0x80000000u;

    // spin-wait loop until 1000ms have elapsed
    while (1) {
        // OSGetTime returns 64-bit time in r3:r4
        // We use the lower 32 bits only (r4 -> stored at 0xf8(0x80000000))
        u32 oslo = *(u32*)(r27 + 0xf8);  // lower 32 of OS timer
        u32 scaled = (u32)((unsigned long long)r28 * oslo >> (32+15));  // mulhwu + srwi 15

        // subfc/subfe: compute elapsed = current - saved (64-bit subtract)
        u32 prev_lo = lbl_803754EC;
        u32 prev_hi = lbl_803754E8;
        // 64-bit elapsed time (simplified to 32-bit check)
        u32 lo = (u32)((u32)oslo*8);   // slwi 3
        // check if elapsed >= 1000
        u32 diff_lo, diff_hi;
        diff_lo = lo - 0x3e8u;
        // subfe computes borrow; if result < 0 (borrow), loop again
        // simplified: if scaled < 1 (haven't hit 1000ms), retry
        if (scaled < 1) continue;
        break;
    }

    // get current time and save
    u32 oslo2 = *(u32*)(r27 + 0xf8);
    lbl_803754EC = (u32)(oslo2 * 8);
    // lbl_803754E8 = hi (simplified)

    // read 4 controller ports
    u8* r29 = (u8*)lbl_802F9918;
    u8* r31 = (u8*)lbl_802F98E8;
    u8* r30 = (u8*)lbl_80271BC0;
    u32 r28b = 0;

    fn_8021B71C();
    fn_8021AA1C((void*)lbl_802F98E8);

    for (s32 r27b = 0; r27b < 4; r27b++) {
        s8 status = (s8)r31[0xa];

        if (status == -1) {
            r28b |= *(u32*)r30;
        }
        if (status != -3) {
            // update saved button state
            *(u32*)(r29 + 8) = *(u32*)(r29 + 4);
            fn_8002586C(r29);

            // decrement repeat timer
            if (r29[0x20]) {
                r29[0x20]--;
                if (!r29[0x20])
                    fn_8021BA1C(r29[0x1c], 0);
            }

            // compute newly pressed/released
            u32 cur = *(u32*)(r29 + 4);
            u32 prev = *(u32*)(r29 + 8);
            u32 changed = cur ^ prev;
            u32 pressed = cur & changed;
            *(u32*)(r29 + 0x10) = pressed;
            *(u32*)(r29 + 0x0c) = pressed;

            if (cur && cur == prev) {
                // held: count down repeat timers
                r29[0x1d]--;
                r29[0x1e]--;
                if (!r29[0x1d]) {
                    *(u32*)(r29 + 0x10) = cur;
                    r29[0x1d] = 2;
                }
                if (!r29[0x1e]) {
                    *(u32*)(r29 + 0x0c) = cur;
                    r29[0x1e] = 4;
                }
            } else {
                r29[0x1e] = 0xc;
                r29[0x1d] = 0xc;
            }
            r29[0x1f]++;
        }

        r27b++;
        r30 += 4;
        r29 += 0x24;
        r31 += 0xc;
    }

    if (r28b) fn_8021B3A8(r28b);
}

// =============================================================
// fn_80025D40: initialize SI/controller system
// =============================================================
void fn_80025D40(void) {
    SISetSamplingRate(1);
    fn_8021B5CC();

    u8* r10 = (u8*)lbl_802F98E8;
    u8* r11 = (u8*)lbl_802F9918;
    u8 b0 = lbl_803770D8;
    u8 b1 = *(u8*)((u8*)&lbl_803770D8 + 1);
    u8 b2 = *(u8*)((u8*)&lbl_803770D8 + 2);
    u8 b3 = *(u8*)((u8*)&lbl_803770D8 + 3);

    // init 4 controller entries (stride 0x24 in r11, stride 0xc in r10)
    *(u32*)(r11 + 0x00) = (u32)r10;
    *(u32*)(r11 + 0x18) = 0;
    r11[0x1c] = b0;
    r11[0x20] = 0;
    r11[0x40] = b1;
    *(u32*)(r11 + 0x24) = (u32)(r10 + 0xc);
    *(u32*)(r11 + 0x3c) = 0;
    r11[0x44] = 0;
    r11[0x64] = b2;
    *(u32*)(r11 + 0x48) = (u32)(r10 + 0x18);
    *(u32*)(r11 + 0x60) = 0;
    r11[0x68] = 0;
    r11[0x88] = b3;
    *(u32*)(r11 + 0x6c) = (u32)(r10 + 0x24);
    *(u32*)(r11 + 0x84) = 0;
    r11[0x8c] = 0;

    fn_8021B4B8();

    lbl_803754EC = 0;
    lbl_803754E8 = 0;
    lbl_803754E0 = (u32)lbl_802F9918;
}

// =============================================================
// fn_80025DFC: deserialize controller record from stream r4 into r3
// r3=dest struct ptr, r4=stream ptr
// =============================================================
void fn_80025DFC(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;

    // first unit ptr
    u8 v = fn_8017C420(r31);
    if (v) {
        u8* p = (u8*)lbl_802BB9C4 + ((u32)(v-1) * 0x280);
        *(u32*)r30 = (u32)p;
    } else {
        *(u32*)r30 = 0;
    }

    // second unit ptr
    v = fn_8017C420(r31);
    if (v) {
        u8* p = (u8*)lbl_802BB9C4 + ((u32)(v-1) * 0x280);
        *(u32*)(r30+4) = (u32)p;
    } else {
        *(u32*)(r30+4) = 0;
    }

    // individual bytes
    r30[0x8]  = fn_8017C420(r31);
    r30[0x9]  = fn_8017C420(r31);
    r30[0xa]  = fn_8017C420(r31);
    r30[0xb]  = fn_8017C420(r31);
    r30[0xc]  = fn_8017C420(r31);
    r30[0xd]  = fn_8017C420(r31);
    r30[0xe]  = fn_8017C420(r31);
    r30[0xf]  = fn_8017C420(r31);
    r30[0x10] = fn_8017C420(r31);
    r30[0x11] = fn_8017C420(r31);
    r30[0x12] = fn_8017C420(r31);
    fn_8017C254(r31, 1, r30 + 0x13);
    r30[0x14] = fn_8017C420(r31);
    r30[0x15] = fn_8017C420(r31);
    fn_8017C254(r31, 1, r30 + 0x16);
}

// =============================================================
// fn_80025F6C: serialize controller record from r3 to stream r4
// r3=source struct ptr, r4=stream ptr
// =============================================================
void fn_80025F6C(void* r3, void* r4) {
    u8* r30 = (u8*)r3;
    void* r31 = r4;

    // first unit
    void* p0 = (void*)*(u32*)r30;
    if (p0) fn_8017C030(r31, ((u8*)p0)[0x198]);
    else     fn_8017C030(r31, 0);

    // second unit
    void* p1 = (void*)*(u32*)(r30+4);
    if (p1) fn_8017C030(r31, ((u8*)p1)[0x198]);
    else     fn_8017C030(r31, 0);

    fn_8017C030(r31, r30[0x8]);
    fn_8017C030(r31, r30[0x9]);
    fn_8017C030(r31, r30[0xa]);
    fn_8017C030(r31, r30[0xb]);
    fn_8017C030(r31, r30[0xc]);
    fn_8017C030(r31, r30[0xd]);
    fn_8017C030(r31, r30[0xe]);
    fn_8017C030(r31, r30[0xf]);
    fn_8017C030(r31, r30[0x10]);
    fn_8017C030(r31, r30[0x11]);
    fn_8017C030(r31, r30[0x12]);
    fn_8017BE74(r31, 1, r30 + 0x13);
    fn_8017C030(r31, r30[0x14]);
    fn_8017C030(r31, r30[0x15]);
    fn_8017BE74(r31, 1, r30 + 0x16);
}

// =============================================================
// fn_800260AC: get ScriptNode for entity at (col, row), set unit ptr
// r3=col(s8), r4=row(s8), r5=unit ptr (for node +0x30)
// =============================================================
s32 fn_800260AC(s8 r3, s8 r4, void* r5) {
    u8* r4p = (u8*)lbl_802D49F8;
    u8* r31 = r4p + (s32)r3 + ((s32)r4 << 6) + 0xd;
    if (!r31[0]) return 0;  // no entity at this cell
    void* node = fn_8000CBC8((void*)lbl_8028E7FC, r5);
    u8 ent = r31[0];
    void* unit = ent ? (void*)((u8*)lbl_802BB9C4 + ((u32)(ent-1) * 0x280)) : 0;
    *(u32*)((u8*)node + 0x30) = (u32)unit;
    return 1;
}

// =============================================================
// fn_80026144: call fn_8003EA7C on r3[0x30]
// =============================================================
void fn_80026144(void* r3) {
    fn_8003EA7C((void*)*(u32*)((u8*)r3 + 0x30));
}

// =============================================================
// fn_80026168: call fn_801A7018 with lbl_8033AEAC
// =============================================================
void fn_80026168(void) {
    fn_801A7018((void*)lbl_8033AEAC);
}

// =============================================================
// fn_80026190: cleanup sequence for lbl_8033AEAC
// =============================================================
void fn_80026190(void* r3) {
    u8* r31 = (u8*)r3;
    fn_801A9A24((void*)lbl_8033AEAC, (void*)*(u32*)(r31 + 0x30), -1);
    fn_801A6D90((void*)lbl_8033AEAC);
    fn_801A6EC0((void*)lbl_8033AEAC, -0xa);
    fn_8019DA58(r3, 0);
}

// =============================================================
// fn_800261F4: conditionally call fn_800BF0D4 with vibration params
// =============================================================
void fn_800261F4(void) {
    u8* aeac = (u8*)lbl_8033AEAC;
    if (!(s8)aeac[0x488]) {
        u8* r6 = (u8*)lbl_802F99A8;
        u8 b0f = r6[0xf];
        u8 b10 = r6[0x10];
        fn_800BF0D4(0, 0, b0f, b10);
    }
}

// =============================================================
// fn_8002623C: get active unit from lbl_8033AEAC, call movement fn
// =============================================================
s32 fn_8002623C(void* r3) {
    u8* aeac = (u8*)lbl_8033AEAC;
    void* r5 = 0;

    // check first slot at lbl_8033AEAC base
    if (*(u32*)(aeac + 0x1a0) & (1u << (31-13)))
        r5 = (void*)aeac;

    // check second slot at lbl_8033AEAC+0x2e0
    u8* aeac2 = aeac + 0x2e0;
    if (*(u32*)(aeac2 + 0x1a0) & (1u << (31-13)))
        r5 = (void*)aeac2;

    if (!r5) return 0;

    // check movement type flag at +0xcac
    if (*(u32*)(aeac + 0xcac) & (1u << (31-3))) {
        fn_801F10C4((void*)*(u32*)((u8*)r5 + 0x280));
    } else {
        fn_801F1104((void*)*(u32*)((u8*)r5 + 0x280));
    }
    (void)r3;
    return 1;
}

// =============================================================
// fn_800262D0: call fn_801A7018, then optionally fn_80050E18 on two slots
// =============================================================
void fn_800262D0(void) {
    fn_801A7018((void*)lbl_8033AEAC);
    u8* aeac = (u8*)lbl_8033AEAC;
    if (*(u32*)(aeac + 0xcac) & (1u << (31-27))) {
        void* p0 = (void*)*(u32*)(aeac + 0x280);
        if (p0) fn_80050E18(p0);
        void* p1 = (void*)*(u32*)(aeac + 0x560);
        if (p1) fn_80050E18(p1);
    }
}

// =============================================================
// fn_80026334: init lbl_8033AEAC then register fn_800263A4 callback
// =============================================================
void fn_80026334(void* r3) {
    u8* r31 = (u8*)r3;
    void* unit_ptr = (void*)*(u32*)(u8*)lbl_802F99A8;
    fn_801A9A24((void*)lbl_8033AEAC, unit_ptr, -1);
    fn_801A6D90((void*)lbl_8033AEAC);
    fn_801A6CDC((void*)lbl_8033AEAC, 0xa);
    fn_8019E1A8(r3, (void*)fn_800263A4);
}

// =============================================================
// fn_800263A4: iterate lbl_802F99C0 entries, call fn_8002F7F8/F8E0, clear bit
// =============================================================
void fn_800263A4(void* r3) {
    u8* r31 = (u8*)lbl_802F99C0;
    s32 r30 = 0;
    s32 count = *(s32*)r31;
    while (r30 < count) {
        void* entry = fn_8002F7F8((void*)r31, r30);
        fn_8002F8E0(entry);
        u32 flags = *(u32*)((u8*)entry + 0x1a0);
        *(u32*)((u8*)entry + 0x1a0) = flags & ~1u;
        r30++;
    }
    (void)r3;
}

// =============================================================
// fn_8002640C: set bits in lbl_802F99A8 entries
// =============================================================
void fn_8002640C(void) {
    u8* r4 = (u8*)lbl_802F99A8;
    void* p1 = (void*)*(u32*)(r4 + 4);
    u8 b = ((u8*)p1)[0x1a5];
    b = (u8)((b & ~7u) | 1u);  // rlwimi r0, r5, 0, 29, 31 with r5=1
    ((u8*)p1)[0x1a5] = b;
    void* p0 = (void*)*(u32*)r4;
    *(u32*)((u8*)p0 + 0x1a0) |= 0x1000;
}

// =============================================================
// fn_8002643C: initialize controller action with lbl_802F99C0
// =============================================================
void fn_8002643C(void* r3, void* r4) {
    u8* r24 = (u8*)r3;
    void* r31 = r4;

    void* str = fn_80019F0C((void*)((u8*)lbl_80271BD0 + 0x1a6));
    fn_8002AEA4((void*)*(u32*)r24, str);

    u8* r28 = (u8*)lbl_802F99C0;
    s32 count = *(s32*)r28;
    for (s32 r25 = 0; r25 < count; r25++) {
        void* r29 = fn_8002F7F8((void*)r28, r25);
        u8 r27 = ((u8*)r29)[3];
        u8 r26 = ((u8*)r29)[2];
        s32 tempo = fn_8003B140();
        ((u8*)r29)[0] = 3;
        ((u8*)r29)[1] = (u8)tempo;
        ((u8*)r29)[2] = r26;
        ((u8*)r29)[3] = r27;
    }

    void* unit_ptr = (void*)*(u32*)(u8*)lbl_802F99A8;
    fn_801A9A24((void*)lbl_8033AEAC, unit_ptr, -1);
    fn_801A6D90((void*)lbl_8033AEAC);
    fn_8019E414(r31, (void*)fn_80026514);
}

// =============================================================
// fn_80026514: call fn_8000CBC8 with lbl_8028E70C
// =============================================================
void fn_80026514(void* r3, void* r4) {
    fn_8000CBC8((void*)lbl_8028E70C, r3);
    (void)r4;
}

// =============================================================
// fn_80026540: advance lbl_802F99C0 player index or init lbl_8033AEAC
// =============================================================
void fn_80026540(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r28 = (u8*)lbl_802F99C0;
    s32 r30 = (s32)*(u32*)(r31 + 0x60);
    s32 count = *(s32*)r28;

    if (r30 == count) {
        void* unit_ptr = (void*)*(u32*)(u8*)lbl_802F99A8;
        fn_801A9A24((void*)lbl_8033AEAC, unit_ptr, -1);
        fn_801A6D90((void*)lbl_8033AEAC);
    } else {
        void* r29 = fn_8002F7F8((void*)r28, r30);
        fn_8002F8E0(r29);
        void* r30p = fn_8002F7F8((void*)r28, r30);
        void* r28unit = r30p;
        fn_801A9A24((void*)lbl_8033AEAC, r29, -1);
        fn_801A6D90((void*)lbl_8033AEAC);

        s8 tempo = (s8)((u8*)r28unit)[1];
        if (tempo) fn_801A6EC0((void*)lbl_8033AEAC, (s32)tempo);

        fn_801A7018((void*)lbl_8033AEAC);
        fn_800335B8((void*)((u8*)lbl_8033AEAC + 0x8a0));
        fn_8019E360(r3, 0);
        *(u32*)(r31 + 0x60) = (u32)(r30 + 1);
        fn_8000C198(r3, 0);
    }
}

// =============================================================
// fn_8002665C: init action with lbl_80271BD0+0x1af string, register callback
// =============================================================
void fn_8002665C(void* r3, void* r4) {
    u8* r30 = (u8*)r4;
    u8* r31 = (u8*)*(u32*)r3;
    void* str = fn_80019F0C((void*)((u8*)lbl_80271BD0 + 0x1af));
    fn_8002AD3C(r31, str);
    void* unit_ptr = (void*)*(u32*)(u8*)lbl_802F99A8;
    fn_801A9A24((void*)lbl_8033AEAC, unit_ptr, -1);
    fn_801A6D90((void*)lbl_8033AEAC);
    fn_8019E464(r4, (void*)fn_800266E4);
}

// =============================================================
// fn_800266E4: call fn_8000CBC8 with lbl_8028E6E8
// =============================================================
void fn_800266E4(void* r3, void* r4) {
    fn_8000CBC8((void*)lbl_8028E6E8, r3);
    (void)r4;
}

void fn_800267CC(void*, void*);

// =============================================================
// fn_80026710: advance lbl_802F99C0 player index or init (variant)
// =============================================================
void fn_80026710(void* r3) {
    u8* r31 = (u8*)r3;
    u8* r3b = (u8*)lbl_802F99C0;
    s32 r4 = (s32)*(u32*)(r31 + 0x60);
    s32 count = *(s32*)r3b;

    if (r4 == count) {
        void* unit_ptr = (void*)*(u32*)(u8*)lbl_802F99A8;
        fn_801A9A24((void*)lbl_8033AEAC, unit_ptr, -1);
        fn_801A6D90((void*)lbl_8033AEAC);
    } else {
        void* entry = fn_8002F7F8((void*)r3b, r4);
        fn_8002F8E0(entry);
        void* r4p = entry;
        fn_801A9A24((void*)lbl_8033AEAC, r4p, -1);
        fn_801A6D90((void*)lbl_8033AEAC);
        fn_8019E3C4(r3, (void*)fn_800267CC);
        *(u32*)(r31 + 0x60) = (u32)(r4 + 1);
        fn_8000C198(r3, 0);
    }
}