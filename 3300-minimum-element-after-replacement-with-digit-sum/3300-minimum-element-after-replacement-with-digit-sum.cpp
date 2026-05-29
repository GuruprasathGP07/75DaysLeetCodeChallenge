class Solution {
public:
    int sumnum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
       int ans=INT_MAX;
       for(int i=0;i<nums.size();i++){
        ans=min(ans,sumnum(nums[i]));
       } 
       return ans;
    }
};