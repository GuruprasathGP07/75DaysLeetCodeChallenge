class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        vector<int>st;
        st.push_back(-1);

        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push_back(i);
            else if(s[i]==')'){
                st.pop_back();
                if(st.empty()) st.push_back(i);
                else ans=max(ans,i-st.back());
            }
        }
        return ans;
        
    }
};