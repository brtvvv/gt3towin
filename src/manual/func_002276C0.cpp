struct T { unsigned n; unsigned short *e[1]; };
extern "C" void func_00226E68(unsigned short *); extern "C" void func_00226FC0(unsigned short *); extern "C" void func_00227168(unsigned short *); extern "C" void func_00227420(unsigned short *);
extern "C" void func_002276C0(T *t) { for (unsigned i = 0; i < t->n; i++) { switch (*t->e[i]) { case 1: case 2: case 3: case 4: if (t->e[i]) func_00226E68(t->e[i]); break; case 5: if (t->e[i]) func_00226FC0(t->e[i]); break; case 6: if (t->e[i]) func_00227168(t->e[i]); break; case 7: if (t->e[i]) func_00227420(t->e[i]); break; } } }

