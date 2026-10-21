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
void func_001D16A8(s32 arg0, s32 arg1, f32 fparg0)
{
  f32 var_f0;
  float new_var;
  void *temp_a1;
  temp_a1 = ((arg1 * 0x10) + arg0) + 0x40;
  var_f0 = (*((f32 *) (temp_a1 + 0xC))) + fparg0;
  new_var = 1.0f;
  if (var_f0 < 0.0f)
  {
    var_f0 = 0.0f;
  }
  if (var_f0 > 1.0f)
  {
    var_f0 = new_var;
  }
  *((f32 *) (((char *) temp_a1) + 0xC)) = var_f0;
}
}
