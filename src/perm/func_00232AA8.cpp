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
void *func_00232AA8(void *arg0, s32 arg1)
{
  void *new_var2;
  char *new_var;
  new_var2 = arg0 + 0x10;
  return new_var2 + ((*((u16 *) (new_var = ((char *) arg0) + 0xA))) * arg1);
}
}
