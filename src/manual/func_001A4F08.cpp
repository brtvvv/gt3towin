struct E { char d[0x80]; };
struct T { int x0; T *x4; char p[0x1C]; unsigned x24; E *x28; unsigned x2C; E *x30; int x34; int x38; };
extern "C" void func_001A4E58(E *, int);
extern "C" void func_001A4F08(T *t) { unsigned i; int d = (char *)t - (char *)t->x4; t->x28 = (E *)((char *)t->x28 + d); t->x30 = (E *)((char *)t->x30 + d); t->x38 += d; t->x4 = t; for (i = 0; i < t->x24; i++) func_001A4E58(&t->x28[i], d); for (i = 0; i < t->x2C; i++) func_001A4E58(&t->x30[i], d); }

