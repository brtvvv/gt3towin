struct R { unsigned char ok; signed char k; R() {} R(int o, int kk) { k = kk; ok = o; } R(const R &o) { k = o.k; ok = o.ok; } };
extern "C" void *func_00219680(void);
extern "C" float func_0021A938(void *);
extern "C" R func_00215AF8(signed char k) { R r; r.ok = 0; r.k = k; if (k != 0x12) return R(0, k); r.ok = func_0021A938(func_00219680()) >= 0.5f; return r; }
