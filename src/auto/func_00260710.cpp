#include "m2c.h"
extern "C" s32 func_00261698(s32);                             /* extern */
extern "C" M2C_UNK func_00261720(s32);                         /* extern */
extern "C" M2C_UNK func_00264B70(s32, s32, s32);               /* extern */

extern "C" s32 func_00260710(void *arg0, s32 arg1) {
    func_00264B70(func_00261698(M2C_FIELD(arg0, s32 *, 0xC)), arg1, M2C_FIELD(arg0, s32 *, 0x20));
    func_00261720(M2C_FIELD(arg0, s32 *, 0xC));
    return 0;
}
