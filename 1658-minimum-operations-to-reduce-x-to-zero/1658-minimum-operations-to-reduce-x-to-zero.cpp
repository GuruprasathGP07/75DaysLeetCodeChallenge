class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for (int v:nums){
            total+= v;
        }
        int t=total-x;
        if (t<0) return -1;
        if (t==0) return nums.size();
        int left=0,s=0;
        int ans=-1;

        for(int i=0;i<nums.size();i++){
            s+= nums[i];
            while(left<=i && s>t){
                s-=nums[left];
                left++;
            }
            if(s==t){
                ans=max(ans,i-left+1);
            }
        }
        return (ans==-1)?-1:(nums.size()-ans);
    }
};