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
void func_00176C00(s32, s32);
s32 func_00181F18(s32, s32);
s32 func_00181F60(s32, s32);
void func_00188350(s32, s32);
s32 func_001A4148(s32, s32);
void func_00189188(void *arg0, s32 arg1)
{
  s32 temp_s2;
  void *temp_s0;
  temp_s2 = arg0 + 0x2FDE0;
  func_00176C00(temp_s2, *((s32 *) (((char *) arg0) + 0x21C00)));
  func_00188350((s32) arg0, arg1);
  if (arg1 != 1)
  {
    func_00181F18((s32) arg0, (s32) (arg0 + 0x2FE04));
    func_00181F60((s32) arg0, temp_s2);
    return;
  }
  temp_s0 = arg0 + 0x300D4;
  func_001A4148((s32) temp_s0, *((s32 *) (((char *) arg0) + 4)));
  func_00181F18((s32) arg0, (s32) temp_s0);
  func_00181F60((s32) arg0, 0);
}
}
