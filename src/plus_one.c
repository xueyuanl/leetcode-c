//
// Created by hsuehyuan li on 2019-04-19.
//
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {

    int *ret = (int *) malloc(sizeof(int) * (digitsSize + 1));

    int mark = 0;  // 1 for carry, 0 for not.
    int add_one = digits[digitsSize - 1] + 1;
    if (add_one < 10) {
        ret[digitsSize] = add_one;
    } else {
        ret[digitsSize] = 0;
        mark = 1;
    }
    for (int i = digitsSize - 1; i > 0; i--) {
        if (mark == 0) {
            ret[i] = digits[i - 1];
        } else {
            int plus = digits[i - 1] + mark;
            if (plus < 10) {
                ret[i] = plus;
                mark = 0;
            } else {
                ret[i] = 0;
                mark = 1;
            }
        }
    }

    if (mark == 1) {
        ret[0] = 1;
        *returnSize = digitsSize + 1;
        return ret;

    } else {
        *returnSize = digitsSize;
        return ret + 1;
    }
}