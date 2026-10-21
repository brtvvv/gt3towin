#define DEF_func_001F4000
#include "m2c.h"
#include "funcs.h"
struct VC_E3A8_1_0 { char pad[0xE3A8]; virtual void d0(); virtual void v1(); };
struct VC_E3A8_2_0 { char pad[0xE3A8]; virtual void d0(); virtual void d1(); virtual void v2(); };
extern "C" void func_001F4000(void *arg0) {
    ((VC_E3A8_1_0 *)(arg0))->v1();
    ((VC_E3A8_2_0 *)(arg0))->v2();
    func_001ECE18((s32) arg0);
    func_001ECAE0((s32) arg0);
    func_001EE388((s32) arg0);
    func_001EE3D0((s32) arg0);
    func_001F6868((s32) (arg0 + 0xBA34));
    func_001E9670((s32) arg0);
    func_001FB5E8((s32) (arg0 + 0xBBB4), (s32) arg0, M2C_FIELD(arg0, s32 *, 0xB7A8));
    func_0017BA78(M2C_FIELD(arg0, s32 *, 0) + 0x40);
}
