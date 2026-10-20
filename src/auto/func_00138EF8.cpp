#include "m2c.h"
extern "C" M2C_UNK func_00101AB0(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_0018B150(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_001C07B8(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_001CC978(s32, s32);                    /* extern */

extern "C" void func_00138EF8(s32 arg0, s32 arg1) {
    func_001C07B8(arg0 + 0xE94, 2);
    func_00101AB0(arg0 + 0xE90, 2);
    func_0018B150(arg0 + 0xDE8, 2);
    func_001CC978(arg0, arg1);
}
