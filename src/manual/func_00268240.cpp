struct T { int x0; int x4[4]; int x14[1]; char p[0xBC - 0x18]; int xBC; };
extern "C" void func_00286EE0(int); extern "C" void func_00286EC0(int);
extern "C" int func_00268240(T *t, int i) { func_00286EE0(t->xBC); if (t->x14[i]) t->x14[i] = 0; int r = t->x4[i]; func_00286EC0(t->xBC); return r; }

