#define DEF_func_00167158
#include "m2c.h"
#include "funcs.h"
struct R {
    s32 a, b, c, d; void *fn; s32 x, y, z;
    R(s32 a_, s32 b_, s32 c_) : a(a_), b(b_), c(c_), d(1), fn((void *) func_001670F0), x(0), y(0), z(0) {}
};
extern "C" R func_00167158(void) {
    s32 g = func_00219680() + 0x307C8;
    s32 p = M2C_FIELD(g, s32 *, 0x540);
    if (p != 0) {
        s32 q = p + 0x10;
        s32 a = M2C_FIELD(func_00235AB0(q), u8 *, 0x1D);
        s32 b = M2C_FIELD(func_00235AB0(q), u8 *, 0x1E) + 1;
        return R(a, b, M2C_FIELD(q, s32 *, 0x198));
    }
    return R(0, 1, 0);
}
