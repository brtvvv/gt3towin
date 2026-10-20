#include "m2c.h"
extern "C" M2C_UNK func_00264FC8(void *);                      /* extern */
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" s32 func_00261048(void *arg0) {
    func_00286EE0(M2C_FIELD(arg0, s32 *, 0x38));
    func_00264FC8(arg0);
    func_00286EC0(M2C_FIELD(arg0, s32 *, 0x38));
    return 0;
}
