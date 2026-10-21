#define DEF_func_001C1EC8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001C1EC8(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;

    if (func_0023D4B8(arg0 + 0xB0) != 0) {
        func_001CAD40(arg0, arg1);
        temp_s3 = M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x53C);
        if ((temp_s3 != 0) && ((func_001BBF20(arg1, M2C_FIELD(arg0, s32 *, 0xBC)) != 0) || (func_001BBF38(arg1, M2C_FIELD(arg0, s32 *, 0xBC)) != 0))) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 0xD0);
            temp_v0 = func_0021A558(func_00219680(), temp_s0);
            if (temp_v0 != 0) {
                temp_v0_2 = func_0023C448(temp_v0);
                if (temp_v0_2 != 0) {
                    func_001B9960(temp_s3, temp_v0_2);
                } else {
                    func_001B9960(temp_s3, func_0023C0C0(M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x538)));
                }
            }
        }
    }
}
