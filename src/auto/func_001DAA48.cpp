#include "m2c.h"
extern "C" void func_001DAA48(u32 *arg0, u32 arg1) {
    if (arg1 > 0xEE6B27A6U) {
        *arg0 = 0xEE6B27A6;
        return;
    }
    *arg0 = arg1;
}
