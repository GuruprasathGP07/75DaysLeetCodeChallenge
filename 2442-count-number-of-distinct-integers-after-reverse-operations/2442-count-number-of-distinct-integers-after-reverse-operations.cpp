class Solution {
public:
    int num_rev(int n){
        int rev=0;
        while(n>0){
            int d=n%10;
            rev=(rev*10)+d;
            n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i]=num_rev(nums[i]);
        }
        nums.insert(nums.begin(),arr.begin(),arr.end());
        set<int>st(nums.begin(),nums.end());
        return st.size();
    }
};