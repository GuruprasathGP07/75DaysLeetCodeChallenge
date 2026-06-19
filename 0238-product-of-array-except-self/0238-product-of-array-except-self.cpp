class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int  z=0,pro=1;   
     for(int i:nums){
        if(i==0)z++;       
        else pro*=i;
     } 
     for(int i=0;i<nums.size();i++){
        if(z>1) nums[i]=0;
        else if(z==1){
            if(nums[i]==0) nums[i]=pro;
            else nums[i]=0;
        }
        else{
            nums[i]=pro/nums[i];
        }
     }
     return nums;
    }
};