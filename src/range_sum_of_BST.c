/*
 * =====================================================================================
 *
 *       Filename:  range_sum_of_BST.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018/11/28 21时36分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xueyuanl 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}

int rangeSumBST(struct TreeNode* root, int L, int R) {
	if (root == NULL) {
		return 0;
	}
	if (L > R) {
		return 0;
	}
	if ((*root).val < L) {
		return rangFSumBST((*root).right, L, R);
	}
	if ((*root).val > R) {
		return rangeSumBST((*root).left, L, R);
	}
	return (*root).val + rangeSumBST((*root).left, L, (*root).val - 1) + rangeSumBST((*root).right, (*root).val + 1, R);
	

}
