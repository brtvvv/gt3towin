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
void func_001F88E8(void *arg0)
{
  char *new_var;
  f32 temp_f0;
  f32 temp_f1;
  f32 temp_f2;
  void *temp_v0;
  temp_v0 = *((void **) (((char *) arg0) + 4));
  temp_f2 = *((f32 *) (((char *) arg0) + 0x94));
  *((f32 *) (((char *) arg0) + 0x9C)) = (f32) (*((f32 *) (((char *) temp_v0) + 0x13A0)));
  new_var = (char *) arg0;
  *((f32 *) (((char *) arg0) + 0xA0)) = 0.0f;
  temp_f1 = *((f32 *) (((char *) arg0) + 0xA0));
  *((s32 *) (((char *) arg0) + 0xA4)) = 0;
  *((s16 *) (((char *) arg0) + 0xA8)) = 0;
  *((s16 *) (new_var + 0xAA)) = 0;
  if (temp_f1 < temp_f2)
  {
    temp_f0 = temp_f2 - (*((f32 *) (((char *) temp_v0) + 0xEC0)));
    *((f32 *) (((char *) arg0) + 0x94)) = temp_f0;
    if (temp_f0 < temp_f1)
    {
      *((f32 *) (new_var + 0x94)) = temp_f1;
    }
  }
}
}
