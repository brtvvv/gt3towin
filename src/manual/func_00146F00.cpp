typedef unsigned int size_t;
inline void *operator new(size_t, void *p) throw() { return p; }
struct D { char p[0x1C]; unsigned short flags; char q[6]; char x24[1]; };
extern "C" {
void *func_00146D00(void *);
void *func_00146D98(void *);
void func_00146D30(void *, void *);
int func_00145058(void *);
int func_001450B8(void *);
void func_0023D208(void *, void *);
}
struct O { int a; };
struct OA : O { OA(D *); };
struct OG : O { OG(D *); };
struct OR : O { OR(D *); };
struct OB : O { OB(D *); };
struct OS : O { OS(D *); };
struct OX : O { OX(D *); };
struct OF : O { OF(D *); };
extern "C" O *func_00146F00(void *pool, D *d)
{
    void *mem = func_00146D00(pool);
    if (!mem) {
        void *blk = func_00146D98(pool);
        if (!blk) return 0;
        func_00146D30(pool, blk);
        mem = func_00146D00(pool);
        if (!mem) return 0;
    }
    O *o;
    if (d->flags & 0x1000) {
        o = new (mem) OA(d);
    } else if (func_00145058(d->x24)) {
        switch (func_001450B8(d->x24)) {
        case 0x47: o = new (mem) OG(d); break;
        case 0x52: o = new (mem) OR(d); break;
        case 0x42: o = new (mem) OB(d); break;
        case 0x53: o = new (mem) OS(d); break;
        default: o = new (mem) OX(d); break;
        }
    } else {
        o = new (mem) OF(d);
    }
    if (!o) return 0;
    func_0023D208(pool, o);
    return o;
}

