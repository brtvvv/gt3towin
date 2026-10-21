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
void func_001C1B48(void *arg0, f32 fparg0, f32 fparg1)
{
  f32 new_var;
  char *new_var2;
 do { *((f32 *) (((char *) arg0) + 0x104)) = fparg1; new_var = fparg0; new_var2 = (char *) arg0; } while (0);
  *((f32 *) (new_var2 + 0x100)) = new_var;
}
}
