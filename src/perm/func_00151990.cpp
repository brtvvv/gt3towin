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
s32 func_00151930(s32);
void func_001C05F8(s32, s32);
void func_001C06B8(s32, s32, s32, s32, s32);
extern char D_0031F640 __attribute__((section(".data")));
void func_00151990(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  void *var_a1;
  func_001C06B8(*((s32 *) (((char *) arg0) + 0x2C)), (s32) func_00151930, 0, 0, 0);
  temp_a0 = (arg1 != 0) ? (0) : (2);
  if (arg2 != 0)
  {
    var_a1 = (temp_a0 * 0x60) + (&D_0031F640);
  }
  else
  {
    var_a1 = ((temp_a0 + 1) * 0x60) + (&D_0031F640);
  }
  func_001C05F8(*((s32 *) (((char *) arg0) + 0x2C)), (s32) var_a1);
  *((s32 *) (((char *) arg0) + 0x34)) = arg1;
}
}
