class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //prefix sum 

        int s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        int avg=s;
        for(int i=k;i<nums.size();i++){
            s+=nums[i]-nums[i-k];
            avg=max(avg,s);
        }
        return (double)avg/k;
        
    }
};