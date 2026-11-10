extern "C" {

typedef struct R R;
typedef struct T T;
struct R
{
  int d[8];
};
struct T
{
  int a[12];
  char s[12][16];
  long c[12];
  int b[12];
  R e[12];
};
int func_0027FDBC(char *, char *);
void func_00213700(T *, int);
void func_00213BE0(T *t, int k)
{
  for (; k < 11; k++)
  {
    t->a[k] = t->a[k + 1];
    func_0027FDBC(t->s[k], t->s[k + 1]);
    t->c[k] = t->c[k + 1];
    t->b[k] = t->b[k + 1];
    t->e[k] = t->e[k + 1];
  }

  func_00213700(t, 11);
}
}
