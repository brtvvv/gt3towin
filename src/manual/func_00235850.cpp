struct T { long x0; char p[0x1C8]; char b[4]; };
extern "C" char *func_00232658(char *, int, long);
extern "C" long func_00235850(T *t, unsigned k) { char *p = func_00232658(t->b, 0x1E, t->x0); long r = 0; switch (k) { case 23: r = *(long *)((char *)p + 0xC8); break;
case 0: r = *(long *)((char *)p + 0x8); break;
case 1: r = *(long *)((char *)p + 0x10); break;
case 15: r = *(long *)((char *)p + 0x80); break;
case 10: r = *(long *)((char *)p + 0x58); break;
case 9: r = *(long *)((char *)p + 0x50); break;
case 8: r = *(long *)((char *)p + 0x48); break;
case 14: r = *(long *)((char *)p + 0x78); break;
case 24: r = *(long *)((char *)p + 0xD8); break;
case 17: r = *(long *)((char *)p + 0x98); break;
case 19: r = *(long *)((char *)p + 0xA8); break;
case 4: r = *(long *)((char *)p + 0x28); break;
case 21: r = *(long *)((char *)p + 0x90); break;
case 20: r = *(long *)((char *)p + 0xB0); break;
case 11: r = *(long *)((char *)p + 0x60); break;
case 7: r = *(long *)((char *)p + 0x40); break;
case 16: r = *(long *)((char *)p + 0x88); break;
case 5: r = *(long *)((char *)p + 0x30); break;
case 18: r = *(long *)((char *)p + 0xA0); break;
case 22: r = *(long *)((char *)p + 0xD0); break;
case 28: r = *(long *)((char *)p + 0xB8); break;
case 29: r = *(long *)((char *)p + 0xC0); break;
case 2: case 3: case 6: case 13: case 25: case 26: case 27: break;
case 12: r = *(long *)((char *)p + 0x68); break; } return r; }

