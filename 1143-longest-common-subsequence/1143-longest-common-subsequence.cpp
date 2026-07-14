class Solution {
public:
    int find(int n1,int n2,string& t1,string& t2,vector<vector<int>>&dp){
        if(n1<0 || n2<0) return 0;
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        if(t1[n1]==t2[n2]) return dp[n1][n2]=1+find(n1-1,n2-1,t1,t2,dp);
        int l=find(n1,n2-1,t1,t2,dp);
        int r=find(n1-1,n2,t1,t2,dp);
        return dp[n1][n2]=max(l,r);
    }
    int longestCommonSubsequence(string t1,string t2) {
        int n1=t1.length();
        int n2=t2.length();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return find(n1-1,n2-1,t1,t2,dp);
    }
};