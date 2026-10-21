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
f32 func_001D11E8(s32);
f32 func_001D1228(s32);
s32 func_002453E8(s32, s32, s32, s32, s32);
s32 func_002512B0(s32, s32, s32, s32, s32);
s32 func_00252500(s32);
s32 func_00252790(s32);
s32 func_00253908(s32, f32);
s32 func_00255478(s32, s32);
s32 func_002556F8(s32, s32, s32);
s32 func_00256088(void);
s32 func_00256108(void);
s32 func_00258FD4(f32, f32, f32);
s32 func_00259024(f32, f32, f32);
void func_0025B248(f32, f32, f32, f32);
extern s32 D_002F5880 __attribute__((section(".data")));
extern s32 D_00333570 __attribute__((section(".data")));
extern s32 D_00333590 __attribute__((section(".data")));
void func_001B1E68(void *arg0)
{
  f32 temp_f20;
  f32 temp_f21;
  f32 temp_f23;
  f32 temp_f24;
  void *temp_v0;
  f32 new_var;
  temp_v0 = *((void **) (((char *) arg0) + 0x100));
  if (temp_v0 != 0)
  {
    func_002453E8((s32) (&D_002F5880), 0, 0x40, 0x20, *((s32 *) (((char *) temp_v0) + 0x2040)));
    func_00252790(5);
    func_00252790(4);
    func_00252790(8);
    func_00252500(6);
    func_00253908(0x44, 1.0f);
    func_0025B248(1.0f, 1.0f, 1.0f, *((f32 *) (((char *) arg0) + 0xA4)));
    temp_f24 = func_001D11E8((s32) arg0);
    temp_f23 = func_001D1228((s32) arg0);
    new_var = *((f32 *) (((char *) arg0) + 0x38));
    temp_f21 = (*((f32 *) (((char *) arg0) + 0x3C))) * 0.5f;
    temp_f20 = new_var * 0.5f;
    func_00255478(4, 2);
    func_00255478(5, 2);
    func_002556F8(0, 0, 0x3F);
    func_002556F8(1, 0, 0x1F);
    func_00255478(3, 0);
    func_00255478(2, 0);
    func_00256088();
    func_00258FD4(temp_f24, temp_f23, 0.0f);
    func_00259024(temp_f20, temp_f21, 1.0f);
    func_002512B0((s32) (&D_00333590), 0, 0, (s32) (&D_00333570), 4);
    func_00256108();
  }
}
}
