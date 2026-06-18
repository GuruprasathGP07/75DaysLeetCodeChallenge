class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        //prefix sum 
        vector<int>ans(nums.size());
        vector<int>l(nums.size());
        l[0]=0;
        for(int i=1;i<nums.size();i++){
            l[i]=l[i-1]+nums[i-1];
        }
        vector<int>r(nums.size());
        r[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            r[i]=r[i+1]+nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=abs(l[i]-r[i]);
        }
        return ans;
    }
};