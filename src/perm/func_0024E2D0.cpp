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
extern s32 D_002F8900 __attribute__((section(".data")));
s32 func_0024E2D0(void)
{
  char *new_var;
  char *new_var3;
  int new_var2;
  new_var2 = 1;
  *((s32 *) ((new_var = (char *) (&D_002F8900)) + 0x80)) = -new_var2;
  new_var3 = (char *) (*((void **) (new_var + 0x78)));
  if ((*((s32 *) (new_var + 0xD0))) == 0)
  {
    return -new_var2;
  }
  *((f32 *) (((char *) (&D_002F8900)) + 0xBC)) = (f32) ((((*((f32 *) (((char *) (&D_002F8900)) + 0xBC))) + (((f32) (*((s8 *) (new_var3 + 0x12)))) * (*((f32 *) (new_var + 0xA4))))) + (((f32) (*((u8 *) (new_var3 + 0x10)))) * (*((f32 *) (((char *) (&D_002F8900)) + 0xA4))))) + (*((f32 *) (((char *) (&D_002F8900)) + 0x9C))));
  return 0;
}
}
