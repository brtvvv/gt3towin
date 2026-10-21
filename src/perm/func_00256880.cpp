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
void func_00256880(s32 arg0)
{
  char *new_var2;
  char *new_var;
 new_var2 = (char *) ((void *) 0x70003000); do { new_var = new_var2; *((s32 *) (new_var2 + 0x11C)) = (s32) ((*((s32 *) (new_var + 0x11C))) - (arg0 * 0x10)); } while (0);
}
}
