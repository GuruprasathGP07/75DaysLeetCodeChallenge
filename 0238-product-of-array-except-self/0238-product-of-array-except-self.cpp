class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>lp(nums.size());
        lp[0]=1;
        for(int i=1;i<nums.size();i++){
            lp[i]=lp[i-1]*nums[i-1];
        }
        int rp=1;
        for(int i=nums.size()-1;i>=0;i--){
            lp[i]=rp*lp[i];
            rp*=nums[i];
        }
        return lp;
    }
};