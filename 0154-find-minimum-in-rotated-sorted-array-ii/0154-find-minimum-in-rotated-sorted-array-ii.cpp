class Solution {
public:
    int findMin(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int i=0;
        vector<int>arr;
        for(int i:s){
            arr.push_back(i);
        }
        int l=0,r=arr.size()-1;
        int ans=INT_MAX;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[l]==arr[m]){
                ans=min(ans,arr[l]);
                l=m+1;
            }
            else if(arr[l]<arr[m]){
                ans=min(ans,arr[l]);
                l=m+1;
            } 
            else{
                ans=min(ans,arr[m]);
                r=m-1;
            }
        }
        return ans;
    }
};