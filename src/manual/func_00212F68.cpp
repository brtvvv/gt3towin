struct T { char p[0xF0]; long xF0[12]; };
extern "C" void func_00212F68(T *t, long v, int pos) { for (int i = 11; i > pos; i--) t->xF0[i] = t->xF0[i - 1]; t->xF0[pos] = v; }

