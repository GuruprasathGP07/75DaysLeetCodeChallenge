class Solution {
public:
    int maxArea(vector<int>&height){
        //two pointers
        int n=height.size();
        int l=0;
        int r=height.size()-1;
        int area=0;
        int marea=INT_MIN;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            area=w*h;
            marea=max(marea,area);
            if(height[l]<=height[r]) l++;
            else r--;
        }
        return marea;
    }
};