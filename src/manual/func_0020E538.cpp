struct X; struct E { char p[0x18]; X *x18; };
struct T { char p[8]; E **x8; };
extern "C" float func_001EC340(X *, float); extern "C" float func_001EC3A0(X *, float); extern "C" float func_001EC3D0(X *, float);
extern "C" float func_0020E538(T *t, int a, int b) { X *x = t->x8[a]->x18, *y = t->x8[b]->x18; float dx = func_001EC340(x, 0) - func_001EC340(y, 0); float dy = func_001EC3A0(x, 0) - func_001EC3A0(y, 0); float dz = func_001EC3D0(x, 0) - func_001EC3D0(y, 0); return dx * dx + dy * dy + dz * dz; }

