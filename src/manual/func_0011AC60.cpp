// @flags -fexceptions
#include "/tmp/claude-1000/b66/hdr.h"
extern char D_00311198[];
extern "C" char *func_00219680();
extern "C" int func_00232210(void *);
extern "C" int func_0023C808(char *, char *);
extern "C" void func_0011AAD8();
struct L { char p[0x30]; L(); void m(int); int count(); void get(char *, int); ~L(); };
struct X { HEAPOPS char p[0x18]; float x18; char q[0xE4]; X(const char *, int); void m(int); };
extern "C" int func_001B6D90(int, int, int, int, int, int, int, int, void *);
extern "C" int func_0011AC60(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int cnt;
    {
        char *g = func_00219680() + 0x3080C;
        L l;
        l.m(func_00232210(g));
        int n = l.count();
        cnt = 0;
        for (int i = 0; i < n; i++) {
            char a[0x40], b[0x40];
            l.get(a, i);
            int j;
            for (j = i + 1; j < n; j++) { l.get(b, j); if (func_0023C808(a, b)) break; }
            if (j >= n) cnt++;
        }
    }
    int r = func_001B6D90(p1, p2, p3, p4, p5, p6, p7, cnt, (void *)func_0011AAD8);
    if (!cnt) {
        X *x = new X(D_00311198, p6);
        x->x18 += 100.0f;
        x->m(p3);
    }
    return r;
}

