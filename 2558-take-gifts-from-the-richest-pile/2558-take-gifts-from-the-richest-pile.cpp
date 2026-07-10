class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long s=0;
        priority_queue<int>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }

        while(!pq.empty() && k>0){
            int a=pq.top();
            pq.pop();
            pq.push(sqrt(a));
            k--;
        }
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
        
    }
};