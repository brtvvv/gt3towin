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
s32 func_002090C0(void *arg0)
{
  s32 temp_a1;
  short var_a2;
  temp_a1 = *((s32 *) (((char *) arg0) + 0x9704));
  var_a2 = 0;
  if (temp_a1 == 1)
  {
    var_a2 = (((*((s32 *) (((char *) arg0) + 0x9708))) ^ 1) != 0) ? (0) : (temp_a1);
  }
  return var_a2;
}
}
