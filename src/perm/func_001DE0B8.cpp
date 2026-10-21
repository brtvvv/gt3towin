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
void func_001DE0B8(s32 arg0)
{
  s32 var_v0;
  int new_var;
  void *var_a0;
  new_var = 0xFF;
  var_a0 = arg0 + 0x60;
  var_v0 = 3;
  do
  {
    *((s32 *) (((char *) var_a0) + 0x2C)) = 0;
    var_v0 -= 1;
    *((s8 *) (((char *) var_a0) + 0x29)) = new_var;
    *((s32 *) (((char *) var_a0) + 0x30)) = 0;
    *((f32 *) (((char *) var_a0) + 0x34)) = 1.0f;
    *((s32 *) (((char *) var_a0) + 0x38)) = 0;
    *((s32 *) (((char *) var_a0) + 0x6C)) = 0;
    *((s32 *) (((char *) var_a0) + 0x68)) = 0;
    *((s32 *) (((char *) var_a0) + 0x64)) = 0;
    *((s32 *) (((char *) var_a0) + 0x60)) = 0;
    *((s32 *) (((char *) var_a0) + 0x1C)) = 0;
    *((s32 *) (((char *) var_a0) + 0x70)) = 0;
    *((s32 *) (((char *) var_a0) + 0x74)) = 0;
    *((s32 *) (((char *) var_a0) + 0x98)) = 0;
    *((s32 *) (((char *) var_a0) + 0x9C)) = 0;
    var_a0 += 0xA4;
  }
  while (var_v0 >= 0);
}
}
