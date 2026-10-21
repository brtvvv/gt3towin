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
void func_0024AEC0(s32 arg0, void *arg1)
{
  s32 *new_var;
  new_var = &D_002F8900;
  *((s32 *) (((char *) new_var) + 0x78)) = arg0;
  if (arg1 != 0)
  {
    *((s64 *) (((char *) new_var) + 0x68)) = (s64) (*((s64 *) (((char *) (arg1 = arg1)) + 0)));
    *((s64 *) (((char *) new_var) + 0x70)) = (s64) (*((s64 *) (((char *) arg1) + 8)));
  }
  *((s32 *) (((char *) new_var) + 0x80)) = -1;
}
}
