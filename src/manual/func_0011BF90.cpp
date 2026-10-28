struct Sub { char p[0x538]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern char D_00311670[];
extern "C" G *func_00219680(void);
extern "C" int func_00235400(void *);
extern "C" void func_001C5E88(int);
extern "C" char *func_0011BF90(void) { Sub *s = &func_00219680()->s; if ((func_00235400(s->q + 0x10) >> 2) & 1) { func_001C5E88(4); return D_00311670; } return 0; }

