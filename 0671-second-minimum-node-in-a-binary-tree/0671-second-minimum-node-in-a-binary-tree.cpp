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
    void findmin(TreeNode* root,long long int &min){
        if(root==nullptr) return;
        if(root->val<min) min=root->val;
        findmin(root->left,min);
        findmin(root->right,min);
    }
    void findmin2(TreeNode* root,long long int min,long long int &min2){
        if(root==nullptr) return;
        if(root->val<min2 && root->val!=min) min2=root->val;
        findmin2(root->left,min,min2);
        findmin2(root->right,min,min2);
    }
    int findSecondMinimumValue(TreeNode* root) {
        long long int min=LLONG_MAX;
        findmin(root,min);

        long long int min2=LLONG_MAX;
        findmin2(root,min,min2);
        return min2;
        
    }
};