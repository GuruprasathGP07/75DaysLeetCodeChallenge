class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //two poointers 
        
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]==val){
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
        return l;
    }
};