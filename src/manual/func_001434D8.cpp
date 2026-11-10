struct S { char p[0x10]; unsigned x10; char q[0x2C]; };
extern "C" void func_00143230(int, char *); extern "C" int func_00240AC8(int, char *, S *, int, int); extern "C" int func_00241AB8(int);
extern "C" int func_001434D8(int a, int b) { char n[0x50]; S s; func_00143230(a, n); if (func_00240AC8(b, n, &s, 0, 1)) return -1; if (func_00241AB8(b) != 1) return -1; return (s.x10 + 0x3FF) >> 10; }

