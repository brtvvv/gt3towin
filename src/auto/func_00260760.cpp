#include "m2c.h"
extern "C" M2C_UNK func_00260AE0(void *);                      /* extern */
extern "C" M2C_UNK func_00261548(s32);                         /* extern */
extern "C" M2C_UNK func_00261C38();                            /* extern */
extern "C" M2C_UNK func_00265160();                            /* extern */
extern "C" M2C_UNK func_00265428();                            /* extern */
extern "C" M2C_UNK func_00286DC0();                            /* extern */
extern "C" M2C_UNK func_00286DD0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */
extern s32 D_00354AB0;
extern s32 D_00354AB8;
extern s32 D_00354CC8;

extern "C" void func_00260760(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    D_00354CC8 = 1;
    func_00265160();
    func_00265428();
    func_00261548(M2C_FIELD(arg0, s32 *, 0xC));
    func_00260AE0(temp_s1);
    func_00286EC0(D_00354AB0);
    func_00261C38();
    func_00261548(M2C_FIELD(arg0, s32 *, 0xC));
    func_00265160();
    func_00265428();
    func_00286EE0(M2C_FIELD(temp_s1, s32 *, 0x38));
    M2C_FIELD(temp_s1, s32 *, 0x40) = 0;
    func_00286EC0(M2C_FIELD(temp_s1, s32 *, 0x38));
    if (D_00354AB8 != -1) {
        func_00286DD0(D_00354AB8);
    }
loop_2:
    func_00286DC0();
    goto loop_2;
}
