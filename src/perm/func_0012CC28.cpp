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
void func_001D3700(int, int, int);
void func_001B8AD8(int *, int);
void func_001B75E8(int *, int, int);
int func_001B8170(int *, int);
int func_00253458(int);
unsigned char func_001B8B10(int *);
void func_001B8610(int *);
void func_001B79F8(int *, int);
void func_00212A08(int);
void func_00101A58(int);
void func_0022CA98();
int func_00129988(char *);
void func_00135110(void *);
struct T
{
  char p[0x288];
  V *v;
  char q[0x2EC - 0x28C];
  int x2EC;
  int m;
  char r[0xE4C - 0x2F4];
  int xE4C;
};
void func_0012CC28(T *t)
{
  char *s;
  T *new_var2;
  int *m = &t->m;
  int new_var3;
  int *new_var;
  new_var3 = 0;
  new_var2 = t;
  func_001B8170(m, 0);
  if (new_var2->xE4C)
  {
    func_001B79F8(m, new_var3);
    func_001B75E8(m, new_var2->xE4C, 0);
    func_001B8170(m, 0);
  }
  while (!new_var2->m)
  {
    new_var = m;
    func_001B8B10(new_var);
    new_var2->v->f(((char *) new_var2) + new_var2->v->d);
    func_00212A08(1);
  }

  s = ((char *) t) + 0x290;
  *((int *) (s + 0x5C)) = 0;
  func_00253458(2);
  func_00101A58(0);
  func_00253458(2);
}
}
