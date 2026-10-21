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
extern s32 D_00315368 __attribute__((section(".data")));
void *func_00129678(void *arg0, s64 arg1, s64 arg2)
{
  *((s32 **) (((char *) arg0) + 0x30)) = &D_00315368;
  *((s64 *) (((char *) arg0) - -0)) = arg2;
  *((s64 *) (((char *) arg0) + 8)) = arg1;
  *((f32 *) (((char *) arg0) + 0x20)) = 1.0f;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  *((s32 *) (((char *) arg0) + 0x14)) = 0;
  *((s32 *) (((char *) arg0) + 0x18)) = 0;
  *((s32 *) (((char *) arg0) + 0x1C)) = 0;
  *((s32 *) (((char *) arg0) + 0x24)) = 0;
  *((s32 *) (((char *) arg0) + 0x28)) = 0;
  *((s8 *) (((char *) arg0) + 0x2C)) = 0;
  return arg0;
}
}
