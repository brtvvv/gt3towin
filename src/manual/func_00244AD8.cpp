struct L;
struct E { L *x0; E *x4; E *x8; char p[8]; int x14; char q[8]; int x20; };
struct L { E *first; E *last; };
struct T { char p[0xA0C]; L l; char q[0xA1C - 0xA14]; int xA1C; char r[8]; int xA28; };
extern "C" void func_00244A68(T *); extern "C" void func_00244FD0(T *, int); extern "C" E *func_00244F10(T *, int); extern "C" void func_00244AA8(T *);
extern "C" int func_00244AD8(T *t, int a, int c) { if (!a) return -1; int lk = t->xA28; if (!lk) func_00244A68(t); if (t->xA1C) { func_00244FD0(t, t->xA1C); t->xA1C = 0; } E *e = func_00244F10(t, a); if (e) { L *l = &t->l; e->x4 = 0; e->x20 = c; e->x8 = l->first; if (l->first) l->first->x4 = e; else l->last = e; l->first = e; e->x0 = l; } if (!lk) func_00244AA8(t); if (e) return e->x14; return -1; }

