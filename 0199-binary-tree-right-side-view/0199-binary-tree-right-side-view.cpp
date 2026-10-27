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





//  BFS approach
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> que;
        if(root == nullptr) {
            return ans;
        }
        que.push(root);
        while(!que.empty()) {
            int siz = que.size();
            int i = 0;
            while(i < siz) {
                TreeNode* nod = que.front();
                if(i == siz-1) {
                    ans.push_back(nod->val);
                }
                que.pop();
                if(nod->left){
                    que.push(nod->left);
                }
                if(nod->right){
                    que.push(nod->right);
                }
                i++;
            }
        }
        return ans;
    }
};