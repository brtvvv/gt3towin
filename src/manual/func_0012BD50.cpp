struct T { char p[0x118]; int x118; };
extern "C" int func_0012B768(T *, int); extern "C" int func_0012BC20(T *, int);
extern "C" int func_0012BD50(T *t) { for (int i = 0; i < t->x118; i++) { if (func_0012B768(t, i) != 10 && func_0012BC20(t, i)) return 1; } return 0; }

