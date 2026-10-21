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
s32 func_001DAA20(s32);
s32 func_001F5208(s32);
s32 func_0027ED70(s32, s32, s32);
extern s32 D_0033E360 __attribute__((section(".data")));
void *func_001F3938(void *arg0)
{
  s32 var_s1;
  char *new_var;
  s32 var_s1_2;
  void *var_s0;
  void *var_s0_2;
  var_s0 = arg0 + 0xC8;
  *((s32 **) (((char *) arg0) + 0xE3A8)) = &D_0033E360;
  var_s1 = 7;
  do
  {
    var_s1 -= 1;
    func_001DAA20(var_s0 + 0x137C);
    *((s8 *) (((char *) var_s0) + 0x16D0)) = 0;
    *((s8 *) (((char *) var_s0) + 0x16D1)) = 0;
    var_s0 += 0x16DC;
  }
  while (var_s1 != (-1));
  var_s0_2 = arg0 + 0xBBC0;
  *((s32 *) ((new_var = (char *) (arg0 + 0xBBA8)) + 4)) = 0;
  var_s1_2 = 7;
  do
  {
    var_s1_2 -= 1;
    func_001F5208((s32) var_s0_2);
    var_s0_2 += 0x4F0;
  }
  while (var_s1_2 != (-1));
  func_0027ED70((s32) (arg0 + 0xE340), 0, 0x40);
  *((f32 *) (((char *) arg0) + 0xB7B0)) = 1.0f;
  return arg0;
}
}
