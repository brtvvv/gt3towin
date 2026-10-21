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
s32 func_0019B698(s32, s32, s32);
s32 func_0019D3C8(s32);
f32 func_0023E0A8(s32, s32, s32, s32);
void func_0023E130(s32, s32);
s32 func_0023E610(s32, s32);
void func_0023E6A0(s32, s32);
extern s32 D_002F2F98 __attribute__((section(".data")));
extern s32 D_00353AD8 __attribute__((section(".data")));
void func_0019E328(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  s32 temp_s1;
  temp_s1 = arg0 + 0x20;
  func_0019D3C8(temp_s1);
  func_0023E610((s32) (&D_002F2F98), (s32) (&D_00353AD8));
  func_0023E130((s32) (&D_002F2F98), 0x80A0A088);
  new_var = (char *) temp_s1;
  temp_s0 = (func_0019B698((s32) (*((s16 *) (((char *) temp_s1) + 8))), (s32) (*((s16 *) (((char *) temp_s1) + 0xC))), (s32) (*((u8 *) (((char *) temp_s1) + 0x10)))) + (((s32) (((u16) (*((s16 *) (new_var + 0xC)))) << 0x10)) >> 0x11)) + (*((s8 *) (((char *) arg0) + 0x30BD)));
  func_0023E0A8((s32) (&D_002F2F98), temp_s0, (func_0019B698((s32) (*((s16 *) (((char *) temp_s1) + 0xA))), (s32) (*((s16 *) (((char *) temp_s1) + 0xE))), (s32) (*((u8 *) (((char *) temp_s1) + 0x11)))) + (((s32) (((u16) (*((s16 *) (((char *) temp_s1) + 0xE)))) << 0x10)) >> 0x11)) + (*((s8 *) (((char *) arg0) + 0x30BE))), 0);
  func_0023E6A0((s32) (&D_002F2F98), (!((*((u8 *) (((char *) arg0) + 0x30BC))) == 0)) ? (0x3D) : (0x3E));
}
}
