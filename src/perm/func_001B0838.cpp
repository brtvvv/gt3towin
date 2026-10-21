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
s32 func_002512B0(s32, s32, s32, s32, s32);
s32 func_00253908(s32, f32);
s32 func_00256088(void);
s32 func_00256108(void);
s32 func_00258FD4(f32, f32, f32);
s32 func_00259024(f32, f32, f32);
void func_0025B248(f32, f32, f32, f32);
extern s32 D_002C5CC0 __attribute__((section(".data")));
void func_001B0838(void *arg0)
{
  void *temp_v0;
  void *temp_v0_2;
  if ((*((void **) (((char *) arg0) + 0x2B0))) != 0)
  {
    func_00253908(0x48, 1.0f);
    func_0025B248(1.0f, 1.0f, 1.0f, *((f32 *) (((char *) arg0) + 0x210)));
    func_00256088();
    temp_v0_2 = *((void **) (((char *) arg0) + 0x2B0));
    temp_v0 = temp_v0_2;
    func_00258FD4(*((f32 *) (((char *) temp_v0) + 0x28)), *((f32 *) (((char *) temp_v0) + 0x34)), 0.0f);
    temp_v0_2 = *((void **) (((char *) arg0) + 0x2B0));
    func_00259024((*((f32 *) (((char *) temp_v0_2) + 0x38))) * 0.5f, (*((f32 *) (((char *) temp_v0_2) + 0x3C))) * 0.5f, 1.0f);
    func_002512B0((s32) (&D_002C5CC0), 0, 0, 0, 4);
    func_00256108();
  }
}
}
