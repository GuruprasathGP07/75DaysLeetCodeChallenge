class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0;
        if(k<=1) return 0;
        long long int pro=1,ans=0;
        while(r<nums.size()){
            if(r<nums.size())pro*=nums[r];
            while(pro>=k){
                pro/=nums[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
        
    }
};