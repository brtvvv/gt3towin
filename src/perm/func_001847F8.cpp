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
void func_0017E5F8(s32);
void func_001847F8(s32 arg0)
{
  char *new_var;
  func_0017E5F8(arg0);
  new_var = (char *) arg0;
  *((s32 *) (new_var + 0x97C0)) = 1;
}
}
