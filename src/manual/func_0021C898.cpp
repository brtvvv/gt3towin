struct Bn { unsigned char *p; unsigned n; };
extern "C" Bn *func_0021C898(Bn *a, Bn *b) { unsigned c = 0; for (unsigned i = 0; i < a->n; i++) { unsigned v = c + a->p[i] + b->p[i]; a->p[i] = v; c = v >> 8; } return a; }

