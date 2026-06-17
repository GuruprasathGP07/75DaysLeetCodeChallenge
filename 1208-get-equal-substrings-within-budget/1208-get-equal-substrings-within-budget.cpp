class Solution {
public:
    int equalSubstring(string s, string t, int mc) {
        int l=0,r=0;
        int ans=0;
        /*
        vector<int>cost;
        for(int i=0;i<s.length();i++){
            cost.push_back(abs(s[i]-t[i]));
        }*/
        int sum=0;
        while(r<s.length()){
            sum+=abs(s[r]-t[r]);
            while(sum>mc){
                sum-=abs(s[l]-t[l]);
                l++;
            }
            ans=max(ans,(r-l+1));
            r++;
        }
        return ans;
        
    }
};