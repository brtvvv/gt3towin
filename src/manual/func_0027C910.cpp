typedef struct { unsigned length; int CIE_delta; } fde;
typedef struct { void *p __attribute__((packed)); } U;
typedef struct { unsigned length; int CIE_id; unsigned char version; char augmentation[1]; } cie;
struct cie_info { char *augmentation; void *eh_ptr; int code_align; int data_align; unsigned ra_regno; };
extern char D_00349C30[], D_00349C38[];
extern "C" int func_0027FC78(const char *, const char *); extern "C" int func_0026ACA0(const char *); extern "C" void *func_0027C218(void *, void *); extern "C" void *func_0027C260(void *, void *);
static inline cie *get_cie(fde *f) { return (cie *)((char *)&f->CIE_delta - f->CIE_delta); }
extern "C" void *func_0027C910(fde *f, cie_info *c) { void *p; int i; c->augmentation = get_cie(f)->augmentation;
 if (func_0027FC78(c->augmentation, D_00349C30) != 0 && func_0027FC78(c->augmentation, D_00349C38) != 0 && c->augmentation[0] != 'z') return 0;
 p = c->augmentation + func_0026ACA0(c->augmentation) + 1;
 if (func_0027FC78(c->augmentation, D_00349C38) == 0) { c->eh_ptr = ((U *)p)->p; p = (char *)p + sizeof(void *); } else c->eh_ptr = 0;
 p = func_0027C218(p, &c->code_align); p = func_0027C260(p, &c->data_align); c->ra_regno = *(unsigned char *)p; p = (char *)p + 1;
 if (c->augmentation[0] == 'z') { p = func_0027C218(p, &i); p = (char *)p + i; }
 return p; }

