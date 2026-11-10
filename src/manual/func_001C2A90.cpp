struct V { char p[0x30]; short d; short pad; int (*f)(void *); };
struct O { char p[0xC0]; V *v; };
struct M { int x0, x4; char p[0xA14 - 8]; O *xA14; char q[0xAE4 - 0xA18]; int xAE4; char r[8]; int arr[23]; int xB4C; };
extern "C" void func_001C5070(int); extern "C" void func_001C5078(int); extern "C" char *func_0027FDBC(char *, char *); extern "C" void func_001C5080(char *); extern "C" void func_001B75E8(M *, int, int); extern "C" int func_001B8170(M *, int); extern "C" void func_001CA428(int, int); extern "C" unsigned char func_001B8B10(M *); extern "C" int func_00253458(int); extern "C" void func_001B88C0(M *);
extern "C" int func_001C2A90(M *m, int a, char *s, int b, int c, int (*cb)(int), int arg) { char buf[0x40]; func_001C5070(c); func_001C5078(b); func_0027FDBC(buf, s); func_001C5080(buf); func_001B75E8(m, a, 0); func_001B8170(m, 0); while (!m->x0) { int o = m->arr[m->xAE4]; if (o && (m->xA14->v->f((char *)m->xA14 + m->xA14->v->d) & 0x10)) { func_001CA428(o, 6); continue; } if (cb && cb(arg)) m->xB4C = 1; func_001B8B10(m); func_00253458(1); } func_001B88C0(m); func_00253458(2); return m->x4; }

