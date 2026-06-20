class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        for(int i=0;i<n-1;i+=2){
            if(nums[i]!=nums[i+1]) return nums[i];
        }
        return  nums[nums.size()-1];
    }
};