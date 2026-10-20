#include "m2c.h"
extern "C" s32 func_00213638();                                /* extern */
extern "C" s32 func_00214078();                                /* extern */
extern "C" s32 func_00214D00();                                /* extern */
extern "C" s32 func_00216AF0();                                /* extern */
extern "C" s32 func_00216DD0();                                /* extern */
extern "C" s32 func_002170A8();                                /* extern */
extern "C" s32 func_00217A38();                                /* extern */
extern "C" s32 func_00217CD8();                                /* extern */
extern "C" s32 func_002183B8();                                /* extern */
extern "C" s32 func_00219470();                                /* extern */
extern "C" s32 func_0023C1E8();                                /* extern */
extern "C" s32 func_0023C488();                                /* extern */

extern "C" s32 func_0021ADE0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;

    temp_s0_2 = (func_0023C1E8() * arg0) + 0x130;
    temp_s0_3 = temp_s0_2 + (func_0023C488() * arg1);
    temp_s0_4 = temp_s0_3 + func_00216AF0();
    temp_s0_5 = temp_s0_4 + func_002183B8();
    temp_s0_6 = temp_s0_5 + func_00217CD8();
    temp_s0_7 = temp_s0_6 + func_00217A38();
    temp_s0_8 = temp_s0_7 + func_00214D00();
    temp_s0_9 = temp_s0_8 + func_00214078();
    temp_s0_10 = temp_s0_9 + func_00213638();
    temp_s0_11 = temp_s0_10 + func_00216DD0();
    temp_s0 = temp_s0_11 + func_002170A8();
    return temp_s0 + func_00219470();
}
