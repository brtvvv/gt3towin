struct R { char x0; int x4; };
struct E { int a, b; };
extern float D_003514B0; extern E D_002A00F0[];
extern "C" int func_00219680(); extern "C" float func_0021A938(int); extern "C" float func_00139490(float); extern "C" float func_00212A48(int); extern "C" float func_00139468(E *, float);
extern "C" void func_00139570(R *r, unsigned int n) { r->x0 = 1; if (n < 10) { r->x4 = n; return; } float sum = 0; float v = func_0021A938(func_00219680()); float k = v * D_003514B0 * v * v; float lim = func_00139490(k) * func_00212A48(1); for (int i = 0; i < 10; i++) { sum += func_00139468(&D_002A00F0[i], k); if (lim <= sum) { r->x4 = i; return; } } r->x4 = 0; }

