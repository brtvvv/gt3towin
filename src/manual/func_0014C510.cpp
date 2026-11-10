struct R { char p[8]; union { int i; float f; } x8; char q[0x48]; int x54; };
extern "C" R *func_0014CAF8(int); extern "C" void func_0023CA88(char *, float); extern "C" void func_0023C9B0(char *, int);
extern "C" void func_0014C510(int a, char *buf) { R *r = func_0014CAF8(a); if (!r) return; if (r->x54 == 0x11) func_0023CA88(buf, r->x8.f); else func_0023C9B0(buf, r->x8.i); }

