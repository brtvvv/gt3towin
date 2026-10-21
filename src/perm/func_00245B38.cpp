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
s32 func_00253608(s32, s32, s32, s32);
s32 func_00253B00(s32);
s32 func_00253CD8(s32, s32, s32, s32);
void func_00256C90(s32);
void func_00245B38(void *arg0)
{
  int new_var4;
  s32 *new_var3;
  void *new_var2;
  void *new_var;
  new_var4 = 0x20;
  new_var = (new_var2 = arg0);
  func_00253608(*((s32 *) (((char *) arg0) + 0)), *((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), *((s32 *) (0xC + ((char *) arg0))));
  func_00253B00(*((s32 *) (((char *) new_var) + 0x10)));
  func_00256C90(*((s32 *) (((char *) new_var) + 0x14)));
  new_var3 = (s32 *) (((char *) new_var) + 0x30);
  if ((*new_var3) != 0)
  {
    func_00253CD8(*((s32 *) (((char *) new_var) + 0x18)), *((s32 *) (((char *) new_var) + 0x1C)), *((s32 *) (((char *) arg0) + new_var4)), *((s32 *) (((char *) new_var) + 0x24)));
  }
}
}
