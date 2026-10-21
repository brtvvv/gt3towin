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
s32 func_001F0840(void *arg0, void *arg1)
{
  s32 new_var;
  new_var = *((s32 *) (((char *) arg1) + 0x14B4));
  return (((u32) (*((u32 *) (((char *) arg0) + 0xE380)))) / 3U) - new_var;
}
}
