extern char D_00311670[];
extern "C" char *func_00219680(); extern "C" int func_00235400(char *); extern "C" void func_001C5E88(int);
struct V { char p[0x538]; char *x538; };
extern "C" char *func_0011BF90() { int v = func_00235400(({ V *_g = (V *)(func_00219680() + 0x307C8); _g; })->x538 + 0x10); if ((v >> 2) & 1) { func_001C5E88(4); return D_00311670; } return 0; }

