/*
 * =====================================================================================
 *
 *       Filename:  number_of_recent_calls.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018/11/27 20时37分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xueyuanl 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>

#define MAX_PINGS 10000

typedef struct {
    int pings [MAX_PINGS];
	int index;
} RecentCounter;

RecentCounter* recentCounterCreate() {
	RecentCounter* r = (RecentCounter*) calloc(1, sizeof(RecentCounter));
	(*r).index = 0;
	return r;
}

int recentCounterPing(RecentCounter* obj, int t) {
	(*obj).pings[(*obj).index] = t;
	(*obj).index ++;
	int temp = 0;
	for (int i = 0;i < (*obj).index; i ++ ) {
		if ((*obj).pings[i] + 3000 >= t) {
			temp = i;	
			break;
		}
	}
	return (*obj).index - temp;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
}
