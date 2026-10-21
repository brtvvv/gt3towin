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
extern void *D_004AEC50 __attribute__((section(".data")));
inline char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_0027CDB0(s32 arg0, void *arg1)
{
  int new_var;
  new_var = 0x14;
  *((void **) inline_fn((char *) arg1, new_var)) = (void *) D_004AEC50;
  D_004AEC50 = arg1;
  *((s32 *) inline_fn((char *) arg1, 4)) = 0;
  *((s32 *) (((char *) arg1) + 0)) = 0;
  *((s32 *) (((char *) arg1) + 0xC)) = 0;
  *((s32 *) inline_fn((char *) arg1, 0x10)) = 0;
  *((s32 *) (((char *) arg1) + 8)) = arg0;
}
}
