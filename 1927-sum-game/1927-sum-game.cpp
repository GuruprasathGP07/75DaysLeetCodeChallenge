class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        double s=0;
        for(int i=0;i<n/2;i++) {
            if(num[i]=='?')s+=4.5;
            else s+=(num[i]-'0');
        }
        for(int i=n/2;i<n;i++) {
            if(num[i]=='?')s-=4.5;
            else s-=(num[i]-'0');
        }
        return s!=0.0;
    }
};