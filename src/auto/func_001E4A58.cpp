#define DEF_func_001E4A58
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001E4A58(s32 arg0) {
    s32 temp_s0;
    s8 temp_v1;
    void *temp_s1;

    func_001E4638(arg0);
    temp_s1 = arg0 + 0xF84;
    temp_v1 = M2C_FIELD(temp_s1, s8 *, 0x3E9);
    M2C_FIELD(temp_s1, s8 *, 0x521) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x520) = 0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((M2C_FIELD(temp_s1, u8 *, 0x534) == 0) || (M2C_FIELD(temp_s1, u16 *, 0x536) != 0)) {
            func_001E49A8(arg0);
        } else {
            temp_s0 = arg0 + 0xE8C;
            func_001E4A10(arg0);
            M2C_FIELD(temp_s1, s8 *, 0x521) = func_001E4268(temp_s0);
            M2C_FIELD(temp_s1, s8 *, 0x520) = func_001E3C28(temp_s0);
        }
        return;
    case 1:
        func_001E4A10(arg0);
        break;
    case 2:
        func_001E4A10(arg0);
        break;
    }
}
