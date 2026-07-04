class Solution {
public:
    void findsub(int i,vector<int>&nums,set<vector<int>>&ans,vector<int>temp){
        if(i==nums.size()){
        if(temp.size()>=2){
            ans.insert(temp);
        }
            return;
        }
        if(i>nums.size()) return;

        // pick
        if(temp.size()==0 || temp[temp.size()-1]<=nums[i]){
            temp.push_back(nums[i]);
        }
        findsub(i+1,nums,ans,temp);
        temp.pop_back();

        // not pick
        findsub(i+1,nums,ans,temp);


    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        findsub(0,nums,ans,temp);
        vector<vector<int>>an;
        for(vector<int> i:ans){
            an.push_back(i);
        }
        return an;
        
    }
};