struct V { char p[0x540]; int x540; };
struct Q { char p[0x174]; int a; int b; };
extern "C" char *func_00219680(); extern "C" int func_00168210(char *);
extern "C" int func_001647F8(char *t, int v) { int r = 0; if (({ V *_g = (V *)(func_00219680() + 0x307C8); _g; })->x540) { Q *q = ({ Q *_q = (Q *)(t + 0xE50); __asm__("" : "+r"(_q)); _q; }); q->a = v; q->b = v; r = func_00168210(t + 0xE40); } return r; }

