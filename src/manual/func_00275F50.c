extern char D_00349570[], D_00349598[];
void func_0027E9F8(const char *, int, const char *), func_00275D90(unsigned char *);
void func_00275F50(unsigned char *t) { int c; if (!t) func_0027E9F8(D_00349570, 0x181, D_00349598); c = t[3] + 1; t[3] = c; if ((unsigned char)c == 24) { t[3] = 0; func_00275D90(t); } }
