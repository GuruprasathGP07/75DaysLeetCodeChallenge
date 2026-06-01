class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        
            int s=0;
        if(cost.size()==2)return accumulate(cost.begin(),cost.end(),0);
        
        else{
            for(int i=cost.size()-1;i>=0;i-=3){
                s+=cost[i];
                if(i-1>=0){
                    s+=cost[i-1];
                }
            }
        }
        return s;
    }
};