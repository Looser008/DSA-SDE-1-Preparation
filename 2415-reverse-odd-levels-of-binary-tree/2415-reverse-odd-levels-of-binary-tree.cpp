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
    void solve(TreeNode* left, TreeNode* right, int levels) {
        if(left == nullptr || right == nullptr) {
            return;
        }
        if(levels % 2 == 0) {
            swap(left->val, right->val);
        }
        levels++;
        solve(left->left, right->right, levels);
        solve(left->right, right->left, levels);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        int levels = 0;
        solve(root->left, root->right, levels);
        return root;
    }
};