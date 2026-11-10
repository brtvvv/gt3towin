extern "C" char *func_0021EE60(); extern "C" int func_0021ED38(char *); extern "C" char *func_00219680(); extern "C" int func_0021ADA0(char *); extern "C" int func_0021ED68(char *, int); extern "C" int func_0021ED48(char *, int);
extern "C" int func_0015D158(int a, int k) { int c = 0; int n = func_0021ED38(func_0021EE60()); int lim = func_0021ADA0(func_00219680()); for (int i = 0; i < n; i++) { if (lim < func_0021ED68(func_0021EE60(), i)) continue; if (c == k) return func_0021ED48(func_0021EE60(), i); c++; } return 0; }

