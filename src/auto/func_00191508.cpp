#include "m2c.h"
extern "C" u32 func_00191508(void *arg0) {
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 8);
    return (temp_v0 > 0x0FFFFFFEU) ? 0x157529FFU : temp_v0;
}
