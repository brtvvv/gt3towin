#include "m2c.h"
extern "C" M2C_UNK func_00260AB0(s32);                         /* extern */
extern "C" M2C_UNK func_002614F8(s32);                         /* extern */
extern "C" M2C_UNK func_00265AA0();                            /* extern */
extern "C" M2C_UNK func_00286CB0(s32);                         /* extern */
extern "C" M2C_UNK func_00286CF0(s32);                         /* extern */
extern s32 D_00354CC8;

extern "C" void func_00260678(void *arg0) {
    s32 temp_s1;

    func_002614F8(M2C_FIELD(arg0, s32 *, 0xC));
    func_00260AB0(M2C_FIELD(arg0, s32 *, 8));
    func_00265AA0();
    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    func_00286CF0(temp_s1);
    func_00286CB0(temp_s1);
    D_00354CC8 = 0;
}
