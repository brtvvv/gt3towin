struct U { float x, y, z, vx, vy, vz; char p[0x3D4]; int k; };
struct V { char p[0x10]; float t; char q[0xF70]; U u; };
struct R { float p[3]; int k; float q[3]; int pad; };
struct G { char p[0xB7A8]; void *w; };
extern "C" void func_00190940(void *, R *);
extern "C" void func_001EF7F0(G *g, V *v) { U *u = &v->u; float t = v->t; R r; float x = u->x + u->vx * t; float y = u->y + u->vy * t; float z = u->z + u->vz * t; r.p[2] = -y; r.k = u->k; r.q[0] = x; r.p[0] = x; r.q[1] = y; r.q[2] = z; r.p[1] = z; func_00190940(g->w, &r); }
