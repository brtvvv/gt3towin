#define DEF_func_001F3E90
#include "m2c.h"
#include "funcs.h"
extern "C" u8 func_001F3E90(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0xB7AD) != 0xFF)) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0xB7AD);
}
