class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n=s.size();
        vector<int>l(26,n),r(26,-1);
        for(int i=0;i<n;i++){
            int c=s[i]-'a';
            l[c]=min(l[c],i);
            r[c]=max(r[c],i);
        }

        vector<pair<int,int>>segs;
        for(int i=0;i<26;i++){
            if(r[i]==-1) continue;
            int start=l[i];
            int end= r[i];
            bool ok=true;
            for(int j=start;j<=end;j++){
                int c=s[j]-'a';
                if(l[c]<start){
                    ok=false;
                    break;
                }

                end=max(end,r[c]);
            }
            if(ok==true){
                segs.push_back({end,start});
            }
        }
        sort(segs.begin(),segs.end());
        vector<string> ans;
        int last=-1;
        for(auto& p:segs){
            int end=p.first;
            int start=p.second;
            if(start>last){
                ans.push_back(s.substr(start,end-start+1));
                last=end;
            }
        }
        return ans;
    }
};