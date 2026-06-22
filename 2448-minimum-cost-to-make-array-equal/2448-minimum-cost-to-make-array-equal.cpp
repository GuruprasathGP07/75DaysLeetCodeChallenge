class Solution {
public:
    long long int findcost(vector<int>nums,vector<int>cost,int k){
        long long int c=0;
        for(int i=0;i<nums.size();i++){
            c+=(long long)abs(nums[i]-k)*cost[i];
        }
        return c;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int l=INT_MAX,r=INT_MIN;
        for(int i:nums){
            if(i<l) l=i;
            if(i>r) r=i;
         }
    
        long long int ans;
        while(l<=r){
            int m=(l+r)/2;
           long long c1=findcost(nums,cost,m);
           long long c2=findcost(nums,cost,m+1);
            ans=min(c1,c2);
            if(c1<=c2) r=m-1; 
            else if(c1>c2) l=m+1; 
        }
        return ans;
    }
};