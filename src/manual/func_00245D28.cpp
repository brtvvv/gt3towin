struct S { int a, b, c, d; int pad[2]; int g18, g1C, g20, g24; int x28; char q[4]; int x30; };
extern "C" void func_00251CC8(int), func_00251E00(int, int, int, int), func_00251E50(int, int, int, int);
extern "C" void func_00245D28(S *s) { if (s->x28) { if (s->x30) func_00251E00(s->g18, s->g1C, s->g20, s->g24); else func_00251E00(0, 0, s->c, s->d); func_00251E50(s->a, s->b, s->c, s->d); } else func_00251CC8(0); }
