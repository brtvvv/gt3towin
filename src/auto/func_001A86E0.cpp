#include "m2c.h"
extern "C" M2C_UNK func_0022CD60(s32);                         /* extern */
extern "C" M2C_UNK func_0022CD70(s32, s32);                    /* extern */
extern "C" s32 func_0022D630(M2C_UNK, M2C_UNK);                /* extern */

extern "C" void *func_001A86E0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_fp;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;

    sp4 = arg0 + 0x38;
    temp_s5 = arg0 + 4;
    sp8 = arg0 + 0x40;
    temp_fp = arg0 + 0x30;
    var_s2 = 4;
    var_s0 = temp_s5;
    sp0 = arg0 + 0x24;
    do {
        var_s2 -= 1;
        func_0022CD60(var_s0);
        var_s0 += 8;
    } while (var_s2 != -1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg0 + 0x14);
    func_0022CD60(temp_fp);
    func_0022CD60(sp4);
    func_0022CD60(sp8);
    func_0022CD70(temp_s5, func_0022D630(0x22, 1));
    func_0022CD70(arg0 + 0xC, func_0022D630(0x23, 1));
    func_0022CD70(arg0 + 0x1C, func_0022D630(0x24, 1));
    func_0022CD70(sp0, func_0022D630(0x25, 1));
    func_0022CD70(M2C_FIELD(arg0, s32 *, 0x2C), func_0022D630(0x26, 1));
    func_0022CD70(temp_fp, func_0022D630(0x26, 2));
    func_0022CD70(sp4, func_0022D630(0x27, 1));
    func_0022CD70(sp8, func_0022D630(0x27, 2));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x48) = 0.125f;
    return arg0;
}
