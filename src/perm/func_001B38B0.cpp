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
extern s32 D_00333B70 __attribute__((section(".data")));
void *func_001B38B0(void *arg0)
{
  int new_var;
  *((s32 **) (((char *) arg0) + 0x14)) = &D_00333B70;
  *((s32 *) (((char *) arg0) + 0)) = (new_var = 0);
  *((s32 *) (((char *) arg0) + 4)) = 0;
  *((s32 *) (((char *) arg0) + 8)) = 1;
  *((s32 *) (((char *) arg0) + 0xC)) = 0;
  *((s32 *) (((char *) arg0) + 0x1C)) = 1;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  *((s32 *) (((char *) arg0) + 0x18)) = new_var;
  return arg0;
}
}
