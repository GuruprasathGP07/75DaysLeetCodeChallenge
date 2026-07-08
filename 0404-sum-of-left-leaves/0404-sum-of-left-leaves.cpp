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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            TreeNode* c=new TreeNode(0);
            for(int i=0;i<n;i++){
                c=q.front();
                q.pop();
                if(c->left!=nullptr){
                    if(c->left->left==nullptr && c->left->right==nullptr) ans+=c->left->val; 
                    q.push(c->left);
                }
                if(c->right!=nullptr) q.push(c->right);
            }
        }
        return ans;
    }
};