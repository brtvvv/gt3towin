#define DEF_func_00212378
#include "m2c.h"
#include "funcs.h"
struct VC_C0_10_0 { char pad[0xC0]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual s32 v10(); };
struct VC_C0_4_0 { char pad[0xC0]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual s32 v4(); };
extern "C" void func_00212378(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    temp_s3 = ((VC_C0_10_0 *)(arg0))->v10();
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x144);
    temp_s2 = ((VC_C0_4_0 *)(arg0))->v4();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14) & 0x1F;
    switch (temp_a0) {                              /* irregular */
    case 4:
        func_00211E40(arg1, temp_s2);
        func_00211CB0(arg1, temp_s2);
        return;
    case 5:
    case 7:
        func_00211E40(arg1, temp_s2);
        func_00211CB0(arg1, temp_s2);
        func_00211DB0((s32) arg0, arg1, temp_s3, 1, temp_s4);
        func_00211F98((s32) arg0, arg1, temp_s3, 1, temp_s4);
        func_002122E0((s32) arg0, arg1, temp_s3, 1, temp_s4);
        break;
    case 8:
        func_00211E40(arg1, temp_s2);
        func_00211CF0((s32) arg0, arg1);
        func_00211DB0((s32) arg0, arg1, temp_s3, 1, temp_s4);
        func_00212108((s32) arg0, arg1, temp_s3, 1, temp_s4);
        func_002122E0((s32) arg0, arg1, temp_s3, 1, temp_s4);
        break;
    }
}
