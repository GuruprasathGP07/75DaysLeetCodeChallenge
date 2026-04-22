class Solution {
public:
    long long maxRunTime(int n, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long t=accumulate(arr.begin(),arr.end(),0LL);
        for (int i=arr.size()-1;i>=0;i--) {
            if(arr[i]<=t/n)break;
            t-=arr[i];
            n--;
        }
        return t/n;
    }
};
