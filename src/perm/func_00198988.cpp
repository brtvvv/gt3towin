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
void func_00198988(void *arg0, s32 arg1)
{
  s32 temp_v0;
  char *new_var;
  new_var = ((char *) (((((*((s32 *) (((char *) arg0) + 0x1C))) >= 8) ? (7) : (*((s32 *) (((char *) arg0) + 0x1C)))) * 4) + arg0)) + 0x24;
  ;
  *((s32 *) new_var) = arg1;
}
}
