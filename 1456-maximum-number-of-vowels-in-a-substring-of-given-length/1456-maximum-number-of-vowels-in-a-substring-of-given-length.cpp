class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' ||c=='i' || c=='o' || c=='u') return true;
        return false;

    }
    int maxVowels(string s, int k) {
        //sliding window
        int l=0,r=0;
        int fans=INT_MIN,ans=0;
        while(r<s.length()){
            if(isvowel(s[r]) ){
                ans++;

            }
            if(r-l+1==k){
                fans=max(fans,ans);
                if(isvowel(s[l])) ans-=1;
                l++;
            }
            r++;
        }
        return fans;
        
    }
};