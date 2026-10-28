struct L { L(); ~L(); void set(void *); int get(int); char p[0x30]; };
extern "C" char *func_00219680(void);
extern "C" void *func_00232210(void *);
extern "C" void func_0023C8E8(void *, int);
extern "C" void func_00122F30(int a, void *b) {
    char *g = func_00219680() + 0x3080C;
    L l;
    l.set(func_00232210(g));
    func_0023C8E8(b, l.get(3));
}
