#include "m2c.h"
extern "C" M2C_UNK func_00101900(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_0026AE48(s32);                         /* extern */
extern "C" M2C_UNK func_00286EB0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */
extern s32 D_00352498;
extern s32 D_003524A0;
extern s32 D_003524A4;

extern "C" void func_001019A8(void) {
    if (D_00352498 == -1) {
        func_00101900(0);
    }
    if (D_003524A4 >= 0) {
        func_00286EE0(D_003524A4);
        func_00286EB0(D_003524A4);
        D_003524A4 = -1;
    }
    func_0026AE48(D_003524A0);
}
