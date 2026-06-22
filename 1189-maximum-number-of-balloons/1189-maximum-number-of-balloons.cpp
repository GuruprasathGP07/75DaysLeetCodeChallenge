class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string key="balloon";
        unordered_map<char,int>ori;
        for(char c:key){
            ori[c]++;
        }
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        int ans=INT_MAX;
        for(auto &p:ori){
            ans=min(ans,(mp[p.first]/p.second));
        }
        return ans;
        
    }
};