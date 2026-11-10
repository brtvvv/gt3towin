struct T { char p[0xA4]; float xA4; char q[0x120 - 0xA8]; T *x120; char r[0x14C - 0x124]; int x14C; };
extern float D_00351990;
extern "C" void func_00253458(int);
extern "C" void func_001B5620(T *t) { t->x14C = 1; float v = 1.0f; float d = D_00351990; int i = 24; do { T *o = t->x120; t->xA4 = v; if (o) o->xA4 = v; v -= d; i--; if (v < d) v = 1.0f; func_00253458(1); } while (i >= 0); T *o = t->x120; t->xA4 = 1.0f; if (o) o->xA4 = 1.0f; t->x14C = 0; }

