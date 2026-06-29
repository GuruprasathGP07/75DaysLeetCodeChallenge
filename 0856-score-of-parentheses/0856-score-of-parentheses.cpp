class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0,c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
            }
            else if(s[i]==')'){
                c--;
                if(s[i-1]=='(')ans+=pow(2,c);
            }
        }
        return ans;
        
    }
};