#include "m2c.h"
extern "C" s32 func_002652A8(M2C_UNK);                         /* extern */
extern "C" M2C_UNK func_002653B8(M2C_UNK);                     /* extern */
extern s32 D_00354AE8;
extern s32 D_00354AEC;
extern s32 D_00354AF0;
extern s32 D_00354AF4;

extern "C" void func_00262A88(void) {
    s32 temp_s0;
    s32 temp_s1;

    D_00354AF0 = 1;
    func_002652A8(8);
    D_00354AF4 = func_002652A8(1);
    func_002652A8(2);
    temp_s1 = func_002652A8(2);
    temp_s0 = func_002652A8(2);
    func_002652A8(0xC);
    func_002653B8(1);
    func_002652A8(8);
    func_002652A8(1);
    func_002652A8(2);
    func_002652A8(5);
    D_00354AE8 = (temp_s1 << 0xC) | (D_00354AE8 & 0xFFF);
    D_00354AEC = (temp_s0 << 0xC) | (D_00354AEC & 0xFFF);
}
