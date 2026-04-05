class Solution {
public:
    bool judgeCircle(string m) {
        int l=0,r=0;
        for(char c:m){
            if(c=='U') l++;
            else if(c=='D')l--;
            else if(c=='L') r++;
            else r--;
        }
        if(l==0 && r==0) return true;
        return false;
        
    }
};