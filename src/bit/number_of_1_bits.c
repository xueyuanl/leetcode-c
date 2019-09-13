//
// Created by hsuehyuan li on 2019-09-13.
//

#include <stdlib.h>

int hammingWeight(u_int32_t n) {
    int count = 0;
    while (n > 0) {
        if (n & 1 == 1) count ++;

        n = n >> 1;
    }
    return n;
}