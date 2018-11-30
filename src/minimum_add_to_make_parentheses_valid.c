/*
 * =====================================================================================
 *
 *       Filename:  minimum_add_to_make_parentheses_valid.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/30/2018 04:17:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xueyuanl
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>

int minAddToMakeValid(char* S) {
	int res = 0;
	int expect = 0; //expect ')'
	while(*S != '\0') {
		if(*S == '(') {
			expect ++;
		}
		if(*S == ')') {
			if(expect > 0) {
				expect --;
			}else {
				res ++;
			}
		}
		S ++;
	}
	return res + expect;
}
