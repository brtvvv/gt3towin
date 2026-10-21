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
void func_0010B548(void *arg0)
{
  void *temp_v0;
  ;
  if ((*((s32 *) (((char *) arg0) + 0x3944))) == 0)
  {
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B20)))) + 0xAC)) = 1;
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B1C)))) + 0xAC)) = 0;
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B28)))) + 0xAC)) = 0;
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B24)))) + 0xAC)) = 1;
    return;
  }
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B20)))) + 0xAC)) = 0;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B1C)))) + 0xAC)) = 1;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B28)))) + 0xAC)) = 1;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x3B24)))) + 0xAC)) = 0;
}
}
