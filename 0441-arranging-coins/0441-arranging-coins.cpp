class Solution {
public:
    int arrangeCoins(int n) {
        /*int ans=0;
        int s=1;
        while(n>=s){
            n-=s;
            s++;

        }
        return s-1;
        */
        int l=1,r=n;
        int ans=0;
        while(l<=r){
            long int mid=l+(r-l)/2;
            long int coins=(mid*(mid+1))/2;
            if(coins<=n){
                ans=mid;
                l=mid+1;

            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};