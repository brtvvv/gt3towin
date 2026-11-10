extern "C" {

typedef struct V V;
typedef struct M M;
typedef struct T T;
struct V
{
  char p[0x10];
  short d;
  short pad;
  void (*f)(void *);
};
struct M
{
  int x0;
  char p[0x1D8];
  int x1DC;
  char q[0xAE4 - 0x1E0];
  int xAE4;
};
struct T
{
  char p[0x288];
  V *v;
  M m;
  char q[(0xD74 - 0x28C) - (sizeof(M))];
  int arr[1];
  char r[0xED5 - 0xD78];
  unsigned char xED5;
  unsigned char xED6;
};
extern char D_00353060[];
extern char D_00353068[];
void func_001D3700(int, int, int);
void func_001B75E8(M *, char *, int);
int func_001B8170(M *, int);
unsigned char func_001B8B10(M *);
void func_001B8610(M *);
void func_00212A08(int);
int func_001C38A0(int, char *, int);
void func_001C0428(int, int);
int func_00253458(int);
void func_0013F268(T *t)
{
  int done = 0;
  T *new_var;
  M *m = &t->m;
  func_001D3700(0x19, 0, 0);
  t->v->f(((char *) t) + t->v->d);
  new_var = t;
  func_001B75E8(&new_var->m, D_00353060, 0);
  func_001B8170(m, 0);
  while ((!t->m.x0) && (!t->xED6))
  {
    func_00212A08(1);
    if (t->xED5 && (!done))
    {
      done = 1;
      int o = func_001C38A0(m->x1DC, D_00353068, 0);
      M *m2 = &t->m;
      if (o)
      {
        func_001C0428(o, t->arr[m2->xAE4]);
        func_00253458(1);
      }
    }
    func_001B8B10(m);
    t->v->f(((char *) t) + t->v->d);
  }

  func_001B8610(&t->m);
}
}
