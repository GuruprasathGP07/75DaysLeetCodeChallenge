class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int l=0,r=0;
        int sum=0;
        int avg=0,ans=0;
        while(r<arr.size()){
            sum+=arr[r];
            if(r-l+1==k){
                avg=sum/k;
                if(avg>=th) ans++;
                sum-=arr[l];
                l++;
            }
            r++;

        }
        return ans;
    }
};