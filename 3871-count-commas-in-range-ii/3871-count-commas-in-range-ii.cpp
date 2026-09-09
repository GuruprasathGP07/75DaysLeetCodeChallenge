class Solution {
public:
    int countdig(long long n){
        int c=0;
        while(n>0){
            n/=10;
            c++;
        }
        return c;
    }
    long long countCommas(long long n) {
        int c=countdig(n);
        long long ans=0;
        if(c>=16)ans+=(n-1000000000000000)+1;
        if(c>=13) ans+=(n-1000000000000)+1;
        if(c>=10)ans+=(n-1000000000)+1;
        if(c>=7) ans+=(n-1000000)+1;
        if(c>=4)ans+=(n-1000)+1;

        return ans; 

    }
};