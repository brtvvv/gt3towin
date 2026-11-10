struct E { int x; char pad[0x18]; };
extern E D_00301000[];
extern "C" void func_00269C98(int);
extern "C" void func_0026A720(int id) {
    func_00269C98(id);
    E *e = D_00301000;
    for (int i = 46; i >= 0; i--, e++) if (e->x == id) e->x = 0;
}

