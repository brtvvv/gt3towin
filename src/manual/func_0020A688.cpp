extern "C" int func_00201530(int, int, int, int *, int, int, int); extern "C" void func_0026D350(char *); extern "C" float func_0026D3B0(char *); extern "C" void func_00201418(int, int);
extern "C" void func_0020A688(char *t, int a, int b, int c) { int buf[0x10]; int k = 0; int n = func_00201530(c, a, b, buf, 0x10, 9, 2); if (n >= 2) { char *r = t + 0x961C; func_0026D350(r); k = (int)(n * func_0026D3B0(r)) % n; if (k >= n) k = 0; else k = buf[k]; } func_00201418(c, k); }

