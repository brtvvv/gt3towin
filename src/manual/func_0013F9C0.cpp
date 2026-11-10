struct G { char p[0xBC]; int xBC, xC0; };
struct R { char *s; int w, h, x, a, b; };
extern char D_0031B160[], D_0031B180[]; extern "C" int func_0013F3F8(); extern "C" char *func_00219680(); extern "C" int func_00218210(char *); extern "C" int func_00218230(char *); extern "C" int func_00218250(char *); extern "C" void func_00128C60(R *); extern "C" void func_00253458(int);
extern "C" int func_0013F9C0() { int b = 0, a = 0; int r = func_0013F3F8(); char *m = func_00219680() + 0x23510; if (func_00218210(m)) a = ((G *)func_00219680())->xBC == 0; if (func_00218230(m) || func_00218250(m)) b = ((G *)func_00219680())->xC0 == 0;
 if (a) { R q; q.s = D_0031B160; q.w = 0x280; q.h = 0x200; q.x = 0; q.a = 1; q.b = 1; func_00128C60(&q); func_00253458(2); ((G *)func_00219680())->xBC = 1; }
 if (b) { R q; q.s = D_0031B180; q.w = 0x280; q.h = 0x200; q.x = 0; q.a = 1; q.b = 1; func_00128C60(&q); func_00253458(2); ((G *)func_00219680())->xC0 = 1; } return r; }

