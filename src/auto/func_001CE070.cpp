#define DEF_func_001CE070
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CE070(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x54) == 1) {
        func_001CDDC8((s32) arg0);
        return;
    }
    func_001CDF50((s32) arg0);
}
