struct E { unsigned char k; char p[3]; };
struct S { char p[0x38]; E e[1]; };
struct P { unsigned char b0, b1; char p[2]; short h4; };
extern unsigned char D_00343068[];
extern "C" int func_00218810(int, int, int, int);
extern "C" void func_00211DB0(S *s, P *p, int a, int b, int c) { if (p->h4) return; int r = func_00218810(a, b, c, 0); if (r < 0) return; int k = D_00343068[s->e[r].k]; p->b0 |= 1; p->b1 = 2; p->h4 = (0x100 - k * 2) << 4; }
