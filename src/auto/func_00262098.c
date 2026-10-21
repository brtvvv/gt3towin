#define DEF_func_00262098
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354AD8;
extern s32 D_00354ADC;
extern s32 D_00354AFC;

void func_00262098(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    func_002625F8();
    temp_s0 = D_00354AD8 * D_00354ADC;
    temp_s0_2 = ((D_00354AFC ^ 3) != 0) ? (temp_s0 >> 1) : temp_s0;
    do {

    } while (func_002620F8(temp_s0_2) >= 0);
    func_00261E78(arg0);
}
