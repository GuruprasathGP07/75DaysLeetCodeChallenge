class Solution {
public:
    int maxDistance(vector<int>&c) {
        int n=c.size();
        int a=0;
        for(int i=n-1;i>=0;i--) {
            if(c[i]!=c[0]) {
                a=max(a,i);
                break;
            }
        }
        for(int i=0;i<n;i++) {
            if(c[i]!=c[n-1]) {
                a=max(a,n-1-i);
                break;
            }
        }
        return a;
    }
};