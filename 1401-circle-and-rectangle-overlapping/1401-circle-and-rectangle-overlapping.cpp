class Solution {
public:
    bool checkOverlap(int radius, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        int xa=max(x1,min(xcenter,x2));
        int ya=max(y1,min(ycenter,y2));

        return (((xcenter-xa)*(xcenter-xa))+((ycenter-ya)*(ycenter-ya)))<=(radius*radius);
        
    }
};