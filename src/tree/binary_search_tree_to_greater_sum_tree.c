//
// Created by pat on 19-5-14.
//

#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void sum_node(struct TreeNode *root, int *sum) {
    if (NULL == root) return;
    sum_node(root->right, sum);
    *sum = *sum + root->val;
    root->val = *sum;
    sum_node(root->left, sum);
}

struct TreeNode *bstToGst(struct TreeNode *root) {
    int sum = 0;
    sum_node(root, &sum);
    return root;
}
