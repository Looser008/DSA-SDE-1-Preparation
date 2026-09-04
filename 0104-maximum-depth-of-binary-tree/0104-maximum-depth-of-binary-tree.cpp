/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int ans = INT_MIN;
    int maxDepthTree(TreeNode* root)
    {
      if(root == nullptr)
      {
        return 0;
      }
      int leftdepth = maxDepthTree(root->left);
      int rightdepth = maxDepthTree(root->right);
      count = 1+max(leftdepth, rightdepth);
      return count;
    }
    int maxDepth(TreeNode* root) {
        return maxDepthTree(root);
    }
};