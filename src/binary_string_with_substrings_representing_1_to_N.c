//
// Created by pat on 19-5-13.
//

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void reverse_str(char *begin, char *end) {
    while (end > begin) {
        char temp = *end;
        *end = *begin;
        *begin = temp;
        end--;
        begin++;
    }
}

char *int_to_binary(int n) {
    char *res = (char *) malloc(64 * sizeof(char));
    char *iter = res;
    while (n != 0) {
        int temp = n % 2;
        *iter = temp + '0';
        iter++;
        n = n >> 1;
    }
    *iter = '\0';
    // reverse the str
    reverse_str(res, iter - 1);
    return res;
}

bool queryString(char *S, int N) {
    for (int i = 0; i <= N; i++) {
        char *intToBinary = int_to_binary(i);
        char *res = strstr(S, intToBinary);
        if (NULL == res) {
            return false;
        }
    }
    return true;
}


