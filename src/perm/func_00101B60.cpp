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
s32 func_00101A98(s32);
extern s32 D_00309E70 __attribute__((section(".data")));
extern s32 D_003524A8;
s32 func_00101B60(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
  func_00101A98(arg0);
  new_var = (arg2 != 0) ? (arg2) : (D_003524A8);
  *((s32 *) (((char *) arg0) + 0x18)) = arg1;
  *((s32 **) (((char *) arg0) + 0)) = &D_00309E70;
  *((s32 *) (((char *) arg0) + 0xC)) = (s32) new_var;
  *((s32 *) (((char *) arg0) + 4)) = 0;
  *((s32 *) (((char *) arg0) + 8)) = 0;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  *((s32 *) (((char *) arg0) + 0x14)) = 0;
  return arg0;
}
}
