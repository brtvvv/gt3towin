typedef struct { int a; int b; } E;
extern E D_004A8FC8[];
void func_002645E0(int);
void func_0027ED70(void *, int, int);
void func_00261BC0(void) { int i; for (i = 0; i < 7; i++) func_002645E0(D_004A8FC8[i].b); func_0027ED70(D_004A8FC8, 0, 0x38); }

