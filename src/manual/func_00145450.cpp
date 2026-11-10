extern "C" void func_001450C0(char *, int); extern "C" int func_00240AC8(int, char *, char *, int, int); extern "C" int func_00241AB8(int);
extern "C" int func_00145450(int a, signed char k) { char n[0x30]; char buf[0x400]; func_001450C0(n, k); int s = 0; int r; do { if (func_00240AC8(a, n, buf, 0, 16)) return -1; r = func_00241AB8(a); s += r; } while (r >= 16); return s; }

