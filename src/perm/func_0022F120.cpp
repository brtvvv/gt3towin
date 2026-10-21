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
s32 func_0022F120(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_v0;
  void *temp_v1;
  void *temp_v1_2;
  temp_v1 = *((void **) (((char *) arg0) + 0xC0));
  if ((*((s32 (**)(void *)) (((char *) temp_v1) + 0x2C)))(arg0 + (*((s16 *) (((char *) temp_v1) + 0x28)))) & arg1)
  {
    temp_v1_2 = *((void **) (((char *) arg0) + 0xC0));
    if ((*((s32 (**)(void *)) (((char *) temp_v1_2) + 0x34)))(arg0 + (*((s16 *) (((char *) temp_v1_2) + 0x30)))) & arg1)
    {
      *((s32 *) (((char *) arg0) + 0xBC)) = (*((s32 *) (((char *) arg0) + 0xB8)) = 0);
      return 1;
    }
    temp_v0 = (*((s32 *) (((char *) arg0) + 0xBC))) + 1;
    *((s32 *) (((char *) arg0) + 0xBC)) = temp_v0;
    if ((*((s32 *) (((char *) arg0) + 0xB8))) == 0)
    {
      if (arg2 < temp_v0)
      {
        *((s32 *) (((char *) arg0) + 0xBC)) = 0;
        *((s32 *) (((char *) arg0) + 0xB8)) = 1;
        return 1;
      }
      goto block_8;
    }
    if (arg3 < temp_v0)
    {
      *((s32 *) (((char *) arg0) + 0xBC)) = 0;
      return 1;
    }
    block_8:
    return 0;

  }
  return 0;
}
}
