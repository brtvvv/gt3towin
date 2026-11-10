struct R { char p[0x14A2]; unsigned char x14A2; };
extern "C" R *func_001F3A90(void *, int); extern "C" void func_001F2AE0(void *, R *, int);
extern "C" void func_001F2D78(void *t) { R *r = func_001F3A90(t, 0); unsigned char f = r->x14A2; if (f & 2) func_001F2AE0(t, r, 0); else if (f & 1) func_001F2AE0(t, r, 1); }

