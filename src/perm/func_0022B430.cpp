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
void func_0022B430(void *arg0, f32 fparg0)
{
  int new_var;
  char *new_var2;
  *((f32 *) (((char *) arg0) + 0x3C)) = fparg0;
  *((f32 *) (((char *) arg0) + 0)) = fparg0;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  *((s32 *) (((char *) arg0) + 0x20)) = 0;
  *((s32 *) (((char *) arg0) + 0x30)) = 0;
  *((s32 *) (((char *) arg0) + 4)) = 0;
  new_var2 = ((char *) arg0) + 0x34;
  *((f32 *) (((char *) arg0) + 0x14)) = fparg0;
  *((s32 *) (((char *) arg0) + 0x24)) = 0;
  *((s32 *) new_var2) = 0;
  *((s32 *) (((char *) arg0) + 8)) = 0;
  new_var = 0;
 do { *((s32 *) (((char *) arg0) + 0x18)) = new_var; *((f32 *) (((char *) arg0) + 0x28)) = fparg0; *((s32 *) (((char *) arg0) + 0x38)) = new_var; *((s32 *) (((char *) arg0) + 0xC)) = 0; *((s32 *) (((char *) arg0) + 0x1C)) = new_var; } while (0);
  *((s32 *) (((char *) arg0) + 0x2C)) = new_var;
}
}
