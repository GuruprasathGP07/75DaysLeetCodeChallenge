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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return checksym(root->left,root->right);
    }
    bool checksym(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr && q!=nullptr) return false;
        if(p!=nullptr && q==nullptr) return false;
        if(p->val!=q->val) return false;
        bool l=checksym(p->left,q->right);
        bool r=checksym(p->right,q->left);
        return r&&l;
    }

};