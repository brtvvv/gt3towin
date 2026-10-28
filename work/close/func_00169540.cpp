struct X { char p[0x540]; char *q; };
struct W { char p[0x307C8]; X x; };
#define H(o) (*(unsigned short *)(func_00235998(s) + (o)))
extern "C" W *func_00219680(void);
extern "C" char *func_00235998(char *);
extern "C" int func_00169540(void) { X *x = &func_00219680()->x; char *q = x->q; if (!q) return 0; char *s = q + 0x10; int a = H(0x50); if (a != H(0x52)) return 1; int c = H(0x56); if (c == H(0x58)) return 0; return 1; }
