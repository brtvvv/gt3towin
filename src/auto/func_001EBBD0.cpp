#define DEF_func_001EBBD0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001EBBD0(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x13B0) = fparg0;
    func_001EBBA0((s32) arg0, fparg0);
}
