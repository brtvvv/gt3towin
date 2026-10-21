typedef unsigned int size_t;
inline void *operator new(size_t, void *p) throw() { return p; }
struct type_info { const char *_name; type_info(const char *n) : _name(n) {} virtual ~type_info(); };
struct __builtin_type_info : type_info { __builtin_type_info(const char *n) : type_info(n) {} };
extern type_info D_00308440 __attribute__((section(".data")));
extern "C" type_info *func_0027E3F0(void) {
    if (!D_00308440._name) new (&D_00308440) __builtin_type_info("s");
    return &D_00308440;
}
