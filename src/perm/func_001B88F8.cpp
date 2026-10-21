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
void func_001CA428(s32, s32);
void func_001B88F8(void *arg0, s32 arg1)
{
  s32 temp_a0;
  s32 *new_var;
  new_var = (s32 *) (((char *) (arg0 + ((*((s32 *) (((char *) arg0) + 0xAE4))) * 4))) + 0xAF0);
  temp_a0 = *new_var;
  if (temp_a0 != 0)
  {
    func_001CA428(temp_a0, arg1);
  }
}
}
