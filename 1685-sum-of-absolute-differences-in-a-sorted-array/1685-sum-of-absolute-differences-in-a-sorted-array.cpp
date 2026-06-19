class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        //prefix sum 
        int n= nums.size();
        vector<int>prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int tsum=prefix[n-1];
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int lsum=(i==0)?0:prefix[i-1];
            int r=(nums[i]*i)-lsum;
            int rf=tsum-prefix[i]- nums[i]*(n-i-1);
            res[i]=r+rf;
        }
        return res;
    }
};