struct V { virtual void f0(); virtual int f1(); };
extern "C" char *func_0014F988(void *); extern "C" V *func_0014BCF8(char *);
extern "C" int func_0014F9A8(void *s) { char *p = func_0014F988(s); if (p) return func_0014BCF8(p)->f1(); return -1; }

