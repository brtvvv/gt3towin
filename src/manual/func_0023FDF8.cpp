struct E { char p[0x11C]; int v; char q[0x9C]; }; struct G { char p[0x1300]; E e[2]; }; extern G *D_003548F8; extern "C" int func_0023FDF8(int i) { if (i < 2) return D_003548F8->e[i].v; return 0; }
