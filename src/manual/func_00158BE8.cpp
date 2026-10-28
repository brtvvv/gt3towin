struct O { char p[0x14]; int a; char q[0xC]; int b; int h; int c; int d; };
extern "C" int func_00240048(int);
extern "C" int func_00240178(int);
extern "C" void func_00158BE8(O *o) { o->c = func_00240048(o->h) == 2; o->d = func_00240178(o->h); o->b = o->c; o->a = o->c ^ 1; }

