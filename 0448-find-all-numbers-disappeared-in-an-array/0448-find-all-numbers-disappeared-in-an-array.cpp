class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool>arr(nums.size(),false);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]=true;
        }
        for(int i=1;i<=arr.size();i++){
            if(arr[i]==false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};