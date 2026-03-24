class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area_ans=0;
        int area=0;
        while(i<j){
            int h=min(height[i],height[j]);
            area=h*(j-i);
            area_ans=max(area_ans,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area_ans;
    }
};