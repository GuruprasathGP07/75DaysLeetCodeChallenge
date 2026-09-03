class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0,e=0;
        int mine=INT_MAX,mino=INT_MAX;
        for(int i:nums1){
            if(i%2==0){
                e++;
                mine=min(mine,i);
            }
            else{
                o++;
                mino=min(mino,i);
            }
        }
        if(e==0 || o==0) return true;
        if(mino<mine) return true;
        return false;
        
    }
};