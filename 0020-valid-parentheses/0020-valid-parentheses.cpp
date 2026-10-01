class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(st.empty()) st.push(c);
            else{
                if(c=='(' || c=='{' || c=='[') st.push(c);
                else{
                    if(st.top()=='(' && c==')') st.pop();
                    else if(st.top()=='[' && c==']') st.pop();
                    else if(st.top()=='{' && c=='}') st.pop();
                    else return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};