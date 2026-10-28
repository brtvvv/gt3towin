extern "C" int func_00271798(unsigned char *a, unsigned char *b, int n) { for (int i = 0; i < n; i++) { unsigned c = a[i], d = b[i]; if (d < c) return 1; if (c < d) return 0; } return 0; }

