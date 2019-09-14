//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int firstUniqChar(char *s) {
    int alphabet[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        alphabet[*(s + i) - 'a'] += 1;
    }

    for (int i = 0; i < len; ++i) {
        if (alphabet[*(s + i) - 'a'] == 1) return i;
    }
    return -1;
}