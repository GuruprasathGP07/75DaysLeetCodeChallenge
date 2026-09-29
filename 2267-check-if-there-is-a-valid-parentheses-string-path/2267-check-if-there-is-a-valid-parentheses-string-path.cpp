class Solution{
public:
    bool hasValidPath(vector<vector<char>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        if((m+n-1)%2!=0)return false;
        if(grid[0][0]==')'||grid[m-1][n-1]=='(')return false;
        
        bool vis[105][105][205]={false};
        queue<tuple<int,int,int>>q;
        q.push({0,0,1});
        vis[0][0][1]=true;
        
        while(!q.empty()){
            auto[r,c,bal]=q.front();
            q.pop();
            if(r==m-1 && c==n-1 && bal==0)return true;
            if(c+1<n){
                int nbal=bal+(grid[r][c+1]=='('?1:-1);
                if(nbal>=0 && nbal<=(m+n)/2 && !vis[r][c+1][nbal]){
                    vis[r][c+1][nbal]=true;
                    q.push({r,c+1,nbal});
                }
            }
            if(r+1<m){
                int nbal=bal+(grid[r+1][c]=='('?1:-1);
                if(nbal>=0 && nbal<=(m+n)/2 && !vis[r+1][c][nbal]){
                    vis[r+1][c][nbal]=true;
                    q.push({r+1,c,nbal});
                }
            }
        }
        
        return false;
    }
};