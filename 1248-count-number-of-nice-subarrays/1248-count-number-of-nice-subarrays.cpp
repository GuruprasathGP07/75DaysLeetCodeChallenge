class Solution {
public:
    int atmostodd(vector<int>&nums,int k){
        int l=0,r=0;
        int odd=0,ans=0;
        while(r<nums.size()){
            if(nums[r]%2!=0) odd++;
            while(odd>k){
                if(nums[l]%2!=0)odd--;
                l++;
            }
            if(odd<=k){
                ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostodd(nums,k)-atmostodd(nums,k-1);
    }
};