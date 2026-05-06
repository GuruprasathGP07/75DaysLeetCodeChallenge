class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int mdiff=INT_MAX;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(s==t) return t;
                else if(s>t) r--;
                else l++;
                int diff=abs(s-t);
                if(diff<mdiff){
                    ans=s;
                    mdiff=diff;
                }
            }
        }
        return ans;
    }
};