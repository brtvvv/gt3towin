#include "m2c.h"
extern "C" M2C_UNK func_0026AE48(s32);                         /* extern */
extern "C" M2C_UNK func_00286EF0(s32);                         /* extern */
extern s32 D_00352494;
extern s32 D_003524A0;

extern "C" void func_00101A58(s32 arg0) {
    D_00352494 = arg0;
    if (arg0 == 0) {
        func_0026AE48(D_003524A0);
        return;
    }
    func_00286EF0(D_003524A0);
}
