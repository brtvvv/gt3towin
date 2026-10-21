#define DEF_func_0026F700
#include "m2c.h"
#include "funcs.h"
void func_0026F700(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0xC;
    func_00289FD8(temp_s1, func_00286D90());
    func_0028A070((s32) (arg0 + 0x24), 0x45574650, (s32) func_0026F7F8, M2C_FIELD(arg0, s32 *, 4), 0, 0, temp_s1);
    func_0028A488(temp_s1);
}
