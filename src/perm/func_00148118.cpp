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
s32 func_00143208(s32, s32);
s32 func_001469E8(s32, s32);
s32 func_001487B8(s32);
void func_0014F058(s32, s32);
void func_0027D2F8(s32);
extern s32 D_0031DC58 __attribute__((section(".data")));
extern s32 D_0031DD58 __attribute__((section(".data")));
void func_00148118(void *arg0, s32 arg1)
{
  void *new_var;
  *((s32 **) (((char *) arg0) + 0)) = &D_0031DC58;
  new_var = arg0;
  if ((double) ((*((s32 *) (((char *) new_var) + 0xFBBC))) != 0))
  {
    func_001487B8((s32) new_var);
  }
  func_00143208((s32) (new_var + 0xFAF8), 2);
  func_00143208((s32) (new_var + 0xFA90), 2);
  func_001469E8((s32) (new_var + 0xFA64), 2);
  func_0014F058((s32) (new_var + 0xFA08), 2);
  *((s32 **) (((char *) new_var) + 0)) = &D_0031DD58;
  if (arg1 & 1)
  {
    func_0027D2F8((s32) new_var);
  }
}
}
