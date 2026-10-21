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
f32 func_001D11E8(s32);
f32 func_001D1228(s32);
void func_001D1130(void *arg0, f32 *arg1, f32 *arg2)
{
  f32 var_f20;
  f32 var_f21;
  s32 temp_v1;
  s32 var_v0;
  void *temp_a0;
  var_f20 = 0.0f;
  temp_a0 = *((void **) (((char *) arg0) + 0x9C));
  var_f21 = 0.0f;
  if ((temp_a0 != 0) && ((*((s32 *) (((char *) temp_a0) + 0x14))) != 3))
  {
    temp_v1 = *((s32 *) (((char *) arg0) + 0xA0));
    var_v0 = temp_v1 & 2;
    if (temp_v1 & 1)
    {
      var_f21 = func_001D11E8((s32) temp_a0);
    }
    var_v0 = (*((s32 *) (((char *) arg0) + 0xA0))) & 2;
    if (var_v0 != 0)
    {
      var_f20 = func_001D1228((s32) (*((void **) (((char *) arg0) + 0x9C))));
    }
  }
  *arg1 = (*((f32 *) (((char *) arg0) + 0x28))) + var_f21;
  *arg2 = (*((f32 *) (((char *) arg0) + 0x34))) + var_f20;
}
}
