/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
  int rangeSumBST(TreeNode *root, int L, int R)
  {
    int result = 0;
    if (!root)
      return 0;

    if (root->val >= L && root->val <= R)
      result += root->val;

    if (root->val > L)
      result += rangeSumBST(root->left, L, R);
    if (root->val < R)
      result += rangeSumBST(root->right, L, R);

    return result;
  }
};