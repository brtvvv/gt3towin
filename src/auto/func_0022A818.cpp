#define DEF_func_0022A818
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0022A818(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x80);
    func_0022A5A0((s32) arg0, (s32) arg1);
    func_0022A5A0((s32) (arg0 + 0x40), (s32) (arg1 + 0x40));
}
