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
void func_00211350(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
  void *new_var;
  f32 *new_var2;
  new_var = arg0;
  *((f32 *) (((char *) arg0) + 0x20)) = fparg2;
 do { *((f32 *) (((char *) new_var) + 0x18)) = fparg0; } while (0);
  new_var2 = (f32 *) (((char *) arg0) + 0x1C);
  *new_var2 = fparg1;
}
}
