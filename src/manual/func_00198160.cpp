struct T { char p[8]; short x8, xA; char q[4]; unsigned char x10; char r[7]; int x18; float x1C; char x20[1]; };
extern char D_002F2F98[]; extern int D_00353A40;
extern "C" void func_0023E130(char *, unsigned); extern "C" void func_0023E610(char *, int); extern "C" int func_0026D950(char *, char *, ...); extern "C" float func_0023E810(char *, char *); extern "C" float func_0023DF58(char *); extern "C" float func_0019B638(int, float, float); extern "C" void func_0023E0E8(char *, float, float, float); extern "C" void func_0023E6C0(char *, char *);
extern "C" void func_00198160(T *t) { char buf[0x20]; char *f = D_002F2F98; func_0023E130(f, 0x80C0C062u); func_0023E610(f, D_00353A40); func_0026D950(buf, t->x20, t->x18); float s = t->x1C; if (s == 0.0f) { float w = func_0023E810(f, buf); w = w / func_0023DF58(f); t->x1C = w; s = w; } func_0023E0E8(f, func_0019B638(t->x10, t->x8, s), t->xA, 0.0f); func_0023E6C0(f, buf); }

