class Solution {
public:
    //recursion method
    int minsum(int m,int n,vector<vector<int>>&g,vector<vector<int>>&dp){
        if(m<0 || n<0) return INT_MAX;
        if(m==0 && n==0 ) return g[0][0];
        if(dp[m][n]!=-1) return dp[m][n];
        int l=minsum(m,n-1,g,dp);
        int r=minsum(m-1,n,g,dp);
        return dp[m][n]=g[m][n]+min(l,r);
        }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return minsum(m-1,n-1,grid,dp);
    }
};