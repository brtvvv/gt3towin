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
f32 func_001A0960(s32, s32);
extern s32 D_002C1A70 __attribute__((section(".data")));
void func_001A2B80(void *arg0, void *arg1)
{
  f32 temp_f0;
  temp_f0 = func_001A0960(arg0 + 0x34, (s32) (&D_002C1A70));
  *((f32 *) (((char *) arg1) + 0)) = (f32) (temp_f0 - ((*((f32 *) (((char *) arg0) + 0x34))) * (*((f32 *) (((char *) (&D_002C1A70)) + 0)))));
  *((f32 *) (((char *) arg1) + 0x10)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x38)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 0))));
  *((f32 *) (((char *) arg1) + 0x20)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x3C)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 0))));
  *((f32 *) (((char *) arg1) + 0x30)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x40)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 0))));
  *((f32 *) (((char *) arg1) + 4)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x34)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 4))));
  *((f32 *) (((char *) arg1) + 0x14)) = (f32) (temp_f0 - ((*((f32 *) (((char *) arg0) + 0x38))) * (*((f32 *) (((char *) (&D_002C1A70)) + 4)))));
  *((f32 *) (((char *) arg1) + 0x24)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x3C)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 4))));
  *((f32 *) (((char *) arg1) + 0x34)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x40)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 4))));
  *((f32 *) (((char *) arg1) + 8)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x34)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 8))));
  *((f32 *) (((char *) arg1) + 0x18)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x38)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 8))));
  *((f32 *) (((char *) arg1) + 0x28)) = (f32) (temp_f0 - ((*((f32 *) (((char *) arg0) + 0x3C))) * (*((f32 *) (((char *) (&D_002C1A70)) + 8)))));
  *((f32 *) (((char *) arg1) + 0x38)) = (f32) ((-(*((f32 *) (((char *) arg0) + 0x40)))) * (*((f32 *) (((char *) (&D_002C1A70)) + 8))));
  *((f32 *) (((char *) arg1) + 0x3C)) = temp_f0;
  *((s32 *) (((char *) arg1) + 0xC)) = 0;
 do { *((s32 *) (((char *) arg1) + 0x1C)) = 0; } while (0);
  *((s32 *) (((char *) arg1) + 0x2C)) = 0;
}
}
