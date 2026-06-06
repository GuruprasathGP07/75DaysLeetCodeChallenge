class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>lsum;
        vector<int>rsum(n);
        int l=0,r=0;
        for(int i=0;i<nums.size();i++){
            lsum.push_back(l);
            l+=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            rsum[i]=r;
            r+=nums[i];
        }      
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(abs(lsum[i]-rsum[i]));
            
        }
        return ans;
    }
};