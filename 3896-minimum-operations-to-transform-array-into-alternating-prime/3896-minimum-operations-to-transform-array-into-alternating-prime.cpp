class Solution {
public:
    bool primenum(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    long long int nextprime(int n){
        long long int num=n+1;
        while(!primenum(num)){
            num+=1;
        }
        return num;
    }
    int nextnum(int n){
        int s=n+1;
        while(primenum(s)){
            s++;
        }
        return s;
    }
    long long int minOperations(vector<int>& nums){
        long long c=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0 && !primenum(nums[i])){
                long long int r=nextprime(nums[i]);
                ans+=r-nums[i];
            }
            else if(i%2==1 && primenum(nums[i])){
                long long int f=nextnum(nums[i]);
                ans+=f-nums[i];
            }
        }
        return ans;
    }
};