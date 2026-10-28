struct O { char p[0x90]; float r; };
extern O **D_00353B0C;
struct S { char p[0x10]; float x, y, z; char q[0x28]; short i; };
extern "C" int func_0024D088(float *, float *);
extern "C" int func_001A2DF8(S *s) { float lo[4], hi[4]; float r = D_00353B0C[s->i]->r; lo[0] = s->x - r; lo[1] = s->y - r; lo[2] = s->z - r; hi[0] = s->x + r; hi[1] = s->y + r; hi[2] = s->z + r; return func_0024D088(lo, hi) != 0; }
