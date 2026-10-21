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
void func_0015D028(s32);
void func_0027D2F8(s32);
extern s32 D_0031DD58 __attribute__((section(".data")));
extern s32 D_00321FA0 __attribute__((section(".data")));
void func_0015CDB0(s32 **arg0, s32 arg1)
{
  *arg0 = &D_00321FA0;
  func_0015D028((s32) arg0);
  *arg0 = &D_0031DD58;
  if (1 & arg1)
  {
    func_0027D2F8((s32) arg0);
  }
}
}
