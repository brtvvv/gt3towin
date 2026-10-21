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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
s32 func_001ED458(s32, s32, s32, s32, s32, s32, s32);
s32 func_001F3A90(s32, s32);
void func_001F1CB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 unused4, s32 arg5, s32 arg6)
{
  s32 temp_s2;
  s16 new_var;
  void *temp_a1;
  temp_s2 = func_001F3A90(arg0, arg1);
  temp_a1 = *((void **) (((char *) arg0) + 0xE3A8));
 do { new_var = (*((VTE **) (((char *) arg0) + 0xE3A8)))[32 + 1].d; } while (0);
  func_001ED458(arg0, arg1, 1, ((arg2 - 1) * (*((VTE **) (((char *) arg0) + 0xE3A8)))[32 + 1].f(((char *) arg0) + new_var, temp_a1)) + arg3, arg5, arg6, (s32) (*((u8 *) (((char *) temp_s2) + 0x14A2))));
}
}
