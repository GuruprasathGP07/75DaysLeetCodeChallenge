class Solution {
public:
    vector<int>arr;
    Solution(vector<int>& nums) {
        arr=nums;
    }
    
    int pick(int t){
        vector<int>ind;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==t) ind.push_back(i);
        }
        int rind=rand()%ind.size();
        return ind[rind];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */