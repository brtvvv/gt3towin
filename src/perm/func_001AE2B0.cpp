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
s32 func_00245B38(s32);
s32 func_00252500(s32);
s32 func_00252790(s32);
s32 func_00253908(s32, f32);
void func_00256F10(s32, s32, s32, s32);
void func_0025B248(f32, f32, f32, f32);
void func_001AE2B0(s32 unused0, void *arg1)
{
  int new_var;
  if (1)
  {
    new_var = 4;
    *((s32 *) (((char *) arg1) + new_var)) = 1;
  }
  func_00245B38((s32) arg1);
  func_00252790(5);
  func_00252500(6);
  func_00253908(0xA4, 1.0f);
  func_0025B248(1.0f, 1.0f, 1.0f, 1.0f);
  func_00256F10(0, 0, 0x280, 0x200);
  *((s32 *) (arg1 + 4)) = 0x31;
}
}
