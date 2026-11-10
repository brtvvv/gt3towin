extern char D_00347148[];
struct T { int x0; char p[0x34]; char *x38; };
extern "C" void func_00286EB0(int); extern "C" void func_0027D2F8(void *);
extern "C" void func_0025C368(T *t, int fl) { t->x38 = D_00347148; func_00286EB0(t->x0); if (fl & 1) func_0027D2F8(t); }

