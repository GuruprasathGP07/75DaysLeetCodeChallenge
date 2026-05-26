class Solution {
public:
    int numberOfSpecialChars(string word){
        int ans=0;
        vector<bool>u(26,false),l(26,false);
        for(char c:word){
            if(c>='a' && c<='z'){
                l[c-'a']=true;
            }
            else{
                u[c-'A']=true;
            }

        }
        for(int i=0;i<26;i++){
            if(l[i]&& u[i]) ans++;
        }
        return ans;
        
    }
};