//
// Created by hsuehyuan li on 2019-04-19.
//
#include <stdlib.h>
#include <stdio.h>

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
    int left = 1;
    int right = numsSize - 1;

    while (left < right) {
        while (*(nums + left) < flag) {
            left++;
        }
        while (*(nums + right) > flag) {
            right--;
        }
        swap(nums + left, nums + right);
    }
    swap(nums, nums + left);
    recursion(nums, left);
    recursion(nums + left + 1, numsSize - 1 - right);
}

int *sortArray(int *nums, int numsSize, int *returnSize) {
    recursion(nums, numsSize);
    int *retArray = (int *) malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        retArray[i] = *(nums + i);
    }
    *returnSize = numsSize;
    return retArray;


}

int main( int argc, const char* argv[] )
{
    int test[] = {5,4,3,2,1};
    int returnSize = 0;
    sortArray(test, 5, &returnSize);
}