extern "C" char *func_001F3A90(void *, int);
extern "C" void func_001F2AE0(void *, char *, int);
extern "C" void func_001F2D78(void *s) { char *x = func_001F3A90(s, 0); unsigned char b = x[0x14A2]; if (b & 2) func_001F2AE0(s, x, 0); else if (b & 1) func_001F2AE0(s, x, 1); }

