class Solution {
public:
    bool isprimenum(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int revnum(int n){
        long long int rev=0;
        while(n>0){
            int d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        return rev;
    }
    int sumOfPrimesInRange(int n) {
        int r=revnum(n);
        int s=min(n,r);
        int e=max(n,r);
        int ans=0;
        for(int i=s;i<=e;i++){
            if(isprimenum(i))ans+=i;
        }
        return ans;
    }
};