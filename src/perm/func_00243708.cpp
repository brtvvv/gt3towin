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
s32 func_002439C8(void);
void func_00243708(void *arg0)
{
  int new_var;
  if ((*((s32 *) (((char *) arg0) + 0xC))) == 2)
  {
    func_002439C8();
  }
  *((s8 *) (((char *) arg0) + 0x18)) = 0;
  if (1)
  {
    *((s32 *) (((char *) arg0) + 8)) = (new_var = 0);
 do { } while (0);
    *((s32 *) (((char *) arg0) + 0xC)) = new_var;
  }
  *((s32 *) (((char *) arg0) + 0x14)) = new_var;
}
}
