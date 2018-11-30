/*
 * =====================================================================================
 *
 *       Filename:  insert_into_a_binary_search_tree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/30/2018 02:49:32 PM
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
};


struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
	if (root == NULL) {
		struct TreeNode *node = (struct TreeNode*) calloc(sizeof(struct TreeNode));
		(*node).val = val;
		root = node;
	}
	if (val < (*root).val) {
		(*root).left = insertIntoBST((*root).left, val);
    }
	if (val > (*root).val) {
		(*root).right = insertIntoBST((*root).right, val);
    }

	return root;
}
