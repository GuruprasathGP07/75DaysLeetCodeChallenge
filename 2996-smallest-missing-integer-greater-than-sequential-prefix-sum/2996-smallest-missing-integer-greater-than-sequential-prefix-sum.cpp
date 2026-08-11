class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return nums[0]+1;
        int psum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1) psum+=nums[i];
            else break;
            
        }
        unordered_set<int>arr(nums.begin(),nums.end());
        while(true){
            if(arr.count(psum))psum++;
            else break;

        }
        return psum; 
    }
};