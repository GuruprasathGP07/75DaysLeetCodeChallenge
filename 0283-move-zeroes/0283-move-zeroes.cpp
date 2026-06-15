class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointers
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]==0){
                r++;
            }
            else{
                int t=nums[l];
                nums[l]=nums[r];
                nums[r]=t;
                l++;
                r++;

            }
        }
        
    }
};