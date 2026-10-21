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
s32 func_0023DA20(s32, s32);
void func_0026D5B8(s32);
extern s32 D_002F2F98 __attribute__((section(".data")));
extern s32 D_0035393C;
extern s32 D_00353940;
void func_001927C0(void)
{
  s32 new_var;
  func_0023DA20((s32) (&D_002F2F98), D_00353940);
  new_var = D_0035393C;
  D_00353940 = -1;
  func_0026D5B8(new_var);
  D_0035393C = 0;
}
}
