class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>open;
        string res="";
        for(char ch:s){
            if(ch=='(') open.push(res.length());
            else if(ch==')'){
                int s=open.top();
                open.pop();
                reverse(res.begin()+s,res.end());
            }
            else res+=ch;
        }
        return res;
    }
};