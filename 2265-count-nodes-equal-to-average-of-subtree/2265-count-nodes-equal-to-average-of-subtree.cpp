class Solution {
    int ans = 0;
    void dfs(TreeNode* root,int &sum,int &c) {
        if (root==nullptr) return;
        int ls=0,lc=0;
        int rs=0,rc=0;
        dfs(root->left,ls,lc);
        dfs(root->right,rs,rc);
        sum=ls+rs+root->val;
        c=lc+rc+1;
        if (sum/c==root->val) {
            ans++;
        }
    }

public:
    int averageOfSubtree(TreeNode* root) {
        ans=0;
        int sum=0,c=0;
        dfs(root,sum,c);
        return ans;
    }
};