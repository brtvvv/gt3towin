struct object { void *pc_begin, *pc_end; void *fde_begin; void **fde_array; unsigned count; struct object *next; };
extern struct object *D_004AEC50[];
void func_0026D5B8(void *); void func_0027E9D8(void);
void *func_0027CE60(void *begin) { struct object **ob = D_004AEC50; while (*ob) { if ((*ob)->fde_begin == begin) { struct object *p = *ob; *ob = (*ob)->next; if (p->pc_begin) func_0026D5B8(p->fde_array); return (void *)p; } ob = &((*ob)->next); } func_0027E9D8(); }

