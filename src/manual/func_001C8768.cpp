struct X { char p[0x40]; short h; };
extern "C" int func_001C82C0(void *), func_001C82F8(void *);
extern "C" X *func_001C8288(void *, int);
extern "C" int func_001C8768(void *s) { if (!func_001C82C0(s)) return 0; X *x = func_001C8288(s, func_001C82F8(s)); if (!x) return 0; return x->h == 1; }

