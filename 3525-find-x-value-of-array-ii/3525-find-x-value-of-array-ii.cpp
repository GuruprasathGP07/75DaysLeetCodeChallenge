class Solution{
public:
    vector<int>resultArray(vector<int>&nums,int k,vector<vector<int>>&queries){
        int n=nums.size();
        int sz=1;
        while(sz<n){
            sz*=2;
        }
        vector<int>tree_prod(2*sz,1);
        vector<vector<int>>tree_cnt(2*sz,vector<int>(k,0));
        for(int i=0;i<n;i++){
            int val=nums[i]%k;
            tree_prod[sz+i]=val;
            tree_cnt[sz+i][val]=1;
        }

        for(int i=sz-1;i>=1;i--){
            int l=2*i;
            int r=2*i+1;
            tree_prod[i]=(tree_prod[l]*tree_prod[r])%k;
            for(int rem=0;rem<k;rem++){
                tree_cnt[i][rem]=tree_cnt[l][rem];
            }
            for(int rem=0;rem<k;rem++){
                int nxt=(tree_prod[l]*rem)%k;
                tree_cnt[i][nxt]+=tree_cnt[r][rem];
            }
        }
        vector<int>ans;
        ans.reserve(queries.size());

        for(int q=0;q<queries.size();q++){
            int idx=queries[q][0];
            int val=queries[q][1]%k;
            int s=queries[q][2];
            int t=queries[q][3];
            int pos=sz+idx;
            tree_prod[pos]=val;
            for(int rem=0;rem<k;rem++){
                tree_cnt[pos][rem]=0;
            }
            tree_cnt[pos][val]=1;
            pos/=2;

            while(pos>=1){
                int l=2*pos;
                int r=2*pos+1;
                tree_prod[pos]=(tree_prod[l]*tree_prod[r])%k;
                for(int rem=0;rem<k;rem++){
                    tree_cnt[pos][rem]=tree_cnt[l][rem];
                }
                for(int rem=0;rem<k;rem++){
                    int nxt=(tree_prod[l]*rem)%k;
                    tree_cnt[pos][nxt]+=tree_cnt[r][rem];
                }
                pos/=2;
            }
            int cur_prod=1;
            int cur_cnt[5]={0};

            int l=sz+s;
            int r=sz+n-1;
            vector<int>right_nodes;
            while(l<=r){
                if(l%2==1){
                    for(int rem=0;rem<k;rem++){
                        int nxt=(cur_prod*rem)%k;
                        cur_cnt[nxt]+=tree_cnt[l][rem];
                    }
                    cur_prod=(cur_prod*tree_prod[l])%k;
                    l++;
                }
                if(r%2==0){
                    right_nodes.push_back(r);
                    r--;
                }
                l/=2;
                r/=2;
            }
            for(int i=right_nodes.size()-1;i>=0;i--){
                int node=right_nodes[i];
                for(int rem=0;rem<k;rem++){
                    int nxt=(cur_prod*rem)%k;
                    cur_cnt[nxt]+=tree_cnt[node][rem];
                }
                cur_prod=(cur_prod*tree_prod[node])%k;
            }

            
            ans.push_back(cur_cnt[t]);
        }
        return ans;
    }
};