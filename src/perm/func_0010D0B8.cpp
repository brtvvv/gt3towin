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
f32 func_0010D0B8(void *arg0)
{
  s32 temp_s0;
  int new_var;
  new_var = 1;
  temp_s0 = (*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[new_var + new_var].f(((char *) (*((void **) (((char *) arg0) + 0x100)))) + (*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[new_var + new_var].d);
  return ((f32) (temp_s0 - ((*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[0 + new_var].f(((char *) (*((void **) (((char *) arg0) + 0x100)))) + (*((VTE **) (((char *) (*((void **) (((char *) arg0) + 0x100)))) + 0x14)))[0 + new_var].d) + new_var))) * ((*((f32 *) (((char *) arg0) + 0x114))) + (*((f32 *) (((char *) arg0) + 0x110))));
}
}
