extern char D_00353978[];
struct V { float d[8]; };
extern "C" void func_0019B6F8(V *); extern "C" void func_00199268(char *, char *); extern "C" void func_001990F0(char *, V *, float, float);
extern "C" void func_001953A8(char *t) { V v; func_0019B6F8(&v); char *p = t + 0x3BC; *(int *)(p + 0x20) = 0x802BCC49; func_00199268(p, D_00353978); func_001990F0(p, &v, 3.0f, 0.0f); }

