class Solution {
public:
    void findcomb(int i,vector<int>&temp,vector<vector<int>>&ans,int k,int n){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        
        if(i>n) return;
        //'pick
        temp.push_back(i);
        findcomb(i+1,temp,ans,k,n);
        temp.pop_back();

        // not pick 
        findcomb(i+1,temp,ans,k,n);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        findcomb(1,temp,ans,k,n);
        return ans;
    }
};