class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int tot=0;
        int ans=INT_MAX;
        for(int i:nums){
            tot+=i;
        }
        long long int ls=0,rs=0;
        int f=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            ls+=nums[i];
            rs=tot-ls;
            int l=ls/(i+1);
            int r=0;
            if((n-i-1)!=0)r=rs/(n-i-1);
            int ars=abs(l-r);
            if(ars<ans){
                ans=ars;
                f=i;
            }
        }
        return f;
        
    }
};