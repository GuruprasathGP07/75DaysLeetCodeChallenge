class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long int>,greater<long long int>> pq;
        for(int i:nums){
            pq.push(i);
        }
        int c=0;
        while(pq.top()<k){
            long long int a=pq.top();
            pq.pop();
            long long int b=pq.top();
            pq.pop();
            long long int r=min(a,b)*2+max(a,b);
            pq.push(r);
            c++;
        }
        return c;
        
    }
};