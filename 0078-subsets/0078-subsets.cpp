class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>arr;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int>ar;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                ar.push_back(nums[j]);
                }
            }
            arr.push_back(ar);
        }
        return arr;
    }
};