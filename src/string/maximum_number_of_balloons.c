//
// Created by hsuehyuan li on 2019-09-15.
//

#include <stdlib.h>

int maxNumberOfBalloons(char * text){
    int alphabet[26] = {0};

    while (*text != '\0') {
        alphabet[*text - 'a'] += 1;
        text ++;
    }

    int balloon[5] = {1,0,11,14,13};
    int min = 1000000;
    for (int i = 0; i < 5; ++i) {
        if(balloon[i] == 11) {
            if((alphabet[balloon[i]] - 1) / 2 < min) min = alphabet[balloon[i]];
            continue;
        }
        if(balloon[i] == 14) {
            if((alphabet[balloon[i]] - 1) / 2 < min) min = alphabet[balloon[i]];
            continue;
        }
        if(alphabet[balloon[i]] < min) min = alphabet[balloon[i]];

    }

    return min;

}