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
void func_001CCCC8(void *arg0)
{
  int *new_var3;
  s32 *new_var;
  int new_var2;
  new_var2 = 0;
  new_var3 = &new_var2;
  *((s32 *) (((char *) arg0) + 0x270)) = new_var2;
 do { new_var = (s32 *) (((char *) arg0) + 0x26C); *new_var = *new_var3; } while (0);
}
}
