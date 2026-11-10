extern "C" {

typedef struct E E;
typedef struct R R;
typedef struct W W;
typedef struct O O;
typedef struct L L;
typedef struct T T;
struct E
{
  int v;
  float w;
  char p[0x10];
};
struct R
{
  int n;
  E e[32];
};
struct W
{
  int hdr;
  R r[7];
};
struct O
{
  char p[0x20];
  char x20[8];
  int k;
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
void func_00177628(T *, W *);
float func_0026D3B0(int);
void func_00236FB0(char *, int);
void func_001779D0(T *t, int seed)
{
  R *new_var;
  W w;
  int i;
  int n = t->l->n;
  for (i = 0; i < n; i++)
  {
    char *o = ((char *) t->l->o[i]) + 0x20;
    if ((*((unsigned *) (o + 8))) != 0xFFFFFFFFu)
    {
      continue;
    }
    func_00177628(t, &w);
    int j = 0;
    new_var = &w.r[i];
    int m = (*new_var).n - 1;
    for (; j < m; j++)
    {
      if (func_0026D3B0(seed) < (*new_var).e[j].w)
      {
        break;
      }
    }

    func_00236FB0(o, (*new_var).e[j].v);
  }

}
}
