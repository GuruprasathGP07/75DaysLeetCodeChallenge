class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int ans=INT_MIN;
        for(int i=0;i<s.length();i++){
            int c=0;
            unordered_set<char>seen;
            for(int j=i;j<s.length();j++){
                if(!seen.contains(s[j])){
                    c++;
                    seen.insert(s[j]);

                }
                else {
                    break;
                }
            }
            ans=max(ans,c);
        }
        return ans;
    }
};