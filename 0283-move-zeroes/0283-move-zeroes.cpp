class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointers
        int l=0,r=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
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