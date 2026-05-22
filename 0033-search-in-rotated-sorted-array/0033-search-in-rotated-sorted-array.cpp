class Solution {
public:
    int binarySearch(vector<int>n, int t){
        int l=0;
        int r=n.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(n[m]==t){
                return m;
            }
            else if(n[m]<t){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(nums.begin(),nums.end());
        int s=binarySearch(nums,target);
        if(s==-1) return -1;
        else{
            for(auto p:v){
                if(p.first==target){
                    return p.second;
                }
            }
        }
        /*for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        */
        return -1;
    }
};

