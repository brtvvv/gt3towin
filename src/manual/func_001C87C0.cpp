struct N { char name[0x144]; int x144; N **x148; };
extern "C" int func_0027FC78(char *, N *);
extern "C" N *func_001C87C0(N **a, int n, char *k) { for (int i = 0; i < n; i++) { if (!func_0027FC78(k, a[i])) return a[i]; N *r = func_001C87C0(a[i]->x148, a[i]->x144, k); if (r) return r; } return 0; }

