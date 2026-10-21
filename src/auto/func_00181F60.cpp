#define DEF_func_00181F60
#include "m2c.h"
#include "funcs.h"
struct VC_8_1_2 { char pad[0x8]; virtual void d0(); virtual void v1(s32, s32); };
extern "C" void func_00181F60(void *arg0, void *arg1) {

    if (M2C_FIELD(arg0, s32 *, 0x9788) == 0) {
        M2C_FIELD(arg0, void **, 0xC884) = arg1;
        if (arg1 != NULL) {
            ((VC_8_1_2 *)(arg1))->v1((s32)(M2C_FIELD(arg0, s32 *, 4)), (s32)(M2C_FIELD(arg0, s32 *, 0x9784)));
        }
    }
}
