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
void func_001A30B8(void *arg0, s32 *arg1, s32 **arg2)
{
  s32 *temp_v0;
  temp_v0 = *arg1;
  if (arg2 != 0)
  {
    *arg2 = temp_v0;
  }
  else
  {
    *((s32 **) (((char *) arg0) + 8)) = temp_v0;
  }
 do { *arg1 = *((s32 **) (((char *) arg0) + 0xC)); } while (0);
  *((s32 **) (((char *) arg0) + 0xC)) = arg1;
}
}
