class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n=s.size();
        int ans=0;
        int last=-1;
        for(int i=0;i<2*n-1;i++){
            int l=i/2;
            int r=l+(i%2);
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>=k) {
                    if(l>last){
                        ans++;
                        last=r;
                        break;
                    }
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};