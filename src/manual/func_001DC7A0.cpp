struct R { float x0, x4, x8, xC, x10, x14; char p[0x3C - 0x18]; float x3C; };
struct G { char p[6]; unsigned char x6; char q[9]; };
struct U { char p[0x40]; G g[2]; char q[4]; unsigned char x64[2]; unsigned char x66[2]; };
struct M { float a[0x8D]; };
struct T { char p[0x40]; M m; float x274[0x2F8]; float xE54[4]; };
extern float D_00351B24, D_00351B28;
extern "C" void func_001DC7A0(T *t, R *r, U *u, int i) { float w = r->x14; if (w != 0.0f) r->x10 = -t->xE54[i] * 0.5f / w;
 M *mm = &t->m; float *g = &mm->a[i]; r->xC = t->x274[i] - *g + r->x10; float h = r->x10; float k = D_00351B24;
 float c = u->x64[i] * k; float d = h - *g; if (*g < c) c = *g; float e = d + c; r->x4 = e;
 float m = u->g[i].x6 * k; if (*g < m + c) r->x0 = e; else r->x0 = d + *g - m;
 float lim = r->x3C / w; float v = h + u->x66[i] * D_00351B28; r->x8 = v; if (lim < v) r->x8 = lim; }

