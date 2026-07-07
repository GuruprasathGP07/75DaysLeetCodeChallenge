class Solution {
public:
    int sum(TreeNode* root,int curr){
        if(root==nullptr) return 0;
        curr=(curr*10)+root->val;
        if(root->left==nullptr && root->right==nullptr) return curr;
        int l=sum(root->left,curr);
        int r=sum(root->right,curr);

        return l+r;
    }
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};