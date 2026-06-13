class Solution {
public:
    int mapans(vector<int>&weights, string s){
        int a=0;
        for(int i=0;i<s.length();i++){
            a+=weights[s[i]-'a'];
        }
        return (a%26);
    }
    string mapWordWeights(vector<string>& w, vector<int>& weights) {
        string ans="";
        for(int i=0;i<w.size();i++){
            string a=w[i];
            int r= mapans(weights,a);
            ans+=char('a'+(26-r-1));
            
        }
        return ans;
    }
};