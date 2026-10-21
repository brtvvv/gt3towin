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
s32 func_0028E8E0(void);
s32 func_0028E928(void);
void *func_0028A268(void *arg0)
{
  void *temp_s1;
  func_0028E8E0();
  temp_s1 = *((void **) (((char *) arg0) + 0xC));
  if (!(temp_s1 != 0))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0;
  }
  else
  {
    *((s32 *) (((char *) arg0) + 4)) = 1;
    *((void **) (((char *) arg0) + 0xC)) = (void *) (*((void **) (((char *) temp_s1) + 0x3C)));
  }
  func_0028E928();
  return temp_s1;
}
}
