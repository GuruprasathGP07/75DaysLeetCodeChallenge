class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0,ans=0;
        for(int i=0;i<gain.size();i++){
            s+=gain[i];
            ans=max(ans,s);
        }
        return ans;
        
    }
};