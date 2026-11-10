extern char D_003473D8[]; extern int D_00354AA0, D_00354AB0, D_00354AE4;
extern "C" void func_00261BC0(); extern "C" void func_00286EB0(int); extern "C" void func_0027D2F8(void *);
extern "C" void func_0025F7F8(char *t, int k) { *(void **)(t + 0x150) = D_003473D8; if (!D_00354AA0) func_00261BC0(); func_00286EB0(D_00354AB0); int h = *(int *)(t + 0x144); D_00354AB0 = -1; func_00286EB0(h); *(int *)(t + 0x144) = -1; func_00286EB0(D_00354AE4); D_00354AE4 = -1; if (k & 1) func_0027D2F8(t); }

