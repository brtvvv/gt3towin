#define DEF_func_001F6318
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F6318(void *arg0, s32 arg1) {
    func_0027EBC8(M2C_FIELD(arg0, s32 *, 0x50), arg1, 0x1B00);
    func_001F5BC0((s32) (arg0 + 8), arg1 + 0x1B00);
}
