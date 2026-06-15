class Solution {
public:
    bool isvowel(char c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
        else return false;
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(isvowel(s[l]) && isvowel(s[r])){
                char t=s[l];
                s[l]=s[r];
                s[r]=t;
                l++;
                r--;
            }
            else if(isvowel(s[l])){
                r--;
            }
            else l++;
        }
        return s;
    }
};