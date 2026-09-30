class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long>tot(k,0);
        vector<long long>dp(k, 0);
        for(int x:nums){
            vector<long long>next(k,0);
            int mod=x%k;
            next[mod]++;
            for(int r=0;r<k;r++){
                if(dp[r]>0){
                    int n=(r*mod)%k;
                    next[n]+=dp[r];
                }
            }
            for(int r=0;r<k;r++){
                tot[r]+=next[r];
            }
            dp=next;
        }
        return tot;
    }
};