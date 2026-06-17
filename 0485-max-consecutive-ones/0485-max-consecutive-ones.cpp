class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0;
        int c=0,ans=INT_MIN;
        while(r<nums.size()){
            if(nums[r]==1) c++;
            else if(nums[r]!=1){
                ans=max(ans,c);
                c=0;
                
            }
            r++;

        }
        return max(c,ans);
        /*
        int c=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                ans=max(ans,c);
                c=0;
            }
            else c++;
        }
        ans=max(ans,c);
        return ans;*/
        
    }
};