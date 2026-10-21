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
void func_001D1628(void *arg0, f32 fparg0)
{
  int new_var;
  f32 var_f0;
  float new_var2;
  var_f0 = (*((f32 *) (((char *) arg0) + 0x84))) + fparg0;
  new_var2 = 1.0f;
  if (var_f0 < 0.0f)
  {
    var_f0 = 0.0f;
  }
  new_var = 0x80;
  if (var_f0 > new_var2)
  {
    var_f0 = new_var2;
  }
  *((f32 *) (((char *) arg0) + new_var)) = var_f0;
}
}
