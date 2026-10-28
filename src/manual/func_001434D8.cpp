extern "C" void func_00143230(void *, char *);
extern "C" int func_00240AC8(void *, char *, char *, int, int), func_00241AB8(void *);
extern "C" int func_001434D8(void *a, void *h) { char buf[0x50]; char st[0x40]; func_00143230(a, buf); if (func_00240AC8(h, buf, st, 0, 1)) return -1; if (func_00241AB8(h) != 1) return -1; return (*(unsigned *)(st + 0x10) + 0x3FF) >> 10; }

