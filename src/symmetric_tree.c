#include <stdlib.h>

bool isSymetricHelp (struct TreeNode* left, struct TreeNode* right) {
  if (left == NULL && right == NULL) return true;
  if (left == NULL || right == NULL) return false;
  if (left->val != right->val) return false;
  return isSymetricHelp(left->left, right->right) && isSymetricHelp(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
  if (root == NULL) return true;
  return isSymetricHelp(root->left, root->right);
}
