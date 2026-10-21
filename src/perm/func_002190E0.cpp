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
void func_002389D8(s32, s32);
unsigned int func_0023D140(s32, s32);
extern s32 D_003132A0 __attribute__((section(".data")));
extern s32 D_003132B0 __attribute__((section(".data")));
extern s32 D_003132D0 __attribute__((section(".data")));
void func_002190E0(void *arg0, s32 arg1)
{
  s32 new_var;
  s32 **new_var3;
  s32 *new_var2;
  new_var3 = (s32 **) (((char *) arg0) + 0x1EC);
  *new_var3 = &D_003132A0;
  *((s32 **) (((char *) arg0) + 8)) = &D_003132B0;
  new_var = (s32) (arg0 + 0x10);
  func_002389D8(new_var, 0);
  new_var2 = &D_003132D0;
  *((s32 **) (((char *) arg0) + 8)) = new_var2;
  func_0023D140((s32) arg0, arg1);
}
}
