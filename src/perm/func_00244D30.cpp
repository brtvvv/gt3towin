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
s32 func_00244FD0(s32, s32);
void func_00245060(s32);
s32 func_002530C8(s32);
s32 func_00253198(s32);
void func_00244D30(void *arg0)
{
  s32 *var_s1;
  s32 temp_a1;
  s32 temp_s0;
  if ((*((s32 *) (((char *) arg0) + 0xA28))) != 0)
  {
    temp_a1 = *((s32 *) (((char *) arg0) + 0xA1C));
    if (temp_a1 != 0)
    {
      func_00244FD0((s32) arg0, temp_a1);
      *((s32 *) (((char *) arg0) + 0xA1C)) = 0;
    }
    var_s1 = 0;
    if ((*((void **) (((char *) arg0) + 0xA14))) != 0)
    {
      do
      {
        if (var_s1 != 0)
        {
          *var_s1 = 0;
        }
        var_s1 = *((s32 **) (((char *) (*((void **) (((char *) arg0) + 0xA14)))) + 0x1C));
        func_00245060((s32) arg0);
      }
      while ((*((void **) (((char *) arg0) + 0xA14))) != 0);
      if ((*((s32 *) (((char *) arg0) + 0xA2C))) != 0)
      {
        temp_s0 = func_002530C8(1);
        func_00253198(0x10000);
        func_002530C8(temp_s0);
      }
    }
  }
}
}
