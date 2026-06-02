class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld,
                           vector<int>& ws, vector<int>& wd) {

        int ans=1e9;
        for(int i=0;i<ls.size();i++){
            for(int j=0;j<ws.size();j++){

                int t1=ls[i]+ld[i];
                int f1=max(t1,ws[j])+wd[j];
                ans=min(ans,f1);
                int t2=ws[j]+wd[j];
                int f2=max(t2,ls[i])+ld[i];
                ans=min(ans,f2);
            }
        }
        return ans;
    }
};