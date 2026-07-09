class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int ind=0;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            nums[ind++]=b;
            nums[ind++]=a;
        }
        return nums;
        
    }
};