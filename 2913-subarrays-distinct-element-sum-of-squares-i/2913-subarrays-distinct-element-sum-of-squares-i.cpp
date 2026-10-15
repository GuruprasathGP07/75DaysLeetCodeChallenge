class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for (int l=0;l<n;l++) {
            bool seen[101]={false};
            int cnt=0;
            for (int r=l;r<n;r++){
                int x=nums[r];
                if(!seen[x]){
                    seen[x]=true;
                    cnt++;
                }
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};