class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>>ans;
        for(auto p:freq){
                ans.push({p.second,p.first});
        }
        vector<int>a;
        while(k!=0){
            a.push_back(ans.top().second);
            ans.pop();
            k--;
        }
        return a;
    }
};