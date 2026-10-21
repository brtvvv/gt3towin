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
void func_001BAB98(s32, s32);
void func_001C0360(s32);
s32 func_001C4CD8(s32, s32, s32);
extern s32 D_00337540 __attribute__((section(".data")));
extern s32 D_00353FC0;
extern s32 D_00353FC4;
extern s32 D_00353FC8;
extern s32 D_00353FCC;
void func_001C4A90(void *arg0, s32 arg1)
{
  void *new_var;
  *((s32 **) (((char *) arg0) + 0x1C)) = &D_00337540;
  if (D_00353FCC != 0)
  {
    func_001C4CD8((s32) (arg0 + 0x208), D_00353FCC, D_00353FC4);
  }
  D_00353FC8 = 0;
  D_00353FCC = 0;
  new_var = arg0 + 0x104;
  D_00353FC4 = 0;
  D_00353FC0 = 0;
  func_001BAB98((s32) new_var, 2);
  func_001BAB98((s32) arg0, 0);
  if (arg1 & 1)
  {
    func_001C0360((s32) arg0);
  }
}
}
