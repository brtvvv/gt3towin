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
s32 func_001CACC8(s32, s32, s32);
void func_001B8AD8(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  char *new_var;
  new_var = (char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xAE4))) * 4));
  *((s32 *) (((char *) arg0) + 0xB44)) = arg1;
  temp_a0 = *((s32 *) (new_var + 0xAF0));
  if (temp_a0 != 0)
  {
    func_001CACC8(temp_a0, arg1, arg2);
  }
}
}
