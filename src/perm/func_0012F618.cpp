extern "C" {

typedef struct R R;
typedef struct O O;
typedef struct L L;
typedef struct T T;
typedef struct D D;
struct R
{
  long a;
  int b;
  int c;
  int d;
  int e;
};
struct O
{
  char p[0x18];
  int x18;
  char q[4];
  long x20;
  char r[0x20E0 - 0x28];
  int idx;
  char s[0x20FC - 0x20E4];
  int x20FC;
};
struct L
{
  int n;
  int x4;
  O **o;
};
struct T
{
  char p[0x18];
  L *l;
};
struct D
{
  char p[0x38];
  R r[1];
};
void func_0012FCD0(R *);
int func_001ED420(int);
inline int inline_fn(int arg0, T *arg1)
{
  return arg0 < arg1->l->n;
}

void func_0012F618(T *t, D *d, int f)
{
  R r;
  int i = 0;
  func_0012FCD0(&r);
  for (i = 0; inline_fn(i, t); i++)
  {
    O *o = t->l->o[i];
    r.a = o->x20;
    int k = o->idx;
    if (f)
    {
      r.c = 0x157529FF;
    }
    else
    {
      r.c = func_001ED420(o->x18);
    }
    r.b = t->l->o[i]->x20FC;
    if (i == 0)
    {
      r.d = 1;
    }
    else
    {
      r.d = 0;
    }
    d->r[k] = r;
  }

}
}
