extern char D_00311660[], D_00311670[];
extern "C" void *func_00219680(void);
extern "C" char *func_00219F60(void *);
extern "C" int func_00235400(void *);
extern "C" void func_001C5E88(int);
extern "C" char *func_0011BF28(void) { char *r = func_00219F60(func_00219680()); if (!r) { func_001C5E88(4); return D_00311660; } if ((func_00235400(r + 0x10) >> 2) & 1) { func_001C5E88(4); return D_00311670; } return 0; }

