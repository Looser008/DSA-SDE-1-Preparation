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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if(root == nullptr)
        {
            return 0;
        }
        que.push(root);
        if(root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }
        int ans = 0;
        while(!que.empty())
        {
            ans++;
            int siz = que.size();
            while(siz > 0)
            {
                TreeNode* node = que.front();
                que.pop();
                if(node->left == nullptr && node->right == nullptr)
                {
                    return ans;
                }
                if(node->left != nullptr)
                {
                    que.push(node->left);
                }
                if(node->right != nullptr)
                {
                    que.push(node->right);
                }
                siz--;
            }
        }
        return ans;
    }
};