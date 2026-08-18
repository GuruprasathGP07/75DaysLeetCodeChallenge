class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size()){
            int ans=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>ans)ans=nums[i];
            }
            return ans;
        }
        if(k==1){
            int ans=-1;
            for(int i=0;i<nums.size();i++){
                int c=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j]) c++;
                }
                if(c==1 && nums[i]>ans)ans=nums[i];
            }
            return ans;
        }
        int p1=nums[0];
        int p2=nums[nums.size()-1];
        bool pos1=true,pos2=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==p1) pos1=false;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==p2) pos2=false;
        }
        if(pos1==true && pos2==true && p1>p2) return p1;
        else if(pos2==true && pos1==true && p2>p1) return p2;
        else if(pos1==true) return p1;
        else if(pos2==true) return p2;
        return -1;
    }
};