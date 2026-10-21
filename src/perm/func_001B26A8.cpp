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
void func_001BAE10(s32, s32);
void func_0026D950(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0027F9CC(s32, s32);
extern s32 D_002C72C8 __attribute__((section(".data")));
extern s32 D_002C72CC __attribute__((section(".data")));
extern s32 D_00353D88 __attribute__((section(".data")));
void func_001B26A8(void *arg0, s32 arg1, s32 arg2, s32 unused3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
  s32 temp_s1;
  s32 var_a1;
  temp_s1 = arg0 + 0x50;
  func_0026D950(temp_s1, (s32) (&D_00353D88), (!(arg2 == 0)) ? (0x2B) : (0x20), arg1, arg4, arg5, arg6, arg7);
  if (arg1 < 2)
  {
    var_a1 = D_002C72C8;
  }
  else
  {
    var_a1 = D_002C72CC;
  }
  func_0027F9CC(temp_s1, var_a1);
  func_001BAE10(*((s32 *) (((char *) arg0) + 0x44)), temp_s1);
}
}
