class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }
    bool checking(string s){
        if(isvowel(s[0]) && isvowel(s[s.length()-1])) return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
        vector<int>prefix(words.size());
        if(checking(words[0])) prefix[0]=1;
        for(int i=1;i<words.size();i++){
            if(checking(words[i])) prefix[i]=prefix[i-1]+1;
            else prefix[i]=prefix[i-1];
        }
        vector<int>ans(q.size());
        for(int i=0;i<q.size();i++){
            int l=q[i][0];
            int r=q[i][1];
            if(l==0) ans[i]=prefix[r];
            else ans[i]=prefix[r]-prefix[l-1];
        }
        return ans;
    }
};