struct T { unsigned n; unsigned short *e[1]; };
extern "C" void func_00226ED8(unsigned short *, float); extern "C" void func_00227060(unsigned short *, float); extern "C" void func_00227258(unsigned short *, float); extern "C" void func_00227490(unsigned short *, float);
extern "C" void func_002277C8(T *t, float dt) { for (unsigned i = 0; i < t->n; i++) { switch (*t->e[i]) { case 1: case 2: case 3: case 4: if (t->e[i]) func_00226ED8(t->e[i], dt); break; case 5: if (t->e[i]) func_00227060(t->e[i], dt); break; case 6: if (t->e[i]) func_00227258(t->e[i], dt); break; case 7: if (t->e[i]) func_00227490(t->e[i], dt); break; } } }


