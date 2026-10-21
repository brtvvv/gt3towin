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
void func_001A6B08(void *arg0, void *arg1, void *arg2)
{
  f32 temp_f1;
  float new_var2;
  f32 temp_f5;
  f32 *new_var;
  void *temp_v0;
  temp_v0 = *((void **) (((char *) arg0) + 0x44));
  temp_f5 = *((f32 *) (((char *) arg2) + 0));
  new_var2 = ((temp_f5 * (*((f32 *) (((char *) temp_v0) + 0)))) + ((*((f32 *) (((char *) arg2) + 4))) * (*((f32 *) (((char *) temp_v0) + 4))))) + ((*((f32 *) (((char *) arg2) + 8))) * (*((f32 *) (((char *) temp_v0) + 8))));
  temp_f1 = (-(*((f32 *) (((char *) temp_v0) + 0xC)))) / new_var2;
  *(new_var = (f32 *) (((char *) arg1) + 0)) = (f32) (temp_f1 * temp_f5);
  *((f32 *) (((char *) arg1) + 4)) = (f32) (temp_f1 * (*((f32 *) (((char *) arg2) + 4))));
  *((f32 *) (((char *) arg1) + 8)) = (f32) (temp_f1 * (*((f32 *) (((char *) arg2) + 8))));
}
}
