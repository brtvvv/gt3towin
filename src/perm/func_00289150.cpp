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
s32 func_00289150(s32 arg0, s32 arg1)
{
  s32 temp_v0;
  s32 *new_var;
  new_var = &D_004AF998;
  temp_v0 = *((s32 *) (((char *) new_var) + 0x14));
  *((s32 *) (((char *) new_var) + 0x18)) = arg1;
 do { new_var = (s32 *) (((char *) new_var) + 0x14); *new_var = arg0; return temp_v0; } while (0);
}
}
