class Solution {
public:
    int maxArea(vector<int>&he){
        int n=he.size();
        int l=0;
        int r=he.size()-1;
        int area=0;
        int marea=INT_MIN;
        while(l<r){
            int h=min(he[l],he[r]);
            int w=r-l;
            area=w*h;
            marea=max(marea,area);
            if(he[l]<=he[r]) l++;
            else r--;
        }
        return marea;
    }
};