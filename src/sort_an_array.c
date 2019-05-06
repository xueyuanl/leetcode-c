//
// Created by pat on 19-5-5.
//

#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recursion(int *nums, int numsSize) {
    if (numsSize < 2) {
        return;
    }
    int flag = *nums;
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        while (*(nums + right) >= flag && right > left) {  // cause we use the left one as the flag, so the right must first.
            right--;
        }
        while (*(nums + left) <= flag && left < right) {
            left++;
        }
        swap(nums + left, nums + right);
    }
    swap(nums, nums + left);
    recursion(nums, left);
    recursion(nums + left + 1, numsSize - 1 - right);
}

int *sortArray(int *nums, int numsSize, int *returnSize) {
    recursion(nums, numsSize);
    *returnSize = numsSize;
    return nums;
}

