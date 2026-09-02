class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0,e=0;
        for(int n:nums1){
            if(n%2==0) e++;
            else o++;
        }
        if(o==e) return true;
        return true;
        
    }
};