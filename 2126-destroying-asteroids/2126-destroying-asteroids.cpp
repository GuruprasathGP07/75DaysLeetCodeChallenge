class Solution {
public:
    bool asteroidsDestroyed(int m,vector<int>&a){
        long long c=m;
        sort(a.begin(),a.end());
        for(int i:a){
            if(c<i) return false;
            c+=i;
        }
        return true;
    }
};