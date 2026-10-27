struct N { N *next; }; extern "C" void func_0023D3F0(void *, N *);
extern "C" void func_0023D470(void *a, N *n) { if (n) { func_0023D470(a, n->next); func_0023D3F0(a, n); } }

