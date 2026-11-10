extern "C" void func_001E3A60(int n, short *s, short *a, short *b) { int i; b[1] = s[1] * 9 / 8;
 for (i = 1; i < n; i++) { a[i] = (s[i] * 2 + s[i + 1]) / 3; b[i + 1] = (s[i] + s[i + 1] * 2) / 3; }
 a[n] = s[n] * 7 / 8; a[0] = s[0] * 7 / 8; b[0] = s[0] * 9 / 8; }

