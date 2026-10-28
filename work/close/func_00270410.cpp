struct P8 { int a, b; };
struct E { P8 ***p; int x; };
struct G { int a, b, c; E e[1]; };
extern G D_004ACC68[];
extern "C" int func_00270410(int i, P8 *out) {
    P8 *p = **D_004ACC68[0].e[i].p;
    if (!p) return 1;
    if (out) *out = *p;
    return 0;
}
