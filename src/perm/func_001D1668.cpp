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
inline float inline_fn(void *arg0, f32 arg1)
{
  return (*((f32 *) (((char *) arg0) + 0x80))) + arg1;
}

volatile int func_001D1668(void *arg0, f32 fparg0)
{
  float new_var3;
  f32 new_var;
  void **new_var2;
  f32 var_f0;
  var_f0 = inline_fn(arg0, fparg0);
  new_var = var_f0;
  new_var3 = 1.0f;
  if (new_var < 0.0f)
  {
    var_f0 = 0.0f;
  }
  if (var_f0 > 1.0f)
  {
    var_f0 = new_var3;
  }
  *((f32 *) (((char *) (*(new_var2 = &arg0))) + 0x80)) = var_f0;
}
}
