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
typedef s32 (*VFNPTR)();
typedef struct VTE
{
  s16 d;
  s16 i;
  VFNPTR f;
} VTE;
f32 func_0010D010(void *arg0)
{
  f32 temp_f2;
  temp_f2 = *((f32 *) (((char *) arg0) + 0x110));
  return (((*((f32 *) (((char *) arg0) + 0x114))) + (*((f32 *) (((char *) arg0) + 0x110)))) * ((f32) (*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[1 + 1].f(((char *) (*((void **) (((char *) arg0) + 0x100)))) + (*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[1 + 1].d))) - (*((f32 *) (((char *) arg0) + 0x110)));
}
}
