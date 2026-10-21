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
s32 func_00232658(s32, s32, s64);
s64 func_00239690(void *arg0, s32 arg1)
{
  char *new_var;
  new_var = ((char *) ((*((s32 *) (((char *) arg0) + 0x18))) + (arg1 * 8))) + 0x10;
  return *((s64 *) (((char *) func_00232658((s32) arg0, 5, *((s64 *) (((char *) func_00232658((s32) arg0, 0x1F, *((s64 *) new_var))) + 0x38)))) + 0x18));
}
}
