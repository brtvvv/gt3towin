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
s32 func_002359F8(s32);
s32 func_0024C4D0(s32, ...);
extern s32 D_003532A8 __attribute__((section(".data")));
extern s32 D_003532D0 __attribute__((section(".data")));
void func_0015EE78(void *arg0, s32 arg1)
{
  s32 temp_a0;
  int new_var;
  new_var = 2;
  temp_a0 = *((s32 *) (((char *) ((  {
    s32 _g = func_00219680() + 0x307C8;
    _g;
  }
))) + 0x540));
  if ((temp_a0 != 0) && (((s32) (*((u8 *) (((char *) func_002359F8(temp_a0 + 0x10)) + 0x11)))) >= new_var))
  {
    func_0024C4D0(arg1, &D_003532D0, *((s32 *) (((char *) arg0) + 0xF48)));
    return;
  }
  strcpy((char *) arg1, "----");
}
}
