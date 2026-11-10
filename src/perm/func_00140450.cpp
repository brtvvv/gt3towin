extern "C" {

typedef struct T T;
struct T
{
  char p[0xE50];
  int xE50;
};
extern char D_002EBE28[];
extern char D_0031B808[];
extern char D_0031B820[];
int func_0022FC38(char *, int);
void func_001C5E88(int);
char *func_00140450(T *t)
{
  unsigned long new_var;
  if ((t->xE50 == 0) && (!func_0022FC38(D_002EBE28, 10)))
  {
    func_001C5E88(4);
    return D_0031B808;
  }
  new_var = t->xE50;
  if ((new_var == 1) && (!func_0022FC38(D_002EBE28, 11)))
  {
    func_001C5E88(4);
    return D_0031B820;
  }
  return 0;
}
}
