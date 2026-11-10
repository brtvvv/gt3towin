struct E { int x0; float x4, x8, xC; char p[0x84]; float x94, x98; };
struct T { char p[0x10]; int x10; };
extern E D_002C1A80; extern E **D_00353B0C;
extern "C" void func_001A3008(T *t) { E *d = &D_002C1A80; int n = t->x10 + 1; for (int i = 0; i < n; i++) { E *e = D_00353B0C[i]; e->x4 = d->x4; e->x8 = d->x8; e->xC = d->xC; e->x94 = d->x94; e->x98 = 1.0f / d->x94; } }

