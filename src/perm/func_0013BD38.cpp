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
void func_0013BD38(void *arg0)
{
  f32 temp_f0;
  int new_var;
  float new_var2;
  f32 var_f3;
  var_f3 = (((f32) (*((s32 *) (((char *) arg0) + 0x14)))) + 0.5f) - (*((f32 *) (((char *) arg0) + 4)));
  new_var2 = 0.0f;
  *((s8 *) (((char *) arg0) + 0x18)) = 2;
  if (var_f3 < new_var2)
  {
    do
    {
      var_f3 += (f32) (*((s32 *) (((char *) arg0) + 0x10)));
    }
    while (var_f3 < new_var2);
  }
  new_var = (*((s32 *) (((char *) arg0) + 0x10))) * (0xC / (*((s32 *) (((char *) arg0) + 0x10))));
  temp_f0 = ((f32) new_var) + var_f3;
  *((f32 *) (((char *) arg0) + 0)) = temp_f0;
  *((f32 *) (((char *) arg0) + 0xC)) = (f32) ((-((*((f32 *) (((char *) arg0) + 8))) * (*((f32 *) (((char *) arg0) + 8))))) / (2.0f * (temp_f0 + 1.0f)));
}
}
