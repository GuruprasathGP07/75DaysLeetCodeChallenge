class Solution{
public:
    int distinctSubseqII(string s){
        int n=s.length();
        long long mod=1000000007;
        vector<long long>dp(n+1,0);
        vector<int>last(26,-1);
        dp[0]=1;

        for(int i=1;i<=n;i++){
            dp[i]=(dp[i-1]*2)%mod;
            int charIdx=s[i-1]-'a';
        if(last[charIdx]!=-1) dp[i]=(dp[i]-dp[last[charIdx]-1]+mod) %mod;
            
            last[charIdx]=i;
        }
        return(dp[n]-1+mod)%mod;
    }
};