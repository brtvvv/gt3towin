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
void func_001D8840(s32, s32, s32, s32);
void func_001D3E48(void *arg0)
{
  void *new_var;
  s32 *new_var2;
  new_var = arg0;
  new_var2 = &(*((s32 *) (((char *) (arg0 + (((*((s32 *) (((char *) new_var) + 0x204))) * 4) + ((*((s32 *) (((char *) arg0) + 0x208))) * 8)))) + 0x20C)));
  func_001D8840((s32) arg0, *new_var2, (unsigned int) 0, 0);
}
}
