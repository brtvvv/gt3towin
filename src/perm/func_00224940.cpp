extern "C" {

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
void func_00220F38(s32, s32, s32);
s32 func_00222470(s32, s32);
s32 func_002224C0(s32, s32);
s32 func_00224A28(s32, s32);
void func_00224940(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  func_00220F38(arg0, arg1, arg2);
  if ((*(new_var = (s32 *) (((char *) arg0) + 0x34))) != 0)
  {
    func_00222470(arg1, 0xD);
    func_002224C0(arg1, 0x3C);
    func_00224A28(arg0, arg1);
  }
}
}
