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
f32 func_001EC8E0(void *arg0, s32 arg1, f32 fparg0)
{
  char *new_var;
  f32 temp_f12;
  temp_f12 = fparg0 + (*((f32 *) (((char *) arg0) + 0xEC4)));
  return ((((*((f32 *) (new_var = ((char *) (arg0 + (arg1 * 4))) + 0x1684))) * temp_f12) + ((*((f32 *) (((char *) ((arg1 * 0xA4) + arg0)) + 0x107C))) * (1.0f - temp_f12))) * 0.5f) + 0.5f;
}
}
