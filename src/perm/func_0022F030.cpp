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
s32 func_0022F030(void *arg0)
{
  return ((*((s32 *) (((char *) arg0) + 0x2C))) & ((*((s32 *) (((char *) arg0) + 0x18))) & 0xFFFFFFFFFFFFFFFFu)) & ((~(*((s32 *) (((char *) arg0) + 0x1C)))) & (*((s32 *) (((char *) arg0) + 0x28))));
}
}
