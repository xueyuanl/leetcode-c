//
// Created by pat on 19-5-13.
//

#include <stdlib.h>
#include <stdbool.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


bool isUnivalTree(struct TreeNode *root) {
    if (NULL == root) {
        return true;
    }
    int root_val = (*root).val;
    int left_val = root_val;
    int right_val = root_val;
    if (NULL != root->left) {
        left_val = root->left->val;
    }
    if (NULL != root->right) {
        right_val = root->right->val;
    }

    return root_val == left_val && root_val == right_val
            && isUnivalTree(root->left)
            && isUnivalTree(root->right);
}