class Solution {
public:
    char processStr(string s, long long k) {
        /*string ans="";
        for(char c:s){
            if(isalpha(c)) ans+=c;
            else if(c=='#'){
                ans+=ans;
            }
            else if(c=='*'){
                if(!ans.empty())ans.pop_back();
            }
            else{
                reverse(ans.begin(),ans.end());
            }
        }
        if(ans.empty() || k>ans.size()-1) return '.';
        return ans[k];*/
        long long l=0;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])) l++;
            else if(s[i]=='*' && l!=0) l--;
            else if(s[i]=='#') l*=2; 
        }
        if(k>l-1) return '.';
        for(int i=s.length()-1;i>=0;i--){
            if(isalpha(s[i])){
                if(k==l-1)return s[i];
            l--;
            }
            else if(s[i]=='#'){
                l/=2;
                k%=l;
            }
            else if(s[i]=='%'){
                k=l-k-1;
            }
            else l++;
        }
        return 0;
    }
};