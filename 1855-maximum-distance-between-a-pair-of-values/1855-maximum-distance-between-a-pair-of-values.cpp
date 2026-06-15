class Solution {
public:
    int maxDistance(vector<int>& n1, vector<int>& n2){
        /*int ans=0;
        for(int i=0;i<n1.size();i++){
            for(int j=i;j<n2.size();j++){
                if(n1[i]<=n2[j]){
                    ans=max(j-i,ans);
                }
            }
        }
        return ans;*/
        int ans=0;
        int i=0,j=0;
        while(i<n1.size() && j<n2.size()){
            if(n1[i]>n2[j]) i++;
            else{
                int d=j-i;
                ans=max(ans,d);
                j++;
            }
        }
        return ans;
    }
};