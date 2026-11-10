struct S { int x0, x4, x8, xC, x10, x14, x18, x1C, x20, x24, x28, x2C, x30, x34, x38; S() : x0(0), x4(0), x8(0), xC(0), x10(0), x14(0), x18(0), x1C(0), x20(0), x24(0), x28(0), x2C(0), x30(0), x34(0), x38(0) {} };
struct G { char p[0x44]; char x44[0x40]; char x84[0x48]; int xCC; };
struct H { char p[0x24]; int x24; };
#define GG ({ G *_g = (G *)(func_00219680() + 0x307C8); _g; })
#define HH ({ H *_h = (H *)(func_00219680() + 0x2FF38); _h; })
extern "C" char *func_00219680(); extern "C" int func_00219F60(char *); extern "C" void func_0021A860(char *, int); extern "C" void func_001303F8(S *, int);
extern "C" void func_00100818() { GG->xCC = 7; int r = func_00219F60(func_00219680()); func_0021A860(func_00219680(), r); S s; int f = HH->x24 ^ 1; char *a = GG->x84; char *b = GG->x44; s.x18 = f; s.x4 = (int)a; s.x8 = (int)b; s.x24 = 3; s.x0 = 0; s.x10 = 0; s.x14 = 0; s.x1C = 0; func_001303F8(&s, 1); }

