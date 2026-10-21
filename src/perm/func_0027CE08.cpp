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
extern void *D_004AEC50 __attribute__((section(".data")));
void func_0027CE08(s32 arg0, void *arg1)
{
  void *new_var;
  new_var = (void *) D_004AEC50;
  *((s32 *) (((char *) arg1) + 0xC)) = arg0;
  *((void **) (((char *) arg1) + 0x14)) = new_var;
  D_004AEC50 = arg1;
 do { *((s32 *) (((char *) arg1) + 8)) = arg0; *((s32 *) (((char *) arg1) + 4)) = 0; *((s32 *) (((char *) arg1) + 0)) = 0; } while (0);
  *((s32 *) (((char *) arg1) + 0x10)) = 0;
}
}
