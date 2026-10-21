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
s32 func_00175750(s32, s32, s32);
void func_00176E78(s32 arg0, s32 arg1, s32 arg2)
{
 do { func_00175750(arg0, arg1, arg2); *((s32 *) (((char *) arg0) + 0x950)) = 0; *((f32 *) (((char *) arg0) + 0x94C)) = 20.0f; } while (0);
  *((f32 *) (((char *) arg0) + 0x944)) = 20.0f;
}
}
