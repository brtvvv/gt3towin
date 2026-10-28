struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern "C" G *func_00219680(void);
extern "C" int func_00235F80(void *);
extern "C" int func_001695D0(void) { Sub *s = &func_00219680()->s; if (!s->q) return 0; void *q = s->q + 0x10; if (func_00235F80(q) == 0x32 || func_00235F80(q) == 0x35) return 0; return 1; }

