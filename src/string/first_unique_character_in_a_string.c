//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int firstUniqChar(char *s) {
    int alphabet[26] = {0};
    char *p = s;
    while (*p != '\0') {
        alphabet[*p - 'a'] += 1;
        p ++;
    }
    for (int i = 0, len = strlen(s); i < len; ++i) {  // the len should be init in the first condition.
        if (alphabet[*(s+ i) - 'a'] == 1) return i;
    }
    return -1;
}