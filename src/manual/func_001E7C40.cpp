struct T { char p[0x448]; float f; char q[0x490 - 0x44C]; short v; };
struct S { char p[0x1D6]; unsigned short n; char q[0xF84 - 0x1D8]; T t; };
extern float D_00351E10;
extern "C" void func_001E7C40(S *s) { T *t = &s->t; int v = (int)(t->f * 60.0f / D_00351E10); int m = s->n - 1; if (v < m) v = m; t->v = v; }

