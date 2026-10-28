struct X { char p[0x10]; unsigned char b; };
extern "C" X *func_00235DE0(void *), *func_00235E10(void *);
extern "C" int func_00237680(void *s) { int n = 0; int t = func_00235DE0(s)->b; if (t < 13 || t > 24) n++; t = func_00235E10(s)->b; if (t < 13 || t > 24) n++; if (n) return 0; return 1; }

