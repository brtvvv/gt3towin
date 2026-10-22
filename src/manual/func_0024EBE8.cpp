extern "C" int func_0024EBE8(char **pp) { char *p = *pp; char c = *p; int n = 0; while ((unsigned)(c - 0x30) < 10) { p++; n = n * 10 + (c - 0x30); c = *p; } *pp = p; return n; }
