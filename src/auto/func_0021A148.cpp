#define DEF_func_0021A148
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0021A148(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00219FA8(arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    func_0023C140(temp_v0, arg1);
    M2C_FIELD(temp_v0, s64 *, 0xF8) = 0;
    func_0021A000(arg0, temp_v0);
    return temp_v0;
}
