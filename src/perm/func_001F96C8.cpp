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
void func_001936D0(void);
s32 func_001F74C0(s32);
s32 func_001F95B8(s32);
s32 func_001F98A0(s32, s32);
s32 func_001FAB40(s32, s32);
void func_001F96C8(void *arg0, s32 arg1)
{
  f32 temp_f0;
  s32 var_v0;
  int new_var;
  s32 var_v1;
  s8 *var_v0_2;
  *((s8 *) (((char *) arg0) + 0x80)) = 0;
  temp_f0 = *((f32 *) (((char *) (*((void **) (((char *) arg0) + 4)))) + 0xE08));
  *((f32 *) (((char *) arg0) + 0x90)) = (*((f32 *) (((char *) arg0) + 0x8C)) = temp_f0);
  if (arg1 == (-1))
  {
    var_v0 = func_001F95B8((s32) arg0);
  }
  else
  {
    var_v0 = func_001FAB40(*((s32 *) (((char *) arg0) + 8)), arg1);
  }
  func_001F98A0((s32) arg0, func_001FAB40(*((s32 *) (((char *) arg0) + 8)), var_v0));
  *((s8 *) (((char *) arg0) + 0x85)) = 0;
  *((s16 *) (((char *) arg0) + 0x88)) = 0;
  *((s8 *) (((char *) arg0) + 0x98)) = 0;
  *((s8 *) (((char *) arg0) + 0x99)) = 0;
  func_001936D0();
  var_v1 = 7;
  var_v0_2 = arg0 + 0xBB;
  do
  {
    *var_v0_2 = 0;
    var_v1 -= 1 & 0xFFFF;
    var_v0_2 -= 1;
  }
  while (var_v1 >= 0);
  new_var = 0;
  *((s32 *) (((char *) arg0) + 0xB0)) = new_var;
  *((s16 *) (((char *) arg0) + 0x9A)) = 0;
  func_001F74C0((s32) arg0);
}
}
