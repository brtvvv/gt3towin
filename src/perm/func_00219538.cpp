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
s32 func_00219680(void);
extern s32 D_002F587C __attribute__((section(".data")));
void func_00219538(void)
{
  s32 *new_var;
  new_var = (s32 *) (((char *) func_00219680()) + 0x2FF38);
  D_002F587C = *new_var;
}
}
