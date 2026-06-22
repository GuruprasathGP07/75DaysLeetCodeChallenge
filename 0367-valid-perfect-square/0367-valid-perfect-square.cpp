class Solution {
public:
    bool isPerfectSquare(int num) {
        /*for(long int i=1;i*i<=num;i++){
            if(i*i==num) return true;
        }
        return false;*/


        //Binary Search 
        long long int l=1,r=num;
        while(l*l<=num){
            long long int mid=(l+r)/2;
            if(mid*mid==num) return true;
            else if(mid*mid<num) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};