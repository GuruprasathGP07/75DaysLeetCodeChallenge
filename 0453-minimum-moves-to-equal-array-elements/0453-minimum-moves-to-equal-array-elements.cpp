class Solution {
public:
    // bool checkit(vector<int>a){
    //     set<int>s(a.begin(),a.end());
    //     return s.size()==1;
    // }
    int minMoves(vector<int>& nums) {
        int ans=0;
        int mini=*min_element(nums.begin(),nums.end());
        int s=accumulate(nums.begin(),nums.end(),0);
        return s-(mini*nums.size());
        
    }
};