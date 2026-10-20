#include "m2c.h"
extern "C" M2C_UNK func_0022C490();                            /* extern */
extern "C" M2C_UNK func_00269668();                            /* extern */
extern "C" M2C_UNK func_0026AF50(M2C_UNK *);                   /* extern */
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern "C" M2C_UNK func_00286BA0(M2C_UNK, s32);                /* extern */
extern "C" M2C_UNK func_00286EB0(s32);                         /* extern */
extern "C" M2C_UNK func_002878C8(M2C_UNK);                     /* extern */
extern s32 D_003544B0;
extern s32 D_003544B4;
extern s32 D_003544F4;
extern s32 D_003544F8;
extern M2C_UNK D_00354C70;

extern "C" void func_0022C2A0(void) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (D_003544B4 != 0) {
        func_00269668();
        func_0022C490();
        func_0026D5B8(D_003544B4);
        func_002878C8(3);
        func_00286BA0(3, D_003544F4);
        temp_a0 = D_003544F8;
        D_003544F8 = -1;
        func_00286EB0(temp_a0);
        func_0026AF50(&D_00354C70);
        temp_a0_2 = D_003544B0;
        D_003544B0 = -1;
        func_00286EB0(temp_a0_2);
        D_003544B4 = 0;
    }
}
