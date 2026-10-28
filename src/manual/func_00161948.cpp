struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern "C" G *func_00219680(void);
extern "C" int func_00236040(void *);
extern "C" int func_00161948(char *a) { Sub *s = &func_00219680()->s; if (!s->q) return 1; return func_00236040(a + 0xE50) != 0x23; }

