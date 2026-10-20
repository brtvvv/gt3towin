#include "m2c.h"
extern "C" M2C_UNK func_001D9990(s32, s32, s32, f32, f32, f32); /* extern */
extern "C" M2C_UNK func_001DFAC0(s32);                         /* extern */
extern "C" M2C_UNK func_001E0058(s32);                         /* extern */
extern "C" M2C_UNK func_001E0060(s32);                         /* extern */
extern "C" M2C_UNK func_001E01C0(s32);                         /* extern */
extern "C" M2C_UNK func_001E0B98(s32);                         /* extern */
extern "C" M2C_UNK func_001E0FA0(s32);                         /* extern */
extern "C" M2C_UNK func_001E1608(s32);                         /* extern */
extern "C" M2C_UNK func_001E1698(void *);                      /* extern */
extern "C" M2C_UNK func_001E9AA8(s32);                         /* extern */
extern "C" M2C_UNK func_001EA0E8(s32);                         /* extern */
extern "C" M2C_UNK func_001EA288(s32);                         /* extern */
extern "C" M2C_UNK func_001EA630(s32);                         /* extern */
extern "C" M2C_UNK func_001EA8D8(s32);                         /* extern */
extern "C" M2C_UNK func_001EAC88();                            /* extern */
extern "C" M2C_UNK func_001EAD28(s32);                         /* extern */
extern "C" M2C_UNK func_001EAD58(void *);                      /* extern */
extern "C" M2C_UNK func_001EB418(s32);                         /* extern */
extern "C" M2C_UNK func_001EB8F8(s32);                         /* extern */
extern "C" M2C_UNK func_001EBF00(s32);                         /* extern */

extern "C" void func_001EC158(s32 arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0xF84;
    func_001EAC88();
    func_001EAD58(temp_s1);
    func_001E9AA8(arg0);
    func_001EA0E8(arg0);
    func_001EA288(arg0);
    func_001EA630(arg0);
    func_001EA8D8(arg0);
    func_001E01C0(arg0);
    func_001E0FA0(arg0);
    func_001DFAC0(arg0);
    func_001E0058(arg0);
    func_001E0B98(arg0);
    func_001E1608(arg0);
    func_001E1698(temp_s1);
    func_001EAD28(arg0);
    func_001D9990(arg0 + 0xF90, arg0 + 0xF9C, arg0 + 0xFA8, M2C_FIELD(temp_s1, f32 *, 0x468), M2C_FIELD(temp_s1, f32 *, 0x46C), M2C_FIELD(temp_s1, f32 *, 0x470));
    func_001EB418(arg0);
    func_001EB8F8(arg0);
    func_001EBF00(arg0);
    func_001E0060(arg0);
}
