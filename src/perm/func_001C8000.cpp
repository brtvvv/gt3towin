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
void func_001C8000(void *arg0)
{
  void *new_var;
  new_var = arg0 + 0x818;
  if ((*((s32 *) (((char *) arg0) + 0x818))) != (*((s32 *) (((char *) arg0) + 0x800))))
  {
 do { (*((VTE **) (((char *) new_var) + 0x14)))[3 + 1].f(((char *) new_var) + (*((VTE **) (((char *) new_var) + 0x14)))[3 + 1].d, -1); } while (0);
  }
}
}
