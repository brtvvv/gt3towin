extern "C" float func_001D0058(void *), func_001D00E8(void *);
extern "C" void func_001D0178(void *, int, float, float);
extern "C" void func_001D0898(void *a, int b) { float x = func_001D0058(a); float y = func_001D00E8(a); func_001D0178(a, b, x, y); }

