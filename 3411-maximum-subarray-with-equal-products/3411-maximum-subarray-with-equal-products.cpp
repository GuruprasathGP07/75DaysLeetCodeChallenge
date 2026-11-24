class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            long long int l=1,g=0;
            long long int p=1;
            for(int j=i;j<nums.size();j++){
                if(p>LLONG_MAX/nums[j]) break;
                p*=nums[j];
                if(g==0) g=nums[j];
                else g=gcd(nums[j],g);

                l=(l/gcd<long long ,long long>(l,nums[j]))*nums[j];
                if(p==l*g) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};