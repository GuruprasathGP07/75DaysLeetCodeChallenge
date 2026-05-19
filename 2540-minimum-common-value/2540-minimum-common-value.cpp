class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(freq.find(nums2[i])!=freq.end()) {
                return nums2[i];
            }
        }   
        return -1;
    }
};