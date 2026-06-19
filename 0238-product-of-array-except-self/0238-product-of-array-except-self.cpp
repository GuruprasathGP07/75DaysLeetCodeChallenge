class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1,zero=0;
        for(int i:nums){
            if(i==0) zero++;
            else pro*=i;
        }
        vector<int>ans(nums.size(),0);
        if(zero>1){
            return ans;
        }else if(zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=pro;
                    return ans;
                }
            }
        }else{
            for(int i=0;i<nums.size();i++){
                ans[i]=pro/nums[i];
            }
        }
        return ans;
    }
};