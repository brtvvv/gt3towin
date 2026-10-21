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
s32 func_0026DDC0(s32, s32, s32);
s32 func_0026E748(s32, s32);
extern s32 D_003490E8 __attribute__((section(".data")));
void *func_0026DD30(void *arg0, s32 arg1, s32 arg2)
{
  s32 **new_var2;
  char *new_var3;
  int new_var;
  new_var2 = (s32 **) (((char *) arg0) + (new_var = 0x3030));
  *new_var2 = &D_003490E8;
  func_0026DDC0((s32) arg0, arg2, -1);
  *((s32 *) (((char *) arg0) + 0x302C)) = (*((s32 *) (new_var3 = ((char *) arg0) + 0x3014)) = arg1);
  func_0026E748((s32) arg0, 0);
  return arg0;
}
}
