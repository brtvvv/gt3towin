extern char D_002F7008[];
extern "C" char *func_002469A8(char *); extern "C" float func_00246B20(char *, float); extern "C" char *func_0027F9CC(char *, char *); extern "C" int func_0026D950(char *, const char *, ...);
extern "C" void func_0023CA88(char *out, float v) { char *s = D_002F7008; char *nm = func_002469A8(s); if (v <= 0.0f) { __builtin_strcpy(out, "\x7f\x7f\x7f.\x7f"); func_0027F9CC(out, nm); return; } float x = func_00246B20(s, v); func_0026D950(out, "%d.%1d%s", (int)x, (int)(x * 10.0f) % 10, nm); }

