class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++) {
            if(words[i]==target) {
                int d1=abs(i-startIndex);
                int d2=n-d1;
                ans=min(ans,min(d1,d2));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};