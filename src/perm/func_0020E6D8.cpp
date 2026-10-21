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
void func_0020E6D8(void *arg0)
{
  s16 temp_v0;
  temp_v0 = (*((u16 *) (((char *) arg0) + 0xA))) + 1;
  *((u16 *) (((char *) arg0) + 0xA)) = (u16) ((*((u16 *) (((char *) arg0) + 0xA))) + 1);
  if (temp_v0 >= 0x7531)
  {
    *((u16 *) (((char *) arg0) + 0xA)) = 0x7530U;
  }
}
}
