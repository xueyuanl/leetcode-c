//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>

int findLengthOfLCIS(int *nums, int numsSize) {
    if (numsSize == 1) return 1;
    int ans = 1;
    int count = 1;
    for (int i = 1; i < numsSize; i++) {
        if (*(nums + i) > *nums) {
            count++;
        } else {
            ans = count > ans ? count : ans;
            count = 1;
        }
    }
    return ans;

}