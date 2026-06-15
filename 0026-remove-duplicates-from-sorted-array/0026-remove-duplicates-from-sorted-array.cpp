class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //two pointers 
        int r=1,l=0;
        while(r<nums.size()){
            if(nums[l]==nums[r]){
                r++;
            }
            else{
                l++;
                int t=nums[l];
                nums[l]=nums[r];
                nums[r]=t;
                
                r++;

            }
        }
        return l+1;
        
    }
};