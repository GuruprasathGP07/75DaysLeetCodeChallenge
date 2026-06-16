class Solution {
public:
    string processStr(string s) {
        /*stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) st.push(s[i]);
            else if(s[i]=='*' && !st.empty()) st.pop();
            else if(s[i]=='#' && !st.empty()){
                stack<char>temp=st;
                string str="";
                while(!temp.empty()){
                    str+=temp.top();
                    temp.pop();
                }
                reverse(str.begin(),str.end());
                for(char c:str){
                    st.push(c);
                }


            }
            else{
                stack<char>s;
                while(!st.empty()){
                    s.push(st.top());
                    st.pop();
                }
                swap(s,st);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        */
        string st="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) st+=s[i];
            else if(s[i]=='*' && !st.empty()) st.pop_back();
            else if(s[i]=='#' && !st.empty()){
               string t=st;
               st+=t;
            }
            else{
                reverse(st.begin(),st.end());
            }
        }
        return st;
    }
};