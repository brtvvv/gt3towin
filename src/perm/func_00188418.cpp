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
s32 func_0017AF70(s32);
s32 func_0017C9E0(s32);
s32 func_00188268(s32);
s32 func_001882A0(s32);
void func_002115A0(s32, s32);
void func_00188418(void *arg0)
{
  s32 temp_s1;
  s32 temp_v0;
  void *temp_s0;
  void *temp_s3;
  func_002115A0(arg0 + 0xC8C0, *((s32 *) (((char *) arg0) + 0x9784)));
  func_002115A0((s32) (arg0 + 0xCB50), *((s32 *) (((char *) arg0) + 0x9784)));
  temp_s1 = *((s32 *) (((char *) arg0) + 4));
  temp_s3 = (*((VTE **) (((char *) arg0) + 0x0)))[4 + 1].f(((char *) arg0) + (*((VTE **) (((char *) arg0) + 0x0)))[4 + 1].d);
  *((s32 *) (((char *) temp_s3) + 0x28)) = func_0017AF70(temp_s1);
  *((s32 *) (((char *) func_00188268((s32) arg0)) + 0x12C)) = (s32) (*((s32 *) (((char *) temp_s3) + 0x1C)));
  temp_v0 = func_001882A0((s32) arg0);
  func_002115A0(temp_v0, 1);
  *((s32 *) (((char *) temp_v0) + 0x12C)) = (s32) (*((s32 *) (((char *) temp_s3) + 0x24)));
  func_0017C9E0((s32) arg0);
  temp_s0 = *((void **) (((char *) arg0) + 8));
  if ((*((VTE **) (((char *) temp_s0) + 0xE3A8)))[6 + 1].f(((char *) temp_s0) + (*((VTE **) (((char *) temp_s0) + 0xE3A8)))[6 + 1].d) != 0)
  {
    *((s32 *) (((char *) temp_s3) + 0x28)) = (*((VTE **) (((char *) temp_s0) + 0xE3A8)))[29 + 1].f(((char *) temp_s0) + (*((VTE **) (((char *) temp_s0) + 0xE3A8)))[29 + 1].d);
  }
}
}
