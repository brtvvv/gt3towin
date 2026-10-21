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
void func_00203948(void *arg0, f32 fparg0, f32 fparg1)
{
  f32 new_var;
  void *new_var2;
  new_var = fparg1;
  *((f32 *) (((char *) arg0) + 0xA64)) = new_var;
  *((s16 *) (((char *) arg0) + 0xA5A)) = 1;
  new_var2 = arg0;
  if (1)
  {
 do { *((f32 *) (((char *) new_var2) + 0xA60)) = fparg0; } while (0);
  }
}
}
