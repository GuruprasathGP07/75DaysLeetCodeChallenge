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
    int findBottomLeftValue(TreeNode* root) {

        if(root->left==nullptr && root->right==nullptr) return root->val;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        int l=1;
        int currl=-1;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* c=q.front();
                q.pop();
                if(i==0) ans=c->val;
                if(c->left!=nullptr){
                    q.push(c->left);
                }
                if(c->right!=nullptr) q.push(c->right);
            }
        }
        return ans;
        
    }
};