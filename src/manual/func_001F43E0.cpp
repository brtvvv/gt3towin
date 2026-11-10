extern "C" int func_001F42C0(char *, int, int *, int *, int); extern "C" int func_001F4348(char *, int, int *, int *, int); extern "C" int func_001F3E90(char *); extern "C" float func_001FA650(char *, float, float);
extern "C" int func_001F43E0(char *t, int a, int *p, int *q, int e) { float x, y; int r = func_001F42C0(t, a, p, q, e); if (r) return r; r = func_001F4348(t, a, p, q, e); if (r) return r; *p = 4; x = 400.0f; y = 350.0f; int k = func_001F3E90(t); switch (k) { case 0: case 1: break; case 2: x = 300.0f; y = 200.0f; break; } return *q = (int)func_001FA650(t + 0xBBA8, -x, y) - 5; }

