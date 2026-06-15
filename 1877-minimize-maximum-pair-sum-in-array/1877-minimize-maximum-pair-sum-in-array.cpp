class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        /*
        for(int i=0;i<nums.size()/2;i++){
            ans=max(ans,(nums[i]+nums[n-i-1]));
        }
        return ans;
        */
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            ans=max(ans,(nums[l]+nums[r]));
            l++;
            r--;
        }
        return ans;
    }
};