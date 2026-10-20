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
s32 func_0017C000(void *arg0, s32 arg1)
{
  s32 temp_v1;
  char *new_var;
  temp_v1 = *((s32 *) (((char *) arg0) + 8));
  if ((arg1 >= temp_v1) && (arg1 < (temp_v1 + (*((s32 *) (((char *) arg0) + 0xC))))))
  {
    return *((s32 *) (new_var = ((char *) (arg0 + ((arg1 - temp_v1) * 4))) + 0x14));
  }
  return 0;
}
}
