struct V3 { float x, y, z; }; struct V2 { float u, v; }; struct V4 { float x, y, z, w; };
struct T { char p[0x3C]; V2 *uv; V3 *p3; V4 *n; };
extern "C" float func_001A6B70(T *t, float *o, int i) { int j = (i + 1) & 3; V4 *n = t->n; V3 *a = &t->p3[i], *b = &t->p3[j]; float dx = b->x - a->x, dy = b->y - a->y; float s = -(a->x * n->x + a->y * n->y + a->z * n->z + n->w) / (dx * n->x + dy * n->y); V2 *u = &t->uv[i], *v = &t->uv[j]; float du = v->u - u->u, dv = v->v - u->v; o[0] = a->x + s * dx; o[1] = a->y + s * dy; o[2] = a->z; o[3] = u->u + s * du; o[4] = u->v + s * dv; return s; }

