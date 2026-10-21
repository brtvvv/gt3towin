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
s32 func_00232658(s32, s32, s32);
s32 func_002327C0(s32, s32);
extern s32 D_002ED3B8 __attribute__((section(".data")));
void func_0023B270(s32 arg0)
{
  s32 *new_var;
  new_var = &D_002ED3B8;
  func_002327C0(*((s32 *) (((char *) (&D_002ED3B8)) + 4)), (s32) (*((u16 *) (((char *) func_00232658((s32) new_var, 0x22, arg0)) + 0xA))));
}
}
