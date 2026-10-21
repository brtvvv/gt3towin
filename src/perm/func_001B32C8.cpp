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
s32 func_001B32C8(void *arg0)
{
  short var_v0;
  var_v0 = 1;
  if (!((*((f32 *) (((char *) arg0) + 0x904))) > (*((f32 *) (((char *) arg0) + 0x910)))))
  {
    var_v0 = 0;
  }
  return var_v0;
}
}
