struct O { char p[0x18]; float x18; struct V *v; };
struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct T { char p[0x18]; float x18; char q[0xC4 - 0x1C]; O **xC4; int xC8; int (*xCC)(int); int xD0; int xD4; };
extern "C" void func_001C13E0(T *t) { for (int i = 0; i < t->xC8; i++) { O *o = t->xC4[i]; if (o) o->v->f((char *)o + o->v->d); } int k = t->xCC(t->xD0); t->xD4 = k; if (k >= 0 && k < t->xC8) { O *o = t->xC4[k]; if (o) t->x18 = o->x18; } }

