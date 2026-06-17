class Solution {
public:
    int equalSubstring(string s, string t, int mc) {
        int l=0,r=0;
        int ans=0;
        vector<int>cost;
        for(int i=0;i<s.length();i++){
            cost.push_back(abs(s[i]-t[i]));
        }
        int sum=0;
        while(r<cost.size()){
            sum+=cost[r];
            while(sum>mc){
                sum-=cost[l];
                l++;
            }
            ans=max(ans,(r-l+1));
            r++;
        }
        return ans;
        
    }
};