class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        set<vector<int>>s;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int l=i+1;
            int r=arr.size()-1;
            while(l<r){
                int sum=arr[i]+arr[l]+arr[r];
                if(sum==0){
                    s.insert({arr[i],arr[l],arr[r]});
                    l++;
                    r--;
                }
                else if (sum>0){
                    r--;
                }
                else{
                    l++;
                }
            }
            }
        
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
    
};
