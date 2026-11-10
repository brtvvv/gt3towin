extern char D_0032E300[];
extern "C" void func_0018C118(char *, int); extern "C" void func_00192220(void *, int);
struct T { char *vp; };
extern "C" void func_0018CE18(T *t, int fl) { t->vp = D_0032E300; func_0018C118((char *)t + 0xA47C, 2); func_00192220(t, fl); }

