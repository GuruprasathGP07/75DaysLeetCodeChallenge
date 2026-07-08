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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>st;
        st.push(root);
        if(root==nullptr) return ans;
        while(!st.empty()){
            int n=st.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* c=st.front() ;
                st.pop();
                temp.push_back(c->val);
                if(c->left!=nullptr) st.push(c->left);
                if(c->right!=nullptr) st.push(c->right);
            }
            ans.push_back(temp);
        }  
        return ans;
    }
};