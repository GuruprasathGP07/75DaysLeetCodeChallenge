class Solution {
public:
    string makeSmallestPalindrome(string s) {
        //two pointers 
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r] && s[l]>s[r]){
                s[l]=s[r];
            }
            else if(s[l]!=s[r] && s[r]>s[l]){
                s[r]=s[l];
            }
            l++;
            r--;
        }
        return s;
    }
};