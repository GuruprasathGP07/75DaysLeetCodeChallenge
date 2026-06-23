class Solution {
public:
    int findMin(vector<int>& arr){
        int l=0,r=arr.size()-1;
        int ans=INT_MAX;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[l]==arr[m] && arr[m]==arr[r]){
                ans=min(ans,arr[l]);
                l++;
                r--;
            }
            else if(arr[l]<=arr[m]){
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