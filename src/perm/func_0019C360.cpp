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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
void func_0019C360(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7, f32 arg_sp0, f32 arg_sp8, f32 arg_sp10)
{
  f32 new_var;
  new_var = fparg0;
  *((f32 *) (((char *) arg0) + 0x21E8)) = new_var;
  *((f32 *) (((char *) arg0) + 0x21EC)) = fparg1;
  *((f32 *) (((char *) arg0) + 0x21F0)) = fparg2;
  *((f32 *) (((char *) arg0) + 0x21F4)) = (f32) (fparg3 * 8.0f);
  *((f32 *) (((char *) arg0) + 0x21F8)) = fparg4;
  *((f32 *) (((char *) arg0) + 0x21FC)) = fparg5;
  *((f32 *) (((char *) arg0) + 0x2204)) = fparg6;
  *((f32 *) (((char *) arg0) + 0x2208)) = fparg7;
  *((f32 *) (((char *) arg0) + 0x220C)) = arg_sp0;
  *((f32 *) (((char *) arg0) + 0x2210)) = arg_sp8;
  *((f32 *) (((char *) arg0) + 0x2214)) = (f32) (arg_sp10 * 128.0f);
}
}
