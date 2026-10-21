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
void func_001CCCD8(void *arg0, s32 arg1)
{
  int new_var2;
  char *new_var;
  *((s32 *) (((char *) arg0) + 0x274)) = arg1;
 do { new_var = ((char *) arg0) + 0x26C; *((s32 *) (((char *) arg0) + (new_var2 = 0x270))) = 0; } while (0);
  *((s32 *) new_var) = 0;
}
}
