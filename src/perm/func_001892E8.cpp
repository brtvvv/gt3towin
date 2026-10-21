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
extern s32 D_0032CFF0 __attribute__((section(".data")));
void *func_001892E8(void *arg0)
{
  *((s32 **) (((char *) arg0) + 4)) = &D_0032CFF0;
  *((s32 *) (((char *) arg0) + 8)) = -1;
  *((s8 *) (((char *) arg0) + 0)) = 0;
  *((s8 *) (((char *) arg0) + 0xC)) = 0;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  *((s32 *) (((char *) arg0) + 0x14)) = 0;
  *((s32 *) (((char *) arg0) + 0x18)) = 0;
  return arg0;
}
}
