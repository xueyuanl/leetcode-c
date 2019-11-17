//
// Created by hsuehyuan li on 2019-11-17.
//

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
 * First, I count the number of 1 or 0 grouped consecutively.
 * For example "0110001111" will be [1, 2, 3, 4].
 *
 * Second, for any possible substrings with 1 and 0 grouped consecutively, the number of valid substring will be the minimum number of 0 and 1.
 * For example "0001111", will be min(3, 4) = 3, ("01", "0011", "000111")
 */


int min (int a, int b) {
    if (a > b) return b;
    return a;
}


int countBinarySubstrings(char * s){
    if (s == NULL || *s == '\0') return 0;

    int trans[50000] = {0};
    int index = 0;
    char *p = s;

    int count = 1;
    char init = *p ++;
    while ( *p != '\0') {
        if ( *p == init) {
            count ++;
        }
        else {
            trans[index++] = count;
            count = 1;
            init = *p;
        }
        p ++;
    }
    trans[index++] = count;

    // Second
    int res = 0;
    for (int i = 0; i < index; i ++) {
        res += min(trans[i], trans[i + 1]);
    }
    return res;
}

