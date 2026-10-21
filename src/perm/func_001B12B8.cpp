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
void func_001B12B8(void *arg0)
{
  s32 var_a2;
  s32 var_v1;
  void *temp_a1;
  var_v1 = 0;
  if ((*((s32 *) (((char *) arg0) + 0))) == 0)
  {
    if (temp_a1)
    {
      var_v1 = (*((s32 *) (((char *) arg0) + 8))) != 0;
    }
    else
    {
      var_v1 = (*((s32 *) (((char *) arg0) + 8))) != 0;
    }
  }
  temp_a1 = *((void **) (((char *) arg0) + 0x14));
  *((s32 *) (((char *) temp_a1) + 0xAC)) = var_v1;
  var_a2 = 0;
  if ((*((s32 *) (((char *) arg0) + 0))) != 0)
  {
    var_a2 = (*((s32 *) (((char *) arg0) + 8))) != 0;
  }
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x18)))) + 0xAC)) = var_a2;
  if ((*((s32 *) (((char *) arg0) + 0xC))) != 0)
  {
    *((f32 *) (((char *) temp_a1) + 0xA4)) = 1.0f;
    return;
  }
 do { } while (0);
  *((f32 *) (((char *) temp_a1) + 0xA4)) = 0.5f;
}
}
