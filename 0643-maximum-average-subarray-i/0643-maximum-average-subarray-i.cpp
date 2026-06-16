class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window
        /*int l=0,r=0;
        int ans=INT_MIN,sum=0;
        while(r<nums.size()){
            sum+=nums[r];
            if(r-l+1==k){
                ans=max(ans,sum);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return (double)ans/k;*/
        int s=0;
        for(int i=0;i<k;i++) s+=nums[i];
        int msum=s;
        for(int i=k;i<nums.size();i++){
            s+=nums[i]-nums[i-k];
            msum=max(msum,s);
        }
        return msum/(double)k;
    }
};