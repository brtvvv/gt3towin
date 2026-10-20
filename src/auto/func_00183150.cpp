#define DEF_func_00183150
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002B8008 __attribute__((section(".data")));
extern M2C_UNK D_002B8018 __attribute__((section(".data")));
extern M2C_UNK D_003537C8;
extern M2C_UNK D_003537D0;

extern "C" void func_00183150(void) {
    func_0017C430((s32) &D_003537C8, (s32) &D_002B8008);
    func_0017C430((s32) &D_003537D0, (s32) &D_002B8018);
}
