//
// Created by hsuehyuan li on 2019-09-13.
//

#include <stdlib.h>

u_int32_t reverseBits(u_int32_t n) {
    u_int32_t m = 0;
    for (int i = 0; i < 32; i ++, m = m << 1) {
        m = m | (n & 1);
        n = n >> 1;
    }
    return m;
}