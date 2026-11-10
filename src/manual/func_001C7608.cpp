extern "C" int func_001CD888(char *); extern "C" void func_001B38E8(char *, int, int); extern "C" void func_001B3930(char *, int, int);
extern "C" void func_001C7608(char *t, int a, int b, int c, int d) { char *m = t + 0x48C; int ok = !(func_001CD888(m) < 2); if (ok) { func_001B38E8(m, a, b); func_001B3930(m, c, d); *(int *)(t + 0x484) = b - a; } }

