class Solution {
public:
    long long minimumSteps(string s) {
        /*int l=0,r=1;
        int n=s.length();
        long long ans=0;
        while(l<n){
            if(s[l]=='1' && s[r]=='0'){
                s[l]=0;
                s[r]=1;
                l++;
                r++;
                ans++;
            }
        }
        return ans;
        */
        long long ans=0;
        int bl=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='1') bl++;
            else ans+=bl;
        }
        return ans;
    }
};