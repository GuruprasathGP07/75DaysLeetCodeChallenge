class Solution {
public:
    void findcomb(int s,vector<int>temp,vector<vector<int>>&ans,int n,int k){
        if(temp.size()==k){
            ans.push_back(temp);
        }

        for(int i=s;i<=n;i++){
            temp.push_back(i);
            findcomb(i+1,temp,ans,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        findcomb(1,temp,ans,n,k);
        return ans;
        
    }
};