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
s32 func_00283CB8(s32, s32, s32);
s32 func_00283D20(s32, s32, s32);
s32 func_00283DA0(s32, s32, s32);
void func_00283E08(s32);
void func_00282108(void *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  void *new_var;
  *((s32 *) (((char *) arg0) + 0x54)) = arg3;
  new_var = arg0;
  *((s16 *) (((char *) arg0) + 0xC)) = arg1;
  *((s16 *) (((char *) arg0) + 0xE)) = arg2;
  *((s32 (**)(s32, s32, s32)) (((char *) arg0) + 0x20)) = func_00283CB8;
  *((s32 (**)(s32, s32, s32)) (((char *) arg0) + 0x24)) = func_00283D20;
  *((s32 (**)(s32, s32, s32)) (((char *) arg0) + 0x28)) = func_00283DA0;
  *((void (**)(s32)) (((char *) arg0) + 0x2C)) = func_00283E08;
 do { *((s32 *) (((char *) arg0) + 0)) = 0; *((s32 *) (((char *) arg0) + 4)) = 0; *((s32 *) (((char *) arg0) + 8)) = 0; *((s32 *) (((char *) arg0) + 0x10)) = 0; *((s32 *) (((char *) arg0) + 0x18)) = 0; } while (0);
  *((void **) (((char *) new_var) + 0x1C)) = new_var;
}
}
