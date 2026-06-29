class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(c=='(' || c=='[' || c=='{')st.push(c);
                else if(c=='}' || c==']' || c==')'){
                    char check=st.top();
                    if(!st.empty()&& check=='(' && c==')')st.pop();
                    else if(!st.empty()&& check=='{' && c=='}')st.pop();
                    else if(!st.empty()&& check=='[' && c==']')st.pop();
                    else return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
        
    }
};