class Solution {
public:
    int countServers(vector<vector<int>>& g){
        
        int n=g.size();
        int m=g[0].size();
        vector<int>r(n,0),c(m,0);
        int ans=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[i].size();j++){
                if(g[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
         for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(g[i][j]==1 &&(r[i]>1 || c[j]>1))ans++;
            }
        }
        return ans;
    }
};