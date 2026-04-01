class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        int n=p.size();
        vector<pair<int,int>>pos;
        for(int i=0;i<n;i++)pos.push_back({p[i],i});
        sort(pos.begin(),pos.end());
        stack<int>st;
        for(auto &[pos, i]:pos) {
            if(d[i]=='R'){
                st.push(i);
            }
            else{
                while(!st.empty() &&h[i]>0) {
                    int r=st.top();
                    if(h[r]<h[i]) {
                        h[i]--;
                        h[r]= 0;
                        st.pop();
                    } else if(h[r]==h[i]) {
                        h[i]=0;
                        h[r]=0;
                        st.pop();
                    }
                    else{
                        h[r]--;
                        h[i]=0;
                    }
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(h[i]>0){
                ans.push_back(h[i]);
            }
        }
        return ans;
    }
};