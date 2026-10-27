struct V { virtual void f0(); virtual int f1(); };
extern "C" char *func_0014ADF8(void *); extern "C" V *func_0014BCF8(char *);
extern "C" int func_0014AE68(void *s) { char *p = func_0014ADF8(s); if (!p) return -1; return func_0014BCF8(p)->f1(); }

