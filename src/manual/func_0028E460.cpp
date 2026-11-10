extern char D_004B2B00[];
extern "C" int func_0028DC98(); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int); extern "C" int func_0028DD98(); extern "C" char *func_00280088(char *, char *, int);
struct S { int x0, x4; };
extern S D_004B2900[];
extern "C" int func_0028E460(int a, void *p, unsigned sz) { if (func_0028DC98() < 0) return 0xFFFF0000; if (sz >= 3) return 0xFFFEFFFE; S *s = D_004B2900; s->x0 = a; s->x4 = sz; if (func_00289DA8(D_004B2B00, 3, 0, s, 0x20, s, 0x20, 0, 0) < 0) return 0xFFFEFFFF; if (sz == 0) *(unsigned char *)p = *(unsigned char *)D_004B2900; else if (sz == 1) *(unsigned short *)p = *(unsigned short *)D_004B2900; else if (sz == 2) *(int *)p = *(int *)D_004B2900; else return 0xFFFEFFFE; return 0; }

