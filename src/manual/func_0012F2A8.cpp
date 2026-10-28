extern "C" void func_0027FDBC(char *, const char *);
extern "C" int func_0026ACA0(const char *);
extern "C" char *func_0012F2A8(char *s, const char *src) { func_0027FDBC(s, src); int n = func_0026ACA0(s); for (int i = 0; i < n && s[i]; i++) { unsigned char c = s[i]; if (c - 'A' < 26u) s[i] = c + 0x20; } return s; }
