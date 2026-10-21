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
void func_00175850(s32, s32);
s32 func_001AF2F8(s32, s32);
void func_00186100(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  temp_s0 = 0x1B81C;
  temp_s0 = arg0 + temp_s0;
  func_001AF2F8(temp_s0, *((s32 *) (((char *) arg0) + 4)));
  func_00175850((s32) (arg0 + 0x299F8), temp_s0);
  new_var = (char *) (arg0 + 0x2AB38);
  *((s32 *) (new_var + 0x1C)) = 0;
}
}
