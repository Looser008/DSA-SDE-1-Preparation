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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> temp;
        if(root == nullptr) {
            return temp;
        }
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()) {
            int siz = que.size();
            vector<int> ans;
            while(siz--) {
                TreeNode* node = que.front();
                ans.push_back(node->val);
                if(node->left) {
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
                que.pop();
            }
            temp.push_back(ans);
        }
        for(int i = 0; i < temp.size(); i++) {
            if(i % 2 != 0) {
                reverse(temp[i].begin(), temp[i].end());
            }
        }
        return temp;
    }
};