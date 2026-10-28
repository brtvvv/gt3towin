struct E { unsigned char t, c; };
struct Q { int a; unsigned n; E e[512]; };
extern int D_00309838[], D_004AF060[];
extern Q D_004AF068;
extern "C" void func_00286ED0(int);
extern "C" int func_00287E70(unsigned c) { if (c >= 0x80) return -1; if (!D_00309838[0]) return -1; Q *q = &D_004AF068; int i = q->n & 0x1FF; q->n = i + 1; q->e[i].t = 1; q->e[i].c = c; func_00286ED0(D_004AF060[0]); return c; }
