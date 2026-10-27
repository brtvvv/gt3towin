struct Item { char p[0x50]; float h, w; char q[0x14]; };
extern "C" {
Item *func_001C3600(void *, const char *);
int func_0023C808(const char *, const char *);
int func_0023D208(void *, void *);
}
extern char D_00352A00[];
extern char D_003111B0[];
extern int D_00354970;
struct WA0 { char p[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void v9(int); };
struct WA : WA0 { char q[0x100 - 0x20]; };
struct WB { int x; };
struct W : WA, WB { };
struct XB { char p[0x1C];
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual W *v5(Item *, const char *, float, int);
};
struct X : XB {
    char q[0xB0 - 0x20]; char list[0xC]; int vert; int r; void *db; char s[0xF4 - 0xC8]; float gap;
};
extern "C" void func_0011B220(X *s, const char **names, int n, Item *tab)
{
    float x = 0.0f;
    for (int i = 0; i < n; i++) {
        Item *it;
        if (tab) it = &tab[i];
        else it = func_001C3600(s->db, names[i]);
        if (!it) continue;
        if (D_00354970 == 2 && func_0023C808(names[i], D_00352A00)) continue;
        if (D_00354970 != 2 && func_0023C808(names[i], D_003111B0)) continue;
        x += (!s->vert ? it->w : it->h) * 0.5f;
        W *w = s->v5(it, names[i], x, i);
        w->v9(0);
        func_0023D208(s->list, (WB *)w);
        x += (!s->vert ? it->w : it->h) * 0.5f;
        x += s->gap;
    }
}

