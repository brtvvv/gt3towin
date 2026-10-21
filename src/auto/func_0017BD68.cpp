#define DEF_func_0017BD68
#include "m2c.h"
#include "funcs.h"
struct VC_1C_1_0 { char pad[0x1C]; virtual void d0(); virtual s32 v1(); };
extern "C" void func_0017BD68(void *arg0) {
    ((VC_1C_1_0 *)(M2C_FIELD(arg0, void **, 0x18)))->v1();
}
