struct H { int h; char p[0x24]; int a; int b; };
struct DS { char p[0x20]; int m; };
extern DS D_002F5860[];
extern "C" void func_00244BB8(void *, int);
extern "C" int func_00245EB8(H *h) { if (h->b) { func_00244BB8(&D_002F5860[0].m, h->h); h->b = 0; h->h = -1; } return -1; }
