#define DEF_func_00211688
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00211688(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_001F5258(arg1);
    if (M2C_FIELD(arg0, s32 *, 0x13C) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x130);
        if ((temp_v1 != 0) && (temp_v1 != 3)) {
            if (M2C_FIELD(arg0, s32 *, 0x140) == 0) {
                func_001F5588((s32) (arg0 + 0xCC), arg1);
            }
        } else {
            func_00212378((s32) arg0, arg1);
            func_00212540((s32) arg0, arg1);
            func_001F58C0((s32) (arg0 + 0xCC), arg1);
        }
    }
}
