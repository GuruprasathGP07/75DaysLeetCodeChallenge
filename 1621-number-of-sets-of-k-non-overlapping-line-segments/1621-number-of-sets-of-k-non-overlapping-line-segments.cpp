class Solution {
public:
    int numberOfSets(int n, int k) {
        int MOD=1e9+7;
        int total=n+k-1;
        int m=2*k;
        vector<vector<int>> c(total+1,vector<int>(m+1,0));
        for(int i=0;i<=total;i++){
            c[i][0] =1;
            
            for(int j=1;j<=min(i,m);j++){
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
            }
        }
        return c[total][m];
    }
};