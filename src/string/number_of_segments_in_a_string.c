//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>

int countSegments(char *s) {
    if (s == NULL || *s == '\0') return 0;
    int ans = 0;
    while (*s != '\0') {
        if (*s != ' ') {
            ans ++;
            while (*s != '\0' && *s != ' ') {
                s ++;
            }
        }
        else {
            s ++;
        }
    }
    return ans;
}
