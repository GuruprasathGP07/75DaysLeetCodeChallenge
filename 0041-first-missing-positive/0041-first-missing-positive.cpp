class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool>check(n+1,false);
        for(int n1:nums){
            if(n1>0 && n1<=n){
                check[n1]=true;
            }
        }
        for(int i=1;i<=n;i++){
            if(!check[i]){
                return i;
            }
        }
        return n+1;
    }
};
