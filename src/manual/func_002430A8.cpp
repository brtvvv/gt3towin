extern "C" char *strcpy(char *, const char *); extern "C" char *func_0027F9CC(char *, const char *); extern "C" int func_0026B140(char *, int *);
extern "C" int func_002430A8(const char *name) { int st[4]; char buf[0x80]; strcpy(buf, "host:"); func_0027F9CC(buf, name); if (func_0026B140(buf, st) < 0) return 0; return st[1]; }

