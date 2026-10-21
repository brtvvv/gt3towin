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
s32 func_0022D6D8(s32, s32, s32, f32);
void func_001C5E88(s32 arg0)
{
  char *new_var;
  new_var = (char *) (func_00219680() + 0x2FF38);
  if ((*((s32 *) (new_var + 8))) != 0)
  {
    func_0022D6D8(arg0, 0x40, -1, 1.0f);
  }
}
}
