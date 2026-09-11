/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    int Sum(TreeNode* root, int &count) {
        if(root == nullptr) {
            return 0;
        }
        count++;
        int l = Sum(root->left, count);
        int r = Sum(root->right, count);
        return l+r+root->val;
    }
    void solve(TreeNode* root) {
        if(root == nullptr) {
            return;
        }
        int count = 0;
        int totalSum = Sum(root,count);
        if(root->val == totalSum/count) {
            ans++;
        }
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        solve(root);
        return ans;
    }
};