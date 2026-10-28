struct E { int id; char p[0x18]; };
extern E D_00301000[];
extern "C" void func_00269C98(int);
extern "C" void func_0026A720(int id) {
    func_00269C98(id);
    E *e = D_00301000;
    for (int i = 0; i < 47; i++, e++) if (e->id == id) e->id = 0;
}

