//
// Created by hsuehyuan li on 2019-04-19.
//
#include <stdlib.h>
#include "common/array.h"

char findTheDifference(char *s, char *t) {
    char *p = t;
    int ans = 0;
    while (*p != '\0') {
        ans ^= *p;
        p++;
    }
    char *q = s;
    while (*q != '\0') {
        ans ^= *q;
        q++;
    }

    return ans;


}

int main(int argc, const char *argv[]) {

    findTheDifference("abcd", "abcde");


}