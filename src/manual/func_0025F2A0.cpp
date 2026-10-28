extern "C" char *func_0025F260(void);
extern "C" char *func_0025F2A0(void) { char *p = func_0025F260(); if (*p && *p != '/' && *p != '\\') { do p++; while (*p && *p != '/' && *p != '\\'); } return p; }
