//
// Created by hsuehyuan li on 2019-09-13.
//

#include <stdlib.h>

char findTheDifference(char *s, char *t) {
    char *p = t;
    int ans = 0;
    while (p) {
        ans ^= *p;
        p++;
    }
    char *q = s;
    while (q) {
        ans ^= *q;
        q++;
    }

    return ans;


}