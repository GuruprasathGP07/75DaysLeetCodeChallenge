class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,c=0,o=0;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]==')' && !st.empty()) st.pop();
            else ans++; 
        }
        return ans+st.size();
        
    }
};