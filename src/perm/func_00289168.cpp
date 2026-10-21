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
extern s32 D_004AF998 __attribute__((section(".data")));
s32 func_00289168(s32 arg0, s32 arg1)
{
  char *new_var;
  s32 temp_v0;
  new_var = (char *) (&D_004AF998);
  temp_v0 = *((s32 *) (new_var + 0xC));
  *((s32 *) (new_var + 0x10)) = arg1;
 do { } while (0);
  *((s32 *) (new_var + 0xC)) = arg0;
  return temp_v0;
}
}
