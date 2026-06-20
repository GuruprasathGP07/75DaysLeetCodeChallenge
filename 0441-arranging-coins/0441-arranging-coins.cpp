class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int s=1;
        while(n>=s){
            n-=s;
            s++;

        }
        return s-1;
        
    }
};