extern "C" int func_0026D950(char *, const char *, ...);
extern "C" void func_0023C9B0(char *b, unsigned int t) { if (t == 0x157529FFu) { __builtin_strcpy(b, "\x7f\x7f'\x7f\x7f.\x7f\x7f\x7f"); return; } unsigned ms = t % 1000; t /= 1000; unsigned s = t % 60; t /= 60; unsigned m = t % 60; unsigned h = t / 60; if (h) func_0026D950(b, "%d:%02d'%02d.%03d", h, m, s, ms); else func_0026D950(b, "%d'%02d.%03d", m, s, ms); }

