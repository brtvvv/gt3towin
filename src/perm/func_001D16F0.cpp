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
void func_001D16F0(s32 arg0, s32 arg1, f32 fparg0)
{
  float new_var3;
  f32 var_f0;
  f32 new_var;
  float new_var2;
  void *temp_a1;
  temp_a1 = ((arg1 * 0x10) + arg0) + 0x40;
  var_f0 = (new_var2 = (*((f32 *) (((char *) temp_a1) + 8))) + fparg0);
  new_var3 = 1.0f;
  new_var = var_f0;
  if (new_var < 0.0f)
  {
    var_f0 = 0.0f;
  }
  if (var_f0 > new_var3)
  {
    var_f0 = new_var3;
  }
  *((f32 *) (((char *) temp_a1) + 8)) = var_f0;
}
}
