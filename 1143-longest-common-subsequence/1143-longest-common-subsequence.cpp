class Solution {
public:
    int LCS(int n1,int n2,string &t1,string &t2,vector<vector<int>>&dp){
        if(n1<0 || n2<0 ) return 0;
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(t1[i-1]==t2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else{
                    int l=dp[i][j-1];
                    int r=dp[i-1][j];
                    dp[i][j]= max(l,r);
                }
            }
        }
        return dp[n1][n2];
    }
    //tabulation method
    int longestCommonSubsequence(string t1,string t2) {
        int n1=t1.length();
        int n2=t2.length();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        return LCS(n1,n2,t1,t2,dp);
    }
};