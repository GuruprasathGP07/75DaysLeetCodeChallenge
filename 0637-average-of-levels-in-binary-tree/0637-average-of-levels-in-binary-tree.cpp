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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            long long int s=0;
            for(int i=0;i<n;i++){
                TreeNode* c=q.front();
                q.pop();
                s+=c->val;
                if(c->left!=nullptr) q.push(c->left);
                if(c->right!=nullptr) q.push(c->right);
            }
            ans.push_back((double)s/n);
        }
        return ans;
        
    }
};