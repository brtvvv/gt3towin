extern int D_00354970; extern char D_003453E0[];
extern "C" int func_0026D950(char *, char *, ...);
extern "C" void func_0023CB78(char *buf, int a, int b, int c, int d) { int lang = D_00354970; if (d == 0) { if (c >= 0) goto spr; goto neg; } else if (c < 2000) goto big; spr: if (!lang) func_0026D950(buf, D_003453E0, c, b, a); else func_0026D950(buf, D_003453E0, a, b, c); return;
 big: if (!lang) __builtin_strcpy(buf, "\x7f\x7f\x7f\x7f/\x7f\x7f/\x7f\x7f"); else __builtin_strcpy(buf, "\x7f\x7f/\x7f\x7f/\x7f\x7f\x7f\x7f"); return;
 neg: __builtin_strcpy(buf, "\x7f\x7f/\x7f\x7f/\x7f\x7f"); }

