struct S8 { char d[8]; };
struct N { unsigned char x0; char p[7]; N *x8; };
struct H { int x0, x4; N *x8; int xC; };
extern char D_004ACC68[];
extern "C" void func_0027ED70(void *, int, int);
extern "C" int func_00270368(int k, S8 *out, int id) { char *base = D_004ACC68; if (out) func_0027ED70(out, 0, 8); for (N *n = ((N **)(base + k * 8))[2]; n; n = n->x8) { if (n->x0 == id) { if (out) { *out = *(S8 *)n; return 0; } } } return 1; }

