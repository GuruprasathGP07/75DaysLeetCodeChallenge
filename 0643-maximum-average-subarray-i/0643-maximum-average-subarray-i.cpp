class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window
        int l=0,r=0;
        int ans=INT_MIN,sum=0;
        while(r<nums.size()){
            sum+=nums[r];
            if(r-l+1==k){
                ans=max(ans,sum);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return (double)ans/k;
    }
};