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
s32 *func_0022DB28(void *arg0)
{
  s32 *temp_a2;
  temp_a2 = *((s32 **) (((char *) arg0) + 0xC));
  *((s32 **) (((char *) arg0) + 0xC)) = (s32 *) (*temp_a2);
  *((s32 *) (((char *) arg0) + 0x14)) = (s32) ((*((s32 *) (((char *) arg0) + 0x14))) - 1);
  *((s32 *) (((char *) arg0) + 0x10)) = (s32) ((*((s32 *) (((char *) arg0) + 0x10))) + 1);
  return temp_a2;
}
}
