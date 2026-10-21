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
void func_0017BD98(void *arg0)
{
  VTE **new_var;
  char *new_var2;
  char *new_var3;
  new_var2 = (char *) arg0;
  new_var3 = (char *) (*((void **) (((char *) arg0) + 0x18)));
  (*new_var)[2 + 1].f = (*new_var)[2 + 1].f;
  new_var = &(*((VTE **) (((char *) (*((void **) (new_var2 + 0x18)))) + 0x1C)));
  (*new_var)[2 + 1].f(new_var3 + (*new_var)[2 + 1].d);
}
}
