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
s32 func_00197418(s32, s32);
void func_0019D958(s32, s32);
extern s32 D_0032FC78 __attribute__((section(".data")));
extern s32 D_003310B8 __attribute__((section(".data")));
void func_0019EA18(void *arg0, s32 arg1)
{
  char *new_var2;
  s32 **new_var;
  new_var2 = 0x14 + ((char *) arg0);
  *((s32 **) new_var2) = &D_003310B8;
  func_0019D958((s32) (arg0 + 0x20), 2);
  new_var = (s32 **) (((char *) arg0) + 0x14);
  *new_var = &D_0032FC78;
  func_00197418((s32) arg0, arg1);
}
}
