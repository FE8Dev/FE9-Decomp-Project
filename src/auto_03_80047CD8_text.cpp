#include <dolphin/types.h>

extern float lbl_803771F4;
extern float lbl_80377220;
extern float lbl_803771FC;
extern float lbl_8037726C;
extern float lbl_80377270;
extern float lbl_8037723C;
extern float lbl_80377274;
extern float lbl_80377278;
extern u8    lbl_80273420[];

extern "C" void  fn_80060560(void*);
extern "C" void  fn_800603C4(void*);
extern "C" void  fn_8020AE58(void*, s32, float);
extern "C" void  fn_8020B118(void*, float, float, float);
extern "C" void  fn_8020B098(void*, float, float, float);
extern "C" void  fn_8020BF04(void*, void*);
extern "C" void  fn_8020AB7C(void*, void*, void*);
extern "C" void  fn_8020AB48(void*, void*);
extern "C" void  fn_8006E67C(void*, s32, void*);
extern "C" void* fn_80067F00(void);
extern "C" void  fn_8020B770(void*, void*, void*);
extern "C" void  fn_8020BC64(void*, void*, void*);

void fn_80047CE0(void* r3, s32 r4, s32 r5)
{
    float matA[12];
    float matB[12];
    float matC[12];
    float matD[12];
    float matE[12];
    float matF[12];
    float init4[4];
    float b0[3];
    float b1[3];
    float b2[3];
    float b3[3];
    float b4[3];
    float b5[3];
    float b6[3];
    float b7[3];

    s32  r19  = r5;
    s32  r20  = r4;
    u8*  r21  = (u8*)*(u32*)((u8*)r3 + 0x14) + r20 * 0xb4;
    u32  r31  = 0x10040;
    u8*  r22;
    u32  type;
    float x, y, z;
    int   ok;
    float f3, f2;
    float f1_lo, f0_zero;

    while (r20 < r19) {
        u8* r30 = r21 + 0x14;

        fn_80060560((void*)r30);

        r21[2] = r21[2] & 0x7f;
        r22 = (u8*)*(u32*)(r21 + 0x10);

        if (*(u32*)(r22 + 0xbc) & r31) goto next;

        fn_800603C4((void*)r30);

        type = *(u32*)(r30 + 0x0c);

        switch (type) {
        default:
            fn_8006E67C((void*)((u8*)lbl_80273420 + 0x2f7), (s32)0xb8,
                        (void*)((u8*)lbl_80273420 + 0x2ff));
            break;
        case 1:
            fn_8020AE58(matC, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matD, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matE, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            break;
        case 2:
            fn_8020AE58(matC, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matD, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matE, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            break;
        case 3:
            fn_8020AE58(matC, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matD, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matE, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            break;
        case 4:
            fn_8020AE58(matC, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matD, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matE, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            break;
        case 5:
            fn_8020AE58(matC, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matD, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            fn_8020AE58(matE, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            break;
        case 6:
            fn_8020AE58(matC, 0x5a, lbl_803771FC * *(float*)(r30 + 0x24));
            fn_8020AE58(matD, 0x59, lbl_803771FC * *(float*)(r30 + 0x20));
            fn_8020AE58(matE, 0x58, lbl_803771FC * *(float*)(r30 + 0x1c));
            break;
        case 7:
            fn_8020AB48((void*)((u8*)r30 + 0x10), matF);
            goto after_matrix;
        case 8:
            fn_8020B118(matA, *(float*)(r30+0x28), *(float*)(r30+0x2c), *(float*)(r30+0x30));
            fn_8020B098(matB, *(float*)(r30+0x10), *(float*)(r30+0x14), *(float*)(r30+0x18));
            fn_8020BF04((void*)((u8*)r30 + 0x10), matC);
            fn_8020AB7C(matC, matA, matF);
            fn_8020AB7C(matC, matF, matF);
            fn_8020AB7C(matB, matF, matF);
            goto after_matrix;
        }

        fn_8020B118(matA, *(float*)(r30+0x28), *(float*)(r30+0x2c), *(float*)(r30+0x30));
        fn_8020B098(matB, *(float*)(r30+0x10), *(float*)(r30+0x14), *(float*)(r30+0x18));
        fn_8020AB7C(matC, matA, matF);
        fn_8020AB7C(matD, matF, matF);
        fn_8020AB7C(matE, matF, matF);
        fn_8020AB7C(matB, matF, matF);

    after_matrix:
        init4[0] = lbl_803771F4;
        init4[1] = lbl_803771F4;
        init4[2] = lbl_803771F4;
        init4[3] = lbl_80377220;

        fn_8020B770(fn_80067F00(), matF, matF);

        b0[0] = *(float*)(r22 + 0xa4);
        b0[1] = *(float*)(r22 + 0xa8);
        b0[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b0, b0);
        x = b0[0]; y = b0[1]; z = b0[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b1[0] = *(float*)(r22 + 0xb0);
        b1[1] = *(float*)(r22 + 0xa8);
        b1[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b1, b1);
        x = b1[0]; y = b1[1]; z = b1[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b2[0] = *(float*)(r22 + 0xb0);
        b2[1] = *(float*)(r22 + 0xb4);
        b2[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b2, b2);
        x = b2[0]; y = b2[1]; z = b2[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b3[0] = *(float*)(r22 + 0xa4);
        b3[1] = *(float*)(r22 + 0xb4);
        b3[2] = *(float*)(r22 + 0xac);
        fn_8020BC64(matF, b3, b3);
        x = b3[0]; y = b3[1]; z = b3[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b4[0] = *(float*)(r22 + 0xa4);
        b4[1] = *(float*)(r22 + 0xa8);
        b4[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b4, b4);
        x = b4[0]; y = b4[1]; z = b4[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b5[0] = *(float*)(r22 + 0xb0);
        b5[1] = *(float*)(r22 + 0xa8);
        b5[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b5, b5);
        x = b5[0]; y = b5[1]; z = b5[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b6[0] = *(float*)(r22 + 0xb0);
        b6[1] = *(float*)(r22 + 0xb4);
        b6[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b6, b6);
        x = b6[0]; y = b6[1]; z = b6[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        b7[0] = *(float*)(r22 + 0xa4);
        b7[1] = *(float*)(r22 + 0xb4);
        b7[2] = *(float*)(r22 + 0xb8);
        fn_8020BC64(matF, b7, b7);
        x = b7[0]; y = b7[1]; z = b7[2];
        if (x*x >= lbl_8037726C) ok = 1;
        else if (y*y >= lbl_80377270) ok = 1;
        else if (z <= lbl_8037723C) ok = 1;
        else if (z >= lbl_803771F4) ok = 1;
        else ok = 0;
        if (!ok) goto next;

        if ((*(u32*)(r22 + 0xbc) & 0x8) == 0) goto set_bit;

        {
            float minX = lbl_80377274;
            float minY = lbl_80377274;
            float maxX = lbl_80377278;
            float maxY = lbl_80377278;
            float zscale = lbl_8037723C;
            float zthresh = lbl_803771F4;
            float* p = b0;
            s32 ctr = 4;
            do {
                float vz, vx, vy;
                vz = p[2]; vx = p[0]; vy = p[1];
                if (vz > zthresh) { vx *= zscale; vy *= zscale; }
                if (minX > vx) minX = vx;
                if (minY > vy) minY = vy;
                if (maxX < vx) maxX = vx;
                if (maxY < vy) maxY = vy;

                vz = p[5]; vx = p[3]; vy = p[4];
                if (vz > zthresh) { vx *= zscale; vy *= zscale; }
                if (minX > vx) minX = vx;
                if (minY > vy) minY = vy;
                if (maxX < vx) maxX = vx;
                if (maxY < vy) maxY = vy;

                p += 6;
            } while (--ctr);

            f1_lo   = lbl_8037723C;
            f0_zero = lbl_80377220;
            if (minX < f1_lo) {
                if (maxX > f0_zero) {
                    if (minY < f1_lo) {
                        if (maxY > f0_zero) goto next;
                    }
                }
            }

            f3 = minX * minX;
            {
                float f1b = lbl_80377220;
                float f0;
                if (f3 < f1b) {
                    f0 = minY * minY;
                    if (f0 < f1b) goto next;
                }
                f2 = maxX * maxX;
                if (f2 < f1b) {
                    f0 = minY * minY;
                    if (f0 < f1b) goto next;
                }
                if (f2 < f1b) {
                    f0 = maxY * maxY;
                    if (f0 < f1b) goto next;
                }
                if (f3 < f1b) {
                    f0 = maxY * maxY;
                    if (f0 < f1b) goto next;
                }
            }

            if (minX < f1_lo) {
                if (maxX > f0_zero) {
                    float f0;
                    f0 = minY * minY;
                    if (f0 < f0_zero) goto next;
                    f0 = maxY * maxY;
                    if (f0 < f0_zero) goto next;
                }
            }

            if (minY >= f1_lo) goto set_bit;
            if (maxY <= f0_zero) goto set_bit;
            if (f3 < f0_zero) goto next;
            if (f2 < f0_zero) goto next;
        }

    set_bit:
        r21[2] = r21[2] | 0x80;

    next:
        r20++;
        r21 += 0xb4;
    }
}
