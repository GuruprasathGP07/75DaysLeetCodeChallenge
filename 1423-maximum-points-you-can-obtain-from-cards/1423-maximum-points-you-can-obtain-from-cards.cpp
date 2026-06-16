class Solution {
public:
    int maxScore(vector<int>&cp, int k) {
        int lsum=0,rsum=0,maxsum=0;
        for(int i=0;i<k;i++){
            lsum+=cp[i];
        }
        maxsum=max(maxsum,lsum+rsum);
        int s=cp.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cp[i];
            rsum+=cp[s];
            maxsum=max(maxsum,lsum+rsum);
            s--;
        }    
        return maxsum;
    }
};