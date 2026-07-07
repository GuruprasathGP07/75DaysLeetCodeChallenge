class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long s=0;
        long long rev=0;
        while(n>0){
            rev=(rev*10)+n%10;
            n/=10;
        }
        while(rev>0){
            if(rev%10!=0) ans=(ans*10)+rev%10;
            s+=rev%10;
            rev/=10;
        }
        return ans*s;
    }
};