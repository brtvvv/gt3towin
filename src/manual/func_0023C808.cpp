extern "C" int func_0023C808(const char *a, const char *b) {
    if (!a || !b) return 0;
    if (a == b) return 1;
    char c;
    do {
        c = *a++;
        if (c != *b++) return 0;
    } while (c);
    return 1;
}

