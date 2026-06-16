class Solution {
public:
    string processStr(string s) {
        string st="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) st+=s[i];
            else if(s[i]=='*' && !st.empty()) st.pop_back();
            else if(s[i]=='#' && !st.empty()){
               st+=st;
            }
            else{
                reverse(st.begin(),st.end());
            }
        }
        return st;
    }
};