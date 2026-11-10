struct T { unsigned char *x0; unsigned x4; };
extern "C" T *func_0021C898(T *a, T *b) { unsigned c = 0; for (unsigned i = 0; i < a->x4; i++) { unsigned v = c + a->x0[i] + b->x0[i]; a->x0[i] = v; c = v >> 8; } return a; }

