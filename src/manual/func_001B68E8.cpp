struct SB { char p[0x1C]; virtual void f0(); };
struct L { int x0; };
struct B : SB { char q[0x100 - 0x20]; };
struct BL : B, L { };
struct U : BL { char r[0x118 - 0x104]; int x118; };
struct T { char p[0xB0]; char xB0[0xBC - 0xB0]; int xBC; char q[0xD0 - 0xC0]; int xD0; char r[0x228 - 0xD4]; int x228; };
extern "C" int func_0023D4B8(char *); extern "C" void func_001CAD40(T *, int); extern "C" char *func_00219680(); extern "C" int func_001BBF20(int, int); extern "C" int func_001BBF38(int, int); extern "C" L *func_0023D558(char *, int); extern "C" void func_0023CE18(char *, int); extern "C" void func_001B9960(int, char *);
extern "C" void func_001B68E8(T *t, int a) { if (!func_0023D4B8(t->xB0)) return; func_001CAD40(t, a); int g = *(int *)((char *)({ int *_g = (int *)(func_00219680() + 0x307C8); _g; }) + 0x53C); if (!g) return; if (!t->x228 && !func_001BBF20(a, t->xBC) && !func_001BBF38(a, t->xBC)) return; L *l = func_0023D558(t->xB0, t->xD0); U *u = dynamic_cast<U *>((SB *)static_cast<BL *>(l)); if (u) { char st[0x40]; func_0023CE18(st, u->x118); func_001B9960(g, st); } t->x228 = 0; }

