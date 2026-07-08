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
    int maxLevelSum(TreeNode* root) {
        int ans=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int mno=-1;
        int l=1;
        while(!q.empty()){
            int n=q.size();
            int s=0;
            for(int i=0;i<n;i++){
                TreeNode* c=q.front();
                q.pop();
                s+=c->val;
                if(c->left!=nullptr) q.push(c->left);
                if(c->right!=nullptr) q.push(c->right);

            }
            if(s>ans){
                ans=s;
                mno=l;
            }
            else if(s==ans){
                mno=min(mno,l);
            }
            l++;
        }
        return mno;
    }
};