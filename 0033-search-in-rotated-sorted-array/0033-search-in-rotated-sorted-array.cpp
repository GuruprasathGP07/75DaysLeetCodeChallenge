class Solution {
public:
    int search(vector<int>&arr, int t) {
        //Binary search 
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==t) return mid;
            else if(arr[l]<=arr[mid]){
                if(t>=arr[l] && t<arr[mid])r=mid-1;
                else l=mid+1;
            }
            else{
                if(t>arr[mid] && t<=arr[r]){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        return -1;
    }
};