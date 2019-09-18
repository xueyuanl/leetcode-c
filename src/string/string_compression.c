//
// Created by hsuehyuan li on 2019-09-14.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *int2char(int a) {
    char *res = (char *) malloc(sizeof(char) * 11);
    sprintf(res, "%d", a);
    return res;
}

int compress(char *chars, int charsSize) {

    char *comp = (char *) malloc(sizeof(char) * charsSize);
    char *mark = comp;

    int count = 0;
    while (*chars != '\0') {
        count = 1;
        *comp = *chars;
        comp++;
        while (*(chars + 1) != '\0' && *(chars + 1) == *chars) {
            chars++;
            count++;
        }
        char * ints = int2char(count);
        int len = strlen(ints);
        stpcpy(comp, ints);
        comp += len;
        free(ints);
    }
    return comp - mark;
}