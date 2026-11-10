extern "C" {

typedef struct E E;
typedef struct I I;
typedef struct L L;
typedef struct T T;
struct E
{
  long x0;
  char x8;
  char x9;
  char p[6];
};
struct I
{
  int x0;
  int x4;
  char p[0xC];
};
struct L
{
  I *p;
  unsigned n;
  char q[8];
};
struct T
{
  int x0;
  int x4;
  short x8;
  char p[6];
  E e[64];
};
short func_0022C7D0(L *, int);
short func_0026D2F8();
long func_00232210(int);
void func_0021BD00(T *, int);
void func_0021BBD0(T *t)
{
  int new_var;
  L l;
  E **new_var2;
  func_0022C7D0(&l, 0x14);
  t->x8 = func_0026D2F8();
  unsigned i;
  E *e = t->e;
  for (i = 0; i < 64; i++, e++)
  {
    e->x8 = 0;
    new_var2 = &e;
    (*new_var2)->x9 = 1;
    (*new_var2)->x0 = 0;
  }

  t->x0 = 0;
  for (i = (new_var = 0); i < l.n; i++)
  {
    E *d = &t->e[t->x0];
    d->x0 = func_00232210(l.p[i].x4);
    t->x0++;
  }

  func_0021BD00(t, 1);
}
}
