extern "C" {

typedef struct N N;
typedef struct T T;
struct N
{
  N *x0;
};
struct T
{
  int x0;
  int x4;
  N *x8;
};
void func_001A31A0(T *, float);
int func_001A1158(N *, float);
void func_001A30B8(T *, N *, N *);
void func_001A30E0(T *t, float x)
{
  float new_var;
  func_001A31A0(t, x);
  N *prev = 0;
  N *n = t->x8;
  new_var = x;
  while (n)
  {
    N *nx = n->x0;
    new_var = x;
    if (!func_001A1158(n, new_var))
    {
      func_001A30B8(t, n, prev);
    }
    else
    {
      prev = n;
    }
    n = nx;
  }

}
}
