typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
struct object { void *pc_begin, *pc_end; void *fde_begin; fde **fde_array; unsigned count; struct object *next; };
struct fde_vector { fde **array; unsigned count; };
typedef struct { struct fde_vector linear; struct fde_vector erratic; } fde_accumulator;
unsigned func_0027C618(fde *); void *func_0026D5E0(unsigned); void func_0027C660(fde *, fde_accumulator *, void **, void **); fde **func_0027C3B0(fde_accumulator *, unsigned);
static inline void start_fde_sort(fde_accumulator *accu, unsigned count) { unsigned size = count * sizeof(fde *); accu->linear.array = (fde **)func_0026D5E0(size); accu->erratic.array = (fde **)func_0026D5E0(size); accu->linear.count = 0; accu->erratic.count = 0; }
void func_0027C6E8(struct object *ob) { unsigned count; fde_accumulator accu; void *pc_begin, *pc_end;
 if (ob->fde_array) { fde **p = ob->fde_array; for (count = 0; *p; ++p) count += func_0027C618(*p); } else count = func_0027C618(ob->fde_begin);
 ob->count = count; start_fde_sort(&accu, count); pc_begin = (void *)(unsigned)-1; pc_end = 0;
 if (ob->fde_array) { fde **p = ob->fde_array; for (; *p; ++p) func_0027C660(*p, &accu, &pc_begin, &pc_end); } else func_0027C660(ob->fde_begin, &accu, &pc_begin, &pc_end);
 ob->fde_array = func_0027C3B0(&accu, count); ob->pc_begin = pc_begin; ob->pc_end = pc_end; }

