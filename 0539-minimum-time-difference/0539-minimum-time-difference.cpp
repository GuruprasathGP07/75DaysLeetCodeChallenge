class Solution {
public:
    int findMinDifference(vector<string>& time) {
        if(time.size()>1440) return 0;
        vector<int>mins;
        for(int i=0;i<time.size();i++){
            int h=stoi(time[i].substr(0,2));
            int m=stoi(time[i].substr(3));
            mins.push_back(h*60+m);
        }
        int ans=INT_MAX;
        sort(mins.begin(),mins.end());
        for(int i=0;i<mins.size()-1;i++){
            ans=min(ans,abs(mins[i]-mins[i+1]));
        }
        ans=min(ans,mins[0]+1440 - mins[mins.size()-1]);
        return ans;
        
    }
};