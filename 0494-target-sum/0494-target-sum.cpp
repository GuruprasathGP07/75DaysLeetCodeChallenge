class Solution {
public:
    int findit(int i,int sum,vector<int>&
    nums,int target){
        if(i==nums.size()){
            if(sum==target) return 1;
            return 0;
        }
        int plus=findit(i+1,sum+nums[i],nums,target);
        int minus=findit(i+1,sum-nums[i],nums,target);
        return plus+minus;
        

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int ans=findit(0,sum,nums,target);
        return ans;
    }
};