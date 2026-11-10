struct T { unsigned n; unsigned short *e[1]; };
extern "C" void func_00226E10(unsigned short **, unsigned, int); extern "C" void func_00226E40(unsigned short *, int); extern "C" void func_00226F98(unsigned short *, int); extern "C" void func_00227140(unsigned short *, int); extern "C" void func_002273F8(unsigned short *, int);
extern "C" void func_00227598(T *t, int a) { func_00226E10(t->e, t->n, a); for (unsigned i = 0; i < t->n; i++) { switch (*t->e[i]) { case 1: case 2: case 3: case 4: if (t->e[i]) func_00226E40(t->e[i], a); break; case 5: if (t->e[i]) func_00226F98(t->e[i], a); break; case 6: if (t->e[i]) func_00227140(t->e[i], a); break; case 7: if (t->e[i]) func_002273F8(t->e[i], a); break; } } }


