class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>ans(t.size(),0);
        for(int i=t.size()-1;i>=0;i--){
            while(!st.empty() && t[st.top()]<=t[i]){
                st.pop();
            }
            if(st.empty()) ans[i]=0;
            else if (t[st.top()]>t[i]) ans[i]=(st.top()-i);
            st.push(i);
        }
        return ans;
    }
};