#include "m2c.h"
extern "C" M2C_UNK func_001DBA60();                            /* extern */

extern "C" f32 func_001DBBD8(void *arg0) {
    func_001DBA60();
    return M2C_FIELD(arg0, f32 *, 0x1C);
}
