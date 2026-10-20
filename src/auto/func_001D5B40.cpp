#define DEF_func_001D5B40
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D5B40(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;

    temp_v1 = arg1 - func_001D5BD0(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    if (temp_v1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = -1;
    }
    if (temp_v1 > 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
    temp_s0 = M2C_FIELD(arg0, void **, 0x1C);
    temp_s0_2 = temp_s0 + 0xE8;
    temp_s1 = arg0 + M2C_FIELD(temp_s0, s16 *, 0xE8);
    M2C_FIELD(temp_s0_2, M2C_UNK (**)(s32, s32), 4)(temp_s1, func_001D5C08(arg0, arg1));
    func_001D5758(arg0);
}
