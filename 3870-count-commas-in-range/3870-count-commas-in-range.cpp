class Solution {
public:
    int cdig(int n){
        int c=0;
        while(n>0){
            n/=10;
            c++;
        }
        return c;
    }
    int countCommas(int n) {
        int count= cdig(n);
        if(count<=3) return 0;
        return (n-1000)+1;
    }
};