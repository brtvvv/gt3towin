struct X { char p[0x44]; float x44, x48, x4C, x50, x54; };
struct T { char p[0x54]; int x54; };
extern int D_003531A8[2];
extern "C" int func_0014F9F0(T *); extern "C" X *func_001C35A8(int, int, int);
extern "C" void func_0014FA30(T *t, float *x, float *y, float *w, float *h) { *x = *y = 0.0f; *w = *h = 1.0f; if (t->x54 < 0) return; X *r = func_001C35A8(func_0014F9F0(t), D_003531A8[t->x54], 0); if (!r) return; *x = r->x44; *y = r->x48; *w = r->x50; *h = r->x54; *x += *w * 0.5f; *y = 448.0f - (*y + *h * 0.5f); }

