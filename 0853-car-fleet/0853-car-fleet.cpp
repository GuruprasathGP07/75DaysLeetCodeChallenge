class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cf;
        for(int i=0;i<position.size();i++){
            double to_cat=(double)(target-position[i])/speed[i];
            cf.push_back({position[i],to_cat});
        }
        sort(cf.rbegin(),cf.rend());
        double mt=0;
        int ans=0;
        for(auto &p:cf){
            if(p.second>mt){
                ans++;
                mt=p.second;
            }
        }
        return ans;
        
    }
};