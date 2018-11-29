/*
 * =====================================================================================
 *
 *       Filename:  delete_columns_to_make_sorted.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/27/2018 02:58:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xueyuanl
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <string.h>

int minDeletionSize(char** A, int ASize) {
	
	int res = 0;
	int len = strlen(*A);
	for (int i = 0;i < len ;i ++) {
		for (int j = 0 ;j < ASize; j ++) {
			if (j + 1 < ASize && *(*(A + j) + i) > *(*(A + j + 1) + i)) {
				res ++;
				break;
			}
		}
	}
	return res;
}
