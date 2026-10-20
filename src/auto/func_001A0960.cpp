#include "m2c.h"
extern "C" f32 func_001A0960(void *arg0, void *arg1) {
    return (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8));
}
