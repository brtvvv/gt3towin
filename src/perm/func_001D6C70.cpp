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
s32 func_001D33A8(f32, f32, f32, f32);
extern s32 D_002D25E8 __attribute__((section(".data")));
void func_001D6C70(void)
{
  char *new_var;
  f32 new_var3;
  f32 new_var2;
  new_var = (char *) (&D_002D25E8);
  new_var3 = *((f32 *) (new_var + 4));
  new_var2 = *((f32 *) (new_var + 0));
  func_001D33A8(*((f32 *) (new_var + 0)), new_var3, (*((f32 *) (new_var + 8))) - new_var2, (*((f32 *) (new_var + 0xC))) - new_var3);
}
}
