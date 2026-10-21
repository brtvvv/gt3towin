typedef struct { int h, b, c; } E; typedef struct { char p[0x24]; E e[1]; } T; extern T D_004A8380; void func_00286EC0(int); void func_002520A0(int i) { func_00286EC0(D_004A8380.e[i].h); }
