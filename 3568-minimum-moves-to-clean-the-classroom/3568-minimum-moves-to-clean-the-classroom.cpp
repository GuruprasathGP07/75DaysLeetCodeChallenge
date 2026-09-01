class Solution {
public:
    int minMoves(vector<string>& g, int e) {
        int m=g.size();
        int n=g[0].size();
        int sr=-1,sc=-1,lc=0;
        int id[20][20];
        memset(id,-1,sizeof(id));
        for(int r=0;r<m;++r){
            for(int c=0;c<n;++c){
                if(g[r][c]=='S'){
                    sr=r;
                    sc=c;
                }else if(g[r][c]=='L'){
                    id[r][c]=lc++;
                }
            }
        }
        int tm=(1<<lc)-1;
        if(tm==0)return 0;
        int be[20][20][1024];
        memset(be,-1,sizeof(be));
        queue<vector<int>> q;
        q.push({sr,sc,0,e});
        be[sr][sc][0]=e;
        int ms=0;
        int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int sz=q.size();


            while(sz--){
                auto cu=q.front();
                q.pop();
                int r=cu[0];
                int c=cu[1];
                int mk=cu[2];
                int ce=cu[3];
                if(mk==tm)return ms;
                if(ce==0)continue;
                for(auto& dr:d){
                    int nr=r+dr[0];
                    int nc=c+dr[1];
                    if(nr >=0 && nr<m && nc>=0 && nc<n && g[nr][nc]!='X'){
                        int nm=mk;
                        if(g[nr][nc]=='L'&&id[nr][nc]!=-1){
                            nm|=(1<<id[nr][nc]);
                        }
                        int ne=(g[nr][nc]=='R')?e:ce-1;
                        if(ne>be[nr][nc][nm]){
                            be[nr][nc][nm]=ne;
                            q.push({nr,nc,nm,ne});
                        }
                    }
                }
            }
            ms++;
        }

        return -1;
    }
};