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
s32 func_0024DDC8(s32);
s32 func_00253908(s32, f32);
s32 func_00255478(s32, s32);
extern s32 D_002E74C0 __attribute__((section(".data")));
s32 func_00220D48(void *arg0, s32 arg1)
{
  int new_var;
  switch (arg1)
  {
    case 2:
      func_00255478(4, 0);
      func_00255478(5, 1);
      new_var = 0x40;
      func_00253908(0x58, 1.0f);
      *((f32 *) (((char *) (&D_002E74C0)) + new_var)) = (f32) (*((f32 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) arg0) + 0x18)))) + 0x84)))) + 0x18)));
      func_0024DDC8((s32) (&D_002E74C0));

    case 1:
      return 1;

    default:
      return 0;

  }

}
}
