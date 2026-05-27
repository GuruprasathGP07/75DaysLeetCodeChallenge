class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool>u(26,false),l(26,false),checked(26,false);
        int ans=0;

        for(char c:word){
            if(c>='a' && c<='z'){
                
                if(l[c-'a']==true && u[c-'a']==true && checked[c-'a']==true){
                    ans--;
                    checked[c-'a']=false;
                }

                l[c-'a']=true;
            }
            else{
                if(l[c-'A']==true && u[c-'A']==false){
                    ans++;
                    checked[c-'A']=true;
                }
                u[c-'A']=true;
            }
        }
        return ans;
        
    }
};