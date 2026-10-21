typedef struct { int h, b, c; } E; typedef struct { char p[0x24]; E e[1]; } T; extern T D_004A8380; void func_00286EE0(int); void func_00252080(int i) { func_00286EE0(D_004A8380.e[i].h); }
