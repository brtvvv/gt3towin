struct V { float x, y, z; void set(float a, float b, float c) { x = a; y = b; z = c; } };
struct O { char p[0x20]; V a, b; };
struct T { char p[0x5C]; unsigned x5C; };
extern char D_00337060[];
extern "C" void func_001BC578(O *, char *);
extern "C" void func_001C3A20(T *t, O *o) { switch (t->x5C) { case 0: o->a.set(0, 0, 0); o->b.set(0, 0, 0); break; case 1: o->a.set(0, 0, 0); o->b.set(0, 0, -448.0f); break; case 2: o->a.set(0, 0, 0); o->b.set(0, 0, 448.0f); break; case 3: o->a.set(0, 0, -640.0f); o->b.set(0, 0, 0); break; case 4: o->a.set(0, 0, 640.0f); o->b.set(0, 0, 0); break; } func_001BC578(o, D_00337060); }

