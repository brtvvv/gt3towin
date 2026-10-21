#define DEF_func_0011BDC8
#include "m2c.h"
#include "funcs.h"
extern int D_00311610[], D_00311628[], D_00311638[];
extern "C" int *func_0011BDC8(void) {
    s32 g = func_00219680() + 0x307C8;
    s32 p = M2C_FIELD(g, s32 *, 0x538);
    s64 money = M2C_FIELD(func_00219680(), s64 *, 0x18);
    s32 q = p + 0x10;
    if ((func_00235400(q) >> 1) & 1) { func_001C5E88(4); return D_00311610; }
    if (money < func_00238C40(q)) { func_001C5E88(4); return D_00311628; }
    if (func_0021A468(func_00219680()) >= 200) { func_001C5E88(4); return D_00311638; }
    return 0;
}
