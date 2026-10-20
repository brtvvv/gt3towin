#include "m2c.h"
extern "C" M2C_UNK func_001C76E8();                            /* extern */
extern "C" M2C_UNK func_001C7860();                            /* extern */

extern "C" void func_001C76A0(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x478);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_001C76E8();
        return;
    case 1:
        func_001C7860();
        break;
    }
}
