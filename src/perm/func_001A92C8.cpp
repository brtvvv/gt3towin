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
s32 func_001A9260(s32, s32, f32, f32, f32, f32, f32);
s32 func_00252500(s32);
s32 func_00252790(s32);
s32 func_00256908(s32, s32, s32);
void func_001A92C8(void *arg0, f32 fparg0, f32 fparg1)
{
  s32 sp[4];
  f32 temp_f23;
  f32 temp_f24;
  f32 temp_f25;
  f32 temp_f26;
  f32 temp_f27;
  f32 temp_f28;
  s32 var_s0;
  s32 var_s1;
  s32 var_s3;
  s32 var_s4;
  var_s4 = 0;
  var_s1 = 0x65;
  var_s0 = arg0 + 0xE0;
  var_s3 = arg0 + 0xD0;
  temp_f28 = 1.0f - (*((f32 *) (((char *) arg0) + 0xAB4)));
  temp_f27 = 1.0f - (*((f32 *) (((char *) arg0) + 0xAC8)));
  temp_f26 = 1.0f - (*((f32 *) (((char *) arg0) + 0xAC0)));
  temp_f25 = 1.0f - (*((f32 *) (((char *) arg0) + 0xABC)));
  temp_f24 = 1.0f - (*((f32 *) (((char *) arg0) + 0xACC)));
  temp_f23 = 1.0f - (*((f32 *) (((char *) arg0) + 0xAC4)));
  do
  {
    if ((((s32) (*((s32 *) (((char *) arg0) + 0x10)))) >> var_s4) & 1)
    {
      if (var_s4)
      {
        func_00252500(var_s1);
        func_00256908(var_s1, 0xD, var_s3);
        func_001A9260((s32) sp, var_s0, fparg0, temp_f27, fparg1, temp_f24, 1.0f);
        func_00256908(var_s1, 0, (s32) sp);
        func_001A9260((s32) sp, var_s0 + 0x10, fparg0, temp_f28, fparg1, temp_f25, 1.0f);
        func_00256908(var_s1, 1, (s32) sp);
        func_001A9260((s32) sp, var_s0 + 0x20, fparg0, temp_f26, fparg1, temp_f23, 1.0f);
        func_00256908(var_s1, 4, (s32) sp);
      }
      else
      {
        func_00252500(var_s1);
        func_00256908(var_s1, 0xD, var_s3);
        func_001A9260((s32) sp, var_s0, fparg0, temp_f27, fparg1, temp_f24, 1.0f);
        func_00256908(var_s1, 0, (s32) sp);
        func_001A9260((s32) sp, var_s0 + 0x10, fparg0, temp_f28, fparg1, temp_f25, 1.0f);
        func_00256908(var_s1, 1, (s32) sp);
        func_001A9260((s32) sp, var_s0 + 0x20, fparg0, temp_f26, fparg1, temp_f23, 1.0f);
        func_00256908(var_s1, 4, (s32) sp);
      }
    }
    else
    {
 do { } while (0);
      func_00252790(var_s1);
    }
    var_s4 = var_s4 + 1;
    var_s0 += 0x80;
    var_s3 += 0x80;
    var_s1 += 1;
  }
  while (var_s4 < 4);
}
}
