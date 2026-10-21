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
void func_001C8208(void *arg0)
{
  char *new_var;
  char new_var2;
  *((s32 *) (((char *) arg0) + 4)) = 0;
  new_var2 = 0;
  new_var = (char *) arg0;
  *((s32 *) (new_var + 0xC8)) = new_var2;
  *((s8 *) (((char *) arg0) + 0x48)) = new_var2;
  *((s8 *) (((char *) arg0) - -0x88)) = 0;
}
}
