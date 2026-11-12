class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.empty())return 0;
        int ml=1,il=1,dl=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                il++;
                dl=1;
            }
            else if(nums[i]<nums[i-1]){
                dl++;
                il=1;
            }
            else{
                il=1;
                dl=1;
            }
            ml=max({ml,il,dl});
        }
        return ml;
    }
};