#define DEF_func_00197940
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330148 __attribute__((section(".data")));

extern "C" void func_00197940(void *arg0) {
    func_0025B248(1.0f, 1.0f, 1.0f, M2C_FIELD(arg0, f32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_00196110((s32) &D_00330148);
    }
    func_0019B050(M2C_FIELD(arg0, s32 *, 0xC), 5, 1, 620.0f, 420.0f);
}
