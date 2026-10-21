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
s32 func_0023DA20(s32, s32);
void func_0023E238(s32, s32);
void func_0026D5B8(s32);
void func_0027D2F8(s32);
void func_0023D880(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s32 var_s0;
  var_s0 = 0;
  var_a1 = 0;
  do
  {
    var_a1 = var_s0;
    func_0023DA20(arg0, var_a1);
    var_s0 += 1;
  }
  while (var_s0 < 8);
  func_0026D5B8(*((s32 *) (((char *) arg0) + 0x240)));
  func_0023E238(arg0, 2);
  if (arg1 & 1)
  {
    func_0027D2F8(arg0);
  }
}
}
