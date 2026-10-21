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
void func_0026D5B8(s32);
void func_001C81C8(void *arg0)
{
  s32 temp_a0;
  temp_a0 = *((s32 *) (((char *) arg0) + 0));
  if ((*((s32 *) (((char *) arg0) + 0))) != 0)
  {
    func_0026D5B8(temp_a0);
    *((s32 *) (((char *) arg0) - -0)) = 0;
    *((s8 *) (((char *) arg0) + 8)) = 0;
  }
}
}
