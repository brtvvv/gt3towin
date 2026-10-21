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
void func_001D5C78(s32, s32, s32);
s32 func_001D6AD0(void);
s32 func_001D9038(void);
s32 func_0027E260(s32, s32, s32, s32, s32, s32);
void func_001D5158(s32 arg0, void *arg1)
{
  char *new_var;
  s32 var_v0;
  void *temp_v0;
 do { } while (0);
  new_var = ((char *) arg1) + 0x1C;
  var_v0 = 0;
  if (arg1 != 0)
  {
    temp_v0 = *((void **) new_var);
    var_v0 = func_0027E260(*((s32 *) (((char *) temp_v0) + 4)), (s32) func_001D6AD0, 1, (s32) (arg1 + (*((s16 *) (((char *) temp_v0) + 0)))), (s32) func_001D9038, (s32) arg1);
  }
  if (var_v0 != 0)
  {
    func_001D5C78(arg0, var_v0, 0);
  }
}
}
