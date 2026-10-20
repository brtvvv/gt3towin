#include "m2c.h"
extern "C" M2C_UNK func_00175640();                            /* extern */
extern "C" M2C_UNK func_001B2E68(void *);                      /* extern */

extern "C" void func_00175C58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x920) != 0) {
        func_00175640();
        func_001B2E68(arg0 + 0xC);
    }
}
