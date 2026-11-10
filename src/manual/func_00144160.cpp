struct B { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual int g(); };
struct T : B { char q[0x34 - 0xC]; char x34[0x34]; char x68[0x5C - 0x68 + 0x100]; };
struct TT { char p[0x5C]; int x5C; char q[0x168 - 0x60]; char x168; char r[0x23]; char x18C; char s[0x3F]; char x1CC; char u[0x3F]; char x20C; };
extern char D_003530B8[], D_0031CEC8[];
extern "C" char *func_0027FDBC(char *, char *); extern "C" char *func_0027F9CC(char *, char *); extern "C" int func_00240F88(int, char *, char *, int, int); extern "C" int func_00241B50(int); extern "C" void func_00142E80(int); extern "C" void func_00143FF8(T *);
extern "C" int func_00144160(T *t, int h) { char buf[0x50]; char *b = buf + 1; buf[0] = '/'; func_0027FDBC(b, (char *)t + 0x34); func_0027F9CC(b, D_003530B8); func_0027F9CC(b, D_0031CEC8); if (func_00240F88(h, buf, (char *)t + 0x68, 0, 0x1C4)) return 0; if (func_00241B50(h) < 0x1C4) return 0; TT *u = (TT *)t; u->x168 = 0; u->x18C = 0; u->x1CC = 0; u->x20C = 0; func_00142E80(t->g()); func_00143FF8(t); u->x5C = 1; return 1; }

