struct Node { Node *next; };
struct ElemBase { char d[0x28]; };
struct Elem : public ElemBase, public Node { void f(void *owner); };
struct List { Node *head; };
struct Iter {
    Node *cur; List *list;
    Iter(List &l) : cur(l.head), list(&l) {}
    Elem *next() { Node *n = cur; cur = n ? n->next : 0; return static_cast<Elem *>(n); }
};
struct T {
    char pad0[0x14]; int x14; char pad1[0xB0 - 0x18];
    List list; char pad2[0xC0 - 0xB4]; int count;
    void vf1();
};
// @vf1__1T 0x1BC848
void T::vf1() {
    if (count) {
        Iter it(list); Iter *ip = &it;
        Elem *e;
        for (Node *n = it.cur; ; n = it.cur) {
            ip->cur = n ? n->next : 0; e = static_cast<Elem *>(n); if (!e) break;
            e->f(this);
            if (x14) { count = 0; break; }
        }
    }
}
