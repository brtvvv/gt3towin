extern "C" const char *func_0023DBE8(char *d, const char *s) { char c = *s++; while (c && c != '#' && c != '*' && c != ',') { *d++ = c; c = *s++; } *d = 0; return s - 1; }

