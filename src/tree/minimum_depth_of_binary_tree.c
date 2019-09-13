//
// Created by hsuehyuan li on 2019-09-13.
//

#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int minDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if (left == 0) return right + 1;
    if (right == 0) return left + 1;
    return left < right ? left + 1 : right + 1;
}
