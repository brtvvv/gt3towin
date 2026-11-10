struct E { float x, y, z, w; };
struct G { E e[5]; };
struct T { char p[0x10]; float x10, x14, x18; };
extern G D_002C1B30[]; extern float D_00351864;
extern "C" float func_001A0960(void *, E *);
extern "C" int func_001A2708(T *t, int k, void *v) { int best = -1; float m = D_00351864; E *e = D_002C1B30[k].e; int i;
 for (i = 0; i < 5; i++, e++) { float d = -(func_001A0960(v, e) + e->w); if (d < m) { m = d; best = i; } }
 if (best < 0) return -1; E *b = &D_002C1B30[k].e[best]; t->x10 += m * b->x; t->x14 += m * b->y; t->x18 += m * b->z; return best; }

