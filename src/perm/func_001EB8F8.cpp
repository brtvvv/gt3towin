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
s32 func_001DAB90(s32, f32);
f32 func_001DAC88(s32, f32);
f32 func_001DBC28(s32, s32);
s32 func_001EB5F0(s32);
s32 func_001EB660(s32);
f32 func_001EB7B0(s32);
f32 func_001EB848(s32);
extern s32 D_002D40C0 __attribute__((section(".data")));
void func_001EB8F8(s32 arg0)
{
  f32 temp_f0;
  char *new_var;
  f32 temp_f1;
  f32 temp_f1_2;
  s32 temp_s0;
  void *temp_s2;
  temp_s2 = arg0 + 0xF84;
  func_001EB5F0(arg0);
  *((f32 *) (((char *) arg0) + 0x16A8)) = (f32) (*((f32 *) (((char *) temp_s2) + 0x488)));
  func_001EB848(arg0);
  temp_f1 = *((f32 *) (((char *) arg0) + 0x16A8));
  if (temp_f1 < 0.0f)
  {
    *((f32 *) (((char *) arg0) + 0x16A8)) = (f32) (-temp_f1);
  }
  temp_s0 = arg0 + 0x137C;
  temp_f0 = func_001DBC28((s32) (&D_002D40C0), arg0);
  func_001DAB90(temp_s0, temp_f0);
  func_001DAC88(temp_s0, temp_f0);
  if ((*((u8 *) (((char *) temp_s2) + 0x4E0))) == 0)
  {
    ;
    if ((*((f32 *) (((char *) arg0) + 0x16AC))) < (*((f32 *) (((char *) arg0) + 0x16A8))))
    {
      new_var = (char *) arg0;
      *((f32 *) (new_var + 0x16AC)) = *((f32 *) (((char *) arg0) + 0x16A8));
    }
  }
  func_001EB7B0(arg0);
  func_001EB660(arg0);
}
}
