#define DEF_func_0023D588
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0023D588(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg2 < 0) || (arg2 >= func_0023D4B8(arg0))) {
        return 0;
    }
    func_0023D308(arg0, arg1);
    func_0023D268(arg0, arg1, arg2);
    return 1;
}
