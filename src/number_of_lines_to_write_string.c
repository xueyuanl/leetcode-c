/*
 * =====================================================================================
 *
 *       Filename:  number_of_lines_to_write_string.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/24/2018 10:27:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xueyuanl
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>

int* numberOfLines(int* widths, int widthsSize, char* S, int* returnSize) {
    int count_line = 0;
    int line_number = 0;
 	
    for (int i = 0; *(S + i) != '\0'; i ++) {
        int temp = *(widths +  (*(S + i) - 'a'));
        count_line += temp;
        if (count_line > 100) {
            line_number ++;
            count_line = 0;
            i--;
        }
    }
 
    *returnSize = 2;  //the returnSize is simple as a pointer to int, set it to 2 telling we return a size of 2 int array
    int* res = (int*) malloc(2 * sizeof(int));
    *res = line_number + 1;
    *(res + 1) = count_line;
  
    return res;
 
}

