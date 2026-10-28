struct T { char p[0x144]; int sem; char q[8]; void *vt; };
extern int D_00354AA0, D_00354AB0, D_00354AE4;
extern char D_003473D8[];
extern "C" void func_00261BC0(void), func_00286EB0(int), func_0027D2F8(T *);
extern "C" void func_0025F7F8(T *t, int c) { t->vt = D_003473D8; if (!D_00354AA0) func_00261BC0(); func_00286EB0(D_00354AB0); D_00354AB0 = -1; func_00286EB0(t->sem); t->sem = -1; func_00286EB0(D_00354AE4); D_00354AE4 = -1; if (c & 1) func_0027D2F8(t); }
