class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>check;
        for(int pa:nums){
            check[pa]++;
        }
        for(auto &s:check){
            if(s.second>1) return true;
        }
        return false;
    }
};