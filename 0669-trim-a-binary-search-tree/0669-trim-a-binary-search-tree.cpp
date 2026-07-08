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
    /*void trim(TreeNode* &root,int low,int high){
        if(root==nullptr) return;

        if(root->left!=nullptr && root->left->val<low ){
            if(root->left->left!=nullptr)root->left=root->left->left;
            else root->left==nullptr;
        }
        if(root->right!=nullptr && root->right->val>high ){
            if(root->right->right!=nullptr)root->right=root->right->right;
            else root->right==nullptr;
        }


        trim(root->left,low,high);
        trim(root->right,low,high);

    }*/
    TreeNode* trimBST(TreeNode* root, int low, int high){

        if(root==nullptr) return nullptr;
        if(root->val<low) return trimBST(root->right,low,high);
        else if(root->val>high) return trimBST(root->left,low,high);
        else{
            root->left=trimBST(root->left,low,high);
            root->right=trimBST(root->right,low,high);

            return root;
        }
    }
};

