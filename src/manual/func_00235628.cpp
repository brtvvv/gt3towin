struct X { char p[0x10]; unsigned char b; };
extern "C" X *func_00235DE0(void *), *func_00235E10(void *);
extern "C" int func_00235628(void *s) { int n = 0; if (func_00235DE0(s)->b != 12) n++; if (func_00235E10(s)->b != 12) n++; if (n) return 0; return 1; }

