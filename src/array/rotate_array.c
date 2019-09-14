//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>

void rotate(int *nums, int numsSize, int k) {
    k = k % numsSize;
    int *tail = malloc(sizeof(int) * k);
    for (int i = k; i > 0 ;i -- ) {
        *(tail + k - i) = *(nums + numsSize - i);
    }

    for (int j = numsSize - k - 1; j >= 0; j --) {
        *(nums + j + k) = *(nums + j);
    }

    for (int l = 0; l< k; ++l) {
        *(nums + l) = *(tail + l);
    }
}
