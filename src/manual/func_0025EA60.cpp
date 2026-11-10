struct G { int x0; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int *, int);
extern "C" int func_0025EA60(G *g) { int *b = (int *)(((int)__builtin_alloca(0x7F) + 0x3F) & -64); func_00286EE0(g->x0); func_0025C420(g, 0, 0, b, 0x40); return b[0]; }

