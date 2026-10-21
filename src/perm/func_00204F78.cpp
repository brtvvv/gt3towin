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
void func_00204F78(void *arg0)
{
  char *new_var;
  arg0++;
  arg0--;
  new_var = ((char *) arg0) + 8;
  *((s32 *) new_var) = 0;
 do { *((s32 *) (((char *) arg0) + 4)) = 0; } while (0);
  *((s32 *) (((char *) arg0) + 0)) = 0;
}
}
