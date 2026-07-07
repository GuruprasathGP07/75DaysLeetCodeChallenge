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
    int countnodes(TreeNode* temp){
        if(temp==nullptr) return 0;
        int l=countnodes(temp->left);
        int r=countnodes(temp->right);

        return l+r+1;
    } 
    bool isComplete(TreeNode* root,int i,int total){
        if(root==nullptr) return true;
        if(i>=total) return false;
        // left index
        bool l=isComplete(root->left,2*i+1,total);
        //right 
        bool r=isComplete(root->right,2*i+2,total);

        return l && r;
    }
    bool isCompleteTree(TreeNode* root) {
        int total=countnodes(root);
        return isComplete(root,0,total);
        
    }
};