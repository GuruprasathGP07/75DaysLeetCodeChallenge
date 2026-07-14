class Solution {
public:
// recursion 
    int unique(int i,int j,vector<vector<int>>&obs,vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(obs[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int l=unique(i,j-1,obs,dp);
        int up=unique(i-1,j,obs,dp);

        return dp[i][j]=l+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs){
        int m=obs.size();
        int n=obs[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return unique(obs.size()-1,obs[0].size()-1,obs,dp);
    }
};