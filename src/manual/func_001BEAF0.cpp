extern int D_002CA3B8[]; extern "C" void func_001CA2D8(void *); extern "C" int func_001CB100(void *, int);
struct S { char p[0x338]; int k; };
extern "C" void func_001BEAF0(S *s) { func_001CA2D8(s); func_001CB100(s, D_002CA3B8[s->k]); }

