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
void func_001D8FB0(void *arg0, f32 fparg0)
{
  void *temp_a0;
  void *new_var2;
  void *new_var;
  new_var2 = arg0 + 0x2C;
  *((s32 *) (((char *) arg0) + 0x2C)) = 0;
  temp_a0 = new_var2;
  new_var = temp_a0;
  *((f32 *) (((char *) temp_a0) + 8)) = fparg0;
  *((s32 *) (((char *) new_var) + 4)) = 0;
}
}
