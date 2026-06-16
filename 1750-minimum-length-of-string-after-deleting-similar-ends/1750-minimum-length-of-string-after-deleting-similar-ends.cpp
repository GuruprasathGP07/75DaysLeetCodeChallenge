class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.length()-1;
        char c='m';
        int ans=0;
        while(l<r && s[l]==s[r]){
            c=s[l];
            while(l<r && c==s[l]) l++;
            while(l<=r && c==s[r]) r--;
            }
        
        return r-l+1;
    }
};