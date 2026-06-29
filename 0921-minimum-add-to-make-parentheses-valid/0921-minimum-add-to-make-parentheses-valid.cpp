class Solution {
public:
    int minAddToMakeValid(string s) {
        int front=0,back=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') front++;
            else if(s[i]==')' && front!=0) front--;
            else if(s[i]==')') back++;
        }
        return front+back;
    }
};