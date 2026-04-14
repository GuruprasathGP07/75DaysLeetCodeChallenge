class Solution {
public:
    int rob(vector<int>& nums) {
        int pre1=0,pre2=0;
        for(int i=0;i<nums.size();i++){
            int temp=max(pre1,pre2+nums[i]);
            pre2=pre1;
            pre1=temp;
        }
        return pre1;
    }
};