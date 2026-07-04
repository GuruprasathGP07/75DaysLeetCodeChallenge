class Solution {
public:
    void findsum(int i,vector<int>&cand,int target, vector<int>&temp,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i==cand.size() || target<0) return ;
        temp.push_back(cand[i]);
        findsum(i,cand,target-cand[i],temp,ans);
        temp.pop_back();
        findsum(i+1,cand,target,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        findsum(0,cand,target,temp,ans);
        return ans;
    }
};