extern "C" {
int func_0023FE20(int);
int func_00268810(int, int, const char *, int);
int func_002689E0(int, int, int);
int func_00268C00(int, void *, int);
int func_00268328(int);
int func_002402B0(int, int);
void func_0023F3C0(void *, int, int);
}
struct Slot { char flag; char p[0x53]; int done; char q[0x14]; };
struct Port { char p[0xC]; Slot s[4]; };
struct MC { char p[0x1418]; Port port[2]; };
extern MC *D_003548F8;
extern "C" int func_00240648(int id, const char *name, void *buf, int ofs, int size)
{
    int r = 1;
    if (func_0023FE20(id)) {
        int fd, ret;
        r = 10;
        fd = func_00268810(id / 4, id % 4, name, 0x103);
        ret = fd;
        if (fd == -4 && ofs == 0) {
            r = 5;
            ret = fd = func_00268810(id / 4, id % 4, name, 0x200);
        }
        if (ret >= 0) {
            if (ofs) {
                r = 13;
                ret = func_002689E0(ret, ofs, 0);
                if (ret != ofs) goto out;
            }
            r = 15;
            ret = func_00268C00(fd, buf, size);
            if (ret >= 0) {
                r = 4;
                ret = func_00268328(fd);
                if (ret == 0) r = 0;
            }
        }
    out:
        r = func_002402B0(r, ret);
        func_0023F3C0((Slot *)((char *)D_003548F8 + (id / 4 * 0x1BC + 0x1418) + (id % 4 * 0x6C + 0xC)), ret, r);
        Slot *sl = (Slot *)((char *)D_003548F8 + (id / 4 * 0x1BC + 0x1418) + (id % 4 * 0x6C + 0xC));
        sl->done = 1;
        sl->flag = 0;
    }
    return r;
}

