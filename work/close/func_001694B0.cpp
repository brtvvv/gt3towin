struct D { char p[0x21]; unsigned char a, b, c0, c, d; };
extern "C" D *func_00235998(void *);
struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
extern "C" G *func_00219680(void);
extern "C" int func_001694B0(void) {
    Sub *s = &func_00219680()->s;
    if (!s->q) return 0;
    void *q = s->q + 0x10;
    int r = 1;
    int x = func_00235998(q)->a;
    if (x != func_00235998(q)->b) return r;
    x = func_00235998(q)->c;
    if (x == func_00235998(q)->d) r = 0;
    return r;
}
