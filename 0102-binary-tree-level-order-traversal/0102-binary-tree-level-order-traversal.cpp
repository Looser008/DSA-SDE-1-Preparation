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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        if(root == nullptr) {
            return ans;
        }
        que.push(root);
        while(!que.empty()) {
            vector<int> temp;
            int siz = que.size();
            while(siz > 0) {
                TreeNode* nod = que.front();
                temp.push_back(nod->val);
                que.pop();
                if(nod->left) {
                    que.push(nod->left);
                }
                if(nod->right) {
                    que.push(nod->right);
                }
                siz--;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};