class Solution {
public:
    int numOfStrings(vector<string>& pat,string word) {
        int ans=0;
        for(int i=0;i<pat.size();i++){
            if(word.find(pat[i])!=string::npos) ans++;
        }        
        return ans;
    }

};