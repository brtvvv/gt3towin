extern "C" {

typedef struct V V;
typedef struct T T;
struct V
{
  char p[0x10];
  short d;
  short pad;
  void (*f)(void *);
};
struct T
{
  char p[0x288];
  V *v;
  int x28C;
};
extern char D_0031A7B8[];
void func_001B8AD8(int *, int);
void func_001B75E8(int *, char *, int);
void func_001B8170(int *, int);
int func_00253458(int);
unsigned char func_001B8B10(int *);
void func_001B8610(int *);
void func_0013B960(T *t)
{
  int *m = &t->x28C;
  t->v->f(((char *) t) + t->v->d);
  func_001B8AD8(m, 1);
  func_001B75E8(m, D_0031A7B8, 0);
  func_001B8170(m, 0);
  func_001B8AD8(m, 0);
  func_00253458(12);
  while (!t->x28C)
  {
    func_001B8B10(m);
    t->v->f(((char *) t) + t->v->d);
  }

  func_001B8610(m);
}
}
