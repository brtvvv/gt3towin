extern "C" char *func_00145000(const char *);
extern "C" int func_00145058(const char *s) { const char *t = func_00145000(s); while (*t) { signed char c = *t; t++; signed char d = *s; s++; if (c != d) return 0; } return 1; }

