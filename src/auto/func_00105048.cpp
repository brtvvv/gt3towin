#define DEF_func_00105048
#include "m2c.h"
#include "funcs.h"
struct VC_288_1_0 { char pad[0x288]; virtual void d0(); virtual void v1(); };
extern M2C_UNK D_0030B0B8 __attribute__((section(".data")));
extern s32 D_00352598;

extern "C" void func_00105048(void *arg0) {

    D_00352598 = 1;
    func_001BC578(M2C_FIELD(arg0, s32 *, 0x3A34), (s32) &D_0030B0B8);
    if (D_00352598 != 0) {
        do {
            ((VC_288_1_0 *)(arg0))->v1();
        } while (D_00352598 != 0);
    }
}
