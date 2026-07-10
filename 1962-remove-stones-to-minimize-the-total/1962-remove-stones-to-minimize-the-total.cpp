class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        while(!pq.empty() && k>0){
            int a=pq.top();
            pq.pop();
            pq.push(ceil((double)a/2));
            k--;

        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
        
    }
};