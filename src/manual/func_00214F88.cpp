extern char D_003543D0[], D_003543D8[], D_003543E0[];
extern "C" int func_0026ACA0(char *); extern "C" int func_00280240(char *, char *);
extern "C" int func_00214F88(char *s) { if (!s) return 0; if (func_0026ACA0(s) <= 0) return 0; if (s[0] == 'G') { if (func_00280240(s, D_003543D0)) return 1; if (func_00280240(s, D_003543D8)) return 2; if (func_00280240(s, D_003543E0)) return 3; } else if (s[0] == 'E') return 5; else if (s[0] == 'D') return 4; return 0; }

