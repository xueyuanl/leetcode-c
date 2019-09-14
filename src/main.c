//
// Created by hsuehyuan li on 2019-04-19.
//
#include <stdlib.h>
#include "common/array.h"
#include <string.h>

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

int main(int argc, const char *argv[]) {
    firstUniqChar("loveleetcode");


}