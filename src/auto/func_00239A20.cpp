#define DEF_func_00239A20
#include "m2c.h"
#include "funcs.h"
extern "C" u8 func_00239A20(s32 arg0, s32 arg1) {
    return M2C_FIELD(func_00232658(arg0, 0x22, arg1), u8 *, 8);
}
