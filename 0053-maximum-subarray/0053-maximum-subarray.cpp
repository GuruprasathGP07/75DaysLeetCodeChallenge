class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*vector<int>arr;
        int ans=INT_MIN;
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s+=nums[j];
                ans=max(ans,s);
            }
        }
        return ans;*/
        int r=nums[0];
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            r=max(nums[i],r+nums[i]);
            s=max(s,r);
        }
        return s;
    }
};