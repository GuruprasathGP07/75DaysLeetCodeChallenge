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
    int ans=0;
    int rangeSum(TreeNode* root, int low, int high) {
        if(root==nullptr) return 0;
        if(root->val>=low && root->val<=high) ans+=root->val;
        rangeSum(root->left,low, high);
        rangeSum(root->right,low,high);   

        return ans;

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeSum(root,low,high);
    }
};