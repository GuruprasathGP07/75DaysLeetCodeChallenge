class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;
        int c=0,z=0,ans=INT_MIN;
        while(r<nums.size()){
            if(nums[r]==1) c++;
            else z++;
            int t=c+z;
            while(z>k){
                if(nums[l]==1) c--;
                else z--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
        
    }
};