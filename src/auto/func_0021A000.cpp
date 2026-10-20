#define DEF_func_0021A000
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0021A000(void *arg0, void *arg1) {
    s32 temp_v1;

    M2C_FIELD(arg1, s32 *, 0x22C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
    func_0023D238((s32) (arg0 + 0x1B6B8), (s32) arg1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
    if (temp_v1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_v1 + 1);
    }
}
