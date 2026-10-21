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
s32 func_001CD840(s32, s32, s32);
void func_001CD868(s32, s32);
s32 func_0023D4B8(s32);
void func_001C8EE8(void *arg0)
{
  void *temp_s0;
  if (temp_s0)
  {
    temp_s0 = arg0 + 0xD0;
  }
  else
  {
    temp_s0 = arg0 + 0xD0;
  }
  if ((*((s32 *) (((char *) arg0) + 0xC0))) == 0)
  {
    *((s32 *) (((char *) temp_s0) + 0xC)) = 1;
  }
  else
  {
    *((s32 *) (((char *) temp_s0) + 0xC)) = 0;
  }
  func_001CD840((s32) temp_s0, 0, func_0023D4B8((s32) (arg0 + 0xB0)));
  func_001CD868((s32) temp_s0, 0);
}
}
