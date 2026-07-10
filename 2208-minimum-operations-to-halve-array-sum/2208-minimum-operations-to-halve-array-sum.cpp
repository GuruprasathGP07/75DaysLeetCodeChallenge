class Solution {
public:
    double sumpq(priority_queue<double>pq){
        double s=0;
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
    }
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        for(int i:nums){
            pq.push((double)i);
        }
        double s=sumpq(pq);
        int k=0;
        double smake=s;
        while(smake>(s/2)){
            double a=pq.top();
            pq.pop();
            double temp=a/2;
            pq.push(temp);
            smake-=temp;
            k++;
        }
        return k;
    }
};