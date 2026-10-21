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
void func_0024AFF8(s32, s32);
extern s32 D_002F8900 __attribute__((section(".data")));
void func_0024B2D8(s32 arg0, s32 arg1)
{
  s32 *new_var2;
  char *new_var;
  func_0024AFF8(arg0, arg1);
  new_var2 = &D_002F8900;
  if (1)
  {
    *((f32 *) (((char *) new_var2) + 0xBC)) = (f32) (*((f32 *) (((char *) new_var2) + 0xAC)));
    new_var = ((char *) (&D_002F8900)) + 0xB0;
    *((f32 *) (((char *) new_var2) + 0xC0)) = (f32) (*((f32 *) new_var));
  }
}
}
